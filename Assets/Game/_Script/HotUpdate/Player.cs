using UnityEngine;

public class Player : MonoBehaviour
{
    private Rigidbody2D rigidbody2D;
    // [SerializeField] Rigidbody rigidbody;
    // private NavMeshAgent navMeshAgent;
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
       // navMeshAgent = rigidbody.gameObject.GetComponent<NavMeshAgent>();
    }
    
    void Update()
    {
        if (Input.touchCount>0 || Input.GetMouseButtonDown(0))
        {
            rigidbody2D.AddForce(Vector2.up*200);
            Debug.Log("A");
           // rigidbody.AddForce(Vector3.up*200);
            //navMeshAgent.SetDestination(Vector3.zero);
        }
    }
}
