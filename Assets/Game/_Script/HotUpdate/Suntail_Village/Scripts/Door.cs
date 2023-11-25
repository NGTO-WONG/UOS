using DG.Tweening;
using Game._Script.HotUpdate.Battle.ChessBoard;

namespace Game._Script.HotUpdate.Suntail_Village.Scripts
{
    public class Door : BaseInteractObj
    {
        private bool _closeing = true;
        public override void Interact(TestPlayer player)
        {
            transform.DOLocalMoveY(_closeing?3f:1f, 1f);
            _closeing = !_closeing;
        }
    }
}