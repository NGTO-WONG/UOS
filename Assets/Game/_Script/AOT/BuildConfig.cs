using System;
using System.IO;
using UnityEngine;
using UnityEngine.Serialization;

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
    public class BuildConfig : ScriptableObject
    {
        /// <summary>
        /// 游戏大版本号 每次出全量包手动修改
        /// </summary>
        public int BuildVersion = 1;

        /// <summary>
        /// 热更新版本号 每次打热更自增
        /// </summary>
        public int HotUpdateVersion = 0;

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
        /// cdn服务器地址 
        /// </summary>
        public string LocalTestIP =
            "https://a.unity.cn/client_api/v1/buckets/8c5cd9d5-dde9-4d66-a07f-68fc52feddb2/entry_by_path/content/?path=";

        /// <summary>
        /// 热更新程序集的位置
        /// </summary>
        public string HotfixAssembliesDstDir => Application.dataPath + "/Game/HotUpdateDll";

        public string BuildName;

        /// <summary>
        /// yooAsset打出来的资源包的位置
        /// = "/Users/huangqiang/Desktop/Bundles"
        /// </summary>
        public string BundleFolder;

        /// <summary>
        /// 打出来的包
        ///  "/Users/huangqiang/Desktop/Builds"
        /// </summary>
        public string BuildFolder;

        /// <summary>
        /// 是否是development包 "1"true "0"false
        /// </summary>
        public string IsDevelopmentBuild;
    }
}