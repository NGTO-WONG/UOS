using System;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using UnityEngine.Events;

namespace Game.Script.AOT
{
    public class AwaitableEvent : Singleton<AwaitableEvent>
    {
        private  Dictionary<string, List<Func<UniTask>>> _questDic = new ();

        public enum AwaitTriggerType
        {
            All,
            Any,
        }
        
        public async UniTask TriggerEvent(string questName,AwaitTriggerType type=AwaitTriggerType.All)
        {
            var question = _questDic[questName];
            var tasks = Enumerable.Select(question, item => item.Invoke());
            switch (type)
            {
                case AwaitTriggerType.All:
                    await UniTask.WhenAll(tasks);
                    break;
                case AwaitTriggerType.Any:
                    await UniTask.WhenAny(tasks);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(type), type, null);
            }
        }

        public void AddListener(string questName, Func<UniTask> func)
        {
            if (!_questDic.ContainsKey(questName))
            {
                _questDic.Add(questName, new List<Func<UniTask>>());
            }
            _questDic[questName].Add(func);
        }
        
        public void RemoveListener(string questName, Func<UniTask> func)
        {
            if (_questDic.ContainsKey(questName))
            {
                _questDic[questName].Remove(func);
            }
        }
        
    }

    
}