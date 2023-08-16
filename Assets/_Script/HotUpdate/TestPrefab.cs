using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class TestPrefab : MonoBehaviour
{
    [SerializeField] private Button button;
    private void Start()
    {
        button.onClick.AddListener(() =>
        {
            LoadScene().Forget();
        });
    }

    private void OnDestroy()
    {
        button.onClick.RemoveAllListeners();
    }

    async UniTask LoadScene()
    {
        Debug.Log("LoadSceneBegin");
        await UniTask.Delay(1000);
        var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
        bool suspendLoad = false;
        SceneOperationHandle handle = YooAssets.LoadSceneAsync("_2_GamePlay2", sceneMode, suspendLoad);
        await handle.Task;
        Debug.Log("Scene name is _2_GamePlay2");
        Debug.Log("LoadSceneDone2222");
    }
}
