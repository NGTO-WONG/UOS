using System;
using UnityEngine;

public class Test : MonoBehaviour
{
    void Start()
    {
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;
    }

    private void Update()
    {
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;
    }
}