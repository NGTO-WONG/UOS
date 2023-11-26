using System;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using UnityEngine;
using UnityEngine.Serialization;
using YooAsset;

namespace Game._Script.HotUpdate.Battle
{
    public class BattleStartParam // 战斗参数类
    {
        public List<string> Attacker; // 
        public List<string> Defender; // 
        public int EnvId; // 场景ID
    }
    public class BattleResultParam // 战斗参数类
    {
        public List<string> Attacker; // 攻击方列表
        public List<string> Defender; // 防守方列表
        public BattleResultWinner Winner;
        public enum BattleResultWinner
        {
            Attacker,
            Defender,
        }
    }

    public class BattleMgr : SingletonMonoBehaviour<BattleMgr> // 战斗管理器类
    {
        [FormerlySerializedAs("playerStand")] [SerializeField] private Transform attackerStand; // 攻击方站位
        [FormerlySerializedAs("enemyStand")] [SerializeField] private Transform defenderStand; // 防守方站位
        [FormerlySerializedAs("playerVc")] [SerializeField] private CinemachineVirtualCamera attackerVc; // 攻击方虚拟摄像头
        [FormerlySerializedAs("enemyVc")] [SerializeField] private CinemachineVirtualCamera defenderVc; // 防守方虚拟摄像头

        private List<BattleBaseCharacter> attackers=new List<BattleBaseCharacter>(); // 攻击方角色列表
        private List<BattleBaseCharacter> defenders=new List<BattleBaseCharacter>(); // 防守方角色列表

        async UniTask MoveVirtualCameraAsync(CinemachineVirtualCamera vc) // 移动虚拟摄像头异步方法
        {
            attackerVc.gameObject.SetActive(vc== attackerVc); // 根据虚拟摄像头切换显示
            defenderVc.gameObject.SetActive(vc== defenderVc); // 根据虚拟摄像头切换显示
            if (Camera.main != null) // 如果主摄像头不为空
            {
                var blendTime = (int)Camera.main.GetComponent<CinemachineBrain>().m_DefaultBlend.BlendTime * 1000; // 获取混合时间
                await UniTask.Delay(100); // 等待混合时间
            }
        }
    
        public async UniTask<BattleResultParam> BattleBegin(BattleStartParam startParam) // 战斗开始异步方法
        {
            Debug.Log("场景id"+startParam.EnvId); // 打印场景ID
            attackerVc.gameObject.SetActive(false); // 攻击方虚拟摄像头不显示
            defenderVc.gameObject.SetActive(false); // 防守方虚拟摄像头不显示
        
            Debug.Log("创建角色"); // 打印创建角色

            foreach (var attcker in startParam.Attacker)
            {
                var t=YooAssets.LoadAssetAsync<GameObject>(attcker); // 加载攻击方资源
                await t.ToUniTask(); // 等待资源加载完成
                var tempPlayer=Instantiate(t.AssetObject as GameObject,this.transform); // 实例化攻击方对象
                tempPlayer.transform.position = new Vector3(attackerStand.transform.position.x+10,0,0); // 设置位置
                attackers.Add(tempPlayer.GetComponent<BattleBaseCharacter>()); // 添加到攻击方角色列表
            }
        
            //创建防守方

            foreach (var defender in startParam.Defender) // 遍历防守方列表
            {
                var t=YooAssets.LoadAssetAsync<GameObject>(defender); // 加载防守方资源
                await t.ToUniTask(); // 等待资源加载完成
                var tempEnemy= Instantiate(t.AssetObject as GameObject,this.transform); // 实例化防守方对象
                tempEnemy.transform.localPosition = new Vector3(defenderStand.transform.position.x-10,0,0); // 设置位置
                tempEnemy.transform.localScale = new Vector3(-1,1,1);
                defenders.Add(tempEnemy.GetComponent<BattleBaseCharacter>()); // 添加到防守方角色列表
            }
        
            await MoveVirtualCameraAsync(attackerVc); // 移动虚拟摄像头到攻击方方
        
            for (int i = 0; i < attackers.Count; i++)
            {
                var player = attackers[i];
                await player.PlayEnterAnimation(attackerStand.position+new Vector3(2*i,0,0), 2f); // 播放进场动画
            }
            await MoveVirtualCameraAsync(defenderVc); // 移动虚拟摄像头到防守方方
            //防守方入场动画
            for (int i = 0; i < defenders.Count; i++)
            {
                var enemy = defenders[i];
                await enemy.PlayEnterAnimation(defenderStand.position-new Vector3(2*i,0,0), 2f); // 播放进场动画
            }
        
            //攻击方攻击逻辑
            foreach (var player in attackers) // 遍历攻击方角色列表
            {
                var target = defenders[0]; // 目标设为第一个防守方
                await MoveVirtualCameraAsync(attackerVc); // 移动虚拟摄像头到攻击方方
                await UniTask.Delay(300);
                await player.Attack_Part1(target);//角色移动
                await MoveVirtualCameraAsync(defenderVc); // 移动虚拟摄像头到防守方方
                await player.Attack_Part2(target); // 角色攻击
            }
        
            //敌方攻击逻辑
            foreach (var player in defenders) // 遍历防守方角色列表
            {
                var target = attackers[0]; // 目标设为第一个攻击方
                await MoveVirtualCameraAsync(defenderVc); // 移动虚拟摄像头到防守方方
                await UniTask.Delay(300);
                await player.Attack_Part1(target);//角色移动
                await MoveVirtualCameraAsync(attackerVc); // 移动虚拟摄像头到攻击方方
                await player.Attack_Part2(target); // 角色攻击
                await MoveVirtualCameraAsync(defenderVc); // 移动虚拟摄像头到防守方方
            }

            //todo 胜利条件判断
            BattleResultParam.BattleResultWinner winner = BattleResultParam.BattleResultWinner.Attacker;
            IEnumerable<UniTask> winAnimationList;
            switch (winner)
            { 
                case BattleResultParam.BattleResultWinner.Attacker:
                {
                    await MoveVirtualCameraAsync(attackerVc);
                    winAnimationList = Enumerable.Select(attackers, chara => chara.PlayWinAnimationAsync());
                    break;
                }
                case BattleResultParam.BattleResultWinner.Defender:
                    await MoveVirtualCameraAsync(defenderVc);
                    winAnimationList = Enumerable.Select(defenders, chara => chara.PlayWinAnimationAsync());
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
            await UniTask.WhenAll(winAnimationList);

            
            return new BattleResultParam()
            {
                Winner = BattleResultParam.BattleResultWinner.Attacker
            };

        }
    }
}