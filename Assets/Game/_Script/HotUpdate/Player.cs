using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Player : MonoBehaviour
{
    private Rigidbody2D rigidbody2D;
    [SerializeField] Rigidbody rigidbody;
    private NavMeshAgent navMeshAgent;
    
    // Start is called before the first frame update
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        navMeshAgent = rigidbody.gameObject.GetComponent<NavMeshAgent>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount>0 || Input.GetMouseButtonDown(0))
        {
            rigidbody2D.AddForce(Vector2.up*200);
            rigidbody.AddForce(Vector3.up*200);
            navMeshAgent.SetDestination(Vector3.zero);
        }
    }
}
