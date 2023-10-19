using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using Cysharp.Threading.Tasks;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.UIElements;
using Debug = UnityEngine.Debug;

public class CustomWindow : EditorWindow
{
    private static CustomWindow window;

    public static void OpenWindow()
    {
        if (window != null) return;
        window = GetWindow<CustomWindow>();
        window.maximized = true;
        window.titleContent = new GUIContent("Custom Window");
    }

    public static void CloseWindow()
    {
        if (window == null) return;
        window.Close();
        window = null;
    }

    // 在这里绘制窗口内容
    private void OnGUI()
    {
        var coloredLabelStyle = new GUIStyle(EditorStyles.label);
        coloredLabelStyle.normal.textColor = Color.red;
        coloredLabelStyle.fontSize = 30;
        GUILayout.Label("运行中 请等待", coloredLabelStyle);
        GUILayout.Label("运行中 请等待", coloredLabelStyle);
        GUILayout.Label("运行中 请等待", coloredLabelStyle);
        GUILayout.Label("运行中 请等待", coloredLabelStyle);
    }

    // 在创建窗口时禁用关闭按钮
    private void Awake()
    {
        EditorApplication.wantsToQuit += () =>
        {
            if (window != null)
            {
                window.Close();
            }

            return true;
        };
    }
}


[InitializeOnLoad]
public class ToolBarEditor
{
    static class ToolbarStyles
    {
        public static readonly GUIStyle CommandButtonStyle;
        public static readonly GUIStyle CommandButtonStyle2;

