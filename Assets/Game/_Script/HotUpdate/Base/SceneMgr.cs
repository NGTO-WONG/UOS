using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace Game._Script.HotUpdate.Base
{
    public class SceneMgr : Singleton<SceneMgr>
    {
        public async UniTask EnterBattleScene(BattleParam param)
        {
            
            Scene oldScene = SceneManager.GetActiveScene();
            // 隐藏当前场景
            SetActiveStateForAllRootObjects(false,oldScene);
            
            var package = YooAssets.GetPackage("DefaultPackage");
            SceneOperationHandle handle = package.LoadSceneAsync("Battle", LoadSceneMode.Additive);
            await handle.Task;
            await BattleMgr.Instance.BattleBegin(param);
            SceneManager.UnloadSceneAsync(handle.SceneObject);
            
            //战斗完后恢复
            SetActiveStateForAllRootObjects(true,oldScene);


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