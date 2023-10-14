using Game._Script.HotUpdate.Base;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class SwipHandler : MonoBehaviour, IEndDragHandler, IBeginDragHandler, IDragHandler
{
    private Vector2 _touchStartPos;
    private Vector2 _touchEndPos;

    public float SwipeThreshold = 20f; // 滑动识别的阈值，可以根据需要调整
    public TextMeshProUGUI SwipeDirectionText; // 用于显示滑动方向的文本


    // async void Update()
    // {
    //     if (Input.touchCount > 0)
    //     {
    //         Touch touch = Input.GetTouch(0);
    //
    //         switch (touch.phase)
    //         {
    //             case TouchPhase.Began:
    //                 _touchStartPos = touch.position;
    //                 break;
    //             case TouchPhase.Ended:
    //                 
    //
    //                 break;
    //         }
    //     }
    // }


    public void OnBeginDrag(PointerEventData eventData)
    {
        _touchStartPos = eventData.position;
    }

    public async void OnEndDrag(PointerEventData eventData)
    {
        _touchEndPos = eventData.position;
        Vector2 swipeDirection = _touchEndPos - _touchStartPos;
    
        if (swipeDirection.magnitude > SwipeThreshold)
        {
            float angle = Vector2.SignedAngle(Vector2.right, swipeDirection);
            switch (angle)
            {
                case > -45 and <= 45:
                    // 右滑动
                    await EventManager<Vector3>.Instance.TriggerEventGuardScreen(EventNames.DragEvent,
                        Vector3.right);
                    SwipeDirectionText.text = "右滑动";
                    break;
                case > 45 and <= 135:
                    // 上滑动
                    await EventManager<Vector3>.Instance.TriggerEventGuardScreen(EventNames.DragEvent,
                        Vector3.up);
                    SwipeDirectionText.text = "上滑动";
                    break;
                case > -135 and <= -45:
                    // 下滑动
                    await EventManager<Vector3>.Instance.TriggerEventGuardScreen(EventNames.DragEvent,
                        Vector3.down);
                    SwipeDirectionText.text = "下滑动";
                    break;
                case > 135:
                case <= -135:
                    // 左滑动
                    await EventManager<Vector3>.Instance.TriggerEventGuardScreen(EventNames.DragEvent,
                        Vector3.left);
                    SwipeDirectionText.text = "左滑动";
                    break;
            }
        }
        
    }

    public void OnDrag(PointerEventData eventData)
    {
        
    }
}