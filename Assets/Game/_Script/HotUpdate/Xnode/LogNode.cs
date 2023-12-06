using Cysharp.Threading.Tasks;
using UnityEngine;
using XNode;

namespace Game._Script.HotUpdate.Xnode
{    
    [CreateNodeMenu("M/LogNode")]
    public class LogNode : AdvBaseNode
    {
        public string text;
        public override async UniTask NodeWork()
        {
            Debug.Log(text);
            await UniTask.Delay(1000);
        }
    }
}