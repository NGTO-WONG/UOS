using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace Game._Script.HotUpdate.Base
{

    public class ScreenGuardManager : SingletonMonoBehaviour<ScreenGuardManager>
    {
        
        public bool IsGuarded => _guardDic.Count > 0;
        private readonly Dictionary<string, int> _guardDic = new();

        public void AddGuard(string key)
        {
            if (!_guardDic.ContainsKey(key))
            {
                _guardDic.Add(key, 0);
            }

            _guardDic[key]++;

            gameObject.SetActive(true);
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
                gameObject.SetActive(false);
            }
        }
    }
}