using System.Diagnostics;
using UnityEditor;
using Debug = UnityEngine.Debug;

namespace Game._Script.AOT.Editor
{
    public static class GitUpdate 
    {
        public static string gitCommand = "git";
        public static string gitArguments = "clean -df && checkout . && pull";

        public static void UpdateGitProject()
        {                    
            ProcessStartInfo psi = new ProcessStartInfo(gitCommand, gitArguments);
            psi.CreateNoWindow = true;
            psi.UseShellExecute = false;
            psi.RedirectStandardOutput = true;
            psi.RedirectStandardError = true;

            Process process = new Process();
            process.StartInfo = psi;

            try
            {
                // 获取当前 Git 分支信息
                string branchInfo = GetGitBranchInfo();
                bool confirm= ShowBranchInfoDialog(branchInfo);
                if (confirm==false)
                {
                    return;
                }
                
                process.Start();
                string output = process.StandardOutput.ReadToEnd();
                string error = process.StandardError.ReadToEnd();
                process.WaitForExit();

                if (process.ExitCode == 0)
                {
                    Debug.Log("Git pull executed successfully.");
                    Debug.Log("Output: " + output);


                    // 刷新 Unity 编辑器项目
                    AssetDatabase.Refresh();
                }
                else
                {
                    Debug.LogError("Error executing Git pull.");
                    Debug.LogError("Error: " + error);
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogError("Exception: " + ex.Message);
            }
            finally
            {
                process.Dispose();
            }
        }

        private static string GetGitBranchInfo()
        {
            ProcessStartInfo psi = new ProcessStartInfo(gitCommand, "rev-parse --abbrev-ref HEAD");
            psi.CreateNoWindow = true;
            psi.UseShellExecute = false;
            psi.RedirectStandardOutput = true;

            Process process = new Process();
            process.StartInfo = psi;

            process.Start();
            string branch = process.StandardOutput.ReadToEnd().Trim();
            process.WaitForExit();

            return branch;
        }

        private static bool ShowBranchInfoDialog(string branchInfo)
        {
            return EditorUtility.DisplayDialog("Git Branch Info", "Current Git Branch: " + branchInfo, "确认","取消");
        }
    }
}
