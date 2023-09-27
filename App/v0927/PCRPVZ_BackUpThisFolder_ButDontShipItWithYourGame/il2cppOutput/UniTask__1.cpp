#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
struct IEqualityComparer_1_t2EDEDBAF19E8BF7F3EA065CC1D0D3578B4A90052;
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
struct IEqualityComparer_1_tE5166E96F3B07686A8D0875FE3BF15DC56FED779;
struct IEqualityComparer_1_tC69064DA61A5BCF7B3EA5F0B53979229260D3DCB;
struct IEqualityComparer_1_t7E98D8AD41D5E0E35D1CFF51C260ABD2A500B2F3;
struct IEqualityComparer_1_tFC2ABE854EE94E6C4917178A3A4652222F165E32;
struct IEqualityComparer_1_tDC8906B8491813B2FB353E856B89603200C3255B;
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
struct IEqualityComparer_1_t5442E8A434F2EE43566F33724D3E6C43B4737A72;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742;
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A;
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C;
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B;
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9;
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C;
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46;
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1;
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892;
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC;
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3;
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B;
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152;

IL2CPP_EXTERN_C RuntimeClass* BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct StateTuple_t27A8C28D7DAA053BA3AA779D90305BC35E575256  : public RuntimeObject
{
};
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	int64_t ___elapsed;
	int64_t ___started;
	bool ___is_running;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742  : public RuntimeObject
{
};
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A  : public RuntimeObject
{
};
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C  : public RuntimeObject
{
};
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B  : public RuntimeObject
{
};
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9  : public RuntimeObject
{
};
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C  : public RuntimeObject
{
};
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46  : public RuntimeObject
{
};
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1  : public RuntimeObject
{
};
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892  : public RuntimeObject
{
};
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC  : public RuntimeObject
{
};
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3  : public RuntimeObject
{
};
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B  : public RuntimeObject
{
};
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152  : public RuntimeObject
{
};
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
};
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	RuntimeObject* ___runner;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};
struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E 
{
	int64_t ___startTimestamp;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	int64_t ___Frequency;
	bool ___IsHighResolution;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields
{
	RuntimeObject* ___Vector2;
	RuntimeObject* ___Vector3;
	RuntimeObject* ___Vector4;
	RuntimeObject* ___Color;
	RuntimeObject* ___Color32;
	RuntimeObject* ___Rect;
	RuntimeObject* ___Bounds;
	RuntimeObject* ___Quaternion;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2Type;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3Type;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector4Type;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___colorType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___color32Type;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___quaternionType;
	RuntimeObject* ___Vector2Int;
	RuntimeObject* ___Vector3Int;
	RuntimeObject* ___RangeInt;
	RuntimeObject* ___RectInt;
	RuntimeObject* ___BoundsInt;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2IntType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3IntType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rangeIntType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectIntType;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsIntType;
};
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields
{
	Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* ___Default;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask;
};
struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields
{
	double ___TimestampToTicks;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_vector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_inline (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___0_startTimestamp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1;
		L_1 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_0);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type;
		bool L_3;
		L_3 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2;
		return L_4;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type;
		bool L_6;
		L_6 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3;
		return L_7;
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type;
		bool L_9;
		L_9 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4;
		return L_10;
	}

IL_0043:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType;
		bool L_12;
		L_12 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_11, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color;
		return L_13;
	}

IL_0057:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type;
		bool L_15;
		L_15 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_14, NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32;
		return L_16;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType;
		bool L_18;
		L_18 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_17, NULL);
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect;
		return L_19;
	}

IL_007f:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType;
		bool L_21;
		L_21 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_20, NULL);
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_22 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds;
		return L_22;
	}

IL_0093:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType;
		bool L_24;
		L_24 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_23, NULL);
		if (!L_24)
		{
			goto IL_00a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion;
		return L_25;
	}

IL_00a7:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType;
		bool L_27;
		L_27 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_26, NULL);
		if (!L_27)
		{
			goto IL_00bb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int;
		return L_28;
	}

IL_00bb:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType;
		bool L_30;
		L_30 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_29, NULL);
		if (!L_30)
		{
			goto IL_00cf;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int;
		return L_31;
	}

IL_00cf:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType;
		bool L_33;
		L_33 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_32, NULL);
		if (!L_33)
		{
			goto IL_00e3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_34 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt;
		return L_34;
	}

