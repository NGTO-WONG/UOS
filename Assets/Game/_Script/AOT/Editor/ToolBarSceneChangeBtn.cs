using System;
using System.Collections.Generic;
using System.Reflection;
using Game._Script.AOT.Editor;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.UIElements;

[InitializeOnLoad]
public class SceneSwitchButton
{
    static SceneSwitchButton()
    {
        ToolbarExtender.LeftToolbarGUI.Add(OnLeftToolbarGUI);
        ToolbarExtender.RightToolbarGUI.Add(OnRightToolbarGUI);
    }

    static void OnLeftToolbarGUI()
    {
        if (GUILayout.Button(new GUIContent("更新git", "更新git"), ToolbarStyles.commandButtonStyle))
        {
            GitUpdate.UpdateGitProject();
            // 在左侧按钮点击时执行的操作
        }
    }

    static void OnRightToolbarGUI()
    {
        GUILayout.FlexibleSpace();
        if (GUILayout.Button(new GUIContent("Root", "Start Root Scene "), ToolbarStyles.commandButtonStyle))
        {
            SceneHelper.StartScene("Root");
        }
        
        if (GUILayout.Button(new GUIContent("MiniGame", "Open Root Scene "), ToolbarStyles.commandButtonStyle))
        {
            SceneHelper.ChangeScene("MiniGame");
        }
    }
}

static class ToolbarStyles
{
    public static readonly GUIStyle commandButtonStyle;

    static ToolbarStyles()
    {
        commandButtonStyle = new GUIStyle("Command")
        {
            fontSize = 10,
            alignment = TextAnchor.MiddleCenter,
            imagePosition = ImagePosition.ImageAbove,
            fontStyle = FontStyle.Bold,
            stretchWidth = true,
        };
    }
}

static class SceneHelper
{
    static string sceneToOpen;
    private static bool isRun;
    public static void ChangeScene(string sceneName)
    {
        if (EditorApplication.isPlaying)
        {
            EditorApplication.isPlaying = false;
        }

        sceneToOpen = sceneName;
        isRun = false;
        EditorApplication.update += OnUpdate;
    }
    
    public static void StartScene(string sceneName)
    {
        if (EditorApplication.isPlaying)
        {
            EditorApplication.isPlaying = false;
        }

        sceneToOpen = sceneName;
        isRun = true;
        EditorApplication.update += OnUpdate;
    }

    static void OnUpdate()
    {
        if (sceneToOpen == null ||
            EditorApplication.isPlaying || EditorApplication.isPaused ||
            EditorApplication.isCompiling || EditorApplication.isPlayingOrWillChangePlaymode)
        {
            return;
        }

        EditorApplication.update -= OnUpdate;

        if (EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo())
        {
            // need to get scene via search because the path to the scene
            // file contains the package version so it'll change over time
            string[] guids = AssetDatabase.FindAssets("t:scene " + sceneToOpen, null);
            if (guids.Length == 0)
            {
                Debug.LogWarning("Couldn't find scene file");
            }
            else
            {
                string scenePath = AssetDatabase.GUIDToAssetPath(guids[0]);
                EditorSceneManager.OpenScene(scenePath);
                EditorApplication.isPlaying = isRun;
            }
        }

        sceneToOpen = null;
    }
}

[InitializeOnLoad]
public static class ToolbarExtender
{
    static int m_toolCount;
    static GUIStyle m_commandStyle = null;

    public static readonly List<Action> LeftToolbarGUI = new List<Action>();
    public static readonly List<Action> RightToolbarGUI = new List<Action>();

