using System;
using UnityEngine;
using UnityEngine.Playables;
using MeshRenderer = UnityEngine.MeshRenderer;

namespace Game._Script.HotUpdate.Battle.Timeline.Material
{
    public class MaterialBehaviour : PlayableBehaviour
    {
        public MaterialClip.MaterialValueType materialValueType;
        public string propertyName;
        
        //Float
        public double startValue;
        public double endValue;
        //Vector3
        public Vector3 startValue_Vector3;
        public Vector3 endValue_Vector3;
        //Vector3
        public Color startValue_Color;
        public Color endValue_Color;
        //AnimationCurve
        public AnimationCurve animationCurve;
        public override void ProcessFrame(Playable playable, FrameData info, object playerData)
        {
            var targetMaterial = (playerData as MeshRenderer).materials[0];
            double progress = (playable.GetTime() / playable.GetDuration());
            switch (materialValueType)
            {
                case MaterialClip.MaterialValueType.Float:
                    var v1 = Mathf.Lerp((float)startValue, (float)endValue, (float)progress);
                    targetMaterial.SetFloat(propertyName, v1);
                    break;
                case MaterialClip.MaterialValueType.AnimationCurve:
                    var v2  = animationCurve.Evaluate((float)progress);
                    targetMaterial.SetFloat(propertyName, v2);
                    break;
                case MaterialClip.MaterialValueType.Vector3:
                    var v3 = Vector3.Lerp(startValue_Vector3, endValue_Vector3, (float)progress);
                    targetMaterial.SetVector(propertyName, v3);
                    break;
                case MaterialClip.MaterialValueType.Color:
                    var v4 = Color.Lerp(startValue_Color, endValue_Color, (float)progress);
                    targetMaterial.SetColor(propertyName, v4);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

        }

    }
}