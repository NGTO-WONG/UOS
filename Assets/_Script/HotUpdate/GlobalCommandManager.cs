using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using Pheonix.Core;

public enum GlobalCommandExecuteType
{
    All,
    Any,
}

public class GlobalCommandManager<T> : Singleton<GlobalCommandManager<T>>
{

    private class GlobalCommand<TT>
    {
        public readonly List<Func<TT, CancellationToken, UniTask>> Works = new();
        public CancellationTokenSource CancellationTokenSource = new();
    }
    
    private readonly Dictionary<string, GlobalCommand<T>> _commandDictionary = new();

    /// <summary>
    /// 添加事件监听
    /// </summary>
    /// <param name="commandName"></param>
    /// <param name="func"></param>
    public void RegisterEvent(string commandName, Func<T, CancellationToken, UniTask> func)
    {
        if (!_commandDictionary.ContainsKey(commandName))
        {
            _commandDictionary.Add(commandName, new GlobalCommand<T>());
        }

        GlobalCommand<T> command = _commandDictionary[commandName];
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

    /// <summary>
    /// 触发事件
    /// </summary>
    /// <param name="commandName"></param>
    /// <param name="executeType"></param>
    /// <param name="param"></param>
    /// <exception cref="ArgumentOutOfRangeException"></exception>
    public async UniTask ExecuteEvent(string commandName,
        GlobalCommandExecuteType executeType = GlobalCommandExecuteType.All,
        T param = default)
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