        static ToolbarStyles()
        {
            CommandButtonStyle = new GUIStyle("Command")
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
            CommandButtonStyle2 = new GUIStyle("Command")
            {
                font = null,
                fontSize = 10,
                alignment = TextAnchor.MiddleCenter,
                wordWrap = false,
                clipping = TextClipping.Overflow,
                contentOffset = default,
                fixedWidth = 100,
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
        ToolbarExtender.LeftToolbarGUI.Add(GitPull);
        ToolbarExtender.LeftToolbarGUI.Add(RefreshBranchInfo);
        ToolbarExtender.LeftToolbarGUI.Add(DropDown);
        //场景切换
        ToolbarExtender.RightToolbarGUI.Add(OnRightToolbarGUI);

        //RefreshBranchInfo();
    }

    private static void RefreshBranchInfo()
    {
        if (GUILayout.Button("获取分支信息", ToolbarStyles.CommandButtonStyle2))
        {
            Func().Forget();
        }

        async UniTask Func()
        {
            CustomWindow.OpenWindow();
            (_displayedOptions, _currentBranchName) = await GitHelper.GetBranchInfo();
            _selectedIndex = _displayedOptions.ToList().IndexOf(_currentBranchName);
            DropDown();
            CustomWindow.CloseWindow();
        }
    }

    private static int _selectedIndex = 0;
    private static string[] _displayedOptions = new[] {"请先获取分支信息"};
    private static string _currentBranchName;


    private static void DropDown()
    {
        T().Forget();

        async UniTask T()
        {
            // 创建一个下拉框
            var oldIndex = _selectedIndex;
            var width = GUILayout.Width(_displayedOptions[_selectedIndex].Length * 6 + 70);
            try
            {
                var tryToCheckOutIndex = EditorGUILayout.Popup(_selectedIndex, _displayedOptions, width);
                if (tryToCheckOutIndex == oldIndex) return;
                //询问是否切换
                string message =
                    $"是否要从  {_displayedOptions[oldIndex]}\n  切换到    {_displayedOptions[tryToCheckOutIndex]} 分支？\n\n本地未提交的修改会被清空\n本地未提交的修改会被清空\n本地未提交的修改会被清空";
                if (EditorUtility.DisplayDialog("切分支", message, "确认", "取消"))
                {
                    // 在编辑器中显示所选值

                    CustomWindow.OpenWindow();
                    var coloredLabelStyle = new GUIStyle(EditorStyles.label);
                    coloredLabelStyle.normal.textColor = Color.red;
                    EditorGUILayout.LabelField("当前分支:" + _displayedOptions[_selectedIndex], coloredLabelStyle);
                    await GitHelper.CheckOut(_displayedOptions[tryToCheckOutIndex]);
                    _selectedIndex = tryToCheckOutIndex;
                    EditorUtility.RequestScriptReload();
                    (_displayedOptions, _currentBranchName) = await GitHelper.GetBranchInfo();
                    _selectedIndex = _displayedOptions.ToList().IndexOf(_currentBranchName);
                    DropDown();
                    CustomWindow.CloseWindow();
                }
                else
                {
                    _selectedIndex = oldIndex;
                }
            }
            catch
            {
                Debug.Log(_selectedIndex);
                CustomWindow.CloseWindow();
            }
        }
    }

    private static void GitPull()
    {
        if (GUILayout.Button("更新git工程", ToolbarStyles.CommandButtonStyle2))
        {
            string message =
                $"是否要更新{_displayedOptions[_selectedIndex]} 分支？\n\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空\n       本地未提交的修改会被清空";
            if (EditorUtility.DisplayDialog("更新工程", message, "确认", "取消"))
            {
                T().Forget();
            }

            async UniTask T()
            {
                CustomWindow.OpenWindow();
                await GitHelper.GitPull();
                EditorUtility.RequestScriptReload();
                CustomWindow.CloseWindow();
            }
        }
    }

    static void OnRightToolbarGUI()
    {
        GUILayout.FlexibleSpace();

        if (GUILayout.Button(new GUIContent("Title", "Start Title Scene "), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("Title");
        }

        if (GUILayout.Button(new GUIContent("Battle", "Start Battle  Test Scene "),
                ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("BattleBootScene");
        }

        if (GUILayout.Button(new GUIContent("DB", "Start Debug Scene "), ToolbarStyles.CommandButtonStyle))
        {
            // SceneHelper.StartScene("BattlePreview");
            string[] guids = AssetDatabase.FindAssets("t:scene " + "BattlePreview", null);
            string scenePath = AssetDatabase.GUIDToAssetPath(guids[0]);
            EditorSceneManager.OpenScene(scenePath);
        }

        if (GUILayout.Button(new GUIContent("Dungeon", "Start Debug Scene "), ToolbarStyles.CommandButtonStyle))
        {
            // SceneHelper.StartScene("BattlePreview");
            string[] guids = AssetDatabase.FindAssets("t:scene " + "BattleZoneBootScene", null);
            string scenePath = AssetDatabase.GUIDToAssetPath(guids[0]);
            EditorSceneManager.OpenScene(scenePath);
        }

        if (GUILayout.Button(new GUIContent("Story", "剧情启动器"), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("StoryBoot");
        }

        if (GUILayout.Button(new GUIContent("MCity", "主城启动器"), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.ChangeScene("CityBoot");
        }

        if (GUILayout.Button(new GUIContent("Cri", "声音测试"), ToolbarStyles.CommandButtonStyle))
        {
            string[] guids = AssetDatabase.FindAssets("t:scene " + "SoundTestScene", null);
            string scenePath = AssetDatabase.GUIDToAssetPath(guids[0]);
            EditorSceneManager.OpenScene(scenePath);
        }

        if (GUILayout.Button(new GUIContent("Kranj", "Start Kranj Scene "), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("Kranj");
        }

        if (GUILayout.Button(new GUIContent("Movie", "播放CG视频"), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("MoviePlayScene");
        }

        if (GUILayout.Button(new GUIContent("Tea", "茶歇启动器"), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.StartScene("TeaBreakEditor");
        }

        if (GUILayout.Button(new GUIContent("Effect", "特效性能优化"), ToolbarStyles.CommandButtonStyle))
        {
            SceneHelper.ChangeScene("EffectEvaluate");
        }
    }
}


#region git

public static class GitHelper
{
    public static async UniTask CheckOut(string displayedOption)
    {
        string output;
        string error;
        (_, error) = await RunGitCommand("reset --hard");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"reset :{error}");
        }

        (_, error) = await RunGitCommand("clean -df");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"clean :{error}");
        }

        (_, error) = await RunGitCommand("fetch");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"fetch :{error}");
        }

        (output, error) = await RunGitCommand($"checkout {displayedOption}");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"checkout :{error}");
        }

        Debug.Log(output);
        AssetDatabase.Refresh();
    }

