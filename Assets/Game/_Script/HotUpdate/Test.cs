using System;
using UnityEngine;

public class Test : MonoBehaviour
{
    void Start()
    {
        Application.targetFrameRate = 300;
        QualitySettings.vSyncCount = 0;
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
    }

}