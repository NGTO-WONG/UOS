using Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.Dialog;
using Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts.NodeEditor;
using UnityEngine;

namespace Game._Script.HotUpdate.DialogNodeBasedSystem.Scripts
{
    public class TestDialogStarter : MonoBehaviour
    {
        [SerializeField] private DialogBehaviour dialogBehaviour;
        [SerializeField] private DialogNodeGraph dialogGraph;

        private void Start()
        {
            dialogBehaviour.StartDialog(dialogGraph);
        }
    }
}