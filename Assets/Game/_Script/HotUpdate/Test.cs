using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent;
    
    void Start()
    {
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
        Debug.Log(Application.targetFrameRate);
    }
        

    void Update()
    {
        // 检测鼠标点击或者触摸屏幕
        if (Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began))
        {
            Ray ray;

            // 检测是否是触摸事件
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                ray = Camera.main.ScreenPointToRay(touch.position);
            }
            else
            {
                // 否则就是鼠标事件
                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            }

            if (Physics.Raycast(ray, out var hit))
            {
                // 设置NavMeshAgent的目的地为射线击中的点
                agent.SetDestination(hit.point);
            }
        }
    }
    

}