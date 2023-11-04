using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using UnityEngine;

public class CubePlayer : MonoBehaviour
{
    public Ease MoveEase;
    public float Speed=30;

    void Start()
    {
       EventManager<Vector3>.Instance.SubscribeEvent(EventNames.DragEvent,Move);
    }


    private async UniTask Move(Vector3 dir, CancellationToken token)
    {
        var ray=new Ray(gameObject.transform.position,dir);
        if (Physics.Raycast(ray, out var hitInfo, 9999f, LayerMask.GetMask("Ground")))
        {
            await transform.DOMove(hitInfo.point - (dir / 2f), hitInfo.distance / Speed)
                .SetEase(MoveEase)
                .WithCancellation(cancellationToken: token);
        }
       
    }


}
