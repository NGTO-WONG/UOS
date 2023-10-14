using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"DOTween.dll",
		"System.Core.dll",
		"UniTask.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator<object>
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase<object>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<byte>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<int>
	// Cysharp.Threading.Tasks.UniTask<byte>
	// Cysharp.Threading.Tasks.UniTask<int>
	// System.Collections.Generic.Dictionary<object,int>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.List<Cysharp.Threading.Tasks.UniTask>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.Queue<object>
	// System.Func<UnityEngine.Vector3,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask>
	// UnityEngine.Pool.IObjectPool<object>
	// UnityEngine.Pool.PooledObject<object>
	// }}

	public void RefMethods()
	{
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions.TweenAwaiter,CubePlayer.<Move>d__3>(Cysharp.Threading.Tasks.DOTweenAsyncExtensions.TweenAwaiter&,CubePlayer.<Move>d__3&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1>(Cysharp.Threading.Tasks.UniTask.Awaiter&,Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,Game._Script.HotUpdate.MiniGame.AttackArea.<LifeTimeCheck>d__2>(Cysharp.Threading.Tasks.UniTask.Awaiter&,Game._Script.HotUpdate.MiniGame.AttackArea.<LifeTimeCheck>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<byte>,Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1>(Cysharp.Threading.Tasks.UniTask.Awaiter<byte>&,Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Game._Script.HotUpdate.SwticherScene.<SwitchScene>d__2>(System.Runtime.CompilerServices.TaskAwaiter&,Game._Script.HotUpdate.SwticherScene.<SwitchScene>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<CubePlayer.<Move>d__3>(CubePlayer.<Move>d__3&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<Game._Script.HotUpdate.Base.EventManager.<TriggerEvent>d__4<UnityEngine.Vector3>>(Game._Script.HotUpdate.Base.EventManager.<TriggerEvent>d__4<UnityEngine.Vector3>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<Game._Script.HotUpdate.Base.EventManager.<TriggerEventGuardScreen>d__3<UnityEngine.Vector3>>(Game._Script.HotUpdate.Base.EventManager.<TriggerEventGuardScreen>d__3<UnityEngine.Vector3>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1>(Game._Script.HotUpdate.MiniGame.AttackArea.<HitCheck>d__1&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<Game._Script.HotUpdate.MiniGame.AttackArea.<LifeTimeCheck>d__2>(Game._Script.HotUpdate.MiniGame.AttackArea.<LifeTimeCheck>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<Game._Script.HotUpdate.SwticherScene.<SwitchScene>d__2>(Game._Script.HotUpdate.SwticherScene.<SwitchScene>d__2&)
		// Cysharp.Threading.Tasks.UniTask<int> Cysharp.Threading.Tasks.UniTaskExtensions.AttachExternalCancellation<int>(Cysharp.Threading.Tasks.UniTask<int>,System.Threading.CancellationToken)
		// object DG.Tweening.TweenSettingsExtensions.SetEase<object>(object,DG.Tweening.Ease)
		// object System.Activator.CreateInstance<object>()
		// object System.Linq.Enumerable.FirstOrDefault<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,Game._Script.HotUpdate.SwticherScene.<>c__DisplayClass1_0.<<Start>b__0>d>(Cysharp.Threading.Tasks.UniTask.Awaiter&,Game._Script.HotUpdate.SwticherScene.<>c__DisplayClass1_0.<<Start>b__0>d&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,SwipHandler.<Update>d__5>(Cysharp.Threading.Tasks.UniTask.Awaiter&,SwipHandler.<Update>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<int>,Game._Script.HotUpdate.MiniGame.AttackArea.<OnTriggerEnter>d__0>(Cysharp.Threading.Tasks.UniTask.Awaiter<int>&,Game._Script.HotUpdate.MiniGame.AttackArea.<OnTriggerEnter>d__0&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Game._Script.HotUpdate.MiniGame.AttackArea.<OnTriggerEnter>d__0>(Game._Script.HotUpdate.MiniGame.AttackArea.<OnTriggerEnter>d__0&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Game._Script.HotUpdate.SwticherScene.<>c__DisplayClass1_0.<<Start>b__0>d>(Game._Script.HotUpdate.SwticherScene.<>c__DisplayClass1_0.<<Start>b__0>d&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Game._Script.HotUpdate.SwticherScene.<Start>d__1>(Game._Script.HotUpdate.SwticherScene.<Start>d__1&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<SwipHandler.<Update>d__5>(SwipHandler.<Update>d__5&)
		// object UnityEngine.Component.GetComponentInChildren<object>()
		// bool UnityEngine.GameObject.TryGetComponent<object>(object&)
		// object UnityEngine.Object.FindObjectOfType<object>()
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Resources.Load<object>(string)
	}
}