using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[TrackColor(0.8f, 0.3f, 0.1f)]
[TrackClipType(typeof(MoveToTargetClip))]
[TrackBindingType(typeof(Transform))]
public class MoveTrack : TrackAsset
{
    public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
    {
        return ScriptPlayable<MoveToTargetBehaviour>.Create(graph, inputCount);
    }
}
