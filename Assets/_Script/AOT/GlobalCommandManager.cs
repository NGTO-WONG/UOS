using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using COSXML.Log;
using Cysharp.Threading.Tasks;
using Pheonix.Core;
using UnityEngine;
using UnityEngine.Events;
using Object = UnityEngine.Object;

namespace Game.Script.AOT
{
    public class GlobalCommandManager : SingletonMonoBehaviour<GlobalCommandManager>
    {
        private Dictionary<string, GlobalCommand> _commandDictionary = new();

        public class GlobalCommand
        {
            public string CommandName;
            public List<Func<UniTask>> Funcs = new();
            public CancellationTokenSource CancellationTokenSource = new();
        }

        public enum GlobalCommandExecuteType
        {
            All,
            Any,
        }

        #region 添加事件监听

        public void RegisterEvent(string commandName, Func<UniTask> func)
        {
            if (!_commandDictionary.ContainsKey(commandName))
            {
                _commandDictionary.Add(commandName, new GlobalCommand());
            }

            GlobalCommand command = _commandDictionary[commandName];
            command.Funcs.Add(func);
        }
        

        #endregion


        #region 移除监听

        public void RemoveListener(string commandName, Func<UniTask> func)
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
            GlobalCommandExecuteType executeType = GlobalCommandExecuteType.All)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;

            var tasks = new List<UniTask>();
            foreach (var item in _commandDictionary[commandName].Funcs)
            {
                tasks.Add(item.Invoke());
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

        public void CancelRunningCommand(string commandName)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;
            _commandDictionary[commandName].CancellationTokenSource.Cancel();
        }

        #endregion
    }
}