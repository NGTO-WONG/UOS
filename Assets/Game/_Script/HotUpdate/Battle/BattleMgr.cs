using System.Collections.Generic;
using Cinemachine;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using Game._Script.HotUpdate.Battle;
using UnityEngine;
using UnityEngine.Serialization;
using YooAsset;

public class BattleParam
{
    public List<string> Player;
    public List<string> Enemy;
    public int EnvId;
}

public class BattleMgr : SingletonMonoBehaviour<BattleMgr>
{
    [SerializeField] private Transform playerStand;
    [SerializeField] private Transform enemyStand;
    [SerializeField] private CinemachineVirtualCamera playerVc;
    [SerializeField] private CinemachineVirtualCamera enemyVc;

    private List<BattleBaseCharacter> players=new List<BattleBaseCharacter>();
    private List<BattleBaseCharacter> enemies=new List<BattleBaseCharacter>();
    
    public async UniTask BattleBegin(BattleParam param)
    {
        Debug.Log("场景id"+param.EnvId);
        playerVc.gameObject.SetActive(false);
        enemyVc.gameObject.SetActive(false);
        //创建角色
        foreach (var player in param.Player)
        {
            var t=YooAssets.LoadAssetAsync<GameObject>(player);
            await t.ToUniTask();
            var tempPlayer=Instantiate(t.AssetObject as GameObject,this.transform) ;
            tempPlayer.transform.position = playerStand.position+new Vector3(10,0,0);
            players.Add(tempPlayer.GetComponent<BattleBaseCharacter>());
        }
        
        //创建敌人
        foreach (var enemy in param.Enemy)
        {
            var t=YooAssets.LoadAssetAsync<GameObject>(enemy);
            await t.ToUniTask();
            var tempEnemy= Instantiate(t.AssetObject as GameObject,this.transform);
            tempEnemy.transform.position = enemyStand.position+new Vector3(-10,0,0);
            enemies.Add(tempEnemy.GetComponent<BattleBaseCharacter>());
        }
        
        //移动相机到角色方
        playerVc.gameObject.SetActive(true);
        await UniTask.Delay(2000);
        
        //角色入场动画
        foreach (var player in players)
        {
            await player.PlayEnterAnimation(playerStand.position,2f);
        }
        
        //移动相机到敌方
        enemyVc.gameObject.SetActive(true);
        await UniTask.Delay(2000);
        
        //敌人入场动画
        foreach (var enemy in enemies)
        {
            await enemy.PlayEnterAnimation(enemyStand.position, 2f);
        }
        await UniTask.Delay(2000);

        
        foreach (var player in players)
        {
            var target = enemies[0];
            playerVc.gameObject.SetActive(true);
            await player.Attack_Part1(target);//角色移动
            enemyVc.gameObject.SetActive(true);
            await player.Attack_Part2(target);
            
        }
        
        await UniTask.Delay(2000);
        Debug.Log("玩家进攻");
        await UniTask.Delay(1000);
        Debug.Log("敌人进攻");
        await UniTask.Delay(1000);
        Debug.Log("结束退出");
        await UniTask.Delay(1000);
    }
}
