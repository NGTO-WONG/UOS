using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle.Timeline.Material
{
    [TrackColor(0.8f, 0.3f, 0.1f)]
    #if UNITY_EDITOR
    [TrackClipType(typeof(MaterialClip))]
    #endif
    [TrackBindingType(typeof(MeshRenderer))]
    public class MaterialTrack : TrackAsset
    {
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            return ScriptPlayable<MaterialBehaviour>.Create(graph, inputCount);
        }
    }
}