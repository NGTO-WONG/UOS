using UnityEngine;
using cherrydev;
using Game._Script.AOT.DialogNodeBasedSystem.Scripts.Dialog;

public class TestDialogStarter : MonoBehaviour
{
    [SerializeField] private DialogBehaviour dialogBehaviour;
    [SerializeField] private DialogNodeGraph dialogGraph;

    private void Start()
    {
        dialogBehaviour.StartDialog(dialogGraph);
    }
}