using System;
using System.Linq;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.Triggers;
using DG.Tweening;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.Pool;

namespace Game._Script.HotUpdate.MiniGame
{
    public class AttackArea: MonoBehaviour
    {
        private async void OnTriggerEnter(Collider other)
        {
            if (!other.gameObject.TryGetComponent<CubePlayer>(out var player)) return;
            
            var enemy = GameObject.FindGameObjectsWithTag("Enemy").FirstOrDefault();
            if (enemy == null) return;
                
            var bullet = BulletPool.Instance.Get();
            bullet.transform.position = transform.position;
            var _=bullet.transform.DOMove(enemy.transform.position,1f);
            await UniTask.WhenAny(HitCheck(bullet),LifeTimeCheck());
            
            bullet.Release();
        }
        
        

        async UniTask HitCheck(Bullet bullet)
        {
            await foreach (var bulletHitCollider in bullet.GetAsyncTriggerEnterTrigger())
            {
                if (bulletHitCollider.gameObject.TryGetComponent<CubeEnemy>(out var enemy))
                {
                    enemy.Hurt(bullet);
                }
            }
        }
                
        async UniTask LifeTimeCheck()
        {
            await UniTask.Delay(2000);
        }
        
    }
}