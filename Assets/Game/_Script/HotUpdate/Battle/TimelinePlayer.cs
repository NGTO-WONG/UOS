using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Playables;

public class TimelinePlayer : MonoBehaviour
{
    public Dictionary<string, PlayableDirector> timelineDic = new Dictionary<string, PlayableDirector>();

    private async void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            Debug.Log("攻击");
            await PlayAsync("Attack");
            Debug.Log("攻击结束");

        }
    }

    private void Start()
    {
        foreach (Transform child in transform)
        {
            if (child.TryGetComponent<PlayableDirector>(out var playableDirector))
            {
                timelineDic.Add(child.gameObject.name,playableDirector);                
            }
        }
    }

    public async UniTask PlayAsync(string name,bool backToIdle=true)
    {
        foreach (var playableDirector in timelineDic)
        {
            playableDirector.Value.gameObject.SetActive(playableDirector.Key==name);
        }
        int length = (int)(timelineDic[name].duration*1000);
        await UniTask.Delay(length);

        if (backToIdle)
        {
            foreach (var playableDirector in timelineDic)
            {
                playableDirector.Value.gameObject.SetActive(playableDirector.Key=="Idle");
            }
        }
        
    }
    
    
}
