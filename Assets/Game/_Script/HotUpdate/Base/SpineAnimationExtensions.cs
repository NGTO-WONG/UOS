using Cysharp.Threading.Tasks;
using Spine;
using Spine.Unity;

// 确保包含 UniTask 的命名空间

namespace Game._Script.HotUpdate.Base
{
    public static class SpineAnimationExtensions
    {
        public static async UniTask PlayAnimationAsync(this SkeletonAnimation skeletonAnimation, string animationName, bool loop = false)
        {
            TrackEntry trackEntry = skeletonAnimation.state.SetAnimation(0, animationName, loop);
        
            // 如果动画不是循环的，则等待它完成
            if (!loop)
            {
                await UniTask.WaitUntil(() => trackEntry.IsComplete);
            }
        }
        
        public static void PlayAnimationLoop(this SkeletonAnimation skeletonAnimation, string animationName)
        {
            TrackEntry trackEntry = skeletonAnimation.state.SetAnimation(0, animationName, true);
        }
    }
}
