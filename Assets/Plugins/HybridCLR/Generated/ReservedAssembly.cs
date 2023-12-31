using System.Text;
using UnityEngine;

namespace GameMain.Scripts.HybridCLR
{
    public class ReservedAssembly : MonoBehaviour
	{
	    private void Awake()
		{
            var sb = new StringBuilder();

			void Reserved<T>()
			{
				sb.AppendLine(typeof(T).ToString());
			}

			Reserved<Microsoft.Win32.SafeHandles.SafeFileHandle>(); // mscorlib.dll
			Reserved<AOT.MonoPInvokeCallbackAttribute>(); // UnityEngine.CoreModule.dll
			Reserved<DG.Tweening.Color2>(); // DOTween.dll
			Reserved<Cysharp.Threading.Tasks.AsyncLazy>(); // UniTask.dll
			Reserved<UnityEngine.ControllerColliderHit>(); // UnityEngine.PhysicsModule.dll
			Reserved<UnityEngine.UI.AnimationTriggers>(); // UnityEngine.UI.dll
			Reserved<TMPro.FastAction>(); // Unity.TextMeshPro.dll
			Reserved<FullScreenPassRendererFeature>(); // Unity.RenderPipelines.Universal.Runtime.dll
			Reserved<Microsoft.VisualBasic.VBCodeProvider>(); // System.dll
			Reserved<UnityEngine.AudioSettings>(); // UnityEngine.AudioModule.dll
			Reserved<YooAsset.DownloadRequestDelegate>(); // YooAsset.dll
			Reserved<CinemachineCameraOffset>(); // Cinemachine.dll
			Reserved<Microsoft.Win32.SafeHandles.SafePipeHandle>(); // System.Core.dll
			Reserved<UnityEngine.U2D.IK.CCDSolver2D>(); // Unity.2D.IK.Runtime.dll
			Reserved<UnityEngine.SharedBetweenAnimatorsAttribute>(); // UnityEngine.AnimationModule.dll
			Reserved<UnityEngine.Event>(); // UnityEngine.IMGUIModule.dll
			Reserved<UnityEngine.Experimental.Rendering.XRLayout>(); // Unity.RenderPipelines.Core.Runtime.dll
			Reserved<UnityEngine.XR.InputDevices>(); // UnityEngine.XRModule.dll
			Reserved<Unity.XR.OpenVR.OpenVRHMD>(); // Unity.InputSystem.dll
			Reserved<UnityEngine.Terrain>(); // UnityEngine.TerrainModule.dll
			Reserved<UnityEngine.IntegratedSubsystem>(); // UnityEngine.SubsystemsModule.dll
			Reserved<UnityEngineInternal.XR.WSA.RemoteSpeechAccess>(); // UnityEngine.VRModule.dll
			Reserved<UnityEngine.LocationService>(); // UnityEngine.InputLegacyModule.dll
			Reserved<UnityEngine.TextGenerator>(); // UnityEngine.TextRenderingModule.dll
			Reserved<Unity.AI.Navigation.NavMeshLink>(); // Unity.AI.Navigation.dll
			Reserved<UnityEngine.Experimental.AI.NavMeshQuery>(); // UnityEngine.AIModule.dll
			Reserved<UnityEngine.AssetBundleCreateRequest>(); // UnityEngine.AssetBundleModule.dll
			Reserved<UnityEngine.WWWForm>(); // UnityEngine.UnityWebRequestModule.dll
			Reserved<UnityEngine.Networking.DownloadHandlerAssetBundle>(); // UnityEngine.UnityWebRequestAssetBundleModule.dll
			Reserved<Unity.Collections.BitField32>(); // Unity.Collections.dll
			Reserved<Unity.Burst.BurstCompileAttribute>(); // Unity.Burst.dll
			Reserved<Unity.Mathematics.bool2>(); // Unity.Mathematics.dll
			Reserved<UnityEngine.CanvasGroup>(); // UnityEngine.UIModule.dll
			Reserved<UnityEngine.TextCore.GlyphRect>(); // UnityEngine.TextCoreFontEngineModule.dll
			Reserved<UnityEngine.Physics2D>(); // UnityEngine.Physics2DModule.dll
			Reserved<UnityEngine.VFX.VFXEventAttribute>(); // UnityEngine.VFXModule.dll
			Reserved<UnityEngine.U2D.Animation.SkeletonAsset>(); // Unity.2D.Animation.Runtime.dll
			Reserved<UnityEngine.UIElements.DynamicAtlasCustomFilter>(); // UnityEngine.UIElementsModule.dll
			Reserved<UnityEngine.CustomGridBrushAttribute>(); // UnityEngine.TilemapModule.dll
			Reserved<UnityEngine.U2D.SpriteShapeRenderer>(); // UnityEngine.SpriteShapeModule.dll
			Reserved<UnityEngine.Timeline.ActivationTrack>(); // Unity.Timeline.dll
			Reserved<UnityEngine.Playables.PlayableDirector>(); // UnityEngine.DirectorModule.dll
			Reserved<UnityEngine.ParticleSystem>(); // UnityEngine.ParticleSystemModule.dll

            Debug.Log(sb.ToString());
		}
	}
}