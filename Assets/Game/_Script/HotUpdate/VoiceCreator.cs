using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Debug = UnityEngine.Debug;
using System.Text;
using UnityEngine;



public static class VoiceCreator
{
   // private static int _selectedIndex = 0;
    //private static int TTSorVC = 0;



    public static string VoiceCreat(string text,string charaVoiceId)
    {
        var modelPath = @"C:\Users\a4549\Desktop\voice\H_excluded.pth";
        var configJson = @"C:\Users\a4549\Desktop\voice\config.json";
        string fileName = $@"_{DateTime.Now:hh_mm_ss}.wav";
        string outPutPath = Path.Combine(Application.dataPath, "Game", "DependRes", "Voice", fileName);
        VoiceCreat(modelPath, configJson, text, outPutPath,charaVoiceId);
        return fileName;
    }


    private static void VoiceCreat(string modelPath, string configJson, string text, string outPutPath,string charaVoiceId)
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
            $"[LENGTH=1][NOISE=0][NOISEW=0],{text}",
            charaVoiceId,
            outPutPath,
            "n",
        };
        
        string appPath = @"C:\Users\a4549\Desktop\voice\MoeGoe\MoeGoe\MoeGoe.exe";
        process.StandardInput.WriteLine($"\"{appPath}\" --escape");
        foreach (var command in commands)
        {
            process.StandardInput.WriteLine(command);
        }
    }
}