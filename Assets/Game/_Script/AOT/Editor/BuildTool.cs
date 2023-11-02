using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using Script_AOT;
using UnityEditor;
using UnityEngine;
using UosCdn;
using YooAsset.Editor;

namespace Game._Script.AOT.Editor
{
    public static class BuildTool
    {

        // [MenuItem("HybridCLR/Build/BuildIOS", priority = 310)]
        // public static void BuildIOS()
        // {
        //     EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
        //     Build(BuildTarget.iOS);
        // }
        //
        // [MenuItem("HybridCLR/Build/BuildAndroid", priority = 311)]
        // public static void BuildAndroid()
        // {
        //     EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
        //     Build(BuildTarget.Android);
        // }
        //
        // [MenuItem("HybridCLR/Build/BuildPC", priority = 312)]
        // public static void BuildPC()
        // {
        //     EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone,
        //         BuildTarget.StandaloneWindows64);
        //     Build(BuildTarget.StandaloneWindows64);
        // }

        public static void Build(string buildTargetStr,string Cdn)
        {
            BuildTarget buildTarget = (BuildTarget)Enum.Parse(typeof(BuildTarget), buildTargetStr);
            BuildConfigAccessor.Instance.HostServerIP = Cdn;
            //华佗生成+改名+拷贝dll
            Debug.Log("2 华佗生成dll + 2 改名+拷贝dll");
            BuildAndCopyAndRenameDll();
            //yooAsset打包
            Debug.Log("3 yooAsset打包");
            var outputPackageDirectory = YooAssetBuild_ForceRebuild();
            //上传到cdn 
            
            Debug.Log("上传到cdn");
            UpdateBundleToCDN_UOS();

            // 获取Assets文件夹的父目录，即项目的根目录
            string projectRoot = Directory.GetParent(Application.dataPath).FullName;

            // 设置保存路径为项目根目录的Builds子目录下  ios无法打ipa包 没开发者账号
            string buildDirectory = Path.Combine(projectRoot, "Builds/");
            string buildPath = "";
            switch (buildTarget)
            {
                case BuildTarget.Android:
                    buildPath = Path.Combine(buildDirectory, "Game.apk");
                    break;
                default:
                    buildPath = Path.Combine(buildDirectory, buildTarget.ToString());
                    break;
            }

            // 确保输出目录存在
            if (!Directory.Exists(buildDirectory))
            {
                Directory.CreateDirectory(buildDirectory);
            }

            string[] scenes = EditorBuildSettings.scenes
                .Where(scene => scene.enabled)
                .Select(scene => scene.path)
                .ToArray();

            BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions
            {
                scenes = scenes,
                locationPathName = buildPath,
                target = buildTarget,
                options = BuildOptions.None
            };
            EditorUserBuildSettings.buildAppBundle = true;
            EditorUserBuildSettings.exportAsGoogleAndroidProject = false;

            // 执行打包操作
            BuildPipeline.BuildPlayer(buildPlayerOptions);

            Debug.Log("Build finished!");
        }

        [MenuItem("HybridCLR/Build/1.GenerateAll+BuildActiveDll+CopyDll", priority = 301)]
        public static void BuildAndCopyAndRenameDll()
        {
            PrebuildCommand.GenerateAll();
            //生成linkFile
            var xmlPath = Application.dataPath + "/HybridCLRData/Generated/link.xml";
            BuildLinkFile.GenerateLinkfile(xmlPath);
            //热更新dll
            CompileDllCommand.CompileDllActiveBuildTarget();
            var target = EditorUserBuildSettings.activeBuildTarget;
            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
            foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string sourcePath = $"{hotfixDllSrcDir}/{dll}";
                string dstPath = $"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}/{dll}.bytes";
                File.Copy(sourcePath, dstPath, true);
                Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
            }

