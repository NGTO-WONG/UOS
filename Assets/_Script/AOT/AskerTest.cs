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
        await AwaitableEvent.Instance.TriggerEvent("AllDie");
    }

    // Update is called once per frame
    void Update()
    {
    }
}