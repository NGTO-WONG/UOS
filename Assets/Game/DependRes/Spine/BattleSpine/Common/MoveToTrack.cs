using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[TrackColor(0.8f, 0.3f, 0.1f)]
[TrackClipType(typeof(MoveToClip))]
[TrackBindingType(typeof(Transform))]
public class MoveToTrack : TrackAsset
{
    public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
    {
        return ScriptPlayable<MoveToBehaviour>.Create(graph, inputCount);
    }
}

[System.Serializable]
public class MoveToClip : PlayableAsset
{
    public ExposedReference<Transform> startPoint;
    public ExposedReference<Transform> endPoint;

    public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
    {
        var playable = ScriptPlayable<MoveToBehaviour>.Create(graph);
        MoveToBehaviour moveToBehaviour = playable.GetBehaviour();
        moveToBehaviour.startPoint = startPoint.Resolve(graph.GetResolver());
        moveToBehaviour.endPoint = endPoint.Resolve(graph.GetResolver());
        return playable;
    }
}