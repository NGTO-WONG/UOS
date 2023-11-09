using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

public class RemoveMissingScriptsFromPrefabs : Editor
{
    [MenuItem("Tools/Remove Missing Scripts in Prefabs")]
    private static void FindAndRemoveMissingInPrefabs()
    {
        // 获得所有prefabs的路径
        string[] allPrefabs = GetAllPrefabs();
        int prefabCount = 0;
        int removalCount = 0;

        foreach (string prefabPath in allPrefabs)
        {
            GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
            if (prefab != null)
            {
                // 记录Prefab的状态，以便在完成后可以恢复它
                bool wasPrefabOpened = false;
                GameObject prefabInstance = null;

                if (!PrefabUtility.IsPartOfPrefabAsset(prefab))
                {
                    // 如果它是一个Prefab实例，我们需要打开它来修改
                    prefabInstance = PrefabUtility.LoadPrefabContents(prefabPath);
                    prefab = prefabInstance;
                    wasPrefabOpened = true;
                }

                // 移除missing脚本
                var removals = GameObjectUtility.RemoveMonoBehavioursWithMissingScript(prefab);
                if (removals > 0)
                {
                    // 应用更改到prefab
                    if (wasPrefabOpened)
                    {
                        PrefabUtility.SaveAsPrefabAsset(prefabInstance, prefabPath);
                        PrefabUtility.UnloadPrefabContents(prefabInstance);
                    }
                    else
                    {
                        EditorUtility.SetDirty(prefab);
                        AssetDatabase.SaveAssets();
                    }
                    removalCount += removals;
                }

                prefabCount++;
            }
        }

        Debug.Log($"Searched through {prefabCount} Prefabs, removed {removalCount} missing scripts");
    }

    private static string[] GetAllPrefabs()
    {
        string[] temp = AssetDatabase.GetAllAssetPaths();
        List<string> result = new List<string>();
        foreach (string s in temp)
        {
            if (s.EndsWith(".prefab"))
            {
                result.Add(s);
            }
        }
        return result.ToArray();
    }
}