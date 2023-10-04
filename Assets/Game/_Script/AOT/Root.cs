using System;
using Cysharp.Threading.Tasks;
using Game.Script.AOT.YooAsset;
using UnityEngine;
using YooAsset;
using HybridCLR;
using System.Reflection;
using HybridCLR.Editor;

namespace Game._Script.AOT
{
    public class Root : MonoBehaviour
    {
        public string GamePlayScene = "_1_GamePlay";
        public string HostServerIP = "https://a.unity.cn/client_api/v1/buckets/f80670d2-d509-47a4-a68f-56900cbdb0a8/entry_by_path/content/?path=";
        public string BuildVersion = "V1.0";
        public EPlayMode PlayMode = EPlayMode.HostPlayMode;
        
        private async void Start()
        {
            //1 初始化
            await InitializeYooAsset();
            //2 获取资源版本
            var packageVersion = await UpdatePackageVersion();
            //3 更新资源清单
            await UpdatePackageManifest(packageVersion);
            //4 资源包下载 
            await Download();
            //5 补充AOT泛型
            await LoadMetadataForAOTAssembly();
            //6 读取HotUpdate热更新文件 
            await LoadHotUpdateDll();
            //7 更新结束 开始游戏
            await StartGame(GamePlayScene);
        }

        /// <summary>
        /// 5 补充aot元数据
        /// </summary>
        private async UniTask LoadMetadataForAOTAssembly()
        {
#if UNITY_EDITOR
            await UniTask.DelayFrame(1);
            Debug.Log("编辑器模式无需加载AOT元数据");
#else
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            var package = YooAssets.GetPackage("DefaultPackage");
            foreach (var aotDll in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                RawFileOperationHandle handle = package.LoadRawFileAsync(aotDll);
                await handle.Task;
                var assemblyData = handle.GetRawFileData();
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(assemblyData, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDll}. mode:{mode} ret:{err}");
            }
#endif
        }

        /// <summary>
        /// 6 读取HotUpdate热更新文件 
        /// </summary>
        private async UniTask LoadHotUpdateDll()
        {
            // Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if UNITY_EDITOR
            await UniTask.DelayFrame(1);
            Debug.Log("编辑器模式无需加载热更Dll ");
#else
            var package = YooAssets.GetPackage("DefaultPackage");
            foreach (var hotUpdateDll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                RawFileOperationHandle handle = package.LoadRawFileAsync(hotUpdateDll);
                await handle.Task;
                byte[] hotUpdateData= handle.GetRawFileData();
                Assembly.Load(hotUpdateData);
            }

#endif
        }

