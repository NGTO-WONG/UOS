using System;
using Game._Script.HotUpdate.Battle.Timeline.Move;
using UnityEngine;
using UnityEngine.Playables;

namespace Game._Script.HotUpdate.Battle.Timeline.Event
{
    [System.Serializable]
    public class EventClip : PlayableAsset, ISettableAsset
    {
        public BattleBaseCharacter attacker;
        public BattleBaseCharacter defender;
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<EventBehaviour>.Create(graph);
            var behaviour = playable.GetBehaviour();
            behaviour.attacker = attacker;
            behaviour.defender = defender;
            return playable;
        }

        public void SetBinding(object value)
        {
            var myTuple = (ValueTuple<BattleBaseCharacter, BattleBaseCharacter>)value;
            attacker = myTuple.Item1;
            defender = myTuple.Item2;
        }
    }
}