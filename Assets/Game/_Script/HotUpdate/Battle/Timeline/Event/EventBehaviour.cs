using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using PlayTextSupport;
using UnityEngine;
using UnityEngine.Playables;

namespace Game._Script.HotUpdate.Battle.Timeline.Event
{
    public class EventBehaviour : PlayableBehaviour
    {
        private bool hasTriggered = false; // 确保事件只触发一次
        public BattleBaseCharacter attacker;
        public BattleBaseCharacter defender;

        // 当时间线播放进入这个Clip时
        public override void OnBehaviourPlay(Playable playable, FrameData info)
        {
            if (hasTriggered) return;
            Debug.Log("ccc");
            if (attacker == null) return;
            Debug.Log("attacker");
            if ( defender == null) return;
            Debug.Log("defender");

            EventManager<(BattleBaseCharacter attacker,BattleBaseCharacter defender)>.Instance.TriggerEvent
                (GlobalEventDic.TimelineEvent, (attacker,defender),AwaitableEventType.All).Forget();
                
            hasTriggered = true; // 设置标志，防止重复触发
        }

        // 当时间线播放离开这个Clip时，重置触发状态
        public override void OnBehaviourPause(Playable playable, FrameData info)
        {
            hasTriggered = false;
        } 
    }
}