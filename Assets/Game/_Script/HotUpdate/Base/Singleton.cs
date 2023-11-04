using System;

namespace Game._Script.HotUpdate.Base
{
    public class Singleton<TInstance> : IDisposable
        where TInstance : Singleton<TInstance>, new()
    {
        private static TInstance _mInstance;

        public static bool HasInstance => _mInstance != null;

        public static TInstance Instance
        {
            get
            {
                if (_mInstance == null)
                {
                    CreateInstance();
                }

                return _mInstance;
            }
        }

        /// <summary>
        /// 创建实例
        /// </summary>
        private static IDisposable CreateInstance()
        {
            if (HasInstance)
            {
                return _mInstance;
            }

            _mInstance = new TInstance();
            _mInstance.OnCreated();
            return _mInstance;
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

            _mInstance.OnDisposed();
            _mInstance = null;
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
}