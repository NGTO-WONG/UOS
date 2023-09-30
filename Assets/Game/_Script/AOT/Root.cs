using System;
using System.IO;
using Cysharp.Threading.Tasks;
using Game.Script.AOT.YooAsset;
using HybridCLR;
using UnityEngine;
using YooAsset;
#if !UNITY_EDITOR
using System.Reflection;
#endif

namespace Game.Script.AOT
{
    public class Root : MonoBehaviour
    {
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
            //5 拷贝HotUpdate热更新文件
            await CopyHotUpdateDll();
            //6 读取HotUpdate热更新文件 
            await LoadHotUpdateDll();
            //7 补充AOT泛型
            await LoadMetadataForAOTAssemblies();
            //8 更新结束 开始游戏
            await StartGame(GamePlayScene);
        }

        /// <summary>
        /// 7 补充AOT泛型
        /// </summary>
        private async UniTask LoadMetadataForAOTAssemblies()
        {
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            foreach (var aotDllName in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                var package = YooAssets.GetPackage("DefaultPackage");
                RawFileOperationHandle handle = package.LoadRawFileAsync(aotDllName);
                await handle.Task;
                var assemblyData = handle.GetRawFileData();
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(assemblyData, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
            }
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
            byte[] assemblyData = await File.ReadAllBytesAsync(Application.persistentDataPath + "/HotUpdate.dll.bytes");
            Assembly.Load(assemblyData);
#endif
        }

        #region YooAsset

        public string GamePlayScene = "_1_GamePlay";

        /// <summary>
        /// 资源系统运行模式
        /// </summary>
        public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;
        // string HostURL="";


        private string GetHostServerURL()
        {
            //string hostServerIP = "http://10.0.2.2"; //安卓模拟器地址
            string hostServerIP =
                "https://a.unity.cn/client_api/v1/buckets/f80670d2-d509-47a4-a68f-56900cbdb0a8/entry_by_path/content/?path=";
            string buildVersion = "V1.0";

#if UNITY_EDITOR
            if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
                return $"{hostServerIP}Android/DefaultPackage/{buildVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
                return $"{hostServerIP}iOS/DefaultPackage/{buildVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
                return $"{hostServerIP}WebGL/DefaultPackage/{buildVersion}";
            else
                return $"{hostServerIP}StandaloneWindows64/DefaultPackage/{buildVersion}";
#else
    if (Application.platform == RuntimePlatform.Android)
        return $"{hostServerIP}Android/DefaultPackage/{buildVersion}";
    else if (Application.platform == RuntimePlatform.IPhonePlayer)
        return $"{hostServerIP}iOS/DefaultPackage/{buildVersion}";
    else if (Application.platform == RuntimePlatform.WebGLPlayer)
        return $"{hostServerIP}WebGL/DefaultPackage/{buildVersion}";
    else
        return $"{hostServerIP}StandaloneWindows64/DefaultPackage/{buildVersion}";
#endif
        }


        // public string Version;

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
                    var initParametersEditor = new EditorSimulateModeParameters();
                    initParametersEditor.SimulateManifestFilePath =
                        EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
                    await package.InitializeAsync(initParametersEditor).Task;
                    break;
                case EPlayMode.OfflinePlayMode: //其实没有做离线模式的逻辑
                    var initParametersOffline = new OfflinePlayModeParameters();
                    await package.InitializeAsync(initParametersOffline).Task;
                    break;
                case EPlayMode.HostPlayMode:
                    var initParameters = new HostPlayModeParameters();
                    initParameters.QueryServices = new GameQueryServices(); //太空战机DEMO的脚本类，详细见StreamingAssetsHelper
                    initParameters.DecryptionServices = new GameDecryptionServices();
                    initParameters.DefaultHostServer = GetHostServerURL();
                    initParameters.FallbackHostServer = GetHostServerURL();
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
            bool savePackageVersion = true;
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageManifestAsync(packageVersion, savePackageVersion);
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
            int downloadingMaxNum = 10;
            int failedTryAgain = 3;
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

            /*注册回调方法 

            downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
            downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
            downloader.OnDownloadOverCallback = OnDownloadOverFunction;
            downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;
            
            */

            //开启下载
            downloader.BeginDownload();
            await downloader.Task;

            //检测下载结果
            if (downloader.Status == EOperationStatus.Succeed)
            {
                Debug.Log("下载成功");
            }
            else
            {
                Debug.Log("下载失败");
            }
        }


        /// <summary>
        /// 5 获取HotUpdate.dll.bytes 覆盖拷贝到Application.persistentDataPath
        /// </summary>
        private async UniTask CopyHotUpdateDll()
        {
            string location = "HotUpdate.dll";
            var package = YooAssets.GetPackage("DefaultPackage");
            RawFileOperationHandle handle = package.LoadRawFileAsync(location);
            await handle.Task;
            string filePath = handle.GetRawFilePath();
            File.Copy(filePath, Application.persistentDataPath + "/HotUpdate.dll.bytes", true);
        }

        async UniTask StartGame(string sceneName)
        {
            var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
            bool suspendLoad = false;
            SceneOperationHandle handle = YooAssets.LoadSceneAsync(sceneName, sceneMode, suspendLoad);
            await handle.Task;
            Debug.Log($"Scene name is {sceneName}");
        }

        #endregion
    }
}