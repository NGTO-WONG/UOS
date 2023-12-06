using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Battle.Timeline.Move;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle
{
    public class BattleBaseCharacter : MonoBehaviour
    {
        [HideInInspector] public SkeletonAnimation skeletonAnimation;
        protected TimelinePlayer timelinePlayer;
        public bool isShooter=false;

        private List<BattleBaseCharacter> targetBuffer=new List<BattleBaseCharacter>();//临时存储敌人 用来播放动画

        private void Start()
        {
            skeletonAnimation=GetComponentInChildren<SkeletonAnimation>();
            timelinePlayer = GetComponentInChildren<TimelinePlayer>();
        }

        
        /// <summary>
        /// 攻击动画的触发帧 触发敌人的收击动画
        /// </summary>
        public void AttackEventHandler()
        {
            foreach (var target in targetBuffer)
            {
                target.GetHurt(this,target).Forget();
            }
        }
        
        private async UniTask GetHurt(BattleBaseCharacter attacker, BattleBaseCharacter defender)
        {
            Debug.Log($"attacker: {attacker.gameObject.name} defender: {defender.gameObject.name}");
            await timelinePlayer.PlayTimelineAsync(TimelineEnum.Hurt);   
        }

        public virtual async UniTask Attack(BattleBaseCharacter targetCharacter)
        {
            if (isShooter)
            {
                targetBuffer.Clear();
                targetBuffer.Add(targetCharacter);
                var enemyPos = targetCharacter.skeletonAnimation.transform.position;
                timelinePlayer.SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (enemyPos,enemyPos));
                await timelinePlayer.PlayTimelineAsync("Attack");
            }
            else
            {
                targetBuffer.Clear();
                targetBuffer.Add(targetCharacter);
                var enemyPos = targetCharacter.skeletonAnimation.transform.position;
                var standPos = skeletonAnimation.transform.position;
                var offset = (enemyPos - standPos).normalized * 2;
                timelinePlayer.SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "1", (standPos,enemyPos-offset));
                timelinePlayer.SetClipBinding<MoveClip>(TimelineEnum.Attack, "Move", "2", (enemyPos-offset,standPos));
                await timelinePlayer.PlayTimelineAsync("Attack");
            }
        }
        
        

        public virtual async UniTask PlayEnterAnimation(Vector3 standPos)
        {
            timelinePlayer.SetClipBinding<MoveClip>(TimelineEnum.Enter, "Move", "1", (transform.position,standPos));
            await timelinePlayer.PlayTimelineAsync("Enter");
        }

        public virtual async UniTask PlayWinAnimationAsync()
        {
             //await skeletonAnimation.PlayAnimationAsync(animation_win);
        }
    }
}