using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class CustomRenderFeature : ScriptableRendererFeature
{
    class CustomRenderPass : ScriptableRenderPass
    {
        private Transform cameraTransform;
        private Transform playerTransform;
        private LayerMask layerMask; // 设置LayerMask来只检测特定层上的物体

        // 传递Camera和Player的Transform及LayerMask
        public CustomRenderPass(Transform camera, Transform player, LayerMask mask)
        {
            cameraTransform = camera;
            playerTransform = player;
            layerMask = mask;
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (cameraTransform == null || playerTransform == null)
                return;

            // 计算相机到玩家的方向和距离
            Vector3 direction = playerTransform.position - cameraTransform.position;
            float distance = direction.magnitude;

            // 进行射线检测
            RaycastHit[] results = new RaycastHit[] { };
            var size = Physics.RaycastNonAlloc(cameraTransform.position, direction, results, distance, layerMask);
            foreach (var hit in results)
            {
                // 输出被击中物体的名称
                Debug.Log("Hit object: " + hit.collider.gameObject.name);
            }
        }
    }

    CustomRenderPass m_ScriptablePass;

    public override void Create()
    {
        // 获取相机和玩家的Transform，以及场景LayerMask
        Transform cameraTransform = Camera.main.transform;
        Transform playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
        LayerMask layerMask = LayerMask.GetMask("Environment"); // 替换为你的场景层名称

        m_ScriptablePass = new CustomRenderPass(cameraTransform, playerTransform, layerMask);
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
        renderer.EnqueuePass(m_ScriptablePass);
    }
}