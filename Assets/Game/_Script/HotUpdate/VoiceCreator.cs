using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Debug = UnityEngine.Debug;
using System.Text;
using UnityEngine;



public static class VoiceCreator
{
    private static int SelectedIndex = 0;
    private static int TTSorVC = 0;

    public static string folder = Path.Combine(Application.dataPath, "Game", "DependRes", "Moe");
    public static string modelPath = Path.Combine(folder, "H_excluded.pth");
    public static string configJson = Path.Combine(folder, "config.json");
    public static string exePath = Path.Combine(folder, "MoeGoe", "MoeGoe.exe");
    
    
    public static string outPutPath = Path.Combine(Application.dataPath, "Game", "DependRes", "Voice");

    public static string VoiceCreat(string text,string charaVoiceId)
    {
        string fileName = $@"_{DateTime.Now:hh_mm_ss}.wav";
        var filePath= Path.Combine(outPutPath, fileName);
        VoiceCreat(modelPath, configJson,exePath, text, filePath,charaVoiceId);
        return fileName;
    }


    private static void VoiceCreat(string modelPath, string configJson,string exePath, string text, string outPutPath,string charaVoiceId)
    {
        //var text = "こんにちは,こんにちは,こんにちは";
        var process = new Process
        {
            StartInfo = new ProcessStartInfo("cmd.exe")
            {
                Arguments = "/k",
                StandardOutputEncoding = Encoding.GetEncoding(936),
                StandardErrorEncoding = Encoding.GetEncoding(936),
                StandardInputEncoding = Encoding.GetEncoding(936),
                RedirectStandardInput = true,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                UseShellExecute = false,
                CreateNoWindow = true,
            },
            SynchronizingObject = null
        };

        process.Exited += (sender, args) =>
        {
            Debug.Log("退出");
        };
        process.Start();
        process.BeginOutputReadLine();
        process.BeginErrorReadLine();
        
        


        List<string> commands = new List<string>()
        {
            modelPath,
            configJson,
            "t",
            $"[LENGTH=1][NOISE=0][NOISEW=0],{text}",//todo 暴露参数
            charaVoiceId,
            outPutPath,
            "n",
        };
        
        process.StandardInput.WriteLine($"\"{exePath}\" --escape");
        foreach (var command in commands)
        {
            process.StandardInput.WriteLine(command);
        }
    }
}