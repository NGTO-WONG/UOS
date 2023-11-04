using Game._Script.HotUpdate.MiniGame;
using UnityEngine;

public class CubeEnemy : MonoBehaviour
{
    public int Hp=10;
    
    public void Hurt(Bullet bullet)
    {
        Hp--;
        if (Hp<=0)
        {
            Debug.Log("Die");
            gameObject.SetActive(false);
        }
    }
    
}
