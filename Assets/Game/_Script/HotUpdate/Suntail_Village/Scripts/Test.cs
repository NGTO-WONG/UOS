using UnityEngine;
using UnityEngine.AI;

public class Test : MonoBehaviour
{
    // [SerializeField] private NavMeshAgent agent;
    
    void Start()
    {
        Application.targetFrameRate = 60;
        QualitySettings.vSyncCount = 0;
    }
        

    void Update()
    {
        // if (Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began))
        // {
        //     Ray ray;
        //
        //     if (Input.touchCount > 0)
        //     {
        //         Touch touch = Input.GetTouch(0);
        //         ray = Camera.main.ScreenPointToRay(touch.position);
        //     }
        //     else
        //     {
        //         ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //     }
        //
        //     if (Physics.Raycast(ray, out var hit))
        //     {
        //         agent.SetDestination(hit.point);
        //     }
        // }
    }
    

}