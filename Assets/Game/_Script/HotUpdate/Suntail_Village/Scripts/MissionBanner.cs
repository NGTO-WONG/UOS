using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using Game._Script.HotUpdate.Base;
using Game._Script.HotUpdate.Battle;
using Game._Script.HotUpdate.Battle.ChessBoard;
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
                    var t = new BattleStartParam
                    {
                        Attacker = new List<string>() { "Prefab_Battle_Ren","Prefab_Battle_Ren" },
                        Defender = new List<string>() { "Prefab_Battle_Peko","Prefab_Battle_Peko" },
                        EnvId = 0
                    };

                     await SceneMgr.Instance.StartBattleAsync(t);
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