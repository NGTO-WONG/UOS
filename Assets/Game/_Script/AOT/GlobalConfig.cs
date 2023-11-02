using System;
using System.IO;
using UnityEngine;

namespace Script_AOT
{
    public static class GlobalConfig
    {
        
        /// <summary>
        /// 游戏大版本号 每次出全量包手动修改 基本都可以热更 没啥必要打全量包
        /// </summary>
        public static readonly string BuildVersion = "V1.0";
        
        /// <summary>
        /// 热更新版本号
        /// </summary>
        public static string HotUpdateVersion => BuildVersion+DateTime.Now.ToString("_yyyyMMdd_HH_mm_ss");
        
        /// <summary>
        /// 游戏的第一个场景
        /// </summary>
        public static readonly string GamePlayScene = "Menu";

        /// <summary>
        /// cdn服务器地址 
        /// </summary>
        public static readonly string HostServerIP =
            "https://a.unity.cn/client_api/v1/buckets/96026445-ad7a-49de-b003-4a5302009960/entry_by_path/content/?path=";
        
        /// <summary>
        /// 热更新程序集的位置
        /// </summary>
        public static readonly string HotfixAssembliesDstDir = Application.dataPath + "/Game/HotUpdateDll"; 
        
        /// <summary>
        /// yooAsset打出来的资源包的位置
        /// </summary>
        public static string BundlePath => Directory.GetParent(Application.dataPath) + "/Bundles";
    }
}