using System;
using System.Collections.Generic;
using System.Reflection;
using Game._Script.AOT.Editor;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.UIElements;

[InitializeOnLoad]
public class ToolBarEditor
{
    static class ToolbarStyles
    {
        public static readonly GUIStyle commandButtonStyle;

        static ToolbarStyles()
        {
            commandButtonStyle = new GUIStyle("Command")
            {
                font = null,
                fontSize = 10,
                alignment = TextAnchor.MiddleCenter,
                wordWrap = false,
                clipping = TextClipping.Overflow,
                contentOffset = default,
                fixedWidth = 50,
                fixedHeight = 20,
                imagePosition = ImagePosition.ImageAbove,
                fontStyle = FontStyle.Bold,
                richText = true,
            };
        }
    }

    static ToolBarEditor()
    {
        //git工具
        ToolbarExtender.LeftToolbarGUI.Add(DropDown);        
        ToolbarExtender.LeftToolbarGUI.Add(UpdateGit);
        //场景切换
        ToolbarExtender.RightToolbarGUI.Add(OnRightToolbarGUI);
    }
    
    private static bool isDropdownOpen = false;
    static int selectedIndex=0;
    static string[] displayedOptions ;

    public static void ClearGitCache()
    {
        selectedIndex = 0;
        displayedOptions = null;
    }
    private static void DropDown()
    {
        if (displayedOptions==null)
        {
            (displayedOptions, selectedIndex) = GitHelper.GetBranchInfo();
        }
        try
        {
            // 创建一个下拉框
            var oldIndex = selectedIndex;
            var tryToCheckOutIndex = EditorGUILayout.Popup(selectedIndex, displayedOptions,
                GUILayout.Width(displayedOptions[selectedIndex].Length * 6 + 30));
            if (tryToCheckOutIndex == oldIndex) return;
            //询问是否切换
            if (EditorUtility.DisplayDialog("切分支",
                    $"是否要从  {displayedOptions[oldIndex]}\n  切换到    {displayedOptions[tryToCheckOutIndex]} 分支？" +
                    $"\n\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空"
                    , "确认","取消"))
            {
                // 在编辑器中显示所选值
                var coloredLabelStyle = new GUIStyle(EditorStyles.label);
                coloredLabelStyle.normal.textColor = Color.red;
                EditorGUILayout.LabelField("当前分支:" + displayedOptions[selectedIndex], coloredLabelStyle);
                GitHelper.CheckOut(displayedOptions[tryToCheckOutIndex]);
                selectedIndex = tryToCheckOutIndex;
            }
            else
            {
                selectedIndex = oldIndex;
            }
        }
        catch
        {
            Debug.LogWarning("err");
        }
    }

    private static void UpdateGit()
    {
        if (GUILayout.Button("更新工程", ToolbarStyles.commandButtonStyle))
        {

            if (EditorUtility.DisplayDialog("更新工程",
                    $"是否要更新{displayedOptions[selectedIndex]} 分支？" +
                    $"\n\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空"
                    , "确认", "取消"))
            {
                
                GitHelper.GitPull();
            }
        }
    }

    static void OnRightToolbarGUI()
    {
        GUILayout.FlexibleSpace();
        if (GUILayout.Button(new GUIContent("Root", "Start Root Scene "), ToolbarStyles.commandButtonStyle))
        {
            SceneHelper.StartScene("Root");
        }

        if (GUILayout.Button(new GUIContent("MiniGame", "Open Root Scene "),ToolbarStyles.commandButtonStyle))
        {
            SceneHelper.ChangeScene("MiniGame");
        }

    }
}


#region git


#endregion
#region 场景切换


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

#endregion

#region ToolbarExtender
[InitializeOnLoad]
public static class ToolbarExtender
{
    //static int m_toolCount;
    //static GUIStyle m_commandStyle = null;

    public static readonly List<Action> LeftToolbarGUI = new List<Action>();
    public static readonly List<Action> RightToolbarGUI = new List<Action>();

    static ToolbarExtender()
    {
        ToolbarCallback.OnToolbarGUILeft = GUILeft;
        ToolbarCallback.OnToolbarGUIRight = GUIRight;
    }

#if UNITY_2019_1_OR_NEWER
    public const float playPauseStopWidth = 140;
#else
    public const float playPauseStopWidth = 100;
#endif

    private static void GUILeft()
    {
        GUILayout.BeginHorizontal();
        foreach (var handler in LeftToolbarGUI)
        {
            handler();
        }

        GUILayout.EndHorizontal();
    }

    private static void GUIRight()
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
            m_currentToolbar = toolbars.Length > 0 ? (ScriptableObject)toolbars[0] : null;
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

#endregion

