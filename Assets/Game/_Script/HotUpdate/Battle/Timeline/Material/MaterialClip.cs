#if UNITY_EDITOR
using System;
using UnityEditor;
using UnityEngine;
using UnityEngine.Playables;

namespace Game._Script.HotUpdate.Battle.Timeline.Material
{
    [CustomEditor(typeof(MaterialClip))]
    public class MaterialClipEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            MaterialClip script = (MaterialClip)target;
            script.materialValueType = (MaterialValueType)EditorGUILayout.EnumPopup("类型", script.materialValueType);
            script.propertyName = EditorGUILayout.TextField ("材质变量名", script.propertyName);
            
            // 根据枚举值显示不同的字段
            switch (script.materialValueType)
            {
                case MaterialValueType.Float:
                    script.startValue = EditorGUILayout.DoubleField("startValue", script.startValue);
                    script.endValue = EditorGUILayout.DoubleField("endValue", script.endValue);
                    break;
                case MaterialValueType.AnimationCurve:
                    script.animationCurve = EditorGUILayout.CurveField("animationCurve", script.animationCurve);
                    break;
                case MaterialValueType.Vector3:
                    script.startValue_Vector3 = EditorGUILayout.Vector3Field("startValue", script.startValue_Vector3);
                    script.endValue_Vector3 = EditorGUILayout.Vector3Field("endValue", script.endValue_Vector3);
                    break;
                case MaterialValueType.Color:
                    script.startValue_Color = EditorGUILayout.ColorField("startValue", script.startValue_Color);
                    script.endValue_Color = EditorGUILayout.ColorField("endValue", script.endValue_Color);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }   
    
    
    [System.Serializable]
    public class MaterialClip : PlayableAsset
    {

        public MaterialValueType materialValueType;
        
        public string propertyName;
          
        //Float
        public double startValue;
        public double endValue;
        //Vector3
        public Vector3 startValue_Vector3;
        public Vector3 endValue_Vector3;
        //Color
        public Color startValue_Color;
        public Color endValue_Color;
        //AnimationCurve
        public AnimationCurve animationCurve;
        
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<MaterialBehaviour>.Create(graph);
            var moveBehaviour = playable.GetBehaviour();
            moveBehaviour.materialValueType = materialValueType;
            moveBehaviour.propertyName = propertyName;
            moveBehaviour.startValue = startValue;
            moveBehaviour.endValue = endValue;
            moveBehaviour.startValue_Vector3 = startValue_Vector3;
            moveBehaviour.endValue_Vector3 = endValue_Vector3;
            moveBehaviour.startValue_Color = startValue_Color;
            moveBehaviour.endValue_Color = endValue_Color;
            moveBehaviour.animationCurve = animationCurve;
            return playable;
        }
    }
}
#endif