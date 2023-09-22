using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Script.AOT;

public class AskerTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("A");
    }

    private async void OnEnable()
    {
        await GlobalCommandManager.Instance.ExecuteEvent("AllDie",
            executeType: GlobalCommandManager.GlobalCommandExecuteType.Any);
        
    }

    // Update is called once per frame
    void Update()
    {
    }
}