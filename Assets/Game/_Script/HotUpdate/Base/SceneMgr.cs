using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Battle;
using Game._Script.HotUpdate.Xnode;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace Game._Script.HotUpdate.Base
{
    public class SceneMgr : Singleton<SceneMgr>
    {
        public async UniTask<BattleResultParam> StartBattleAsync(BattleStartParam startParam)
        {
            await UIManager.Instance.Fade(true, 1);
            Scene oldScene = SceneManager.GetActiveScene();
            // 战斗前隐藏当前场景
            SetActiveStateForAllRootObjects(false,oldScene);
            //加载战斗场景 
            var battleScene=await ResMgr.Instance.LoadSceneAsync("Battle", LoadSceneMode.Additive);
            await UIManager.Instance.Fade(false, 3f);
            var result = await BattleMgr.Instance.BattleBegin(startParam); //进行战斗 拿到战斗结果
            await SceneManager.UnloadSceneAsync(battleScene).ToUniTask(); //战斗结束 卸载战斗场景
            SetActiveStateForAllRootObjects(true,oldScene);
            return result;
        }
        
        /// <summary>
        /// 播放adv剧情
        /// </summary>
        public async UniTask StartAdvAsync(string advId)
        {
            await UIManager.Instance.Fade(true, 1);//黑幕开始
            Scene oldScene = SceneManager.GetActiveScene();
            SetActiveStateForAllRootObjects(false,oldScene);
            var advData = await ResMgr.Instance.LoadAsync<AdvSceneData>("AdvSceneData_"+advId);//拿到adv数据
            var storyGraph = await ResMgr.Instance.LoadAsync<StoryGraph>("AdvSceneGraph_"+advId);//拿到adv数据
            var advScene= await ResMgr.Instance.LoadSceneAsync("AdvScene", LoadSceneMode.Additive);//加载adv场景
            await UIManager.Instance.Fade(false, 3f);//黑幕结束
            await AdvMgr.Instance.PlayAdv(storyGraph,advData);//进行adv场景里的所有逻辑
            await SceneManager.UnloadSceneAsync(advScene).ToUniTask();//adv结束 卸载adv场景
            SetActiveStateForAllRootObjects(true,oldScene);//恢复旧场景
        }

        // 设置场景中所有根对象的活动状态
        private void SetActiveStateForAllRootObjects(bool state, Scene oldScene)
        {
            GameObject[] rootObjects = oldScene.GetRootGameObjects();
            foreach (GameObject obj in rootObjects)
            {
                obj.SetActive(state);
            }
        }
    }
}