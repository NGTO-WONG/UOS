using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Serialization;

public class CubePlayer : MonoBehaviour
{
    public Ease MoveEase;
    public float Speed=30;

    void Start()
    {
        EventManager<Vector3>.Instance.RegisterEvent(EventNames.DragEvent,Move);
    }

    private async UniTask Move(Vector3 dir, CancellationToken token)
    {
        if ( Physics.Raycast(new Ray(gameObject.transform.position,dir),out var hitInfo))
        {
            Debug.Log(dir+" "+hitInfo.point);
            await transform.DOMove(hitInfo.point-(dir/2f),hitInfo.distance/Speed).SetEase(MoveEase);
        }
        else
        {
            Debug.Log("A");
        }
       
    }



    // Update is called once per frame
    void Update()
    {
        
    }
}
