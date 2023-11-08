using System;
using UnityEngine;
using Cinemachine;
using UnityEngine.UI;

namespace Game._Script.HotUpdate.Suntail_Village.Scripts
{
    public class MissionBanner: BaseInteractObj
    {
        [SerializeField] private CinemachineVirtualCamera vc;
        [SerializeField] private Button ui;
        private bool isOn;

        private void Start()
        {
            // ui.onClick.AddListener(() =>
            // {
            //     vc.gameObject.SetActive(false);
            //     ui
            // });
        }

        public override void Interact()
        {
            
        }
    }
}