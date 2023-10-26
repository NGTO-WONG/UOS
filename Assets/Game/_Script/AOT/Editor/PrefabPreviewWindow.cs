#if UNITY_EDITOR
using System.Collections.Generic;
using Spine.Unity;
using Spine.Unity.Editor;
using UnityEditor;
using UnityEngine;

public class PrefabPreviewWindow : EditorWindow
{
    [MenuItem("Window/Prefab Preview")]
    public static void ShowWindow()
    {
        GetWindow<PrefabPreviewWindow>("Prefab Preview");
    }

    private GameObject previewInstance;
    private SkeletonAnimation skeletonAnimation;
    private GameObject selectedPrefab;
    
    private Editor gameObjectEditor;
    private string[] animationNames;
    private int selectedAnimationIndex;
    
    
    private bool isPlaying = false;
    private bool loop = false;
    private Vector2 scrollPosition;
    void OnGUI()
    {       
        
        selectedPrefab = (GameObject)EditorGUILayout.ObjectField("SkeletonAnimation", selectedPrefab, typeof(GameObject), false);
        
        if (GUILayout.Button("Preview"))
        {
            if (!selectedPrefab) return;
            if (previewInstance) DestroyImmediate(previewInstance);
            previewInstance = (GameObject)PrefabUtility.InstantiatePrefab(selectedPrefab);
            skeletonAnimation = previewInstance.GetComponent<SkeletonAnimation>();
            gameObjectEditor = Editor.CreateEditor(previewInstance);
            animationNames = GetSpineAnimationNames(skeletonAnimation);
        }

        if (previewInstance)
        {
            gameObjectEditor.OnInteractivePreviewGUI(GUILayoutUtility.GetRect(300, 300), GUIStyle.none);
        }
        
        GUIStyle horizontalScrollbarStyle = new GUIStyle(GUI.skin.horizontalScrollbar);
        horizontalScrollbarStyle.fixedHeight = 20;  // Set the height of the horizontal scrollbar

        //动画
        //切动画
        
        GUILayout.BeginHorizontal();
        if (previewInstance)
        {
            var oldIndex = selectedAnimationIndex;
            var newIndex = EditorGUILayout.Popup("Animation", oldIndex, animationNames);
            if (oldIndex!=newIndex)
            {
                selectedAnimationIndex = newIndex;
            }
        }
        skeletonAnimation = (SkeletonAnimation)EditorGUILayout.ObjectField("Spine Skeleton Animation", skeletonAnimation, typeof(SkeletonAnimation), true);
        loop = EditorGUILayout.Toggle("Loop", loop);

        if (skeletonAnimation != null)
        {
            if (GUILayout.Button("Play"))
            {
                skeletonAnimation.AnimationName = animationNames[selectedAnimationIndex];
                skeletonAnimation.AnimationState.SetAnimation(0, animationNames[selectedAnimationIndex], loop);
            }

            if (GUILayout.Button("Stop"))
            {
                skeletonAnimation.AnimationState.ClearTrack(0);
            }
        }
        GUILayout.EndHorizontal();
        
        scrollPosition = GUILayout.BeginScrollView(
            scrollPosition,
            true,
            false,
            horizontalScrollbarStyle,  // Pass the custom style for the horizontal scrollbar
            GUI.skin.horizontalScrollbar
        );
        
        GUILayout.BeginHorizontal();
        for (int i = 0; i < 100; i++)
        {
            if (GUILayout.Button("Preview", GUILayout.Width(20), GUILayout.Height(200)))
            {
                Debug.Log("a");
            }
        }
        GUILayout.EndHorizontal();
        GUILayout.EndScrollView();
        
        return;

    }

    string[] GetSpineAnimationNames(SkeletonAnimation skeletonAnimation)
    {
        List<string> names = new List<string>();
        if (skeletonAnimation)
        {
            foreach (var animation in skeletonAnimation.Skeleton.Data.Animations)
            {
                names.Add(animation.Name);
            }
        }
        return names.ToArray();
    }


    void DestroyPreview()
    {
        if (gameObjectEditor) DestroyImmediate(gameObjectEditor);
        if (previewInstance) DestroyImmediate(previewInstance);
    }

    void OnDestroy()
    {
        DestroyPreview();
    }
}
#endif
