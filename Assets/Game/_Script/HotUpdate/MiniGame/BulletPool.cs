using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

namespace Game._Script.HotUpdate.MiniGame
{
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
            }
            var bullet = bulletPool.Dequeue();
            bullet.gameObject.SetActive(true);
            return bullet;
        }

        public PooledObject<Bullet> Get(out Bullet bullet)
        {
            bullet = Get();
            return default;
        }

        public void Release(Bullet element)
        {
            element.gameObject.SetActive(false);
            bulletPool.Enqueue(element);
        }

        public void Clear()
        {
            Debug.Log("clear"); //todo clear
        }

        public int CountInactive => bulletPool.Count;
    }
}