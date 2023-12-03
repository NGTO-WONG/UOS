using UnityEngine;
using UnityEngine.Playables;

namespace Game._Script.HotUpdate.Battle.Timeline.Position
{
    public class MoveBehaviour : PlayableBehaviour
    {
        public Vector3 StartPosition = default;
        public Vector3 EndPosition = default;

        public override void ProcessFrame(Playable playable, FrameData info, object playerData)
        {
            Transform trackBinding = playerData as Transform;
            if (!trackBinding) return;
            if (StartPosition == default && EndPosition == default) return;
            double progress = (double)playable.GetTime() / playable.GetDuration();
            trackBinding.position = Vector3.Lerp(StartPosition, EndPosition, (float)progress);
        }
    }
}