using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace Game._Script.HotUpdate.Base
{
    public class GlobalEventDic
    {
        public const string StopPathFinding = "StopPathFinding";
        public const string TimelineEvent = "TimelineEvent";
    }
    
    
    public class EventManager<T> : Singleton<EventManager<T>>
    {
        private readonly Dictionary<string, AwaitableCommand<T>> _commandDictionary = new();

        /// <summary>
        /// 添加事件监听
        /// </summary>
        /// <param name="commandName"></param>
        /// <param name="func"></param>
        public void SubscribeEvent(string commandName, Func<T, CancellationToken, UniTask> func)
        {
            if (!_commandDictionary.ContainsKey(commandName))
            {
                _commandDictionary.Add(commandName, new AwaitableCommand<T>());
            }

            AwaitableCommand<T> command = _commandDictionary[commandName];
            command.Works.Add(func);
        }

        /// <summary>
        /// 移除监听
        /// </summary>
        /// <param name="commandName"></param>
        /// <param name="func"></param>
        public void RemoveListener(string commandName, Func<T, CancellationToken, UniTask> func)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;
            if (!_commandDictionary[commandName].Works.Contains(func)) return;

            _commandDictionary[commandName].Works.Remove(func);
            if (_commandDictionary[commandName].Works.Count == 0)
            {
                _commandDictionary.Remove(commandName);
            }
        }

        public async UniTask TriggerEventGuardScreen(string commandName,
            T param = default,
            AwaitableEventType executeType = AwaitableEventType.All)
        {
            ScreenGuardManager.Instance.AddGuard(commandName);
            var cancel= await TriggerEvent(commandName, param, executeType).SuppressCancellationThrow();
            if (cancel)
            {
                Debug.Log($"事件: {commandName} 被取消");
            }
            else
            {
                Debug.Log($"事件: {commandName} 执行成功");
            }
            ScreenGuardManager.Instance.RemoveGuard(commandName);
        }


        /// <summary>
        /// 触发事件
        /// </summary>
        /// <param name="commandName"></param>
        /// <param name="param"></param>
        /// <param name="executeType"></param>
        /// <exception cref="ArgumentOutOfRangeException"></exception>
        public async UniTask TriggerEvent(string commandName,
            T param = default,
            AwaitableEventType executeType = AwaitableEventType.All)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;

            _commandDictionary[commandName].CancellationTokenSource?.Cancel();
            _commandDictionary[commandName].CancellationTokenSource = new CancellationTokenSource();
            var tasks = new List<UniTask>();
            foreach (var item in _commandDictionary[commandName].Works)
            {
                tasks.Add(item.Invoke(param, _commandDictionary[commandName].CancellationTokenSource.Token));
            }

            switch (executeType)
            {
                case AwaitableEventType.All:
                    await UniTask.WhenAll(tasks)
                        .AttachExternalCancellation(_commandDictionary[commandName].CancellationTokenSource.Token);
                    break;
                case AwaitableEventType.Any:
                    await UniTask.WhenAny(tasks)
                        .AttachExternalCancellation(_commandDictionary[commandName].CancellationTokenSource.Token);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(executeType), executeType, null);
            }

            _commandDictionary[commandName].CancellationTokenSource = null;
        }

        /// <summary>
        /// 取消运行中的事件
        /// </summary>
        /// <param name="commandName"></param>
        public void CancelCommand(string commandName)
        {
            if (!_commandDictionary.ContainsKey(commandName)) return;
            _commandDictionary[commandName].CancellationTokenSource.Cancel();
        }
    }

    public class AwaitableCommand<TT>
    {
        public readonly List<Func<TT, CancellationToken, UniTask>> Works = new();
        public CancellationTokenSource CancellationTokenSource = new();
    }

    public enum AwaitableEventType
    {
        All,//等待所有事件完成后 await结束
        Any,//任意事件完成后 await结束
    }
}