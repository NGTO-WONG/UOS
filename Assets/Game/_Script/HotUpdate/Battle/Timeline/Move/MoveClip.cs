using System;
using UnityEngine;
using UnityEngine.Playables;

namespace Game._Script.HotUpdate.Battle.Timeline.Move
{
    [System.Serializable]
    public class MoveClip : PlayableAsset, ISettableAsset
    {
        public Vector3 startPosition;
        public Vector3 endPosition;

        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<MoveBehaviour>.Create(graph);
            MoveBehaviour behaviour = playable.GetBehaviour();
            behaviour.StartPosition = startPosition;
            behaviour.EndPosition = endPosition;
            return playable;
        }

        public void SetBinding(object value)
        {
            var myTuple = (ValueTuple<Vector3, Vector3>)value;
            startPosition = myTuple.Item1;
            endPosition = myTuple.Item2;
        }
    }
}