using System;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.Base;
using GraphSpace;
using UnityEngine;

namespace Game._Script.HotUpdate.Xnode
{
    public class AdvSceneParam
    {
        private string dataName;
    }

    public class AdvMgr : SingletonMonoBehaviour<AdvMgr>
    {
        [SerializeField] private StoryGraph storyGraph;
        [SerializeField] private AdvSceneData data;
        public AdvBaseNode currentNode;
        public bool advFinish = false;

        public async UniTask PlayAdv(StoryGraph storyGraph, AdvSceneData data)
        {
            this.storyGraph = storyGraph;
            this.data = data;
            Debug.Log("开始");
            await UniTask.WaitUntil(() => advFinish);
            Debug.Log("结束");
        }

        private async void Update()
        {
            if (Input.GetKeyDown(KeyCode.A))
            {
                currentNode ??= (AdvBaseNode)storyGraph.nodes[0];
                var nextNode= await currentNode.Play();
                currentNode = nextNode;
            }
        }
    }
}