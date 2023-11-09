using UnityEngine;
using Cinemachine;
using Spine.Unity;
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
        private bool _isOn=false;
        private TestPlayer _player;

        private void Start()
        {
            vc.gameObject.SetActive(false);
            ui.gameObject.SetActive(false);
            closeButton.onClick.AddListener(() =>
            {
                Interact(_player);
            });
            
            confirmButton.onClick.AddListener(async () =>
            {
                var anim = _player.GetComponentInChildren<SkeletonAnimation>();
                var tr= anim.AnimationState.AddAnimation(1, "04_joy_short", false, 0);
                tr.Complete += entry =>
                {
                    Interact(_player);
                    anim.AnimationState.ClearTrack(tr.TrackIndex);
                };
            });
            
        }

        public override void Interact(TestPlayer player)
        {           
            _isOn = !_isOn;
            _player = player;
            vc.gameObject.SetActive(_isOn);
            ui.gameObject.SetActive(_isOn);
            
        }
    }
}