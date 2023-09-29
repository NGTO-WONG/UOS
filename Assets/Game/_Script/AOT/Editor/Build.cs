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

    [MenuItem("HybridCLR/Build/BuildIOS", priority = 200)]
    public static void BuildIOS()
    {
        //0 切换平台
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS,BuildTarget.iOS);
        
        //1 华佗生成
        GenerateAll();
        
        //2  华佗生成+改名+拷贝dll
        Debug.Log("1 华佗生成dll + 2 改名+拷贝dll");
        BuildAndCopyAndRenameDll();
        
        //3 yooAsset打包
        Debug.Log("3 yooAsset打包");
        YooAssetBuild(EBuildMode.ForceRebuild);
        
        //4 拷贝资源
        
        AssetDatabase.Refresh();
    }


    [MenuItem("HybridCLR/Build/1.GenerateAll", priority = 101)]
    public static void GenerateAll()
    {
        PrebuildCommand.GenerateAll();
    }

    
    [MenuItem("HybridCLR/Build/2.BuildAndCopyAndRenameDll", priority = 102)]
    public static void BuildAndCopyAndRenameDll()
    {
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
    /// 上传到uos的cdn 必须手动设置好路径
    /// </summary>
    /// <returns></returns>
    [MenuItem("HybridCLR/Build/4.UpdateToUos ", priority = 103)]
    public static void SyncToUosCdn()
    {
        ParametersEntry pe = ParametersEntry.GetParametersEntry();
        Thread thread = new Thread(new ParameterizedThreadStart(EntryController.SyncEntries));
        thread.Start(pe.syncPath);
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
        string defaultOutputRoot = AssetBundleBuilderHelper.GetDefaultBuildOutputRoot();
        BuildParameters buildParameters = new BuildParameters();
        buildParameters.BuildOutputRoot = defaultOutputRoot;
        buildParameters.BuildTarget = EditorUserBuildSettings.activeBuildTarget;
        buildParameters.BuildPipeline = EBuildPipeline.BuiltinBuildPipeline;
        buildParameters.BuildMode = eBuildMode;
        buildParameters.PackageName = "DefaultPackage";
        buildParameters.PackageVersion = eBuildMode== EBuildMode.ForceRebuild?"V1.0": DateTime.Now.ToString("V_yyyyMMdd_HHmm");
        buildParameters.VerifyBuildingResult = true;
        buildParameters.SharedPackRule = new ZeroRedundancySharedPackRule();
        buildParameters.CompressOption = ECompressOption.LZ4;
        buildParameters.OutputNameStyle = EOutputNameStyle.HashName;
        buildParameters.CopyBuildinFileOption = ECopyBuildinFileOption.None;
    
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

    // 从构建命令里获取参数示例
    private static string GetBuildPackageName()
    {
        foreach (string arg in System.Environment.GetCommandLineArgs())
        {
            if (arg.StartsWith("buildPackage"))
                return arg.Split("="[0])[1];
        }
        return string.Empty;
    }
    
    
    
}