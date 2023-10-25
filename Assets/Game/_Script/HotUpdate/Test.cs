using System.Collections;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

public class Test : MonoBehaviour
{
    [SerializeField] private SkeletonAnimation skeletonAnimation; 
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(skeletonAnimation.AnimationName);
    }
}
