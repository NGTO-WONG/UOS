using System;
using System.IO;
using Cysharp.Threading.Tasks;
using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using UnityEditor;
using UnityEngine;
using YooAsset.Editor;

namespace Game._Script.AOT.Editor
{
    public static class BuildPipeline_Update
    {
        static void GetAndSaveEnvironmentVariable_Update()
        {
            // 修改ScriptableObject的属性
            BuildConfigAccessor.Instance.BundleFolder = Environment.GetEnvironmentVariable("BundleFolder");
            BuildConfigAccessor.Instance.HostServerIP = Environment.GetEnvironmentVariable("CDN");
            // 保存更改
            EditorUtility.SetDirty(BuildConfigAccessor.Instance); // 标记为脏以保存
            AssetDatabase.SaveAssets();
        }

        public static void UpdateAndroid()
        {
            GetAndSaveEnvironmentVariable_Update();
            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
             IncrementalBuild(BuildTarget.Android);
        }

        public static void UpdateiOS()
        {
            GetAndSaveEnvironmentVariable_Update();
            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
             IncrementalBuild(BuildTarget.iOS);
        }


        public static async UniTask IncrementalBuild(BuildTarget target)
        {
            //生成热更新dll
            switch (target)
            {
                case BuildTarget.iOS:
                    CompileDllCommand.CompileDllIOS();
                    break;
                case BuildTarget.Android:
                    CompileDllCommand.CompileDllAndroid();
                    break;
            }

            //拷贝dll
            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);

            foreach (var hotUpdateDll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string sourcePath = Path.Combine($"{Directory.GetParent(Application.dataPath)}", $"{hotfixDllSrcDir}",
                    $"{hotUpdateDll}");
                string dstPath = Path.Combine($"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}",
                    $"{hotUpdateDll}.bytes");

                File.Copy(sourcePath, dstPath, true);
            }

            //yooAsset打包
            BuildPipleline_YooAsset.YooAssetBuild(EBuildMode.IncrementalBuild, target);
            
        }
    }
}