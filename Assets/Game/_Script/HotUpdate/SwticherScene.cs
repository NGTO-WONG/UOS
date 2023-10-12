using Cysharp.Threading.Tasks;
using TMPro;
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
            foreach (var item in package.GetAssetInfos("Scene"))
            {
                var tempButton = Instantiate(originButton , originButton.transform.parent);
                tempButton.gameObject.SetActive(true);
                tempButton.GetComponentInChildren<TextMeshProUGUI>().text = item.Address;
                var t = item.Address;
                tempButton.onClick.AddListener(async () =>
                {
                    await SwitchScene(t);
                });
            }
        }

        static async UniTask SwitchScene(string sceneName)
        {
            SceneOperationHandle handle = YooAssets.LoadSceneAsync(sceneName);
            await handle.Task;
            Debug.Log($"Scene name is {sceneName}");
        }
    }
}
