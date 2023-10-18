using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor;
using Debug = UnityEngine.Debug;

public static class GitHelper 
{
    
    public static void CheckOut(string displayedOption)
    {
        var (output,error)= RunGitCommand($"checkout . && git clean -df && git checkout {displayedOption} && git pull");
        if (string.IsNullOrEmpty(error))
        {
            EditorUtility.DisplayDialog("更新成功","更新成功","ok");
            AssetDatabase.Refresh();
        }
        else
        {
            EditorUtility.DisplayDialog("git pull","更新失败 摇人 不要清log","ok");
        }
    }
    public static void GitPull()
    {
        var (output,error)= RunGitCommand("checkout . && git clean -df && git pull");
        
        if (string.IsNullOrEmpty(error))
        {
            EditorUtility.DisplayDialog("更新成功","更新成功","ok");
            AssetDatabase.Refresh();
        }
        else
        {
            EditorUtility.DisplayDialog("git pull","更新失败 摇人 不要清log","ok");
        }
    }
    /// <summary>
    /// 获取分支信息  分支名，当前分支的index
    /// </summary>
    /// <returns></returns>
    public static (string[] branches,int currentBranchIndex) GetBranchInfo()
    {        
        var (output,error)= RunGitCommand("ls-remote --heads origin");
        var branches=new List<string>();
        if (string.IsNullOrEmpty(error))
        {
            // 按行分割并打印输出
            string[] lines = output.Split('\n');
            foreach (string line in lines)
            {
                if (!string.IsNullOrEmpty(line))
                {
                    // 提取分支名称
                    string[] parts = line.Split('\t');
                    string branchName = parts[1].Replace("refs/heads/", "");
                    Debug.Log(branchName);
                    branches.Add(branchName);
                }
            }
        }
        else
        {
            Debug.LogError("Error: " + error);
        }
        
        // 执行 git rev-parse --abbrev-ref HEAD 命令以获取当前分支名称
        (output,error)  = RunGitCommand("rev-parse --abbrev-ref HEAD");
        string currentBranch = "";
        
        if (string.IsNullOrEmpty(error))
        {
            // 去除输出中的换行符并返回分支名称
            currentBranch= output.Trim();
        }
        else
        {
            Debug.LogError("GetCurrentBranch Fail: " + error);
        }
        return (branches.ToArray(),branches.IndexOf(currentBranch));
    }
    
    
   static  (string,string) RunGitCommand(string command)
    {
        // 创建一个新的 ProcessStartInfo
        ProcessStartInfo psi = new ProcessStartInfo("git");
        psi.UseShellExecute = false;
        psi.RedirectStandardOutput = true;
        psi.RedirectStandardError = true;
        psi.CreateNoWindow = true;

        // 执行 git 命令
        Process process = new Process();
        process.StartInfo = psi;
        process.StartInfo.Arguments = command;
        process.Start();
        process.WaitForExit();

        // 读取 Git 命令的输出
        string output = process.StandardOutput.ReadToEnd();
        string error = process.StandardError.ReadToEnd();
        process.Close();
        return (output, error);
    }

}