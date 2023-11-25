using Game._Script.HotUpdate.Suntail_Village.Scripts;
using GraphSpace;
using PlayTextSupport;
using Spine.Unity;
using UnityEngine;

namespace Game._Script.HotUpdate.Battle.ChessBoard
{
    public class NPC_Uni : BaseInteractObj
    {
        [SerializeField] public DialogueGraph Graph;
        [SerializeField] private SkeletonAnimation uni;

        private void Start()
        {
            EventCenter.GetInstance().AddEventListener("PlayText.TalkingFinished",OnDialogFinish);
            
        }

        private void OnDialogFinish()
        {
            Debug.Log("A");
            Interact(_player);
        }

        public override void Interact(TestPlayer player)
        {
            base.Interact(player);
            if (_isOn)
            {
                EventCenter.GetInstance().EventTriggered("PlayGraph",Graph);
            }
            else
            {
                
            }
            uni.transform.localScale = (uni.transform.position-_player.transform.position).x>0 ? new Vector3(-1, 1, 1) : new Vector3(1, 1, 1);
        }
    }
}