using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using Spine;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle
{
    public class BattlePlayer: BattleBaseCharacter
    {
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
            await transform.DOMove(target.transform.position+new Vector3(5,0,0),0.5f);
        }

        public override async UniTask Attack_Part2(BattleBaseCharacter target)
        {
            //前往攻击地点
            skeletonAnimation.PlayAnimationLoop(animation_Run);
            await transform.DOMove(target.transform.position + new Vector3(2, 0, 0), 0.5f);
            // 播放攻击动画
            await skeletonAnimation.PlayAnimationAsync(animation_Attack);
            // 移动回原始位置
            skeletonAnimation.PlayAnimationLoop(animation_Run);
            await transform.DOMove(oldPos, 0.5f);
            // 播放空闲动画
            skeletonAnimation.PlayAnimationLoop(animation_idle);
            
            
          //  // 移动到目标位置
          //  var tweener = transform.DOMove(target.transform.position + new Vector3(2, 0, 0), 0.5f);
          //  tweener.onComplete += () =>
          //  {
          //      // 播放攻击动画
          //      var track = skeletonAnimation.AnimationState.SetAnimation(0, animation_Attack, false);
          //      track.Complete += entry =>
          //      {
          //          // 移动回原始位置
          //          skeletonAnimation.AnimationState.SetAnimation(0, animation_Run, true);
          //          var tweener2 = transform.DOMove(oldPos, 0.5f);
          //          tweener2.onComplete += () =>
          //          {
          //              // 播放空闲动画
          //              skeletonAnimation.PlayAnimationLoop(animation_idle);
          //          };
          //      };
          //  };



        }

        public override async UniTask GetHurt()
        {
            await skeletonAnimation.PlayAnimationAsync(animation_Hurt);
            Debug.Log("hurt");
        }
    }
}