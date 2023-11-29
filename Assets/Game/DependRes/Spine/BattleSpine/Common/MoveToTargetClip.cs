using UnityEngine;
using UnityEngine.Playables;

[System.Serializable]
public class MoveToTargetClip : PlayableAsset
{
    public ExposedReference<Transform> endPoint;
    public ExposedReference<Transform> startPoint;

    public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
    {
        var playable = ScriptPlayable<MoveToTargetBehaviour>.Create(graph);
        MoveToTargetBehaviour moveToTargetBehaviour = playable.GetBehaviour();
        moveToTargetBehaviour.endPoint = endPoint.Resolve(graph.GetResolver());
        moveToTargetBehaviour.startPoint = startPoint.Resolve(graph.GetResolver());
        return playable;
    }
}