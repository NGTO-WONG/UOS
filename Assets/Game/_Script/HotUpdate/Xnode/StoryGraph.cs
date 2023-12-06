using System;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;
using XNode;

[CreateAssetMenu]
public class StoryGraph : NodeGraph
{
    public Dictionary<string, SkeletonAnimation> Characters = new Dictionary<string, SkeletonAnimation>();
    
}