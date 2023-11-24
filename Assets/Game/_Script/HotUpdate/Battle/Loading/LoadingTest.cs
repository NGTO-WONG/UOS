using System;
using UnityEngine;
using UnityEngine.UI;

namespace Game._Script.HotUpdate.Battle.Loading
{
    public class LoadingTest : MonoBehaviour
    {
        [SerializeField] private Image targetImage;
        [SerializeField] private Camera renderCamera=>Camera.main;
        
        private void OnEnable()
        {
            string shaderName = "Custom/URPRadialBlur";
            Material radialBlurMaterial = new Material(Shader.Find(shaderName));
            // 创建一个与屏幕大小相同的 RenderTexture
            RenderTexture rt = new RenderTexture(Screen.width, Screen.height, 24);
    
            // 设置相机的目标纹理为我们创建的 RenderTexture
            renderCamera.targetTexture = rt;
    
            // 开始渲染到 RenderTexture
            renderCamera.Render();

            // 将 RenderTexture 设置为径向模糊材质的主纹理
            radialBlurMaterial.mainTexture = rt;
    
            // 将径向模糊材质应用到 UI Image 组件
            targetImage.material = radialBlurMaterial;

            // 重置相机的目标纹理
            renderCamera.targetTexture = null;
            
        }
    }
}