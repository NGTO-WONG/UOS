using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Battle.Timeline;
using Game._Script.HotUpdate.Battle.Timeline.Position;
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
        CancellationTokenSource _cancellationTokenSource;
        public Dictionary<string, PlayableDirector> timelineDic = new Dictionary<string, PlayableDirector>();
       
        [SerializeField] private Transform born;
        [SerializeField] private Transform stand;
        [SerializeField] private Transform enemy;
    
        private async void Update()
        {
            
            if (Input.GetKeyDown(KeyCode.A))
            {
                SetClipBinding<MoveClip>(TimelineEnum.Enter, "Move", "1", (born.position,stand.position));
                await PlayTimelineAsync(TimelineEnum.Enter,true,_cancellationTokenSource);
            }
            if (Input.GetKeyDown(KeyCode.B))
            {
                SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (stand.position,enemy.position));
                SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "2", (enemy.position,stand.position));
                await PlayTimelineAsync(TimelineEnum.Attack,true,_cancellationTokenSource);
            }
            
            // if (Input.GetKeyDown(KeyCode.C))
            // {
            //     SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (born.position,stand.position));
            //     await PlayTimelineAsync(TimelineEnum.Enter,false,_cancellationTokenSource);
            // }
            
            return;
            // if (Input.GetKeyDown(KeyCode.C))
            // {
            //     SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (testTr.position,testTr2.position));
            //     await PlayTimelineAsync(TimelineEnum.Attack,false,_cancellationTokenSource);
            // }
            //
            // if (Input.GetKeyDown(KeyCode.D))
            // {
            //     SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (testTr2.position,testTr.position));
            //     await PlayTimelineAsync(TimelineEnum.Attack,false,_cancellationTokenSource);
            // }
            // if (Input.GetKeyDown(KeyCode.A))
            // {
            //     var timelineAsset = timelineDic[TimelineEnum.Attack].playableAsset as TimelineAsset;
            //
            //     Debug.Log(timelineAsset.GetOutputTracks().Count());
            //     foreach (var trackAsset in timelineAsset.GetOutputTracks())
            //     {
            //         Debug.Log(trackAsset.name);
            //     }
            // }
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

        public async UniTask PlayTimelineAsync(string name, bool backToIdle = true,CancellationTokenSource cancellationTokenSource=null)
        {
            if (cancellationTokenSource!=null)
            {
                cancellationTokenSource.Cancel();
            }
            cancellationTokenSource = new CancellationTokenSource();
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
            await UniTask.Delay(length,cancellationToken:cancellationTokenSource.Token);
            if (backToIdle)
            {
                foreach (var playableDirector in timelineDic)
                {
                    playableDirector.Value.gameObject.SetActive(playableDirector.Key == "Idle");
                }
            }
            cancellationTokenSource.Dispose();
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