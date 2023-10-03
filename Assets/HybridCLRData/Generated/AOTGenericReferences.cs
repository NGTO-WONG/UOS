using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"UniTask.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.UniTask.Awaiter<int>
	// Cysharp.Threading.Tasks.UniTask<int>
	// System.Collections.Generic.List<Cysharp.Threading.Tasks.UniTask>
	// }}

	public void RefMethods()
	{
		// Cysharp.Threading.Tasks.UniTask<int> Cysharp.Threading.Tasks.UniTaskExtensions.AttachExternalCancellation<int>(Cysharp.Threading.Tasks.UniTask<int>,System.Threading.CancellationToken)
	}
}