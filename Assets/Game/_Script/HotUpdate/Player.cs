using UnityEngine;
using UnityEngine.AI;

public class Player : MonoBehaviour
{
    private Rigidbody rigidbody;
    private NavMeshAgent navMeshAgent;

    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        if (Input.touchCount > 0 || Input.GetMouseButtonDown(0))
        {
            rigidbody.AddForce(Vector3.up * 200);
            navMeshAgent.SetDestination(Vector3.zero);
        }
    }
}