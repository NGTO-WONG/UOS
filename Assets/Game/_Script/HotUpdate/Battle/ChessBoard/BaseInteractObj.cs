using UnityEngine;

namespace Game._Script.HotUpdate.Battle.ChessBoard
{
    public abstract class BaseInteractObj : MonoBehaviour
    {        
        protected bool _isOn=false;
        protected TestPlayer _player;
        public virtual void Interact(TestPlayer player)
        {
            _player = player;
            _isOn = !_isOn;
            if (_isOn)
            {
                player.HideButton();
            }
        }
    }
}