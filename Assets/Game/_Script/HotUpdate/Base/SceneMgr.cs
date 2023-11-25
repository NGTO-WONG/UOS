using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Battle;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace Game._Script.HotUpdate.Base
{
    public class SceneMgr : Singleton<SceneMgr>
    {
        public async UniTask<BattleResultParam> StartBattleAsync(BattleStartParam startParam)
        {
            Scene oldScene = SceneManager.GetActiveScene();
            // 战斗前隐藏当前场景
            SetActiveStateForAllRootObjects(false,oldScene);
            //加载战斗场景 
            var package = YooAssets.GetPackage("DefaultPackage");
            SceneOperationHandle handle = package.LoadSceneAsync("Battle", LoadSceneMode.Additive);
            await handle.Task;
            //进行战斗 拿到战斗结果
            var result = await BattleMgr.Instance.BattleBegin(startParam);
            //战斗完后恢复旧场景
            var unloadSceneAsync=SceneManager.UnloadSceneAsync(handle.SceneObject);
            await unloadSceneAsync.ToUniTask();
            SetActiveStateForAllRootObjects(true,oldScene);
            return result;
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