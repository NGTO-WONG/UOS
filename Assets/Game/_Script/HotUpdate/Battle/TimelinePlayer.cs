using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Battle.Timeline.Move;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle
{
    public static class TimelineEnum
    {
        public const string Enter = "Enter";
        public const string Idle = "Idle";
        public const string Attack = "Attack";
        public const string Hurt = "Hurt";
        public const string Die = "Hurt";
    }

    
    public class TimelinePlayer : MonoBehaviour
    {
        public Dictionary<string, PlayableDirector> timelineDic = new Dictionary<string, PlayableDirector>();
        private async void Update()
        {

            if (Input.GetKeyDown(KeyCode.A))
            {
               // SetClipBinding<MoveClip>(TimelineEnum.Enter, "Move", "1", (born.position,stand.position));
                await PlayTimelineAsync(TimelineEnum.Enter,true);
            }
            if (Input.GetKeyDown(KeyCode.B))
            {
               // SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (stand.position,enemy.position));
               // SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "2", (enemy.position,stand.position));
               // SetClipBinding<EventClip>(TimelineEnum.Attack, "AttackEvent", "1", (attacker,defender));
               // await PlayTimelineAsync(TimelineEnum.Attack,true,_cancellationTokenSource);
            }
            
        }

        private void Start()
        {
            foreach (Transform child in transform)
            {
                if (child.TryGetComponent<PlayableDirector>(out var playableDirector))
                {
                    timelineDic.Add(child.gameObject.name, playableDirector);
                }
            }
        }

        public async UniTask PlayTimelineAsync(string name, bool backToIdle = true)
        {
            foreach (var playableDirector in timelineDic)
            {
                if (playableDirector.Key == name)
                {
                    playableDirector.Value.gameObject.SetActive(true);
                    playableDirector.Value.Play();
                }
                else
                {
                    playableDirector.Value.gameObject.SetActive(false);
                }
            }

            int length = (int)(timelineDic[name].duration * 1000);
            await UniTask.Delay(length);
            if (backToIdle)
            {
                foreach (var playableDirector in timelineDic)
                {
                    playableDirector.Value.gameObject.SetActive(playableDirector.Key == "Idle");
                }
            }
        }

        public void SetClipBinding<T>(string name,string trackName,string clipName,object value) where T:class,ISettableAsset
        {   
            var playableDirector = timelineDic[name];
            var timelineAsset = playableDirector.playableAsset as TimelineAsset;
            var track = timelineAsset.GetOutputTracks().FirstOrDefault(tr => tr.name == trackName);
            if (track == null)
            {
                Debug.LogError(trackName+" : 找不到track");
                return;
            }
            var clip = track.GetClips().FirstOrDefault(c => c.displayName == clipName);
            if (clip == null)
            {
                Debug.LogError(clipName+" : 找不到clip");
                return;
            }
            (clip.asset as T)?.SetBinding(value);
        }
        
        
        
    }
}