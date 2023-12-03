using System;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using Spine.Unity;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle
{
    public abstract class BattleBaseCharacter : MonoBehaviour
    {
        protected SkeletonAnimation skeletonAnimation;
        protected TimelinePlayer timelinePlayer;
        protected Transform target;

        private void Start()
        {
            skeletonAnimation=GetComponentInChildren<SkeletonAnimation>();
            timelinePlayer = GetComponentInChildren<TimelinePlayer>();
            target = transform.Find("Timeline/timelineTarget");
        }

        public virtual async UniTask Attack(BattleBaseCharacter targetCharacter)
        {
            target.transform.position = targetCharacter.gameObject.transform.position;
            await timelinePlayer.PlayTimelineAsync("Attack");
        }
        public virtual async UniTask GetHurt()
        {
            //await skeletonAnimation.PlayAnimationAsync(animation_Hurt);
            Debug.Log("hurt");
        }

        public virtual async UniTask PlayEnterAnimation(Vector3 playerStandPosition)
        {
            target.position = playerStandPosition;
            await timelinePlayer.PlayTimelineAsync("Enter");
        }

        public virtual async UniTask PlayWinAnimationAsync()
        {
             //await skeletonAnimation.PlayAnimationAsync(animation_win);
        }
    }
}