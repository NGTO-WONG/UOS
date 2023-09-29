using System.Collections.Generic;
using System.IO;
using UnityEngine;
using YooAsset;

namespace Game.Script.AOT.YooAsset
{
    public abstract class StreamingAssetsDefine
    {
        public const string RootFolderName = "yoo";
    }

    /// <summary>
    /// 内置文件查询服务类
    /// </summary>
    public class GameQueryServices : IQueryServices
    {
        public bool QueryStreamingAssets(string packageName, string fileName)
        {
            // 注意：fileName包含文件格式
            return StreamingAssetsHelper.FileExists(packageName, fileName);
        }
    }

#if UNITY_EDITOR
    /// <summary>
    /// StreamingAssets目录下资源查询帮助类
    /// </summary>
    public static class StreamingAssetsHelper
    {
        public static void Init()
        {
        }

        public static bool FileExists(string packageName, string fileName)
        {
            string filePath =
                Path.Combine(Application.streamingAssetsPath, StreamingAssetsDefine.RootFolderName, packageName, fileName);
            return File.Exists(filePath);
        }
    }
#else
/// <summary>
/// StreamingAssets目录下资源查询帮助类
/// </summary>
public sealed class StreamingAssetsHelper
{
    private static bool _isInit = false;
    private static readonly HashSet<string> _cacheData = new HashSet<string>();

    /// <summary>
    /// 初始化
    /// </summary>
    public static void Init()
    {
        if (_isInit == false)
        {
            _isInit = true;
            var manifest = Resources.Load<BuildinFileManifest>("BuildinFileManifest");
            if (manifest != null)
            {
                foreach (string fileName in manifest.BuildinFiles)
                {
                    _cacheData.Add(fileName);
                }
            }
        }
    }

    /// <summary>
    /// 内置文件查询方法
    /// </summary>
    public static bool FileExists(string packageName, string fileName)
    {
        if (_isInit == false)
            Init();
        return _cacheData.Contains(fileName);
    }
}
#endif

}