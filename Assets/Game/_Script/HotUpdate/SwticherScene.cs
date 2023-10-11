using UnityEngine;
using UnityEngine.UI;
using YooAsset;

namespace Game._Script.HotUpdate
{
    public class SwticherScene : MonoBehaviour
    {
        [SerializeField] private Button originButton;

        // Start is called before the first frame update
        async void Start()
        {
            // 注意：location只需要填写资源包里的任意资源地址。
            var package = YooAssets.GetPackage("DefaultPackage");
            Debug.Log(package.GetAssetInfos("Scene").Length);
            // AllAssetsOperationHandle handle = package.LoadAllAssetsAsync<SceneAsset>("Root");
            // await  handle.Task;
            // Debug.Log(handle.AllAssetObjects.Length);
            // foreach(var assetObj in handle.AllAssetObjects)
            // {    
            //     UnityEngine.TextAsset textAsset = assetObj as UnityEngine.TextAsset;
            // }
        
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }
    }
}
