using System;
using UnityEngine;

public class BackGroundBahaviour : MonoBehaviour
{
    private void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        Time.timeScale = pauseStatus ? 0 : 1;
    }

    void OnApplicationFocus(bool hasFocus)
    {
        Time.timeScale = hasFocus ? 1 : 0;
    }
}