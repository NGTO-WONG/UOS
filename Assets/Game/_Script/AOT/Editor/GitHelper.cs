﻿using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor;
using Debug = UnityEngine.Debug;

public static class GitHelper 
{
    
    public static void CheckOut(string displayedOption)
    {
        RunGitCommand("reset --hard");
        RunGitCommand("clean -df");
        RunGitCommand("fetch");
        var (output, error) = RunGitCommand($"checkout {displayedOption}");
        if (string.IsNullOrEmpty(error))
        {
            EditorUtility.DisplayDialog("切分支成功","切分支成功","ok");
            Debug.Log(output);
            AssetDatabase.Refresh();
        }
        else
        {
            EditorUtility.DisplayDialog("切分支","切分支失败 摇人 不要清log","ok");
            Debug.LogError(error);
        }
        
    }
    public static void GitPull()
    {
        RunGitCommand("reset --hard");
        RunGitCommand("clean -df");
        RunGitCommand("fetch");
        var (output, error) =  RunGitCommand("pull");
        
        if (string.IsNullOrEmpty(error))
        {
            EditorUtility.DisplayDialog("更新成功","更新成功","ok");
            Debug.Log(output);
            AssetDatabase.Refresh();
        }
        else
        {
            EditorUtility.DisplayDialog("更新","更新失败 摇人 不要清log","ok");
            Debug.LogError(error);
        }
    }
    /// <summary>
    /// 获取分支信息  分支名，当前分支的index
    /// </summary>
    /// <returns></returns>
    public static (string[] branches,string currentBranchName) GetBranchInfo()
    {        
        // 获取所有分支名
        var (output,error)= RunGitCommand("ls-remote --heads origin");
        var branches=new List<string>();
        if (string.IsNullOrEmpty(error))
        {
            string[] lines = output.Split('\n');
            foreach (string line in lines)
            {
                if (!string.IsNullOrEmpty(line))
                {
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
        
        // 获取当前分支名称
        (output,error)  = RunGitCommand("rev-parse --abbrev-ref HEAD");
        string currentBranch = "";
        
        if (string.IsNullOrEmpty(error))
        {
            currentBranch= output.Trim();
        }
        else
        {
            Debug.LogError("GetCurrentBranch Fail: " + error);
        }        
        return (branches.ToArray(),currentBranch);
    }
    
    
   static  (string,string) RunGitCommand(string command)
    {
        Debug.Log(command);
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