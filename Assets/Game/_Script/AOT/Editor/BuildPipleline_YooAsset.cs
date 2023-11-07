using System;
using System.IO;
using HybridCLR.Editor;
using UnityEditor;
using UnityEngine;
using YooAsset.Editor;

namespace Game._Script.AOT.Editor
{
    public static class BuildPipleline_YooAsset
    {
        public static string YooAssetBuild(EBuildMode eBuildMode, BuildTarget buildTarget)
        {
            if (eBuildMode == EBuildMode.ForceRebuild)
            {
                BuildConfigAccessor.Instance.HotUpdateVersion = 0;//打包热更版本号清0
            }
            else
            {
                BuildConfigAccessor.Instance.HotUpdateVersion +=1 ;//热更版本号自增
            }
            EditorUtility.SetDirty(BuildConfigAccessor.Instance);
            AssetDatabase.SaveAssets();
            
            string packageVersion = "V" + BuildConfigAccessor.Instance.BuildVersion + "." +
                                    BuildConfigAccessor.Instance.HotUpdateVersion;
            
            //拷贝dll
            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(buildTarget);
            foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string sourcePath = Path.Combine($"{hotfixDllSrcDir}", $"{dll}");
                string dstPath = Path.Combine($"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}", $"{dll}.bytes");
                File.Copy(sourcePath, dstPath, true);
            }
            
            string aotDllSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(buildTarget);
            foreach (var dll in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                string sourcePath = Path.Combine($"{aotDllSrcDir}", $"{dll}");
                string dstPath = Path.Combine($"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}", $"{dll}.bytes");
                File.Copy(sourcePath, dstPath, true);
            }

            //收集shader变体
            CollectSvc();
            
            
            // 构建参数
            BuildParameters buildParameters = new BuildParameters
            {
                SBPParameters = null,
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
                Debug.Log("打包log：" + $"构建成功 : {buildResult.OutputPackageDirectory}");
                return buildResult.OutputPackageDirectory;
            }
            else
            {
                Debug.LogError($"构建失败 : {buildResult.ErrorInfo}");
                return "";
            }
        }

        private static void CollectSvc()
        {
            string savePath = "Assets/Game/ShaderVar/MyShaderVariants.shadervariants";

            ShaderVariantCollector.Run(savePath,"DefaultPackage",Int32.MaxValue, CompletedCallback);
            return;

            void CompletedCallback()
            {
                ShaderVariantCollection collection = AssetDatabase.LoadAssetAtPath<ShaderVariantCollection>(savePath);
                if (collection != null)
                {
                    Debug.Log($"ShaderCount : {collection.shaderCount}");
                    Debug.Log($"VariantCount : {collection.variantCount}");
                }
                else
                {
                    throw new Exception("Failed to Collect shader Variants.");
                }

                EditorTools.CloseUnityGameWindow();
                EditorApplication.Exit(0);
            }
        }

    }
}