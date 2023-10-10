using UnityEngine;

public class SingletonMonoBehaviour<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T instance;

    // 获取单例实例
    public static T Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<T>();

                if (instance == null)
                {
                    Debug.LogError($"SingletonMonoBehaviour<{typeof(T).Name}> instance not found in the scene. Make sure the script is attached to a GameObject in the scene.");
                }
            }

            return instance;
        }
    }

    // 防止在场景中手动创建新实例
    protected virtual void Awake()
    {
        if (instance == null)
        {
            instance = this as T;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
}