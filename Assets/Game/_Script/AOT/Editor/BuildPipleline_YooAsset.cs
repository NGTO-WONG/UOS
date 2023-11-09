using System;
using System.IO;
using HybridCLR.Editor;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset.Editor;

namespace Game._Script.AOT.Editor
{
    public static class BuildPipleline_YooAsset
    {
        public static void YooAssetBuild(EBuildMode eBuildMode, BuildTarget buildTarget)
        {
            System.Action completedCallback = () =>
            {
                var collection = AssetDatabase.LoadAssetAtPath<ShaderVariantCollection>("Assets/Game/ShaderVar/MyShaderVariants.shadervariants");
                if (collection != null)
                {
                    Debug.Log($"ShaderCount : {collection.shaderCount}");
                    Debug.Log($"VariantCount : {collection.variantCount}");
                }
                else
                {
                    Debug.Log("构建失败");
                }
                string scenePath = "Assets/Game/Scene/shaders.unity";
                EditorSceneManager.SaveScene(SceneManager.GetActiveScene(), scenePath);
                AssetDatabase.Refresh();
                
                PrepareAndBuild(eBuildMode, buildTarget);

            };
                
            ShaderVariantCollector.Run("Assets/Game/ShaderVar/MyShaderVariants.shadervariants", "DefaultPackage", Int32.MaxValue, completedCallback);
            
            
            
        }


        private static void PrepareAndBuild(EBuildMode eBuildMode, BuildTarget buildTarget)
        {
            CopyDlls(buildTarget);
            BuildAssetBundles(buildTarget, eBuildMode);
        }

        private static void CopyDlls(BuildTarget buildTarget)
        {
            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(buildTarget);
            foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string sourcePath = Path.Combine(hotfixDllSrcDir, dll);
                string dstPath = Path.Combine(BuildConfigAccessor.Instance.HotfixAssembliesDstDir, $"{dll}.bytes");
                File.Copy(sourcePath, dstPath, true);
            }
            
            string aotDllSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(buildTarget);
            foreach (var dll in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                string sourcePath = Path.Combine(aotDllSrcDir, dll);
                string dstPath = Path.Combine(BuildConfigAccessor.Instance.HotfixAssembliesDstDir, $"{dll}.bytes");
                File.Copy(sourcePath, dstPath, true);
            }
        }

        private static void BuildAssetBundles(BuildTarget buildTarget, EBuildMode eBuildMode)
        {
            string packageVersion = $"V{BuildConfigAccessor.Instance.BuildVersion}.{BuildConfigAccessor.Instance.HotUpdateVersion}";
            BuildParameters buildParameters = new BuildParameters
            {
                StreamingAssetsRoot = Application.streamingAssetsPath,
                BuildOutputRoot = BuildConfigAccessor.Instance.BundleFolder,
                BuildTarget = buildTarget,
                BuildPipeline = EBuildPipeline.BuiltinBuildPipeline,
                BuildMode = eBuildMode,
                PackageName = "DefaultPackage",
                PackageVersion = packageVersion,
                EnableLog = true,
                VerifyBuildingResult = true,
                SharedPackRule = new ZeroRedundancySharedPackRule(),
                OutputNameStyle = EOutputNameStyle.BundleName_HashName,
                CompressOption = ECompressOption.LZ4
            };

            AssetBundleBuilder builder = new AssetBundleBuilder();
            var buildResult = builder.Run(buildParameters);

            if (!buildResult.Success)
            {                
                Debug.LogError($"打包失败: {buildResult.ErrorInfo}");
                return;

            }
            
            if (eBuildMode == EBuildMode.IncrementalBuild)//热更的话多一步拷贝的操作 
            {
                var files = Directory.GetFiles(buildResult.OutputPackageDirectory);
                var targetDirectory = Path.Combine(Directory.GetParent(buildResult.OutputPackageDirectory).FullName,
                    $"V{BuildConfigAccessor.Instance.BuildVersion}.0");
                foreach (var file in files)
                {
                    var fileName = Path.GetFileName(file);
                    var dst = Path.Combine(targetDirectory, fileName);
                    Debug.Log($"Copying file: {file} -> {dst}");
                    File.Copy(file, dst, true);
                }
                Debug.Log($"Copied {files.Length} files to {targetDirectory}");
            }
                    
            EditorTools.CloseUnityGameWindow();
            EditorApplication.Exit(0);
        }
    }
}