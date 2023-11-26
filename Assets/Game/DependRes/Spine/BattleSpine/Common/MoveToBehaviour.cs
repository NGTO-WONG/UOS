using UnityEngine;
using UnityEngine.Playables;

public class MoveToBehaviour : PlayableBehaviour
{
    public Transform startPoint;
    public Transform endPoint;

    public override void ProcessFrame(Playable playable, FrameData info, object playerData)
    {
        Transform trackBinding = playerData as Transform;
        if (!trackBinding) return;

        if (!startPoint || !endPoint) return;

        double progress = (playable.GetTime() / playable.GetDuration());
        trackBinding.position = Vector3.Lerp(startPoint.position, endPoint.position, (float)progress);
    }
}