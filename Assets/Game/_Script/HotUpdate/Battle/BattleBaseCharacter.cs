using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using Spine.Unity;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle
{
    [RequireComponent(typeof(SkeletonAnimation))]
    public abstract class BattleBaseCharacter : MonoBehaviour
    {
        protected SkeletonAnimation skeletonAnimation=>GetComponent<SkeletonAnimation>();
        [SpineAnimation] public string animation_Enter;
        [SpineAnimation] public string animation_Run;
        [SpineAnimation] public string animation_Attack;
        [SpineAnimation] public string animation_Hurt;
        [SpineAnimation] public string animation_idle;
        [SpineAnimation] public string animation_win;
        [SpineAnimation] public string animation_die;
        public abstract UniTask Attack_Part1(BattleBaseCharacter target);
        public abstract UniTask Attack_Part2(BattleBaseCharacter target);

        public virtual async UniTask GetHurt()
        {
            await skeletonAnimation.PlayAnimationAsync(animation_Hurt);
            Debug.Log("hurt");
        }
        public abstract UniTask PlayEnterAnimation(Vector3 playerStandPosition, float duration);

        public virtual async UniTask PlayWinAnimationAsync()
        {
             await skeletonAnimation.PlayAnimationAsync(animation_win);
        }
    }
}