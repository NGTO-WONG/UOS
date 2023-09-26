using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"System.Core.dll",
		"UniTask.dll",
		"UnityEngine.CoreModule.dll",
		"UnityEngine.UI.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.UniTask.Awaiter<int>
	// Cysharp.Threading.Tasks.UniTask<int>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<Watermelon.AdvertisingModules,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,MovableController.State>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<Watermelon.AdvertisingModules,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,MovableController.State>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<Watermelon.AdvertisingModules,object>
	// System.Collections.Generic.Dictionary<Watermelon.StorePageName,object>
	// System.Collections.Generic.Dictionary<object,MovableController.State>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List.Enumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<Cysharp.Threading.Tasks.UniTask>
	// System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.List<UnityEngine.Vector2Int>
	// System.Collections.Generic.List<UnityEngine.Vector3>
	// System.Collections.Generic.List<Watermelon.Pool.MultiPoolPrefab>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Predicate<int>
	// System.Predicate<object>
	// UnityEngine.Events.UnityAction<UnityEngine.Vector4>
	// UnityEngine.Events.UnityAction<float>
	// UnityEngine.Events.UnityAction<object>
	// UnityEngine.Events.UnityEvent<byte>
	// UnityEngine.Events.UnityEvent<object>
	// }}

	public void RefMethods()
	{
		// Cysharp.Threading.Tasks.UniTask<int> Cysharp.Threading.Tasks.UniTaskExtensions.AttachExternalCancellation<int>(Cysharp.Threading.Tasks.UniTask<int>,System.Threading.CancellationToken)
		// object System.Activator.CreateInstance<object>()
		// object[] System.Array.Empty<object>()
		// object System.Array.Find<object>(object[],System.Predicate<object>)
		// int System.Array.FindIndex<object>(object[],System.Predicate<object>)
		// System.Void System.Array.Resize<object>(object[]&,int)
		// System.Collections.Generic.List<object> System.Linq.Enumerable.ToList<object>(System.Collections.Generic.IEnumerable<object>)
		// object System.Threading.Interlocked.CompareExchange<object>(object&,object,object)
		// object UnityEngine.Component.GetComponent<object>()
		// bool UnityEngine.EventSystems.ExecuteEvents.Execute<object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents.EventFunction<object>)
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.Object.FindObjectOfType<object>()
		// object UnityEngine.Object.Instantiate<object>(object)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
	}
}