using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle.Timeline.Material
{
    [TrackColor(0.8f, 0.3f, 0.1f)]
    [TrackClipType(typeof(MaterialClip))]
    [TrackBindingType(typeof(UnityEngine.Material))]
    public class MaterialTrack : TrackAsset
    {
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            return ScriptPlayable<MaterialBehaviour>.Create(graph, inputCount);
        }
    }
}