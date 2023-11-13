using System;
using System.IO;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.Others;
#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;
using YooAsset;

namespace Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.NodeEditor
{
    [CreateAssetMenu(menuName = "Scriptable Objects/Nodes/Sentence Node", fileName = "New Sentence Node")]
    public class SentenceNode : Node
    {
        public string characterName;
        public string text;
        public Sprite characterSprite;
        public AudioClip audioClip;
        public string audioClipName;

        [Space(10)] public Node parentNode;

        public Node childNode;

        private const float lableFieldSpace = 40f;
        private const float textFieldWidth = 150f;

        /// <summary>
        /// Returning sentence character name
        /// </summary>
        /// <returns></returns>
        public string GetSentenceCharacterName()
        {
            return characterName;
        }


        /// <summary>
        /// Returning sentence text
        /// </summary>
        /// <returns></returns>
        public string GetSentenceText()
        {
            Play().Forget();

            async UniTask Play()
            {
                var package=YooAssets.GetPackage("DefaultPackage");
                AssetOperationHandle handle = package.LoadAssetAsync<AudioClip>(audioClipName.Replace(".wav",""));
                await handle.ToUniTask();   
                AudioClip audio = handle.AssetObject as AudioClip;
                
                GameObject previewer = new GameObject("AudioPreviewer");
                var previewSource = previewer.AddComponent<AudioSource>();
                previewSource.clip = audio;
                previewSource.Play();
                await UniTask.Delay((int)audioClip.length * 1000 + 1000);
                Destroy(previewer);
            }

            return text;
        }

        /// <summary>
        /// Returning sentence character sprite
        /// </summary>
        /// <returns></returns>
        public Sprite GetCharacterSprite()
        {
            return characterSprite;
        }

#if UNITY_EDITOR

        /// <summary>
        /// Draw Sentence Node method
        /// </summary>
        /// <param name="nodeStyle"></param>
        /// <param name="lableStyle"></param>
        public override void Draw(GUIStyle nodeStyle, GUIStyle lableStyle)
        {
            EditorUtility.SetDirty(this);
            base.Draw(nodeStyle, lableStyle);

            rect.size = new Vector2(220, 180);
            GUILayout.BeginArea(rect, nodeStyle);

            EditorGUILayout.LabelField("Sentence Node", lableStyle);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Name ", GUILayout.Width(lableFieldSpace));
            characterName = EditorGUILayout.TextField(characterName, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Text ", GUILayout.Width(lableFieldSpace));
            text = EditorGUILayout.TextField(text, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Sprite ", GUILayout.Width(lableFieldSpace));
            characterSprite = (Sprite)EditorGUILayout.ObjectField(characterSprite,
                typeof(Sprite), false, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"声音文件 ", GUILayout.Width(lableFieldSpace));
            // audioClip = AssetDatabase.LoadAssetAtPath<AudioClip>( audioClipPath);

            audioClip = (AudioClip)EditorGUILayout.ObjectField(audioClip, typeof(AudioClip), false,
                GUILayout.Width(textFieldWidth - 60));


            if (GUILayout.Button("Play"))
            {
                var _ = Play();

                async Task Play()
                {
                    GameObject previewer = new GameObject("AudioPreviewer");
                    var previewSource = previewer.AddComponent<AudioSource>();
                    previewSource.clip = audioClip;
                    previewSource.Play();
                    await Task.Delay((int)audioClip.length * 1000 + 1000);
                    DestroyImmediate(previewer);
                }
            }

            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"创建声音 ", GUILayout.Width(lableFieldSpace));
            if (GUILayout.Button("AI生成"))
            {
                audioClipName = VoiceCreator.VoiceCreat(text);
                var path = Path.Combine(Application.dataPath, "Game", "DependRes", "Voice", audioClipName);
                while (true)
                {
                    if (File.Exists(path))
                    {
                        break;
                    }
                }

                AssetDatabase.Refresh();
                audioClip = AssetDatabase.LoadAssetAtPath<AudioClip>(Path.Combine("Assets", "Game", "DependRes",
                    "Voice", audioClipName));
                rect.position += new Vector2(0.01f, 0);
            }


            EditorGUILayout.EndHorizontal();


            GUILayout.EndArea();
        }

        /// <summary>
        /// Adding nodeToAdd Node to the childNode field
        /// </summary>
        /// <param name="nodeToAdd"></param>
        /// <returns></returns>
        public override bool AddToChildConnectedNode(Node nodeToAdd)
        {
            SentenceNode sentenceNodeToAdd;

            if (nodeToAdd.GetType() == typeof(SentenceNode))
            {
                nodeToAdd = (SentenceNode)nodeToAdd;

                if (nodeToAdd == this)
                {
                    return false;
                }
            }

            if (nodeToAdd.GetType() == typeof(SentenceNode))
            {
                sentenceNodeToAdd = (SentenceNode)nodeToAdd;

                if (sentenceNodeToAdd != null && sentenceNodeToAdd.childNode == this)
                {
                    return false;
                }
            }

            childNode = nodeToAdd;
            return true;
        }

        /// <summary>
        /// Adding nodeToAdd Node to the parentNode field
        /// </summary>
        /// <param name="nodeToAdd"></param>
        /// <returns></returns>
        public override bool AddToParentConnectedNode(Node nodeToAdd)
        {
            SentenceNode sentenceNodeToAdd;

            if (nodeToAdd.GetType() == typeof(SentenceNode))
            {
                nodeToAdd = (SentenceNode)nodeToAdd;

                if (nodeToAdd == this)
                {
                    return false;
                }
            }

            parentNode = nodeToAdd;

            if (nodeToAdd.GetType() == typeof(SentenceNode))
            {
                sentenceNodeToAdd = (SentenceNode)nodeToAdd;

                if (sentenceNodeToAdd.childNode == this)
                {
                    return true;
                }
                else
                {
                    parentNode = null;
                }
            }

            return true;
        }

#endif
    }
}