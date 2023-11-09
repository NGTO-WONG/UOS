using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

public class RemoveMeshColliders : MonoBehaviour
{
    [MenuItem("Tools/Remove Mesh Colliders from Prefabs")]
    public static void RemoveCollidersFromPrefabs()
    {
        // 获取场景中的所有Prefab
        GameObject[] prefabs = GameObject.FindObjectsOfType<GameObject>();
        foreach (GameObject prefab in prefabs)
        {
            if (prefab.gameObject.name=="Village_Terrain")
            {
                continue;
            }
            MeshCollider meshCollider = prefab.GetComponent<MeshCollider>();
            if (meshCollider != null)
            {
                    
                
                // 检查Prefab是否包含MeshCollider组件
                if (prefab.TryGetComponent<Rigidbody>(out var rigidbody))
                {
                    rigidbody.useGravity = false;
                }
                    
                // 移除MeshCollider组件
                DestroyImmediate(meshCollider, true);

                // 标记Prefab为已修改，以便保存
                PrefabUtility.RecordPrefabInstancePropertyModifications(prefab);

                Debug.Log("Removed MeshCollider from Prefab: " + prefab.name);
            }
        }

        // 保存场景
        EditorSceneManager.SaveOpenScenes();
    }
}