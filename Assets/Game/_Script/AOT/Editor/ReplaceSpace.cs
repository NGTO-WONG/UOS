using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace Game._Script.AOT.Editor
{
    public class ReplaceSpace
    {
        [MenuItem("HybridCLR/Build/ReplaceSpace", priority = 401)]
        public static void ReplaceSpacesWithUnderscores()
        {
            var path = Application.dataPath+"/Game/_Script/HotUpdate/Test";
            Debug.Log(path);
            ReplacePathSpace(path);
        }

        static void ReplacePathSpace(string path)
        {
            var directories = Directory.GetDirectories(path);
            var files = Directory.GetFiles(path).Concat(directories);
            foreach (var subDirectory in files)
            {
                var oldPath = path + "/" + Path.GetFileName(subDirectory);
                var newName = Path.GetFileName(subDirectory).Replace(" ", "_");
                var newPath = path+"/"+newName;
                Directory.Move(oldPath,newPath);
                if (File.Exists(oldPath+".meta"))
                {
                    File.Delete(oldPath+".meta");
                }
                ReplacePathSpace(newPath);
            }
            
            
        }
        
        
        static void RemoveSpacesInFolderNames(string directory)
        {
            
            try
            {
                // 处理当前目录下的所有文件夹
                foreach (string subDirectory in Directory.GetDirectories(directory))
                {
                    string newDirectoryName = Path.GetFileName(subDirectory).Replace(" ", "_");
                    string newDirectoryPath = Path.Combine(directory, newDirectoryName);
                    Directory.Move(subDirectory, newDirectoryPath);
                    //ReplaceSpacesWithUnderscores(newDirectoryPath); // 递归处理子文件夹
                }

                // 处理当前目录下的所有文件
                foreach (string filePath in Directory.GetFiles(directory))
                {
                    string newFileName = Path.GetFileName(filePath).Replace(" ", "_");
                    string newFilePath = Path.Combine(directory, newFileName);
                    File.Move(filePath, newFilePath);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"删除文件夹名称中的空格时发生错误: {ex.Message}");
            }
        }
    }
}