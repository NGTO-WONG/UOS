using Cysharp.Threading.Tasks;
using UnityEngine;
using XNode;

namespace Game._Script.HotUpdate.Xnode
{
    public class AdvBaseNode: Node
    {
        [Node.Input] public string input;
        [Node.Output] public string output;
         
        public async UniTask<AdvBaseNode> Play()
        {
            await NodeWork();
            if (GetPort("output")==null|| GetPort("output").Connection==null||GetPort("output").Connection.node==null)
            {
                AdvMgr.Instance.advFinish = true;
                return null;
            }
            else
            {
                return (AdvBaseNode)GetPort("output").Connection.node;
            }
        }//播放剧情 返回下一个剧情节点

        public virtual async UniTask NodeWork()
        {
            
        }
    }
}