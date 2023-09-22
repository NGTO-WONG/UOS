using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Game.Script.AOT;

public class AnswerTest2 : MonoBehaviour
{
    void Start()
    {
        GlobalCommandManager<int>.Instance.RegisterEvent("AllDie",HideMe);
    }

    private void OnEnable()
    {
        
    }

    private void OnDestroy()
    {
       GlobalCommandManager<int>.Instance.RemoveListener("AllDie",HideMe);
    }

    async UniTask HideMe(int time)
    {
        Debug.Log("2跑");
        gameObject.SetActive(false);
        await UniTask.Delay(time);
        gameObject.SetActive(true);
        await UniTask.Delay(time);
        gameObject.SetActive(false);
        await UniTask.Delay(time);
        gameObject.SetActive(true);
        Debug.Log("2跑完");
    }
    
}