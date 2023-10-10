using System;
using UnityEngine;
using UnityEngine.Pool;

namespace Game._Script.HotUpdate.MiniGame
{
    public class AttackArea: MonoBehaviour
    {
        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.layer == LayerMask.GetMask("Player"))
            {
                
            }
        }
    }
}