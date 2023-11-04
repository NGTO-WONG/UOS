using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

namespace Game._Script.HotUpdate
{
    public class SwticherScene : MonoBehaviour
    {
        [SerializeField] private Button originButton;
        void Start()
        {
            Debug.Log("Abc");
            var package = YooAssets.GetPackage("DefaultPackage");
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

        private void Update()
        {
            //UnityEngine.Debug.Log("ASSSSS");
        }
    }
}
