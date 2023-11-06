using System;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class Test : MonoBehaviour
{
    [SerializeField] private Button button;
    void Start()
    {
        button.onClick.AddListener(() =>
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            package.UnloadUnusedAssets();
        });
        Application.targetFrameRate = 300;
        QualitySettings.vSyncCount = 0;
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
    }
        
    

}