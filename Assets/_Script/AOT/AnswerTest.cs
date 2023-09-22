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
        GlobalCommandManager.Instance.RegisterEvent("AllDie",HideMe);
    }

    private void OnEnable()
    {
        
    }

    private void OnDestroy()
    {
       GlobalCommandManager.Instance.RemoveListener("AllDie",HideMe);
    }

    async UniTask HideMe()
    {
        gameObject.SetActive(false);
        await UniTask.Delay(delay);
        gameObject.SetActive(true);
    }
    
}