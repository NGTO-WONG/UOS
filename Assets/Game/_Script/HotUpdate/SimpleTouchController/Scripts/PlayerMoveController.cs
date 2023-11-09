using UnityEngine;
using System.Collections;
using Spine.Unity;

[RequireComponent(typeof(Rigidbody))]

public class PlayerMoveController : MonoBehaviour {

	// PUBLIC
	public SimpleTouchController leftController;
	public SimpleTouchController rightController;
	public Transform headTrans;
	public float speedMovements = 5f;
	public float speedContinuousLook = 100f;
	public float speedProgressiveLook = 3000f;

	// PRIVATE
	private Rigidbody _rigidbody;
	private SkeletonAnimation _skeletonAnimation;
	[SerializeField] bool continuousRightController = true;
	private const string MOVE = "000000_noWeapon_run";
	private const string IDLE = "000000_noWeapon_idle";

	void Awake()
	{
		_rigidbody = GetComponent<Rigidbody>();
		_skeletonAnimation = GetComponentInChildren<SkeletonAnimation>();
		rightController.TouchEvent += RightController_TouchEvent;
	}

	public bool ContinuousRightController
	{
		set{continuousRightController = value;}
	}

	void RightController_TouchEvent (Vector2 value)
	{
		if(!continuousRightController)
		{
			UpdateAim(value);
		}
	}

	void Update()
	{
		// move
		_rigidbody.MovePosition(transform.position + (Vector3.forward * (leftController.GetTouchPosition.y * Time.deltaTime * speedMovements)) +
			(Vector3.right * (leftController.GetTouchPosition.x * Time.deltaTime * speedMovements)) );
		var aniName = leftController.GetTouchPosition.normalized.sqrMagnitude > 0.1f ? MOVE : IDLE;
		if (_skeletonAnimation.AnimationName != aniName)
		{
			_skeletonAnimation.state.SetAnimation(0, aniName, true);
		}

		if (leftController.GetTouchPosition.x > 0f)
		{
			_skeletonAnimation.transform.localScale = new Vector3(1f, 1f, 1f);

			// // 只有当目标旋转和当前旋转不一致时才执行动画
			// if (currentYRotation != targetYRotation)
			// {
			// 	// 这里我们旋转整个角色，你可以根据需要旋转特定的骨骼
			// 	skeletonAnimation.transform.DORotate(new Vector3(0f, targetYRotation, 0f), duration)
			// 		.SetEase(Ease.OutQuad)
			// 		.OnUpdate(() => currentYRotation = skeletonAnimation.transform.eulerAngles.y);
			// }
		}
		else if (leftController.GetTouchPosition.x < 0f)
		{
			// 向左移动，设置缩放为负值以翻转角色
			_skeletonAnimation.transform.localScale = new Vector3(-1f, 1f, 1f);
		}
		
		if(continuousRightController)
		{
			UpdateAim(rightController.GetTouchPosition);
		}
	}

	void UpdateAim(Vector2 value)
	{
		if(headTrans != null)
		{
			Quaternion rot = Quaternion.Euler(0f,
				transform.localEulerAngles.y - value.x * Time.deltaTime * -speedProgressiveLook,
				0f);

			_rigidbody.MoveRotation(rot);

			rot = Quaternion.Euler(headTrans.localEulerAngles.x - value.y * Time.deltaTime * speedProgressiveLook,
				0f,
				0f);
			headTrans.localRotation = rot;

		}
		else
		{

			Quaternion rot = Quaternion.Euler(transform.localEulerAngles.x - value.y * Time.deltaTime * speedProgressiveLook,
				transform.localEulerAngles.y + value.x * Time.deltaTime * speedProgressiveLook,
				0f);

			_rigidbody.MoveRotation(rot);
		}
	}

	void OnDestroy()
	{
		rightController.TouchEvent -= RightController_TouchEvent;
	}

}
