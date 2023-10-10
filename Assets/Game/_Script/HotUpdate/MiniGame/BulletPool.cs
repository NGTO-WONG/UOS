using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

namespace Game._Script.HotUpdate.MiniGame
{
    public class Bullet: MonoBehaviour
    {
        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.layer== LayerMask.GetMask("Enemy"))
            {
                BulletPool.Instance.Get()
            }
        }
    }
    
    public class BulletPool:SingletonMonoBehaviour<BulletPool>, IObjectPool<Bullet>
    {
        private Queue<Bullet> bulletPool = new();
        private PooledObject<Bullet> pooledObject = new();
        public Bullet bulletPrefab;
        public Bullet Get()
        {
            if (CountInactive==0)
            {
                var tempObj = Instantiate(bulletPrefab,this.transform);
                bulletPool.Enqueue(tempObj);
                pooledObject.
            }
            return bulletPool.Dequeue();
        }

        public PooledObject<Bullet> Get(out Bullet bullet)
        {
            bullet = Get();
            return bulletPool;
        }

        public void Release(Bullet element)
        {
            throw new NotImplementedException();
        }

        public void Clear()
        {
            throw new NotImplementedException();
        }

        public int CountInactive => bulletPool.Count;
    }
}