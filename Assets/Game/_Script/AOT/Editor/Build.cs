using System;
using System.IO;
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
    private static readonly string BundlePath = Application.dataPath + "/Bundle";

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
        YooAssetBuild(EBuildMode.ForceRebuild);
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
    public static void YooAssetBuild_ForceRebuild()
    {
        YooAssetBuild(EBuildMode.ForceRebuild);
    }

    /// <summary>
    /// 上传到uos的cdn 必须先手动创建buckets 才能load
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Build/4.UpdateBundleToCDN_UOS", priority = 104)]
    public static void UpdateBundleToCDN_UOS()
    {
        BucketController.LoadBuckets();
        EntryController.SyncEntries(BundlePath);
    }

    /// <summary>
    /// build资源
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Update/1.YooAssetBuild_IncrementalBuild", priority = 200)]
    public static void YooAssetBuild_IncrementalBuild()
    {
        YooAssetBuild(EBuildMode.IncrementalBuild);
    }


    private static void YooAssetBuild(EBuildMode eBuildMode)
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
            PackageVersion = eBuildMode == EBuildMode.ForceRebuild ? "V1.0" : DateTime.Now.ToString("V_yyyyMMdd_HHmm"),
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
        }
        else
        {
            Debug.LogError($"构建失败 : {buildResult.ErrorInfo}");
        }
    }
}