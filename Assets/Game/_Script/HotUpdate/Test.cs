using System;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class Test : MonoBehaviour
{
    [SerializeField] private Button button;
    [SerializeField] private Transform pos;
    void Start()
    {
        
        button.onClick.AddListener(() =>
        {
            
        });
        Application.targetFrameRate = 300;
        QualitySettings.vSyncCount = 0;
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
    }
        
    

}