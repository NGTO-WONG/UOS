using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.Linq;
using Cysharp.Threading.Tasks.Triggers;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using PlayTextSupport;
using Spine.Unity;
using UnityEngine;
using UnityEngine.AI;

namespace Game._Script.HotUpdate.Battle.ChessBoard
{
    [RequireComponent(typeof(NavMeshAgent)
        ,typeof(CharacterController))]
    public class ChessCharacter: MonoBehaviour
    {
        private NavMeshAgent navMeshAgent;
        private CharacterController characterController;
        private SkeletonAnimation skeletonAnimation;
        private LineRenderer lineRenderer;
        [SpineAnimation] public string animation_select;
        [SpineAnimation] public string animation_run;
        [SpineAnimation] public string animation_idle;
        [SpineAnimation] public string animation_win;
        [SpineAnimation] public string animation_lose;

        public List<string> teamMember=new List<string>();
        public int attackLimit = 1;

        public async UniTask BattleFinishAnimationAsync( bool isWin)
        {
            if (isWin)
            {
                await skeletonAnimation.PlayAnimationAsync(animation_win);
                skeletonAnimation.PlayAnimationLoop(animation_idle);
            }
            else
            {
                await skeletonAnimation.PlayAnimationAsync(animation_lose);
            }
        }

        public virtual async UniTask SelectHandler()
        {
            skeletonAnimation.PlayAnimationAsync(animation_select).Forget();
            await transform.DOScale(new Vector3(1f, 0.6f, 1f), 0.2f).SetEase(Ease.OutQuad).ToUniTask();
            await transform.DOScale(Vector3.one, 0.2f).SetEase(Ease.OutBounce);
        }

        private void Update()
        {
            // if (Input.GetKeyDown(KeyCode.A))
            // {
            //     EventManager<bool>.Instance.TriggerEvent("StopPathFinding", true).Forget();
            // }
            // if (Input.GetKeyDown(KeyCode.B))
            // {
            //     EventManager<bool>.Instance.TriggerEvent("StopPathFinding", false).Forget();
            // }
        }
        

        protected virtual void Start()
        {
            EventManager<bool>.Instance.SubscribeEvent(GlobalEventDic.StopPathFinding, async (b, token) =>
            {
                navMeshAgent.isStopped = b;
            });
            skeletonAnimation = GetComponentInChildren<SkeletonAnimation>();            
            lineRenderer = GetComponentInChildren<LineRenderer>();
            navMeshAgent = GetComponent<NavMeshAgent>();
            characterController = GetComponent<CharacterController>();
        }

        public NavMeshPath TryCalculatePath(Vector3 hitInfoPoint)
        {
            lineRenderer.gameObject.SetActive(true);
            NavMeshPath path = new NavMeshPath();
            navMeshAgent.CalculatePath(hitInfoPoint, path);
            lineRenderer.positionCount = path.corners.Length;
            lineRenderer.SetPositions(path.corners);
            return path;
        }

        public void ResetPath()
        {
            navMeshAgent.ResetPath();
        }


        public async UniTask MoveByPath(NavMeshPath path)
        {
            navMeshAgent.SetPath(path);
            skeletonAnimation.PlayAnimationLoop(animation_run);
            await UniTask.WaitUntil(() => Vector3.Distance(path.corners[^1],transform.position)<=0.2f);
            lineRenderer.gameObject.SetActive(false);
            skeletonAnimation.PlayAnimationLoop(animation_idle);
        }
    }
}