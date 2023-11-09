// using System;
// using TMPro;
// using UnityEngine;
// using UnityEngine.Rendering.Universal;
// using UnityEngine.UI;
//
// public class ShadowSlider : MonoBehaviour
// {
//     [SerializeField] private UniversalRenderPipelineAsset asset;
//     [SerializeField] private Slider count;
//     [SerializeField] private TMP_InputField shadowDistanceInput;
//
//
//     private void Start()
//     {
//         shadowDistanceInput.onValueChanged.AddListener((str) =>
//         {
//             try
//             {
//                 asset.shadowDistance = Convert.ToInt32(shadowDistanceInput.text);
//             }
//             catch
//             {
//                 // ignored
//             }
//         });
//         
//         count.onValueChanged.AddListener(arg0 =>
//         {
//             asset.shadowCascadeCount = Convert.ToInt32(arg0);
//         } );
//     }
//
//     
//     
// }
