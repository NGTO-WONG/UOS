using DG.Tweening;

namespace Game._Script.HotUpdate.Suntail_Village.Scripts
{
    public class Door : BaseInteractObj
    {
        private bool _closeing = true;
        public override void Interact()
        {
            transform.DOLocalMoveY(_closeing?3f:1f, 1f);
            _closeing = !_closeing;
        }
    }
}