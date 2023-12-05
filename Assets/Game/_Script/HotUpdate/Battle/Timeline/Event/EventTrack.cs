using Game._Script.HotUpdate.Battle.Timeline.Move;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace Game._Script.HotUpdate.Battle.Timeline.Event
{
    
    [TrackColor(0.8f, 0.8f, 0.1f)]
    [TrackClipType(typeof(EventClip))]
    [TrackBindingType(typeof(BattleBaseCharacter))]
    public class EventTrack : TrackAsset
    {
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            return ScriptPlayable<EventBehaviour>.Create(graph, inputCount);
        }
    }
}