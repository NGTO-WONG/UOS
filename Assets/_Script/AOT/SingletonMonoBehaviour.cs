//          ┌─┐       ┌─┐
//       ┌──┘ ┴───────┘ ┴──┐
//       │                 │
//       │       ───       │
//       │  ─┬┘       └┬─  │
//       │                 │
//       │       ─┴─       │
//       │                 │
//       └───┐         ┌───┘
//           │         │
//           │         │
//           │         │
//           │         └──────────────┐
//           │                        │
//           │                        ├─┐
//           │                        ┌─┘    
//           │                        │
//           └─┐  ┐  ┌───────┬──┐  ┌──┘         
//             │ ─┤ ─┤       │ ─┤ ─┤         
//             └──┴──┘       └──┴──┘ 
//                 神兽保佑 
//                 代码无BUG! 

using UnityEngine;

namespace Pheonix.Core
{
    public abstract class SingletonMonoBehaviour<T> : MonoBehaviour where T : MonoBehaviour
    {
        static Transform _root;

        private static T _instance;
        public static T Instance
        {
            get
            {
                if (_instance == null)
                {
                    if (_root == null)
                    {
                        var go = GameObject.Find("SingletonRoot");
                        if (go == null)
                        {
                            go = new GameObject("SingletonRoot");
                        }
                        _root = go.transform;

                        DontDestroyOnLoad(_root.gameObject);
                    }

                    _instance = FindObjectOfType<T>();
                    if (_instance == null)
                    {
                        GameObject go = new GameObject(typeof(T).Name);
                        _instance = go.AddComponent<T>();
                        _instance.transform.SetParent(_root);
                    }
                }
                return _instance;
            }
        }

        public static bool HasInstance
        {
            get
            {
                return _instance != null;
            }
        }

        public static void WarmUp()
        {
            var instance = Instance;
        }
    }
}
