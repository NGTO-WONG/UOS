using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Spine.Unity;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Tilemaps;

public class Test : MonoBehaviour
{
    private List<string> testStr = new List<string>() { "123", "12" };
    private Dictionary<int, int> testDic = new Dictionary<int, int>() { { 1, 2 }, { 3, 5 } };
    private Dictionary<int, Tilemap> testDic2 = new Dictionary<int, Tilemap>() {  };
    [SerializeField] private NavMeshAgent _agent;
    [SerializeField] private PolygonCollider2D polygonCollider2D;

    [SerializeField] private SkeletonAnimation skeletonAnimation;

    // Start is called before the first frame update
    void Start()
    {
        testDic2.Add(11,this.GetComponent<Tilemap>());
    }

    // Update is called once per frame
    void Update()
    {
        // Debug.Log($"{_agent.height},{testStr[0]},{testDic[1]},{testDic2[11].animationFrameRate}");
        for (int i = 0; i < 10000; i++)
        {
            var test = DateTime.Now.ToString("HH:mm:ss zz");
            testStr.Add(test+" "+i.ToString());
        }
        Debug.Log(testStr.Last());
        // Debug.Log(polygonCollider2D.isTrigger+" "+polygonCollider2D.points.Length+ " "+skeletonAnimation.AnimationName);
    }
}