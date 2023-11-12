using UnityEngine;
using UnityEngine.Serialization;

namespace Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.Others
{
    [System.Serializable]
    public struct Sentence
    {
        public string characterName;
        public string text;
        public Sprite characterSprite;
        public AudioClip audioClip;
        public string audioClipName;

        public Sentence(string characterName, string text)
        {
            characterSprite = null;
            this.characterName = characterName;
            this.text = text;
            audioClip = null;
            audioClipName = null;
        }
    }
}