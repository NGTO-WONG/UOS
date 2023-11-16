using System;
using System.Linq;
using Game.Script.AOT.YooAsset;
using UnityEngine;
using YooAsset;
using Cysharp.Threading.Tasks;
using HybridCLR;
using System.Reflection;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using TMPro;
using UnityEngine.UI;

namespace Game._Script.AOT
{
    public class Root : MonoBehaviour
    {
        
        public EPlayMode PlayMode = EPlayMode.HostPlayMode;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private TMP_Dropdown dropdownText;
        [SerializeField] private Button enterButton;

        private string _ip = "http://192.168.100.1:8000/";
        private bool enter = false;
        private async void Start()
        {
            dropdownText.onValueChanged.AddListener((idx)=>
            {
                _ip = dropdownText.options[idx].text;
                foreach (var VARIABLE in dropdownText.options)
                {
                    Debug.Log(_ip+" "+VARIABLE.text);
                }
            });
            enterButton.onClick.AddListener(()=>enter=true);
            await UniTask.WaitWhile(()=>enter==false);
            //1 初始化
            await InitializeYooAsset();
            try
            {
                //2 获取资源版本
                var packageVersion = await UpdatePackageVersion();
                //3 更新资源清单
                await UpdatePackageManifest(packageVersion);
                //4 资源包下载 
                await Download();
            }
            catch
            {
                //ios第一次可能会因为没有网络权限而失败 这里catch再跑一遍
                //2 获取资源版本
                var packageVersion = await UpdatePackageVersion();
                //3 更新资源清单
                await UpdatePackageManifest(packageVersion);
                //4 资源包下载 
                await Download();
            }
            
            //5 补充AOT泛型
            await LoadMetadataForAOTAssembly();
            //6 读取HotUpdate热更新文件 
            await LoadHotUpdateDll();
            //7 更新结束 开始游戏
            await StartGame(BuildConfigAccessor.Instance.GamePlayScene);
        }

        /// <summary>
        /// 5 补充aot元数据
        /// </summary>
        private async UniTask LoadMetadataForAOTAssembly()
        {
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            var package = YooAssets.GetPackage("DefaultPackage");
            foreach (var aotDll in AOTGenericReferences.PatchedAOTAssemblyList)
            {
                RawFileOperationHandle handle = package.LoadRawFileAsync(aotDll);
                await handle.ToUniTask(this);
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
#if !UNITY_EDITOR
                var assemblyData = handle.GetRawFileData();
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(assemblyData, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDll}. mode:{mode} ret:{err}");
#endif
                await UniTask.Delay(1);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDll}. mode:{mode}");
            }
        }

        /// <summary>
        /// 6 读取HotUpdate热更新文件 
        /// </summary>
        private async UniTask LoadHotUpdateDll()
        {
            if (true)
            {
#if !UNITY_EDITOR
                string location = "HotUpdate.dll";
                var package = YooAssets.GetPackage("DefaultPackage");
                RawFileOperationHandle handle = package.LoadRawFileAsync(location);
                await handle.ToUniTask(this);
                byte[] hotUpdateData = handle.GetRawFileData();
                Assembly.Load(hotUpdateData);
#else
                // Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
                await UniTask.Delay(1);
                Debug.Log("编辑器模式无需加载热更Dll ");
#endif
            }
            else
            {
                var package = YooAssets.GetPackage("DefaultPackage");
                foreach (var item in package.GetAssetInfos("HotUpdateDll"))
                {
                    string location = item.Address;
                    if (AOTGenericReferences.PatchedAOTAssemblyList.Contains(location))
                    {
                        continue;
                    }

                    RawFileOperationHandle handle = package.LoadRawFileAsync(location);
                    await handle.ToUniTask(this);
                    byte[] hotUpdateData = handle.GetRawFileData();
#if !UNITY_EDITOR
                    Assembly.Load(hotUpdateData);
#else
                    Debug.Log("编辑器模式无需加载热更Dll " + hotUpdateData);
#endif
                }
            }
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
                    await package.InitializeAsync(initParametersEditor).ToUniTask(this);
                    break;
                case EPlayMode.OfflinePlayMode:
                    var initParametersOffline = new OfflinePlayModeParameters();
                    await package.InitializeAsync(initParametersOffline).ToUniTask(this);
                    break;
                case EPlayMode.HostPlayMode:
                    var initParameters = new HostPlayModeParameters
                    {
                        QueryServices = new GameQueryServices(),
                        DecryptionServices = new GameDecryptionServices(),
                        DefaultHostServer = GetHostServerURL(_ip), 
                        FallbackHostServer = GetHostServerURL(_ip)
                    };
                    var initOperation = package.InitializeAsync(initParameters);
                    await initOperation.ToUniTask(this);
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

            string GetHostServerURL(string ip)
            {
                var versionStr = "V" +
                                 BuildConfigAccessor.Instance.BuildVersion + "." +
                                 BuildConfigAccessor.Instance.HotUpdateVersion;
#if UNITY_EDITOR
                switch (UnityEditor.EditorUserBuildSettings.activeBuildTarget)
                {
                    case UnityEditor.BuildTarget.Android:
                        return $"{ip}Android/DefaultPackage/{versionStr}";
                    case UnityEditor.BuildTarget.iOS:
                        return $"{ip}iOS/DefaultPackage/{versionStr}";
                    default:
                        return "未知平台";
                }
#else
                switch (Application.platform)
                {
                    case RuntimePlatform.Android:
                        return $"{ip}Android/DefaultPackage/{versionStr}";
                    case RuntimePlatform.IPhonePlayer:
                        return $"{ip}iOS/DefaultPackage/{versionStr}";
                    default:
                        return "未知平台";
                }
#endif
            }
        }

        private async UniTask<string> UpdatePackageVersion()
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageVersionAsync(false);
            await operation.ToUniTask(this);
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
            await operation.ToUniTask(this);
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
            var totalDownload = FormatBytes(downloader.TotalDownloadBytes);
            Debug.Log($"需下载:{totalDownload} 文件数量:{totalDownloadCount}");

            //注册回调方法
            downloader.OnDownloadErrorCallback = (filename, error) => { Debug.LogError(filename + " 下载失败 " + error); };
            DateTime dateTime=DateTime.Now;
            downloader.OnDownloadProgressCallback = (count, downloadCount, bytes, downloadBytes) =>
            {
                var downloaded = FormatBytes(downloadBytes);
                if (DateTime.Now.Subtract(dateTime).TotalSeconds>1)
                {
                    dateTime=DateTime.Now;
                    Debug.Log($"下载进度:{downloaded}/{totalDownload}");
                    text.text = $"下载进度:{downloaded}/{totalDownload}";   
                }
            };

            //开启下载
            downloader.BeginDownload();
            await downloader.ToUniTask(this);

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

        async UniTask StartGame(string sceneName)
        {
            SceneOperationHandle handle = YooAssets.LoadSceneAsync(sceneName);
            await handle.ToUniTask(this);
            Debug.Log($"Scene name is {sceneName}");
        }
    }
}