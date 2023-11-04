using System;
using System.IO;
using UnityEngine;

namespace Game._Script.AOT
{
    public static class BuildConfigAccessor
    {
        private static BuildConfig _instance;

        public static BuildConfig Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = Resources.Load<BuildConfig>(nameof(BuildConfig));
                    if (_instance == null)
                    {
                        Debug.LogError("SingletonData asset not found!");
                    }
                }
                return _instance;
            }
        }
        
    }

    
    
    [CreateAssetMenu(fileName = "BuildConfig", menuName = "Custom/BuildConfig")]
    public class BuildConfig: ScriptableObject
    {
        
        /// <summary>
        /// 游戏大版本号 每次出全量包手动修改 基本都可以热更 没啥必要打全量包
        /// </summary>
        public  string BuildVersion = "V1.0";
        
        /// <summary>
        /// 热更新版本号
        /// </summary>
        public string HotUpdateVersion => BuildVersion+DateTime.Now.ToString("_yyyyMMdd_HHmm");
        
        /// <summary>
        /// 游戏的第一个场景
        /// </summary>
        public string GamePlayScene = "Switcher";

        /// <summary>
        /// cdn服务器地址 
        /// </summary>
        public string HostServerIP =
            "https://a.unity.cn/client_api/v1/buckets/8c5cd9d5-dde9-4d66-a07f-68fc52feddb2/entry_by_path/content/?path=";
        
        /// <summary>
        /// 热更新程序集的位置
        /// </summary>
        public string HotfixAssembliesDstDir => Application.dataPath + "/Game/HotUpdateDll"; 
        
        /// <summary>
        /// yooAsset打出来的资源包的位置
        /// </summary>
        public string BundleFolder = "/Users/huangqiang/Desktop/Bundles";
        
        /// <summary>
        /// yooAsset打出来的资源包的位置
        /// </summary>
        public string BuildFolder = "/Users/huangqiang/Desktop/Builds";
    }
}