    static ToolbarExtender()
    {
        Type toolbarType = typeof(Editor).Assembly.GetType("UnityEditor.Toolbar");
#if UNITY_2019_1_OR_NEWER
        string fieldName = "k_ToolCount";
#else
			string fieldName = "s_ShownToolIcons";
#endif

        FieldInfo toolIcons = toolbarType.GetField(fieldName,
            BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);

#if UNITY_2019_3_OR_NEWER
        m_toolCount = toolIcons != null ? ((int) toolIcons.GetValue(null)) : 8;
#elif UNITY_2019_1_OR_NEWER
			m_toolCount = toolIcons != null ? ((int) toolIcons.GetValue(null)) : 7;
#elif UNITY_2018_1_OR_NEWER
			m_toolCount = toolIcons != null ? ((Array) toolIcons.GetValue(null)).Length : 6;
#else
			m_toolCount = toolIcons != null ? ((Array) toolIcons.GetValue(null)).Length : 5;
#endif
#if !UWA
        ToolbarCallback.OnToolbarGUI = OnGUI;
#endif
        ToolbarCallback.OnToolbarGUILeft = GUILeft;
        ToolbarCallback.OnToolbarGUIRight = GUIRight;
    }

#if UNITY_2019_3_OR_NEWER
    public const float space = 8;
#else
		public const float space = 10;
#endif
    public const float largeSpace = 20;
    public const float buttonWidth = 42;
    public const float dropdownWidth = 80;
#if UNITY_2019_1_OR_NEWER
    public const float playPauseStopWidth = 140;
#else
		public const float playPauseStopWidth = 100;
#endif

#if !UWA
    static void OnGUI()
    {
        return;
        // Create two containers, left and right
        // Screen is the whole toolbar

        if (m_commandStyle == null)
        {
            m_commandStyle = new GUIStyle("CommandLeft");
        }

        var screenWidth = EditorGUIUtility.currentViewWidth+1000;

        // Following calculations match code reflected from Toolbar.OldOnGUI()
        float playButtonsPosition = Mathf.RoundToInt((screenWidth - playPauseStopWidth) / 2)+1000;

        Rect leftRect = new Rect(111, 0, playButtonsPosition - space+1000, Screen.height);
        leftRect.xMin += space+1000; // Spacing left
        leftRect.xMin += buttonWidth * m_toolCount+1000; // Tool buttons
#if UNITY_2019_3_OR_NEWER
        leftRect.xMin += space+1000; // Spacing between tools and pivot
#else
			leftRect.xMin += largeSpace; // Spacing between tools and pivot
#endif
        leftRect.xMin += 64 * 2; // Pivot buttons

        Rect rightRect = new Rect(playButtonsPosition+1000, 0, screenWidth - playButtonsPosition, Screen.height);

        // Add spacing around existing controls
        leftRect.xMin += space+1000;
        leftRect.xMax -= space+1000;
        rightRect.xMin += space+1000;
        rightRect.xMax -= space;

        // Add top and bottom margins
#if UNITY_2019_3_OR_NEWER
        leftRect.y = 4+1000;
        leftRect.height = 22+1000;
        rightRect.y = 4+1000;
        rightRect.height = 22+1000;
#else
			leftRect.y = 5;
			leftRect.height = 24;
			rightRect.y = 5;
			rightRect.height = 24;
#endif

        if (leftRect.width > 0)
        {
            GUILayout.BeginArea(leftRect);
            GUILayout.BeginHorizontal();
            foreach (var handler in LeftToolbarGUI)
            {
                handler();
            }

            GUILayout.EndHorizontal();
            GUILayout.EndArea();
        }

        if (rightRect.width > 0)
        {
            GUILayout.BeginArea(rightRect);
            GUILayout.BeginHorizontal();
            foreach (var handler in RightToolbarGUI)
            {
                handler();
            }

            GUILayout.EndHorizontal();
            GUILayout.EndArea();
        }
    }
#endif

    public static void GUILeft()
    {
        var screenWidth = EditorGUIUtility.currentViewWidth;
        float playButtonsPosition = Mathf.RoundToInt((screenWidth - playPauseStopWidth) / 2);
        Rect leftRect = new Rect(playButtonsPosition-200, 0, playButtonsPosition - space, Screen.height);
        Debug.Log(playButtonsPosition);
        GUILayout.BeginArea(leftRect);
        GUILayout.BeginHorizontal();
        foreach (var handler in LeftToolbarGUI)
        {
            handler();
        }

        GUILayout.EndHorizontal();
        GUILayout.EndArea();
    }