        private async UniTask InitializeYooAsset()
        {
            // 初始化资源系统
            YooAssets.Initialize();

            // 创建默认的资源包
            var package = YooAssets.CreatePackage("DefaultPackage");

            // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
            YooAssets.SetDefaultPackage(package);

            switch (PlayMode)
            {
                case EPlayMode.EditorSimulateMode:
                    var initParametersEditor = new EditorSimulateModeParameters
                    {
                        SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage")
                    };
                    await package.InitializeAsync(initParametersEditor).Task;
                    break;
                case EPlayMode.OfflinePlayMode:
                    var initParametersOffline = new OfflinePlayModeParameters();
                    await package.InitializeAsync(initParametersOffline).Task;
                    break;
                case EPlayMode.HostPlayMode:
                    var initParameters = new HostPlayModeParameters
                    {
                        QueryServices = new GameQueryServices(), //太空战机DEMO的脚本类，详细见StreamingAssetsHelper
                        DecryptionServices = new GameDecryptionServices(),
                        DefaultHostServer = GetHostServerURL(),
                        FallbackHostServer = GetHostServerURL()
                    };
                    var initOperation = package.InitializeAsync(initParameters);
                    await initOperation.Task;
                    if (initOperation.Status == EOperationStatus.Succeed)
                    {
                        Debug.Log("资源包初始化成功！");
                    }
                    else

                    {
                        Debug.LogError($"资源包初始化失败：{initOperation.Error}");
                    }

                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

            string GetHostServerURL()
            {
#if UNITY_EDITOR
                if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
                    return $"{HostServerIP}Android/DefaultPackage/{BuildVersion}";
                else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
                    return $"{HostServerIP}iOS/DefaultPackage/{BuildVersion}";
                else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
                    return $"{HostServerIP}WebGL/DefaultPackage/{BuildVersion}";
                else
                    return $"{HostServerIP}StandaloneWindows64/DefaultPackage/{BuildVersion}";
#else
                if (Application.platform == RuntimePlatform.Android)
                    return $"{HostServerIP}Android/DefaultPackage/{BuildVersion}";
                else if (Application.platform == RuntimePlatform.IPhonePlayer)
                    return $"{HostServerIP}iOS/DefaultPackage/{BuildVersion}";
                else if (Application.platform == RuntimePlatform.WebGLPlayer)
                    return $"{HostServerIP}WebGL/DefaultPackage/{BuildVersion}";
                else
                    return $"{HostServerIP}StandaloneWindows64/DefaultPackage/{BuildVersion}";
#endif
            }
        }

        private async UniTask<string> UpdatePackageVersion()
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageVersionAsync(false);
            await operation.Task;
            if (operation.Status == EOperationStatus.Succeed)
            {
                //更新成功
                string packageVersion = operation.PackageVersion;
                Debug.Log($"Updated package Version : {packageVersion}");
                return packageVersion;
            }
            else
            {
                //更新失败
                Debug.LogError(operation.Error);
                return "";
            }
        }

        private async UniTask UpdatePackageManifest(string packageVersion)
        {
            // 更新成功后自动保存版本号，作为下次初始化的版本。
            // 也可以通过operation.SavePackageVersion()方法保存。
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageManifestAsync(packageVersion);
            await operation.Task;
            if (operation.Status == EOperationStatus.Succeed)
            {
                //更新成功
            }
            else
            {
                //更新失败
                Debug.LogError(operation.Error);
            }
        }

        private async UniTask Download()
        {
            const int downloadingMaxNum = 10;
            const int failedTryAgain = 3;
            var package = YooAssets.GetPackage("DefaultPackage");
            var downloader = package.CreateResourceDownloader(downloadingMaxNum, failedTryAgain);

            //没有需要下载的资源
            if (downloader.TotalDownloadCount == 0)
            {
                Debug.Log("没有需要下载的资源");
                return;
            }

            //需要下载的文件总数和总大小
            int totalDownloadCount = downloader.TotalDownloadCount;
            long totalDownloadBytes = downloader.TotalDownloadBytes;
            Debug.Log("需下载"+FormatBytes(totalDownloadBytes)+"文件数量"+totalDownloadCount);

            //注册回调方法
            downloader.OnDownloadErrorCallback = (filename, error) => Debug.LogError(filename + " 下载失败 " + error);
            downloader.OnDownloadProgressCallback = (count, downloadCount, bytes, downloadBytes) => Debug.Log(
                "下载速度: " +FormatBytes((bytes*Application.targetFrameRate))+ " 已下载: "+ FormatBytes(downloadBytes));

            //开启下载
            downloader.BeginDownload();
            await downloader.Task;

            //检测下载结果
            Debug.Log(downloader.Status == EOperationStatus.Succeed ? "下载成功" : "下载失败");

            return;

            string FormatBytes(long bytes)
            {
                return bytes switch
                {
                    // 大于等于1GB
                    >= 1024 * 1024 * 1024 => $"{(double)bytes / (1024 * 1024 * 1024):0.00} GB",
                    // 大于等于1MB
                    >= 1024 * 1024 => $"{(double)bytes / (1024 * 1024):0.00} MB",
                    // 大于等于1KB
                    >= 1024 => $"{(double)bytes / 1024:0.00} KB",
                    _ => $"{bytes} B"
                };
            }
        }

        static async UniTask StartGame(string sceneName)
        {
            SceneOperationHandle handle = YooAssets.LoadSceneAsync(sceneName);
            await handle.Task;
            Debug.Log($"Scene name is {sceneName}");
        }
    }
}