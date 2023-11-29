using UnityEngine;
using UnityEngine.Playables;

public class MoveToTargetBehaviour : PlayableBehaviour
{
    public Transform endPoint;
    public Transform startPoint;

    public override void ProcessFrame(Playable playable, FrameData info, object playerData)
    {
        Transform trackBinding = playerData as Transform;
        if (!trackBinding) return;
        if (!endPoint) return;
        if (!startPoint) return;
        double progress = (playable.GetTime() / playable.GetDuration());
        trackBinding.position = Vector3.Lerp(startPoint.position, endPoint.position, (float)progress);
    }
}