    public static void GUIRight()
    {
        GUILayout.BeginHorizontal();
        foreach (var handler in RightToolbarGUI)
        {
            handler();
        }

        GUILayout.EndHorizontal();
    }
}

public static class ToolbarCallback
{
    static Type m_toolbarType = typeof(Editor).Assembly.GetType("UnityEditor.Toolbar");
    static Type m_guiViewType = typeof(Editor).Assembly.GetType("UnityEditor.GUIView");

#if UNITY_2020_1_OR_NEWER
    static Type m_iWindowBackendType = typeof(Editor).Assembly.GetType("UnityEditor.IWindowBackend");

    static PropertyInfo m_windowBackend = m_guiViewType.GetProperty("windowBackend",
        BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);

    static PropertyInfo m_viewVisualTree = m_iWindowBackendType.GetProperty("visualTree",
        BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
#else
		static PropertyInfo m_viewVisualTree = m_guiViewType.GetProperty("visualTree",
			BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
#endif

    static FieldInfo m_imguiContainerOnGui = typeof(IMGUIContainer).GetField("m_OnGUIHandler",
        BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);

    static ScriptableObject m_currentToolbar;

    /// <summary>
    /// Callback for toolbar OnGUI method.
    /// </summary>
    public static Action OnToolbarGUI;

    public static Action OnToolbarGUILeft;
    public static Action OnToolbarGUIRight;

    static ToolbarCallback()
    {
        EditorApplication.update -= OnUpdate;
        EditorApplication.update += OnUpdate;
    }

    static void OnUpdate()
    {
        // Relying on the fact that the toolbar is a ScriptableObject and gets deleted when layout changes
        if (m_currentToolbar == null)
        {
            // Find the toolbar
            var toolbars = Resources.FindObjectsOfTypeAll(m_toolbarType);
            m_currentToolbar = toolbars.Length > 0 ? (ScriptableObject) toolbars[0] : null;
            if (m_currentToolbar != null)
            {
#if UNITY_2021_1_OR_NEWER
                var root = m_currentToolbar.GetType()
                    .GetField("m_Root", BindingFlags.NonPublic | BindingFlags.Instance);
                var rawRoot = root.GetValue(m_currentToolbar);
                var mRoot = rawRoot as VisualElement;
                RegisterCallback("ToolbarZoneLeftAlign", OnToolbarGUILeft);
                RegisterCallback("ToolbarZoneRightAlign", OnToolbarGUIRight);

                void RegisterCallback(string root, Action cb)
                {
                    var toolbarZone = mRoot.Q(root);

                    var parent = new VisualElement()
                    {
                        style =
                        {
                            flexGrow = 1,
                            flexDirection = FlexDirection.Row,
                        }
                    };
                    var container = new IMGUIContainer();
                    container.onGUIHandler += () => { cb?.Invoke(); };
                    parent.Add(container);
                    toolbarZone.Add(parent);
                }
#else
#if UNITY_2020_1_OR_NEWER
					var windowBackend = m_windowBackend.GetValue(m_currentToolbar);

					// Get its visual tree
					var visualTree = (VisualElement) m_viewVisualTree.GetValue(windowBackend, null);
#else
					// Get its visual tree
					var visualTree = (VisualElement) m_viewVisualTree.GetValue(m_currentToolbar, null);
#endif

					// Get the first child which 'happens' to be the toolbar IMGUIContainer
					var container = (IMGUIContainer) visualTree[0];

					// (Re)attach handler
					var handler = (Action) m_imguiContainerOnGui.GetValue(container);
					handler -= OnGUI;
					handler += OnGUI;
					m_imguiContainerOnGui.SetValue(container, handler);

#endif
            }
        }
    }

    static void OnGUI()
    {
        var handler = OnToolbarGUI;
        if (handler != null)
            handler();
    }
}
