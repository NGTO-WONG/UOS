using Cysharp.Threading.Tasks;
using DG.Tweening;
using Game._Script.HotUpdate.Base;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : SingletonMonoBehaviour<UIManager>
{
    [SerializeField] private Image blackScreen;

    private void Start()
    {
        DontDestroyOnLoad(this);
    }

    public async UniTask Fade(bool isOn, float duration)
    {
        if (isOn)
        {
            blackScreen.gameObject.SetActive(true);
            blackScreen.color = Color.clear;
            await blackScreen.DOColor(Color.black, duration);
        }
        else
        {
            blackScreen.color =Color.black;
            await blackScreen.DOColor(Color.black*0.5f,duration).SetEase(Ease.OutBack);
            blackScreen.gameObject.SetActive(false);
        }
    }
}