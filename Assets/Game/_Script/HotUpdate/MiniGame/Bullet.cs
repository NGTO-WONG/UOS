using UnityEngine;

namespace Game._Script.HotUpdate.MiniGame
{
    public class Bullet: MonoBehaviour
    {
        // private void OnTriggerEnter(Collider other)
        // {
        //     if (other.gameObject.layer== LayerMask.NameToLayer("Enemy"))
        //     {
        //         Release();
        //     }
        // }
        //
        public void Release()
        {
            BulletPool.Instance.Release(this);
        }
    }
}