using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game._Script.HotUpdate.Base
{

    public class ScreenGuardManager : Singleton<ScreenGuardManager>
    {
        public bool IsGuarded => _guardDic.Count > 0;
        public GameObject _guardCanvas;
        private readonly Dictionary<string, int> _guardDic = new();

        public void AddGuard(string key)
        {
            TryToCreateGuard();
            if (!_guardDic.ContainsKey(key))
            {
                _guardDic.Add(key, 0);
            }

            _guardDic[key]++;

            _guardCanvas.SetActive(true);
        }

        public void RemoveGuard(string key)
        {
            if (!_guardDic.ContainsKey(key) || _guardDic[key] == 0)
            {
                Debug.Log($"ガードされていないキーでガードを解除しようとしました key:{key}");
                return;
            }

            _guardDic[key] -= 1;

            if (_guardDic[key] <= 0)
            {
                _guardDic.Remove(key);
            }

            if (_guardDic.Count == 0)
            {
                _guardCanvas.SetActive(false);
            }
        }

        void TryToCreateGuard()
        {
            if(_guardCanvas != null)
            {
                return;
            }

            _guardCanvas = GameObject.Instantiate(Resources.Load<GameObject>("UIGuardCanvas"));
            //GameObject.DontDestroyOnLoad(_guardCanvas);
        }
        
    }
}