using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

namespace Game._Script.HotUpdate.Xnode
{
    [CreateAssetMenu(fileName  =  "NewAdvSceneData",  menuName  =  "Custom/AdvSceneData")]
    public class AdvSceneData : ScriptableObject
    {
        public GameObject scene;
        public List<SkeletonAnimation> characters;
    }
}