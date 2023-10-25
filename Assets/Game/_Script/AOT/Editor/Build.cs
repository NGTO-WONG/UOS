using System;
using System.IO;
using System.Linq;
using System.Threading;
using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using UnityEditor;
using UnityEngine;
using UosCdn;
using YooAsset.Editor;
            
public class Builder : MonoBehaviour
{
    private static readonly string HotfixAssembliesDstDir = Application.dataPath + "/Game/HotUpdateDll";
    private static string BundlePath =>System.IO.Directory.GetParent( Application.dataPath) + "/Bundles";

    [MenuItem("HybridCLR/Build/BuildIOS", priority = 200)]
    public static void BuildIOS()               
    {
        //1 切换平台
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
        Build();
    }

    [MenuItem("HybridCLR/Build/BuildAndroid", priority = 201)]
    public static void BuildAndroid()
    {
        //1 切换平台
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
        Build();
    }

    [MenuItem("HybridCLR/Build/BuildPC", priority = 202)]
    public static void BuildPC()
    {
        //1 切换平台
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone, BuildTarget.StandaloneWindows64);
        Build();
    }

    private static void Build()
    {
        //2 华佗生成+改名+拷贝dll
        Debug.Log("2 华佗生成dll + 2 改名+拷贝dll");
        BuildAndCopyAndRenameDll();
        //3 yooAsset打包
        Debug.Log("3 yooAsset打包");
        var outputPackageDirectory= YooAssetBuild_ForceRebuild();
        //4 上传到cdn
        Debug.Log("4 上传到cdn");
        UpdateBundleToCDN_UOS();
        // 刷新unity
        //AssetDatabase.Refresh();
    }

    [MenuItem("HybridCLR/Build/1.GenerateAll+BuildActiveDll+CopyDll", priority = 102)]
    public static void BuildAndCopyAndRenameDll()
    {
        PrebuildCommand.GenerateAll();
        //热更新dll
        CompileDllCommand.CompileDllActiveBuildTarget();
        var target = EditorUserBuildSettings.activeBuildTarget;
        string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
        foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
        {
            string sourcePath = $"{hotfixDllSrcDir}/{dll}";
            string dstPath = $"{HotfixAssembliesDstDir}/{dll}.bytes";
            File.Copy(sourcePath, dstPath, true);
            Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
        }

        //补充AOT范型dll
        string aotDllSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target);
        foreach (var dll in AOTGenericReferences.PatchedAOTAssemblyList)
        {
            string sourcePath = $"{aotDllSrcDir}/{dll}";
            string dstPath = $"{HotfixAssembliesDstDir}/{dll}.bytes";
            File.Copy(sourcePath, dstPath, true);
            Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
        }
    }

    /// <summary>
    /// build资源
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Build/3.YooAssetBuild_ForceRebuild", priority = 103)]
    public static string YooAssetBuild_ForceRebuild()
    {
        if (!Directory.Exists(BundlePath))
        {
            Directory.CreateDirectory(BundlePath);
        }
        Directory.Delete(BundlePath,true);
        return YooAssetBuild(EBuildMode.ForceRebuild,"V1.0");
    }

    /// <summary>
    /// 上传到uos的cdn 必须先手动创建buckets 才能load
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Build/4.UpdateBundleToCDN_UOS", priority = 104)]
    public static void UpdateBundleToCDN_UOS()
    {
        BucketController.LoadBuckets();
        EntryController.LoadEntries(0);
        var pb = EntryController.pb;
        pb.selectedBucketUuid = pb.bucketList[0].id;
        EntryController.SyncEntries(BundlePath);
    }

    /// <summary>
    /// build资源
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Update/1.CompileHotUpdateDll And YooAssetBuild_IncrementalBuild And UpdateToCdn", priority = 200)]
    public static void YooAssetBuild_IncrementalBuild()
    {
        //生成热更新dll
        CompileDllCommand.CompileDllActiveBuildTarget();
        var target = EditorUserBuildSettings.activeBuildTarget;
        string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
        foreach (var hotUpdateDll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
        {
            string sourcePath = $"{hotfixDllSrcDir}/{hotUpdateDll}";
            string dstPath = $"{HotfixAssembliesDstDir}/{hotUpdateDll}.bytes";
            File.Copy(sourcePath, dstPath, true);
            Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
        }
        //yooAsset打包
        var packageVersion = DateTime.Now.ToString("V_yyyyMMdd_HH_mm_ss");
        var outputPackageDirectory= YooAssetBuild(EBuildMode.IncrementalBuild,packageVersion);
        if (outputPackageDirectory!="")
        {
            var files = Directory.GetFiles(outputPackageDirectory);
            var targetDirectory = Directory.GetParent(outputPackageDirectory) + "/V1.0";
            foreach (var file in files)
            {
                var fileName = Path.GetFileName(file);
                File.Copy(file,targetDirectory+"/"+fileName,true);
            }

            Debug.Log(files +" to " + targetDirectory);
        }
        
        UpdateBundleToCDN_UOS();
    }

    private static string YooAssetBuild(EBuildMode eBuildMode,string packageVersion)
    {
        // 构建参数
        BuildParameters buildParameters = new BuildParameters
        {
            SBPParameters = null,
            StreamingAssetsRoot = Application.streamingAssetsPath,
            BuildOutputRoot = BundlePath,
            BuildTarget = EditorUserBuildSettings.activeBuildTarget,
            BuildPipeline = EBuildPipeline.BuiltinBuildPipeline,
            BuildMode = eBuildMode,
            PackageName = "DefaultPackage",
            PackageVersion = packageVersion,
            EnableLog = true,
            VerifyBuildingResult = true,
            SharedPackRule = new ZeroRedundancySharedPackRule(),
            EncryptionServices = null,
            OutputNameStyle = EOutputNameStyle.BundleName_HashName,
            CopyBuildinFileOption = ECopyBuildinFileOption.None,
            CopyBuildinFileTags = null,
            CompressOption = ECompressOption.LZ4,
            DisableWriteTypeTree = false,
            IgnoreTypeTreeChanges = false
        };

        // 执行构建
        AssetBundleBuilder builder = new AssetBundleBuilder();
        var buildResult = builder.Run(buildParameters);
        if (buildResult.Success)
        {
            Debug.Log($"构建成功 : {buildResult.OutputPackageDirectory}");
            return buildResult.OutputPackageDirectory;
        }
        else
        {
            Debug.LogError($"构建失败 : {buildResult.ErrorInfo}");
            return "";
        }
    }
}