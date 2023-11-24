Shader "Custom/URPRadialBlur"
{
    Properties
    {
        _MainTex("Texture", 2D) = "white" {}
        _BlurStrength("Blur Strength", Float) = 2.5
        _BlurCenter("Blur Center", Vector) = (0.5, 0.5,0)
    }
    SubShader
    {
        Tags
        {
            "RenderType"="Transparent" "Queue"="Transparent"
        }

        Pass
        {

            HLSLPROGRAM
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #pragma vertex Vert
            #pragma fragment Frag
            
            struct Attributes
            {
                float3 positionOS : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0;
            };

            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);
            float4 _MainTex_ST;
            float _BlurStrength;
            float2 _BlurCenter;

            Varyings Vert(Attributes IN)
            {
                Varyings OUT;
                OUT.positionCS = TransformObjectToHClip(IN.positionOS.xyz);
                OUT.uv = TRANSFORM_TEX(IN.uv, _MainTex);
                return OUT;
            }

            half4 Frag(Varyings IN) : SV_Target
            {
                half4 color = half4(0, 0, 0, 0);
                float2 uv = IN.uv;
                int samples = 10;
                float radius = _BlurStrength;
                half4 col = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, uv);

                for(int i = 1; i <= samples; i++)
                {
                    float sampleRadius = radius * (float(i) / float(samples));
                    color += SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, uv + sampleRadius * (uv - _BlurCenter));
                    color += SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, uv - sampleRadius * (uv - _BlurCenter));
                }

                color /= float(samples) * 2.0 + 1.0;
                color.a = col.a; // Maintain original alpha
                return color;
            }

            ENDHLSL
        }
    }
    //CustomEditor "UnityEditor.Rendering.Universal.ShaderGUI.DefaultShaderGUI"
}