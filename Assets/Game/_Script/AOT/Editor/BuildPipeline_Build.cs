using System;
using System.IO;
using System.Linq;
using Cysharp.Threading.Tasks;
using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using UnityEditor;
using UnityEngine;
using YooAsset.Editor;

namespace Game._Script.AOT.Editor
{
    public static class BuildPipeline_Build
    {
        static void SaveEnvironmentVariable_Build()
        {
            BuildConfigAccessor.Instance.BuildName = Environment.GetEnvironmentVariable("BuildName");
            BuildConfigAccessor.Instance.LocalTestIP = Environment.GetEnvironmentVariable("LocalTestIP");
            BuildConfigAccessor.Instance.BuildVersion = Convert.ToInt32(Environment.GetEnvironmentVariable("Version"));
            BuildConfigAccessor.Instance.BuildFolder = Environment.GetEnvironmentVariable("BuildFolder");
            BuildConfigAccessor.Instance.BundleFolder = Environment.GetEnvironmentVariable("BundleFolder");
            BuildConfigAccessor.Instance.HotUpdateVersion = 0;
            BuildConfigAccessor.Instance.IsDevelopmentBuild = Environment.GetEnvironmentVariable("IsDevelopmentBuild");
            EditorUtility.SetDirty(BuildConfigAccessor.Instance);
            AssetDatabase.SaveAssets();
        }

        public static void BuildiOS()
        {
            SaveEnvironmentVariable_Build();
            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);
            Build(BuildTarget.iOS);
        }

        public static void BuildAndroid()
        {
            SaveEnvironmentVariable_Build();
            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
            PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
            Build(BuildTarget.Android);
        }

        [MenuItem("HybridCLR/MyFunc/本地打包", priority = 100)]
        public static void LocalBuild()
        {
            Build(EditorUserBuildSettings.activeBuildTarget);
        }

        [MenuItem("HybridCLR/MyFunc/test", priority = 101)]
        public static void test()
        {
            Compile(BuildTarget.iOS);    
        }

        static void Build(BuildTarget buildTarget)
        {
            Compile(buildTarget);           
            
            string buildName = BuildConfigAccessor.Instance.BuildName;
            BuildTargetGroup targetGroup = BuildTargetGroup.Android;
            switch (buildTarget)
            {
                case BuildTarget.iOS:
                    targetGroup = BuildTargetGroup.iOS;
                    break;
                case BuildTarget.Android:
                    targetGroup = BuildTargetGroup.Android;
                    EditorUserBuildSettings.exportAsGoogleAndroidProject = false;
                    buildName += ".apk";
                    break;
            }


            string buildDirectory = Path.Combine(BuildConfigAccessor.Instance.BuildFolder, $"{buildTarget}",
                $"V{BuildConfigAccessor.Instance.BuildVersion}.{BuildConfigAccessor.Instance.HotUpdateVersion}");
            if (!Directory.Exists(buildDirectory))
            {
                Directory.CreateDirectory(buildDirectory);
            }
            string buildPath = Path.Combine(buildDirectory, buildName);
            string[] scenes = EditorBuildSettings.scenes
                .Where(scene => scene.enabled)
                .Select(scene => scene.path)
                .ToArray();

            BuildOptions buildOptions = BuildOptions.None;
            
            if (BuildConfigAccessor.Instance.IsDevelopmentBuild.Equals("1"))
            {
                buildOptions = BuildOptions.CleanBuildCache | BuildOptions.Development |
                               BuildOptions.ConnectWithProfiler;
            }
            else
            {
                buildOptions = BuildOptions.CleanBuildCache;
            }
            
            BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions
            {
                scenes = scenes,
                locationPathName = buildPath,
                targetGroup = targetGroup,
                target = buildTarget,
                options = buildOptions
            };
            
            BuildPipeline.BuildPlayer(buildPlayerOptions);
            
            BuildPipleline_YooAsset.YooAssetBuild(EBuildMode.ForceRebuild, buildTarget);
        }

        /// <summary>
        /// 走一遍华佗的生成 然后生成所有的link.xml
        /// </summary>
        /// <param name="buildTarget"></param>
        public static void Compile(BuildTarget buildTarget)
        {
            
            PrebuildCommand.GenerateAll();
            return;
            CompileDllCommand.CompileDll(buildTarget,BuildConfigAccessor.Instance.IsDevelopmentBuild.Equals("1"));
            Il2CppDefGeneratorCommand.GenerateIl2CppDef();
            // 这几个生成依赖HotUpdateDlls
            var xmlPath = Path.Combine(Application.dataPath, "HybridCLRGenerate", "link.xml");
            BuildLinkFile.GenerateLinkfile(xmlPath);
            AssetDatabase.Refresh();
            // 生成裁剪后的aot dll
            StripAOTDllCommand.GenerateStripedAOTDlls(buildTarget);
            // 桥接函数生成依赖于AOT dll，必须保证已经build过，生成AOT dll
            MethodBridgeGeneratorCommand.GenerateMethodBridge(buildTarget);
            ReversePInvokeWrapperGeneratorCommand.GenerateReversePInvokeWrapper(buildTarget);
            AOTReferenceGeneratorCommand.GenerateAOTGenericReference(buildTarget);

        }
        
    }
}