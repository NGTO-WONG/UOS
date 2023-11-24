using Cysharp.Threading.Tasks;
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
        public abstract UniTask Attack_Part1(BattleBaseCharacter target);
        public abstract UniTask Attack_Part2(BattleBaseCharacter target);

        public abstract UniTask GetHurt();
        public abstract UniTask PlayEnterAnimation(Vector3 playerStandPosition, float duration);
    }
}