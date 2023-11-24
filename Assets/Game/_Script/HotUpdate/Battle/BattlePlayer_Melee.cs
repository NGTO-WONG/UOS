using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using Spine;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle
{
    public class BattlePlayer_Melee: BattleBaseCharacter
    {
        private float meleeDistance=2;
        public override async UniTask PlayEnterAnimation(Vector3 playerStandPosition, float duration)
        {
            skeletonAnimation.AnimationName = animation_Enter;
            await transform.DOMove(playerStandPosition, duration);
            skeletonAnimation.AnimationName = animation_idle;

        }

        private Vector3 oldPos;
        public override async UniTask Attack_Part1(BattleBaseCharacter target)
        {
            oldPos = transform.position;
            skeletonAnimation.PlayAnimationLoop(animation_Run);
            await transform.DOMove(Vector3.zero, 0.5f);
        }

        public override async UniTask Attack_Part2(BattleBaseCharacter target)
        {
            Debug.Log("前往攻击地点");
            skeletonAnimation.PlayAnimationLoop(animation_Run);
            await transform.DOMove(new Vector3(target.transform.position.x+meleeDistance,0,0) , 0.5f);
            Debug.Log("播放攻击动画+ 触发敌人收击动画");
            skeletonAnimation.AnimationState.Event += (entry, e) =>
            {
                if (e.Data.Name == "attack")
                {
                    target.GetHurt().Forget();
                }
            };
            await skeletonAnimation.PlayAnimationAsync(animation_Attack);
            Debug.Log("移动回原始位置");
            skeletonAnimation.PlayAnimationLoop(animation_Run);
            await transform.DOMove(oldPos, 0.5f);
            Debug.Log("播放空闲动画");
            skeletonAnimation.PlayAnimationLoop(animation_idle);


        }

    }
}