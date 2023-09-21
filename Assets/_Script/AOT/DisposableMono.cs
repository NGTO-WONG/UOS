using System;
using System.Collections.Generic;
using UnityEngine;

namespace Game.Script.AOT
{
    
    
    public class DisposableMono : MonoBehaviour , IDisposable
    {
        
        protected CompositeDisposable mSubscriptions;
        public void Dispose()
        {
            
            if (this == null)
            {
                return;
            }
            if (mSubscriptions != null)
            {
                mSubscriptions.Dispose();
                mSubscriptions = null;
            }

            if (this != null)
            {
                Destroy(gameObject);
            }
        }
    }
    
    public sealed class CompositeDisposable : IDisposable
    {
        private List<IDisposable> mSubscriptions;
        private bool              mIsDisposed;

        public static int CurrentTotalReference { get; private set; }

        public static CompositeDisposable Create()
        {
            CurrentTotalReference++;
            return new CompositeDisposable();
        }

        private CompositeDisposable()
        {
            mSubscriptions = new List<IDisposable>();
        }

        public bool IsDisposed => mIsDisposed;

        public void Add(IDisposable disposable)
        {
            if (mIsDisposed)
            {
                disposable.Dispose();
            }
            else
            {
                mSubscriptions.Add(disposable);
            }
        }

        public void Clear()
        {
            for (var i = 0; i < mSubscriptions.Count; i++)
            {
                mSubscriptions[i].Dispose();
            }

            mSubscriptions.Clear();
        }

        public void Dispose()
        {
            if (!mIsDisposed)
            {
                mIsDisposed = true;
                Clear();
                mSubscriptions = null;
                CurrentTotalReference--;
            }
        }
    }
    
    
    
}