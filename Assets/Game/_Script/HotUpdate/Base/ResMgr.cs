using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace Game._Script.HotUpdate.Base
{
    public class ResMgr : Singleton<ResMgr>
    {
        public async UniTask<T> LoadAsync<T>(string location) where T: Object
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            AssetOperationHandle handle = package.LoadAssetAsync<T>(location);
            await handle.ToUniTask();
            return handle.AssetObject as T;
        }
        
        public async UniTask<Scene> LoadSceneAsync(string location,LoadSceneMode mode)
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            SceneOperationHandle handle = package.LoadSceneAsync(location, mode);
            await handle.ToUniTask();
            return handle.SceneObject;
        }
        
        
    }
}