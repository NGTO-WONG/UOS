using System.IO;
using UnityEditor;
using UnityEngine;

namespace Game._Script.AOT.Editor
{
    public class ReplaceSpace
    {
        [MenuItem("HybridCLR/Build/ReplaceSpace", priority = 401)]
        public static void ReplaceSpacesWithUnderscores()
        {
            var path = Application.dataPath + "/Game/_Script/HotUpdate/Malbers_Animations";
            Debug.Log(path);
            ReplacePathSpace(path);
        }

        static void ReplacePathSpace(string path)
        {
            var directories = Directory.GetDirectories(path);
            var files = Directory.GetFiles(path);
            foreach (var file in files)
            {
                var newName = Path.GetFileName(file).Replace(" ", "_");
                var newPath = path + "/" + newName;
                File.Move(file, newPath);
            }

            foreach (var subDirectory in directories)
            {
                var newName = Path.GetFileName(subDirectory).Replace(" ", "_");
                var newPath = path + "/" + newName; try
                {
                    Directory.Move(subDirectory, newPath);
                }catch{}
                if (File.Exists(subDirectory + ".meta"))
                {
                    File.Delete(subDirectory + ".meta");
                }

                ReplacePathSpace(newPath);
            }
        }
    }
}