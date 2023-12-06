// using Cysharp.Threading.Tasks;
// using XNode;
//
// namespace Game._Script.HotUpdate.Xnode
// {
//     [CreateNodeMenu("M/StartNode")]
//     public class StartNode : Node, IPlayableNode
//     {
//         [Output] public string output;
//         public AdvSceneData data;
//
//         public async UniTask<Node> Play()
//         {
//             await UniTask.Delay(1000);
//             return GetPort("output").Connection.node;
//         }
//     }
// }