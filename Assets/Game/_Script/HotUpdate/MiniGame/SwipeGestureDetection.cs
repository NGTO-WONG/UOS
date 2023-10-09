using TMPro;
using UnityEngine;

public class SwipeGestureDetection : MonoBehaviour
{
    private Vector2 touchStartPos;
    private Vector2 touchEndPos;

    public float swipeThreshold = 50f; // 滑动识别的阈值，可以根据需要调整
    public TextMeshProUGUI swipeDirectionText; // 用于显示滑动方向的文本

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    touchStartPos = touch.position;
                    break;

                case TouchPhase.Ended:
                    touchEndPos = touch.position;
                    Vector2 swipeDirection = touchEndPos - touchStartPos;

                    if (swipeDirection.magnitude > swipeThreshold)
                    {
                        float angle = Vector2.SignedAngle(Vector2.right, swipeDirection);

                        if (angle > -45 && angle <= 45)
                        {
                            // 右滑动
                            swipeDirectionText.text = "右滑动";
                        }
                        else if (angle > 45 && angle <= 135)
                        {
                            // 上滑动
                            swipeDirectionText.text = "上滑动";
                        }
                        else if (angle > 135 || angle <= -135)
                        {
                            // 左滑动
                            swipeDirectionText.text = "左滑动";
                        }
                        else if (angle > -135 && angle <= -45)
                        {
                            // 下滑动
                            swipeDirectionText.text = "下滑动";
                        }
                    }
                    break;
            }
        }
    }
}