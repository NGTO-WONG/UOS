using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Singleton<TInstance> : IDisposable
    where TInstance : Singleton<TInstance>, new()
{
    private static TInstance mInstance;

    public static bool HasInstance => mInstance != null;
    public static TInstance Instance => mInstance;

    /// <summary>
    /// 创建实例
    /// </summary>
    public static IDisposable CreateInstance()
    {
        if (HasInstance)
        {
            return mInstance;
        }

        mInstance = new TInstance();
        mInstance.OnCreated();
        return mInstance;
    }

    // ------------------------------
    /// <summary>
    /// 销毁
    /// </summary>
    public void Dispose()
    {
        if (!HasInstance)
        {
            return;
        }

        mInstance.OnDisposed();
        mInstance = null;
    }

    // ------------------------------
    /// <summary>
    /// 创建实例时调用
    /// </summary>
    protected virtual void OnCreated()
    {
    }

    // ------------------------------
    /// <summary>
    /// 销毁实例时调用
    /// </summary>
    protected virtual void OnDisposed()
    {
    }
}