using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Script.AOT;

public class Canceller : MonoBehaviour
{

    private void OnEnable()
    {
        GlobalCommandManager<int>.Instance.CancelCommand("AllDie");
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