    public static async UniTask GitPull()
    {
        string output;
        string error;
        (_, error) = await RunGitCommand("reset --hard");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"reset :{error}");
        }

        (_, error) = await RunGitCommand("clean -df");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"clean :{error}");
        }

        (_, error) = await RunGitCommand("fetch");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"fetch :{error}");
        }

        (output, error) = await RunGitCommand("pull");
        if (!string.IsNullOrEmpty(error))
        {
            EditorUtility.DisplayDialog("更新", "更新失败 摇人 不要清log", "ok");
            Debug.LogError(error);
        }
        else
        {
            EditorUtility.DisplayDialog("更新成功1", "更新成功", "ok");
            Debug.Log(output);
            AssetDatabase.Refresh();
        }
    }


    /// <summary>
    /// 获取分支信息  分支名，当前分支的index
    /// </summary>
    /// <returns></returns>
    public static async UniTask<(string[] branches, string currentBranchName)> GetBranchInfo()
    {
        // 获取所有分支名
        var (output, error) = await RunGitCommand("branch -a");
        if (!string.IsNullOrEmpty(error))
        {
            Debug.LogError($"GetBranchInfo:{error}");
        }

        var branches = new List<string>();
        string currentBranch = "";
        // 分割输出并提取分支名称
        string[] branchLines = output.Replace("remotes/origin/", "").Split('\n', StringSplitOptions.RemoveEmptyEntries);

        for (int i = 0; i < branchLines.Length; i++)
        {
            var item = branchLines[i];
            if (item.Length > 1 && item[0].Equals('*')) //匹配当前分支
            {
                branchLines[i] = item.Replace('*', ' ');
                currentBranch = item.Trim();
            }

            Debug.Log(item);
            branches.Add(item.Trim());
        }

        Debug.Log("currentBranch: " + currentBranch);

        return (branches.ToArray(), currentBranch);
    }

    static async UniTask<(string, string)> RunGitCommand(string command)
    {
        // 执行 git 命令
        using (Process process = new Process())
        {
            // 创建一个新的 ProcessStartInfo
            var processStartInfo = new ProcessStartInfo
            {
                FileName = "git",
                Arguments = command,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                UseShellExecute = false,
                CreateNoWindow = true,
            };

            process.StartInfo = processStartInfo;
            process.Start();
            // 读取标准输出
            string output;
            using (StreamReader reader = process.StandardOutput)
            {
                output = await reader.ReadToEndAsync();
            }

            //读取错误信息
            string error;
            using (StreamReader reader = process.StandardError)
            {
                error = await reader.ReadToEndAsync();
            }

            return (output, error);
        }
    }
}

#endregion

#region 场景切换

static class SceneHelper
{
    static string _sceneToOpen;
    private static bool _isRun;

    public static void ChangeScene(string sceneName)
    {
        if (EditorApplication.isPlaying)
        {
            EditorApplication.isPlaying = false;
        }

        _sceneToOpen = sceneName;
        _isRun = false;
        EditorApplication.update += OnUpdate;
    }

    public static void StartScene(string sceneName)
    {
        if (EditorApplication.isPlaying)
        {
            EditorApplication.isPlaying = false;
        }

        _sceneToOpen = sceneName;
        _isRun = true;
        EditorApplication.update += OnUpdate;
    }

    static void OnUpdate()
    {
        if (_sceneToOpen == null ||
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
            string[] guids = AssetDatabase.FindAssets("t:scene " + _sceneToOpen, null);
            if (guids.Length == 0)
            {
                Debug.LogWarning("Couldn't find scene file");
            }
            else
            {
                string scenePath = AssetDatabase.GUIDToAssetPath(guids[0]);
                EditorSceneManager.OpenScene(scenePath);
                EditorApplication.isPlaying = _isRun;
            }
        }

        _sceneToOpen = null;
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
        GUILayout.Space(200);
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
    static Type m_toolbarType = typeof(UnityEditor.Editor).Assembly.GetType("UnityEditor.Toolbar");
    static Type m_guiViewType = typeof(UnityEditor.Editor).Assembly.GetType("UnityEditor.GUIView");

#if UNITY_2020_1_OR_NEWER
    static Type m_iWindowBackendType = typeof(UnityEditor.Editor).Assembly.GetType("UnityEditor.IWindowBackend");

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

#endregion