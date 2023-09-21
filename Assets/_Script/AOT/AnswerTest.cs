using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Game.Script.AOT;

public class AnswerTest : MonoBehaviour
{
    [SerializeField] private int delay;
    // Start is called before the first frame update
    void Start()
    {
        if (!AwaitableEvent.HasInstance)
        {
            AwaitableEvent.CreateInstance();
        }
        AwaitableEvent.Instance.AddListener("AllDie",HideMe);
    }

    private void OnEnable()
    {
        
    }

    private void OnDestroy()
    {
       AwaitableEvent.Instance.RemoveListener("AllDie",HideMe);
    }

    async UniTask HideMe()
    {
        gameObject.SetActive(false);
        await UniTask.Delay(delay);
        gameObject.SetActive(true);
    }
    
}