using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using Pheonix.Core;

namespace Game.Script.AOT
{
    public enum GlobalCommandExecuteType
    {
        All,
        Any,
    }
    
    public class GlobalCommandManager<T> : Singleton<GlobalCommandManager<T>>
    {
        private Dictionary<string, GlobalCommand<T>> _commandDictionary = new();

        public class GlobalCommand<T>
        {
            public string CommandName;
            public List<Func<T,UniTask>> Funcs = new();
            public CancellationTokenSource CancellationTokenSource = new();
        }


        #region 添加事件监听

        public void RegisterEvent(string commandName, Func<T,UniTask> func)
        {
            if (!_commandDictionary.ContainsKey(commandName))
            {
                _commandDictionary.Add(commandName, new GlobalCommand<T>());
            }

            GlobalCommand<T> command = _commandDictionary[commandName];
            command.Funcs.Add(func);
        }
        

        #endregion


        #region 移除监听

        public void RemoveListener(string commandName, Func<T,UniTask> func)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;
            if (!_commandDictionary[commandName].Funcs.Contains(func)) return;

            _commandDictionary[commandName].Funcs.Remove(func);
            if (_commandDictionary[commandName].Funcs.Count == 0)
            {
                _commandDictionary.Remove(commandName);
            }
        }

        #endregion


        #region 触发事件

        public async UniTask ExecuteEvent(string commandName,
            GlobalCommandExecuteType executeType = GlobalCommandExecuteType.All,
            T param=default)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;

            var tasks = new List<UniTask>();
            foreach (var item in _commandDictionary[commandName].Funcs)
            {
                tasks.Add(item.Invoke(param));
            }

            switch (executeType)
            {
                case GlobalCommandExecuteType.All:
                    await UniTask.WhenAll(tasks)
                        .AttachExternalCancellation(_commandDictionary[commandName].CancellationTokenSource.Token);
                    break;
                case GlobalCommandExecuteType.Any:
                    await UniTask.WhenAny(tasks)
                        .AttachExternalCancellation(_commandDictionary[commandName].CancellationTokenSource.Token);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(executeType), executeType, null);
            }
        }
        

        #endregion


        #region 取消运行中的事件

        public void CancelCommand(string commandName)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;
            _commandDictionary[commandName].CancellationTokenSource.Cancel();
        }

        #endregion
    }
}