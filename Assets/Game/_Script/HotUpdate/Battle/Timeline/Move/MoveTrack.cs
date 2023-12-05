using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle.Timeline.Move
{
    [TrackColor(0.8f, 0.3f, 0.1f)]
    [TrackClipType(typeof(MoveClip))]
    [TrackBindingType(typeof(Transform))]
    public class MoveTrack : TrackAsset
    {
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            return ScriptPlayable<MoveBehaviour>.Create(graph, inputCount);
        }
    }
}
