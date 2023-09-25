using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Script.AOT;

public class AskerTest : MonoBehaviour
{

    private async void OnEnable()
    {
        try
        {
            Debug.Log("触发事件 等待跑");
            await GlobalCommandManager<int>.Instance.ExecuteEvent("AllDie",
                executeType: GlobalCommandExecuteType.All,1000);
            Debug.Log("触发事件 完成");
        }
        catch (Exception ex) when (ex is OperationCanceledException) // when (ex is not OperationCanceledException) at C# 9.0
        {
            Debug.Log("事件取消");
        }
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