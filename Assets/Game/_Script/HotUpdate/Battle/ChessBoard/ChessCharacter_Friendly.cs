using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.Linq;
using Cysharp.Threading.Tasks.Triggers;
using Game._Script.HotUpdate.Base;
using UnityEngine;
using UnityEngine.AI;

namespace Game._Script.HotUpdate.Battle.ChessBoard
{
    [RequireComponent(typeof(NavMeshAgent)
        ,typeof(CharacterController))]
    public class ChessCharacter_Friendly: ChessCharacter
    {
        [SerializeField] private Collider collider;
        protected override void Start()
        {
            base.Start();
            collider.transform.GetAsyncTriggerEnterTrigger().ForEachAsync((other =>
            {
                if (other.gameObject.transform.TryGetComponent<ChessCharacter_Enemy>(out var enemy))
                {
                    if (attackLimit<=0)
                    {
                        Debug.Log("攻击次数用完");
                        return;
                    }
                    ChessBoardMgr.Instance.EnterBattleScene(this,enemy).Forget();
                    attackLimit--;
                    
                }
            } ));
        }

        
    }
}