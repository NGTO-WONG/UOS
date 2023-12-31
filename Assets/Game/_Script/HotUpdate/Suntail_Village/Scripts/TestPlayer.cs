using Cysharp.Threading.Tasks.Linq;
using Cysharp.Threading.Tasks.Triggers;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Game._Script.HotUpdate.Suntail_Village.Scripts
{
    public class TestPlayer : MonoBehaviour
    {
        [SerializeField] private Button interactButton;
        [SerializeField] private CapsuleCollider capsuleCollider;
        private BaseInteractObj _interactObj;
    
        void Start()
        {
            Application.targetFrameRate = 60;
            QualitySettings.vSyncCount = 0;

            capsuleCollider.transform.GetAsyncTriggerEnterTrigger().ForEachAsync((collision) =>
            {
                if (collision.gameObject.TryGetComponent<BaseInteractObj>(out var interactObj))
                {
                    interactButton.gameObject.SetActive(true);
                    _interactObj = interactObj;
                    interactButton.GetComponentInChildren<TextMeshProUGUI>().text = collision.gameObject.name;
                }
            });
            
            capsuleCollider.transform.GetAsyncTriggerExitTrigger().ForEachAsync((collision) =>
            {
                if (collision.gameObject.TryGetComponent<BaseInteractObj>(out var interactObj))
                {
                    interactButton.gameObject.SetActive(false);
                    _interactObj = null;
                }
            });
            
            interactButton.onClick.AddListener(()=>_interactObj.Interact(this));
        }
        


    }
}