using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Script.AOT;

public class AskerTest : MonoBehaviour
{

    private async void OnEnable()
    {
        Debug.Log("触发事件 等待跑");
        await GlobalCommandManager<int>.Instance.ExecuteEvent("AllDie",
            executeType: GlobalCommandExecuteType.All,1000);
        Debug.Log("触发事件 跑完");
        gameObject.SetActive(false);
    }

    private void OnDisable()
    {
         //GlobalCommandManager<int>.Instance.CancelCommand("AllDie");
         
    }

    // Update is called once per frame
    void Update()
    {
    }
}