            //补充AOT范型dll
            string aotDllSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target);
            foreach (var dll in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                string sourcePath = $"{aotDllSrcDir}/{dll}";
                string dstPath = $"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}/{dll}.bytes";
                File.Copy(sourcePath, dstPath, true);
                Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
            }
            
        }

        /// <summary>
        /// build资源
        /// </summary>
        /// <returns></returns>
        [MenuItem("HybridCLR/Build/YooAsset打全量包", priority = 302)]
        public static string YooAssetBuild_ForceRebuild()
        {
            if (!Directory.Exists(BuildConfigAccessor.Instance.BundlePath))
            {
                Directory.CreateDirectory(BuildConfigAccessor.Instance.BundlePath);
            }

            Directory.Delete(BuildConfigAccessor.Instance.BundlePath, true);
            return YooAssetBuild(EBuildMode.ForceRebuild, BuildConfigAccessor.Instance.BuildVersion);
        }

        /// <summary>
        /// 上传到uos的cdn 必须先手动创建buckets 才能load
        /// </summary>
        /// <returns></returns>
        [MenuItem("HybridCLR/Build/4.UpdateBundleToCDN_UOS", priority = 104)]
        public static void UpdateBundleToCDN_UOS()
        {
            if (BuildConfigAccessor.Instance.HostServerIP.Contains("buckets"))
            {
                
                Debug.Log("上传到cdn");
                BucketController.LoadBuckets();
                EntryController.LoadEntries(0);
                var pb = EntryController.pb;
                pb.selectedBucketUuid = pb.bucketList[0].id;
                EntryController.SyncEntries(BuildConfigAccessor.Instance.BundlePath);
            }
            else
            {                Debug.LogWarning("未填写cdn地址 ");
            }
            
        }

        /// <summary>
        /// build资源
        /// </summary>
        /// <returns></returns>
        [MenuItem("HybridCLR/Build/1.编译当前平台的热更新程序集dll+yooAsset打增量包",
            priority = 403)]
        public static void YooAssetBuild_IncrementalBuild()
        {
            //生成热更新dll
            CompileDllCommand.CompileDllActiveBuildTarget();

            //拷贝dll
            var target = EditorUserBuildSettings.activeBuildTarget;
            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
            foreach (var hotUpdateDll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string sourcePath = $"{hotfixDllSrcDir}/{hotUpdateDll}";
                string dstPath = $"{BuildConfigAccessor.Instance.HotfixAssembliesDstDir}/{hotUpdateDll}.bytes";
                File.Copy(sourcePath, dstPath, true);
                Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {sourcePath} -> {dstPath}");
            }

            //yooAsset打包
            var hotUpdateVersion = BuildConfigAccessor.Instance.HotUpdateVersion;
            var outputPackageDirectory = YooAssetBuild(EBuildMode.IncrementalBuild, hotUpdateVersion);
            if (outputPackageDirectory != "")
            {
                var files = Directory.GetFiles(outputPackageDirectory);
                var targetDirectory = Directory.GetParent(outputPackageDirectory) + "/" + BuildConfigAccessor.Instance.BuildVersion;
                foreach (var file in files)
                {
                    var fileName = Path.GetFileName(file);
                    File.Copy(file, targetDirectory + "/" + fileName, true);
                }

                Debug.Log(files + " to " + targetDirectory);
            }

            UpdateBundleToCDN_UOS();
        }

        private static string YooAssetBuild(EBuildMode eBuildMode, string packageVersion)
        {
            // 构建参数
            BuildParameters buildParameters = new BuildParameters
            {
                SBPParameters = null,
                StreamingAssetsRoot = Application.streamingAssetsPath,
                BuildOutputRoot = BuildConfigAccessor.Instance.BundlePath,
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


    public static class BuildLinkFile
    {
        private static string _il2cppManagedPath = string.Empty;

        private static string il2cppManagedPath
        {
            get
            {
                if (string.IsNullOrEmpty(_il2cppManagedPath))
                {
                    var contentsPath = EditorApplication.applicationContentsPath;
                    var extendPath = "";

                    var buildTarget = EditorUserBuildSettings.activeBuildTarget;
#if UNITY_EDITOR_WIN || UNITY_EDITOR_LINUX
                    switch (buildTarget)
                    {
                        case BuildTarget.StandaloneWindows64:
                        case BuildTarget.StandaloneWindows:
                            extendPath = "PlaybackEngines/windowsstandalonesupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.iOS:
                            extendPath = "PlaybackEngines/iOSSupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.Android:
                            extendPath = "PlaybackEngines/AndroidPlayer/Variations/il2cpp/Managed/";
                            break;
                        default:
                            throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                    }
#elif UNITY_EDITOR_OSX
                    switch (buildTarget)
                    {
                        case BuildTarget.StandaloneOSX:
                            extendPath = "PlaybackEngines/MacStandaloneSupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.iOS:
                            extendPath = "../../PlaybackEngines/iOSSupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.Android:
                            extendPath = "../../PlaybackEngines/AndroidPlayer/Variations/il2cpp/Managed/";
                            break;
                        default:
                            throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                    }
#endif
                    if (string.IsNullOrEmpty(extendPath))
                    {
                        throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                    }

                    _il2cppManagedPath = Path.Combine(contentsPath, extendPath).Replace('\\', '/');
                }

                return _il2cppManagedPath;
            }
        }

        private static List<string> IgnoreClass = new()
        {
            "editor", "netstandard", "Bee.", "dnlib", ".framework", "Test", "plastic", "Gradle", "log4net", "Analytics",
            "System.Drawing",
            "NVIDIA", "VisualScripting", "UIElements", "IMGUIModule", ".Cecil", "GIModule", "GridModule",
            "HotReloadModule",
            "StreamingModule",
            "TLSModule", "XRModule", "WindModule", "VRModule", "VirtualTexturingModule", "compiler", "BuildProgram",
            "NiceIO", "ClothModule",
            "VFXModule", "ExCSS", "GeneratedCode", "mscorlib", "System", "SyncToolsDef"
        };

        private static bool IsIngoreClass(string classFullName)
        {
            var tmpName = classFullName.ToLower();
            foreach (var ic in IgnoreClass)
            {
                if (tmpName.Contains(ic.ToLower()))
                {
                    return true;
                }
            }

            return false;
        }

        private static List<string> IgnoreType = new()
        {
            "jetbrain", "editor", "PrivateImplementationDetails", "experimental", "microsoft.", "compiler"
        };

        private static bool IsIgnoreType(string typeFullName)
        {
            var tmpName = typeFullName.ToLower();
            foreach (var ic in IgnoreType)
            {
                if (tmpName.Contains(ic.ToLower()))
                {
                    return true;
                }
            }

            return false;
        }

        public static void GenerateLinkfile(string outPath)
        {
            var basePath = il2cppManagedPath;
            if (!Directory.Exists(basePath))
            {
                Debug.LogWarning($"[BuildPipeline::GenerateLinkfile] can't find il2cpp's dlls [{basePath}]");
                basePath = basePath.Replace("/il2cpp/", "/mono/");
            }

            if (!Directory.Exists(basePath))
            {
                Debug.LogWarning($"[BuildPipeline::GenerateLinkfile] can't find il2cpp's dlls [{basePath}]");
                return;
            }

            Dictionary<string, Assembly> AllAssemblies = new();

            var hashAss = new HashSet<string>();
            var files = new List<string>(Directory.GetFiles(basePath, "*.dll"));
            foreach (var file in files)
            {
                var ass = Assembly.LoadFile(file);
                {
                    var name = ass.GetName().Name;
                    if (IsIngoreClass(name))
                    {
                        continue;
                    }

                    if (!hashAss.Contains(name))
                    {
                        hashAss.Add(name);

                        AllAssemblies[name] = ass;
                    }
                }
            }

            var names = SettingsUtil.HotUpdateAssemblyNamesExcludePreserved;
            var localAssemblies = AppDomain.CurrentDomain.GetAssemblies();
            var localPath = Path.GetFullPath(Path.Combine(Application.dataPath, "..")).Replace('\\', '/');
            foreach (var ass in localAssemblies)
            {
                if (ass.IsDynamic)
                {
                    Debug.LogWarning($"[BuildPipeline::GenerateLinkfile] {ass.FullName} is dynamic!!!");
                    continue;
                }

                if (ass.Location == "")
                {
                    Debug.LogWarning(ass);
                    continue;
                }

                Debug.Log(ass + "___" + ass.Location);
                var assPath = Path.GetFullPath(ass.Location).Replace('\\', '/');
                if (assPath.Contains(localPath) && assPath.ToLower().Contains("/editor/"))
                {
                    continue;
                }

                var name = ass.GetName().Name;
                if (hashAss.Contains(name))
                {
                    continue;
                }

                var ignore = false;
                foreach (var n in names)
                {
                    if (name.Contains(n))
                    {
                        ignore = true;
                        break;
                    }
                }

                if (ignore)
                {
                    continue;
                }

                hashAss.Add(name);
                AllAssemblies[name] = ass;
            }

            var fullPreserve = new List<string>();
            var otherAss = new List<string>();
            var otherAssemblies = new Dictionary<string, List<string>>();

            foreach (var ass in AllAssemblies)
            {
                if (IsIngoreClass(ass.Key))
                {
                    continue;
                }

                var allTypes = ass.Value.GetTypes();
                var stripTypes = new List<string>();
                foreach (var type in allTypes)
                {
                    if (IsIgnoreType(type.FullName))
                    {
                        continue;
                    }

                    stripTypes.Add(type.FullName);
                }

                if (stripTypes.Count == 0)
                {
                    continue;
                }
                else if (allTypes.Length < 5)
                {
                    fullPreserve.Add(ass.Key);
                }
                else if (allTypes.Length - stripTypes.Count > allTypes.Length * 0.1f)
                {
                    otherAssemblies.Add(ass.Key, stripTypes);
                    otherAss.Add(ass.Key);
                }
                else
                {
                    fullPreserve.Add(ass.Key);
                }
            }

            fullPreserve.Sort();
            otherAss.Sort();

            var fileName = outPath;
            var writer = System.Xml.XmlWriter.Create(fileName, new()
            {
                Encoding = new UTF8Encoding(false),
                Indent = true
            });

            writer.WriteStartDocument();
            writer.WriteStartElement("linker");

            foreach (var fp in fullPreserve)
            {
                writer.WriteStartElement("assembly");
                writer.WriteAttributeString("fullname", fp);
                writer.WriteAttributeString("preserve", "all");
                writer.WriteEndElement();
            }

            foreach (var fp in otherAss)
            {
                writer.WriteStartElement("assembly");
                writer.WriteAttributeString("fullname", fp);

                foreach (var type in otherAssemblies[fp])
                {
                    writer.WriteStartElement("type");
                    writer.WriteAttributeString("fullname", type);
                    writer.WriteAttributeString("preserve", "all");
                    writer.WriteEndElement();
                }

                writer.WriteEndElement();
            }

            writer.WriteEndElement();
            writer.WriteEndDocument();
            writer.Close();
        }
    }
}