using System;
using System.Collections.Generic;
using Cinemachine;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle.ChessBoard
{
    public class ChessBoardMgr : SingletonMonoBehaviour<ChessBoardMgr>
    {
        [SerializeField] private CinemachineVirtualCamera virtualCamera;
        private bool isDragging;
        private Vector3 targetPosition;
        private ChessCharacter selectingChessCharacter;
        void Update()
        {
            // 检测鼠标左键点击
            if (Input.GetMouseButtonDown(0))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                int layerMask = 1 << LayerMask.NameToLayer("Player");
                if (Physics.Raycast(ray, out var hit, Mathf.Infinity, layerMask))
                {
                    if (hit.collider.gameObject.TryGetComponent<ChessCharacter_Friendly>(out var chess))
                    {
                        selectingChessCharacter = chess;
                        virtualCamera.Follow = selectingChessCharacter.transform;
                        isDragging = true;
                        chess.SelectHandler().Forget();
                    }
                }
            }

            if (isDragging)
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                int layerMask = 1 << LayerMask.NameToLayer("Ground");
                if (Physics.Raycast(ray, out var hit, Mathf.Infinity, layerMask))
                {
                    selectingChessCharacter.ResetPath();
                    var path= selectingChessCharacter.TryCalculatePath(hit.point);
                    if (Input.GetMouseButtonUp(0))
                    {
                        isDragging = false;
                        selectingChessCharacter.MoveByPath(path).Forget();
                    }
                }
            }
            
            
        }
        
       public async UniTask EnterBattleScene(ChessCharacter attacker,ChessCharacter defender )
        {
            //停止其他寻路
            EventManager<bool>.Instance.TriggerEvent("StopPathFinding", true).Forget();
            var t = new BattleStartParam
            {
                Attacker = attacker.teamMember,
                Defender = defender.teamMember,
                EnvId = 0
            };
            //进入战斗系统+拿到战斗最后的结果
            var battleResult=await SceneMgr.Instance.StartBattleAsync(t);
            //战斗结束播放动画
            await UniTask.Delay(300);
            List<UniTask> taskList;
            switch (battleResult.Winner)
            {
                case BattleResultParam.BattleResultWinner.Attacker:
                    taskList = new List<UniTask>
                    {
                        attacker.BattleFinishAnimationAsync(true),
                        defender.BattleFinishAnimationAsync(false)
                    };
                    await UniTask.WhenAll(taskList);
                    break;
                case BattleResultParam.BattleResultWinner.Defender:
                    taskList = new List<UniTask>
                    {
                        attacker.BattleFinishAnimationAsync(false),
                        defender.BattleFinishAnimationAsync(true)
                    };
                    await UniTask.WhenAll(taskList);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}