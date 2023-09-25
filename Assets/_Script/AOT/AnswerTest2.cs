using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

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

    async UniTask HideMe(int time, CancellationToken token)
    {
        Debug.Log("2跑");
        gameObject.SetActive(false);
        await UniTask.Delay(time, cancellationToken: token);
        gameObject.SetActive(true);
        await UniTask.Delay(time, cancellationToken: token);
        gameObject.SetActive(false);
        await UniTask.Delay(time, cancellationToken: token);
        gameObject.SetActive(true);
        Debug.Log("2跑完");
    }
    
}