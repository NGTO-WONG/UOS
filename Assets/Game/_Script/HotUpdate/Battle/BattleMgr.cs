using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using UnityEngine;
using YooAsset;

namespace Game._Script.HotUpdate.Battle
{
    public class BattleStartParam // 战斗参数类
    {
        public List<string> Player; // 玩家列表
        public List<string> Enemy; // 敌人列表
        public int EnvId; // 场景ID
    }
    public class BattleResultParam // 战斗参数类
    {
        public List<string> Player; // 玩家列表
        public List<string> Enemy; // 敌人列表
        public int EnvId; // 场景ID
    }

    public class BattleMgr : SingletonMonoBehaviour<BattleMgr> // 战斗管理器类
    {
        [SerializeField] private Transform playerStand; // 玩家站位
        [SerializeField] private Transform enemyStand; // 敌人站位
        [SerializeField] private CinemachineVirtualCamera playerVc; // 玩家虚拟摄像头
        [SerializeField] private CinemachineVirtualCamera enemyVc; // 敌人虚拟摄像头

        private List<BattleBaseCharacter> players=new List<BattleBaseCharacter>(); // 玩家角色列表
        private List<BattleBaseCharacter> enemies=new List<BattleBaseCharacter>(); // 敌人角色列表

        async UniTask MoveVirtualCameraAsync(CinemachineVirtualCamera vc) // 移动虚拟摄像头异步方法
        {
            playerVc.gameObject.SetActive(vc== playerVc); // 根据虚拟摄像头切换显示
            enemyVc.gameObject.SetActive(vc== enemyVc); // 根据虚拟摄像头切换显示
            if (Camera.main != null) // 如果主摄像头不为空
            {
                var blendTime = (int)Camera.main.GetComponent<CinemachineBrain>().m_DefaultBlend.BlendTime * 1000; // 获取混合时间
                await UniTask.Delay(100); // 等待混合时间
            }
        }
    
        public async UniTask<BattleResultParam> BattleBegin(BattleStartParam startParam) // 战斗开始异步方法
        {
            Debug.Log("场景id"+startParam.EnvId); // 打印场景ID
            playerVc.gameObject.SetActive(false); // 玩家虚拟摄像头不显示
            enemyVc.gameObject.SetActive(false); // 敌人虚拟摄像头不显示
        
            Debug.Log("创建角色"); // 打印创建角色

            foreach (var player in startParam.Player)
            {
                var t=YooAssets.LoadAssetAsync<GameObject>(player); // 加载玩家资源
                await t.ToUniTask(); // 等待资源加载完成
                var tempPlayer=Instantiate(t.AssetObject as GameObject,this.transform); // 实例化玩家对象
                tempPlayer.transform.position = new Vector3(playerStand.transform.position.x+10,0,0); // 设置位置
                tempPlayer.transform.rotation = Quaternion.Euler(0f, 180f, 0f); // 设置旋转
                players.Add(tempPlayer.GetComponent<BattleBaseCharacter>()); // 添加到玩家角色列表
            }
        
            //创建敌人

            foreach (var enemy in startParam.Enemy) // 遍历敌人列表
            {
                var t=YooAssets.LoadAssetAsync<GameObject>(enemy); // 加载敌人资源
                await t.ToUniTask(); // 等待资源加载完成
                var tempEnemy= Instantiate(t.AssetObject as GameObject,this.transform); // 实例化敌人对象
                tempEnemy.transform.localPosition = new Vector3(enemyStand.transform.position.x-10,0,0); // 设置位置
                enemies.Add(tempEnemy.GetComponent<BattleBaseCharacter>()); // 添加到敌人角色列表
            }
        
            //移动相机到角色方
            await MoveVirtualCameraAsync(playerVc); // 移动虚拟摄像头到玩家方
        
            for (int i = 0; i < players.Count; i++)
            {
                var player = players[i];
                await player.PlayEnterAnimation(playerStand.position+new Vector3(2*i,0,0), 2f); // 播放进场动画
            }
            //移动相机到敌方
            await MoveVirtualCameraAsync(enemyVc); // 移动虚拟摄像头到敌人方
            //敌人入场动画
            for (int i = 0; i < enemies.Count; i++)
            {
                var enemy = enemies[i];
                await enemy.PlayEnterAnimation(enemyStand.position-new Vector3(2*i,0,0), 2f); // 播放进场动画
            }
        
            //我方攻击逻辑
            foreach (var player in players) // 遍历玩家角色列表
            {
                var target = enemies[0]; // 目标设为第一个敌人
                await MoveVirtualCameraAsync(playerVc); // 移动虚拟摄像头到玩家方
                await UniTask.Delay(300);
                await player.Attack_Part1(target);//角色移动
                await MoveVirtualCameraAsync(enemyVc); // 移动虚拟摄像头到敌人方
                await player.Attack_Part2(target); // 角色攻击
            }
        
            //敌方攻击逻辑
            foreach (var player in enemies) // 遍历敌人角色列表
            {
                var target = players[0]; // 目标设为第一个玩家
                await MoveVirtualCameraAsync(enemyVc); // 移动虚拟摄像头到敌人方
                await UniTask.Delay(300);
                await player.Attack_Part1(target);//角色移动
                await MoveVirtualCameraAsync(playerVc); // 移动虚拟摄像头到玩家方
                await player.Attack_Part2(target); // 角色攻击
                await MoveVirtualCameraAsync(enemyVc); // 移动虚拟摄像头到敌人方
            }

            bool playerWin = true;
            if (playerWin)
            {
                await MoveVirtualCameraAsync(playerVc);
                var taskList = Enumerable.Select(players, player => player.PlayWinAnimationAsync());
                await UniTask.WhenAll(taskList);
            }
            
            return new BattleResultParam();

        }
    }
}