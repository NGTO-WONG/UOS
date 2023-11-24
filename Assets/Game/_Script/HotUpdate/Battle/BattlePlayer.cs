using Cysharp.Threading.Tasks;
using DG.Tweening;
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


        public override async UniTask Attack_Part1(BattleBaseCharacter target)
        {
            skeletonAnimation.AnimationName = animation_Run;
            await transform.DOMove(target.transform.position+new Vector3(5,0,0),0.5f);
        }

        public override async UniTask Attack_Part2(BattleBaseCharacter target)
        {
            await transform.DOMove(target.transform.position+new Vector3(2,0,0),0.5f);
            skeletonAnimation.AnimationName = animation_Attack;
            TrackEntry trackEntry = skeletonAnimation.AnimationState.SetAnimation(0, "attack", false);
            trackEntry.Complete += async entry =>
            {
                skeletonAnimation.AnimationName = animation_Run;
                await transform.DOMove(target.transform.position+new Vector3(2,0,0),0.5f);
            };
            
        }

        public override async UniTask GetHurt()
        {
            Debug.Log("hurt");
        }
    }
}