using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using Game._Script.HotUpdate.Base;
using Spine.Unity;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Animation = Spine.Animation;

namespace Game._Script.HotUpdate.Suntail_Village.Scripts
{
    public class MissionBanner: BaseInteractObj
    {
        [SerializeField] private CinemachineVirtualCamera vc;
        [SerializeField] private GameObject ui;
        [SerializeField] private Button closeButton;
        [SerializeField] private Button confirmButton;

        private void Start()
        {
            vc.gameObject.SetActive(false);
            ui.gameObject.SetActive(false);
            closeButton.onClick.AddListener(() =>
            {
                Interact(_player);
            });
            
            confirmButton.onClick.AddListener(() =>
            {
                var anim = _player.GetComponentInChildren<SkeletonAnimation>();
                var tr= anim.AnimationState.AddAnimation(1, "04_joy_short", false, 0);
                tr.Complete += async entry =>
                {
                    Interact(_player);
                    anim.AnimationState.ClearTrack(tr.TrackIndex);
                    var t = new BattleParam
                    {
                        Player = new List<string>() { "Prefab_Spine_GameObject_100361" },
                        Enemy = new List<string>() { "Prefab_Spine_GameObject_111031" },
                        EnvId = 0
                    };

                     await SceneMgr.Instance.EnterBattleScene(t);
                };
            });
            
        }

        public override void Interact(TestPlayer player)
        {           
            base.Interact(player);
            _player = player;
            vc.gameObject.SetActive(_isOn);
            ui.gameObject.SetActive(_isOn);
            
        }
    }
}