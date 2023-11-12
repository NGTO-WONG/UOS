using System.IO;
using System.Threading.Tasks;
using Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.Others;
#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;

namespace Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.NodeEditor
{
    [CreateAssetMenu(menuName = "Scriptable Objects/Nodes/Sentence Node", fileName = "New Sentence Node")]
    public class SentenceNode : Node
    {
        [SerializeField] private Sentence sentence;

        [Space(10)]
        public Node parentNode;

        public Node childNode;

        private const float lableFieldSpace = 40f;
        private const float textFieldWidth = 150f;

        /// <summary>
        /// Returning sentence character name
        /// </summary>
        /// <returns></returns>
        public string GetSentenceCharacterName()
        {
            return sentence.characterName;
        }

        /// <summary>
        /// Returning sentence text
        /// </summary>
        /// <returns></returns>
        public string GetSentenceText()
        {
            var _=Play();
            async Task Play()
            {
                GameObject previewer = new GameObject("AudioPreviewer");
                var previewSource = previewer.AddComponent<AudioSource>();
                previewSource.clip = sentence.audioClip;
                previewSource.Play();
                await Task.Delay((int)sentence.audioClip.length * 1000+1000);
                DestroyImmediate(previewer);
            }
            
            return sentence.text;

        }

        /// <summary>
        /// Returning sentence character sprite
        /// </summary>
        /// <returns></returns>
        public Sprite GetCharacterSprite()
        {
            return sentence.characterSprite;
        }

#if UNITY_EDITOR

        /// <summary>
        /// Draw Sentence Node method
        /// </summary>
        /// <param name="nodeStyle"></param>
        /// <param name="lableStyle"></param>
        public override void Draw(GUIStyle nodeStyle, GUIStyle lableStyle)
        {
            base.Draw(nodeStyle, lableStyle);

            rect.size = new Vector2(220, 180);
            GUILayout.BeginArea(rect, nodeStyle);

            EditorGUILayout.LabelField("Sentence Node", lableStyle);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Name ", GUILayout.Width(lableFieldSpace));
            sentence.characterName = EditorGUILayout.TextField(sentence.characterName, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Text ", GUILayout.Width(lableFieldSpace));
            sentence.text = EditorGUILayout.TextField(sentence.text, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"Sprite ", GUILayout.Width(lableFieldSpace));
            sentence.characterSprite = (Sprite)EditorGUILayout.ObjectField(sentence.characterSprite,
                typeof(Sprite), false, GUILayout.Width(textFieldWidth));
            EditorGUILayout.EndHorizontal();
            
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"声音文件 ", GUILayout.Width(lableFieldSpace));
            //sentence.audioClip = AssetDatabase.LoadAssetAtPath<AudioClip>(sentence.audioClipPath);

            sentence.audioClip = (AudioClip)EditorGUILayout.ObjectField(sentence.audioClip, typeof(AudioClip), false,
                GUILayout.Width(textFieldWidth - 60));
            
            
            if (GUILayout.Button("Play"))
            {
                
                var _= Play();

                async Task Play()
                {
                    GameObject previewer = new GameObject("AudioPreviewer");
                    var previewSource = previewer.AddComponent<AudioSource>();
                    previewSource.clip = sentence.audioClip;
                    previewSource.Play();
                    await Task.Delay((int)sentence.audioClip.length * 1000+1000);
                    DestroyImmediate(previewer);
                }
                
            }
            EditorGUILayout.EndHorizontal();
            
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField($"创建声音 ", GUILayout.Width(lableFieldSpace));
            if (GUILayout.Button("AI生成"))
            {
                sentence.audioClipName = VoiceCreator.VoiceCreat(sentence.text);
                var path = Path.Combine(Application.dataPath, "Game", "DependRes", "Voice", sentence.audioClipName);
                while (true)
                {
                    if (File.Exists(path))
                    {
                        break;
                    }
                }
                AssetDatabase.Refresh();
                sentence.audioClip = AssetDatabase.LoadAssetAtPath<AudioClip>(Path.Combine("Assets", "Game", "DependRes", "Voice", sentence.audioClipName));
            }
            if (GUILayout.Button("FindMissing"))
            {
                var path = Path.Combine("Assets", "Game", "DependRes", "Voice", sentence.audioClipName);
                sentence.audioClip = AssetDatabase.LoadAssetAtPath<AudioClip>(path);
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
