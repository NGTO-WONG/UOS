using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Game.Script.AOT;

public class AnswerTest : MonoBehaviour
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
     //  GlobalCommandManager<int>.Instance.RemoveListener("AllDie",HideMe);
    }

    async UniTask HideMe(int time, CancellationToken token)
    {
        
        Debug.Log("1跑");
        gameObject.SetActive(false);
        await UniTask.Delay(time*10, cancellationToken: token);
        gameObject.SetActive(true);
        Debug.Log("1跑完");
    }
    
}