IL_00e3:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType;
		bool L_36;
		L_36 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_35, NULL);
		if (!L_36)
		{
			goto IL_00f7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt;
		return L_37;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType;
		bool L_39;
		L_39 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_38, NULL);
		if (!L_39)
		{
			goto IL_010b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt;
		return L_40;
	}

IL_010b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* L_0 = (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892*)il2cpp_codegen_object_new(Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222(L_0, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2), (void*)L_0);
		Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* L_1 = (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3*)il2cpp_codegen_object_new(Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49(L_1, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3), (void*)L_1);
		Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* L_2 = (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152*)il2cpp_codegen_object_new(Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E(L_2, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4), (void*)L_2);
		ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* L_3 = (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B*)il2cpp_codegen_object_new(ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947(L_3, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color), (void*)L_3);
		Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* L_4 = (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C*)il2cpp_codegen_object_new(Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7(L_4, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32), (void*)L_4);
		RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* L_5 = (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46*)il2cpp_codegen_object_new(RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885(L_5, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect), (void*)L_5);
		BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* L_6 = (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742*)il2cpp_codegen_object_new(BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B(L_6, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds), (void*)L_6);
		QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* L_7 = (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9*)il2cpp_codegen_object_new(QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D(L_7, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion), (void*)L_7);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_9);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_12);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_15);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16;
		L_16 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_15);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_18);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22;
		L_22 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_21);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_24);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25;
		L_25 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_24);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28;
		L_28 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_27);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType = L_28;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_30);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31;
		L_31 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_30);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType = L_31;
		Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* L_32 = (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC*)il2cpp_codegen_object_new(Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6(L_32, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int), (void*)L_32);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_33 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_33, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int), (void*)L_33);
		RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* L_34 = (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C*)il2cpp_codegen_object_new(RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F(L_34, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt), (void*)L_34);
		RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* L_35 = (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1*)il2cpp_codegen_object_new(RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071(L_35, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt), (void*)L_35);
		BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* L_36 = (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A*)il2cpp_codegen_object_new(BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B(L_36, NULL);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt), (void*)L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		NullCheck(L_38);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39;
		L_39 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_38);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		NullCheck(L_41);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42;
		L_42 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_41);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType = L_42;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var) };
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		NullCheck(L_44);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45;
		L_45 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_44);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType = L_45;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		NullCheck(L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48;
		L_48 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_47);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType = L_48;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		NullCheck(L_50);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51;
		L_51 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(155, L_50);
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType = L_51;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_self, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_vector, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_self)->___x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_vector;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		float* L_4 = (float*)(&(&___0_self)->___y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_vector;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		return L_7;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_obj)->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&(&___0_obj)->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		return ((int32_t)(L_1^((int32_t)(L_3<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_self, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_vector, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_self)->___x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_vector;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		float* L_4 = (float*)(&(&___0_self)->___y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_vector;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		float* L_8 = (float*)(&(&___0_self)->___z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_vector;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_obj)->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&(&___0_obj)->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&(&___0_obj)->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		return ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_self, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_vector, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_self)->___x);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___1_vector;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		float* L_4 = (float*)(&(&___0_self)->___y);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___1_vector;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		float* L_8 = (float*)(&(&___0_self)->___z);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___1_vector;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		float* L_12 = (float*)(&(&___0_self)->___w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___1_vector;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_obj, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_obj)->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&(&___0_obj)->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&(&___0_obj)->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&(&___0_obj)->___w);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_other, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_self)->___r);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_other;
		float L_2 = L_1.___r;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		float* L_4 = (float*)(&(&___0_self)->___g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_other;
		float L_6 = L_5.___g;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		float* L_8 = (float*)(&(&___0_self)->___b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___1_other;
		float L_10 = L_9.___b;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		float* L_12 = (float*)(&(&___0_self)->___a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___1_other;
		float L_14 = L_13.___a;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_obj, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_obj)->___r);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&(&___0_obj)->___g);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&(&___0_obj)->___b);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&(&___0_obj)->___a);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_self, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_self), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___1_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_self), NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___1_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_self), NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___1_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_self), NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___1_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		return L_11;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_obj, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_obj), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_obj), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_obj), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_obj), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_self, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_vector, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_self), NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___1_vector), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___0_self), NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___1_vector), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		return L_5;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332 (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_obj, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_obj), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___0_obj), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		return ((int32_t)(L_1^((int32_t)(L_3<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_self, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_vector, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_self)->___x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_vector;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		float* L_4 = (float*)(&(&___0_self)->___y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_vector;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		float* L_8 = (float*)(&(&___0_self)->___z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___1_vector;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		float* L_12 = (float*)(&(&___0_self)->___w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___1_vector;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_obj, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&(&___0_obj)->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&(&___0_obj)->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&(&___0_obj)->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&(&___0_obj)->___w);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_self, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_vector, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = (uint8_t*)(&(&___0_self)->___a);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_vector;
		uint8_t L_2 = L_1.___a;
		bool L_3;
		L_3 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_4 = (uint8_t*)(&(&___0_self)->___r);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___1_vector;
		uint8_t L_6 = L_5.___r;
		bool L_7;
		L_7 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_8 = (uint8_t*)(&(&___0_self)->___g);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___1_vector;
		uint8_t L_10 = L_9.___g;
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_12 = (uint8_t*)(&(&___0_self)->___b);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___1_vector;
		uint8_t L_14 = L_13.___b;
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_12, L_14, NULL);
		return L_15;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_obj, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = (uint8_t*)(&(&___0_obj)->___a);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		uint8_t* L_2 = (uint8_t*)(&(&___0_obj)->___r);
		int32_t L_3;
		L_3 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_2, NULL);
		uint8_t* L_4 = (uint8_t*)(&(&___0_obj)->___g);
		int32_t L_5;
		L_5 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_4, NULL);
		uint8_t* L_6 = (uint8_t*)(&(&___0_obj)->___b);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_self, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___1_vector, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_self), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___1_vector), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_self), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___1_vector), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		return L_5;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_obj), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_obj), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return ((int32_t)(L_1^((int32_t)(L_3<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_vector, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_self), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_vector), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_self), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_vector), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_self), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_vector), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		return L_8;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_obj), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_obj), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_obj), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_0, NULL);
		((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___0_self, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___1_vector, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = (int32_t*)(&(&___0_self)->___start);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_1 = ___1_vector;
		int32_t L_2 = L_1.___start;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_4 = (int32_t*)(&(&___0_self)->___length);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_5 = ___1_vector;
		int32_t L_6 = L_5.___length;
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		return L_7;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = (int32_t*)(&(&___0_obj)->___start);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		int32_t* L_2 = (int32_t*)(&(&___0_obj)->___length);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		return ((int32_t)(L_1^((int32_t)(L_3<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_self, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___1_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline((&___0_self), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline((&___1_other), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_3;
		L_3 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7_inline((&___0_self), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7_inline((&___1_other), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline((&___0_self), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline((&___1_other), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9;
		L_9 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C_inline((&___0_self), NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C_inline((&___1_other), NULL);
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_10, NULL);
		return L_11;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline((&___0_obj), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7_inline((&___0_obj), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline((&___0_obj), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_6;
		L_6 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C_inline((&___0_obj), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96 (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_self, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___1_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B_inline((&___0_self), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B_inline((&___1_vector), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_4 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
		L_5 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___0_self), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___1_vector), NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B_inline((&___0_obj), NULL);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_0, L_1, NULL);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_3 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4;
		L_4 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___0_obj), NULL);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_3, L_4, NULL);
		return ((int32_t)(L_2^((int32_t)(L_5<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___0_startTimestamp, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_startTimestamp;
		__this->___startTimestamp = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_AdjustorThunk (RuntimeObject* __this, int64_t ___0_startTimestamp, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_inline(_thisAdjusted, ___0_startTimestamp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___startTimestamp;
		return (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->___startTimestamp;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var)));
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		int64_t L_3 = __this->___startTimestamp;
		il2cpp_codegen_runtime_class_init_inline(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		double L_4 = ((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks;
		return il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply(((double)((int64_t)il2cpp_codegen_subtract(L_2, L_3))), L_4)));
	}
}
IL2CPP_EXTERN_C  int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency;
		((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks = ((double)((10000000.0)/((double)L_0)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327 (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t* L_4 = __this->___ex;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask;
		return L_6;
	}
}
IL2CPP_EXTERN_C  UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _returnValue;
	_returnValue = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Exception_t* L_1 = ___0_exception;
		__this->___ex = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex), (void*)L_1);
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = __this->___runnerPromise;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(_thisAdjusted, ___0_exception, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64 (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _returnValue;
	_returnValue = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		Exception_t* L_3 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(_thisAdjusted, ___0_exception, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = __this->___m_Position;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = __this->___m_Size;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_inline (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___0_startTimestamp, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_startTimestamp;
		__this->___startTimestamp = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t* L_4 = __this->___ex;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Exception_t* L_1 = ___0_exception;
		__this->___ex = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex), (void*)L_1);
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = __this->___runnerPromise;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		Exception_t* L_3 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_3, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		return;
	}
}
