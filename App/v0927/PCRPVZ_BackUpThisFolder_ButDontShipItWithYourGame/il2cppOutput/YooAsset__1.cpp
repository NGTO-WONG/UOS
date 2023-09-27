#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

struct Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6;
struct List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
struct AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38;
struct BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A;
struct BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886;
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9;
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
struct IBundleServices_t83ED8DA733B42205E9C88F694E45ADB313530B86;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILogger_tDF24C2D094417567E0429274CBA0896EF501517C;
struct IPlayModeServices_tAA52527E1B8B45CA174AECC67517825F92790C7A;
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4;
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E;
IL2CPP_EXTERN_C String_t* _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A58863259934947B04C885DB1013F7BD17F85C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170;
IL2CPP_EXTERN_C const RuntimeMethod* BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6  : public RuntimeObject
{
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A  : public RuntimeObject
{
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____index;
};
struct BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____index;
};
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9  : public RuntimeObject
{
	String_t* ___PackageName;
	List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A* ___ProviderInfos;
};
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D  : public RuntimeObject
{
	int32_t ___FrameCount;
	List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* ___PackageDatas;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct FileUtility_t5449A663405CBC365480B6DCAC03B177EA2C383B  : public RuntimeObject
{
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct HashUtility_tC80280D7F13E8274BB51D195E5E00FC87C5AC83D  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C  : public RuntimeObject
{
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo;
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField;
};
struct PathUtility_t820434FFD3142C7DEBC33F8C6DA67F3C5068BBD7  : public RuntimeObject
{
};
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022  : public RuntimeObject
{
	bool ____isInitialize;
	String_t* ____initializeError;
	int32_t ____initializeStatus;
	int32_t ____playMode;
	RuntimeObject* ____bundleServices;
	RuntimeObject* ____playModeServices;
	AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38* ____assetSystemImpl;
	String_t* ___U3CPackageNameU3Ek__BackingField;
};
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____table;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686  : public RuntimeObject
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
struct YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1  : public RuntimeObject
{
};
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};
struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF  : public RuntimeObject
{
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 
{
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____list;
	int32_t ____index;
	int32_t ____version;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____current;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	uint32_t ____currentCrc;
};
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321 
{
	String_t* ___BundleName;
	String_t* ___FilePath;
};
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke
{
	char* ___BundleName;
	char* ___FilePath;
};
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com
{
	Il2CppChar* ___BundleName;
	Il2CppChar* ___FilePath;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB* ____callback;
	String_t* ___U3CPackageNameU3Ek__BackingField;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	uint32_t ___dwLowDateTime;
	uint32_t ___dwHighDateTime;
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
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff;
	uint64_t ___count;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer;
	int32_t ____ProcessingBufferCount;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	int32_t ___dwFileAttributes;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime;
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime;
	uint32_t ___nFileSizeHigh;
	uint32_t ___nFileSizeLow;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data;
	int32_t ____dataInitialized;
	String_t* ___FullPath;
	String_t* ___OriginalPath;
	String_t* ____name;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	String_t* ___ManifestFileName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6_StaticFields
{
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_StaticFields
{
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ___s_emptyArray;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields
{
	StringBuilder_t* ____cacheBuilder;
};
struct YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields
{
	YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* ____setting;
};
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	bool ____isInitialize;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver;
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____packages;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage;
};
struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields
{
	RuntimeObject* ___Logger;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields
{
	SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* ____proxy;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields
{
	int32_t ___LastestUpdateFrame;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455 (const RuntimeMethod* method) ;
inline YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
inline YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5 (const RuntimeMethod* method)
{
	return ((  YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_poly, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD (uint32_t ___0_initial, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_crc, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA6792288578C523A888FCD35FD8032A277C24F4C (String_t* ___0_path, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765 (String_t* ___0_filePath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3 (String_t* ___0_directory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_hashBytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Initialize_m77F8C5A3B4467F784749B4F2CB7B92781C246C78 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadSystem_Initialize_m008768F9A78ED34C63D7835C81D842A67B29DB42 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Update_m4170415D518FA44937F2FCDB8886CFB802B6C5E0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadSystem_Update_m70CECFA6D377796AF455BED02B84C117C8720B52 (const RuntimeMethod* method) ;
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184 (String_t* ___0_packageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___0_packageName, const RuntimeMethod* method) ;
inline void List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B (String_t* ___0_packageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Error_m30690253373083BEEF5813486E22F990791F7E14 (String_t* ___0_info, const RuntimeMethod* method) ;
inline Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	return ((  ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43 (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
inline void List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline (List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* __this, DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6*, DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* ResourcePackage_LoadSceneAsync_mEF2571DC2069BC7A8152A9C56AEA8B57C301E213 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___0_location, int32_t ___1_sceneMode, bool ___2_suspendLoad, int32_t ___3_priority, const RuntimeMethod* method) ;
inline void List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724 (String_t* ___0_info, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled)
{
	marshaled.___BundleName = il2cpp_codegen_marshal_string(unmarshaled.___BundleName);
	marshaled.___FilePath = il2cpp_codegen_marshal_string(unmarshaled.___FilePath);
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_back(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled)
{
	unmarshaled.___BundleName = il2cpp_codegen_marshal_string_result(marshaled.___BundleName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BundleName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___BundleName));
	unmarshaled.___FilePath = il2cpp_codegen_marshal_string_result(marshaled.___FilePath);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePath), (void*)il2cpp_codegen_marshal_string_result(marshaled.___FilePath));
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_cleanup(DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___BundleName);
	marshaled.___BundleName = NULL;
	il2cpp_codegen_marshal_free(marshaled.___FilePath);
	marshaled.___FilePath = NULL;
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled)
{
	marshaled.___BundleName = il2cpp_codegen_marshal_bstring(unmarshaled.___BundleName);
	marshaled.___FilePath = il2cpp_codegen_marshal_bstring(unmarshaled.___FilePath);
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com_back(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled)
{
	unmarshaled.___BundleName = il2cpp_codegen_marshal_bstring_result(marshaled.___BundleName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BundleName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___BundleName));
	unmarshaled.___FilePath = il2cpp_codegen_marshal_bstring_result(marshaled.___FilePath);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePath), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___FilePath));
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com_cleanup(DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___BundleName);
	marshaled.___BundleName = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___FilePath);
	marshaled.___FilePath = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettings__ctor_m791B0FC8C5F1C8910BB3EABEBE798135D4CC3311 (YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___ManifestFileName = _stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ManifestFileName), (void*)_stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455(NULL);
	}

IL_0012:
	{
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B);
		s_Il2CppMethodInitialized = true;
	}
	{
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0;
		L_0 = Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243(_stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B, Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var);
		((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting), (void*)L_0);
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_1 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_3;
		L_3 = ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5(ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var);
		((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting), (void*)L_3);
	}

IL_0026:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetManifestBinaryFileName_mDD89E20180792BB59238E5E465EAB820B87C67DA (String_t* ___0_packageName, String_t* ___1_packageVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2;
		L_2 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___ManifestFileName;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_packageName;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_packageVersion;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetPackageHashFileName_mC089CF286FC569A8C8B548509DA7E4A310F85175 (String_t* ___0_packageName, String_t* ___1_packageVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2;
		L_2 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___ManifestFileName;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_packageName;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_packageVersion;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetPackageVersionFileName_mE2475A52E8FD228A366BB77E8D2E58BA7856EFB8 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0;
		L_0 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___ManifestFileName;
		String_t* L_2 = ___0_packageName;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_2, _stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395, NULL);
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReader__ctor_mC6EF8F425A7C6EB439FB912948AE3DE47F0D3988 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		__this->____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferReader_get_IsValid_m80C56E288DBE6DB7D8F29F49B1422688FE0C49A6 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BufferReader_ReadByte_m2A8234ABF4AAEBE105C65807AB1BC36484429454 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferReader_ReadBool_m68183B3F41D9E3C082C46421570FF124FD30C50C (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0036;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		int32_t L_5 = __this->____index;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_8, 2));
		return ((int16_t)((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8)))));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer;
		int32_t L_10 = __this->____index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____buffer;
		int32_t L_14 = __this->____index;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_17, 2));
		return ((int16_t)((int32_t)(((int32_t)((int32_t)L_12<<8))|(int32_t)L_16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0;
		L_0 = BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1(__this, NULL);
		return (uint16_t)((int32_t)(uint16_t)L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		int32_t L_5 = __this->____index;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____buffer;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____buffer;
		int32_t L_13 = __this->____index;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_16, 4));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}

IL_005b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->____buffer;
		int32_t L_18 = __this->____index;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->____buffer;
		int32_t L_22 = __this->____index;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____buffer;
		int32_t L_26 = __this->____index;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->____buffer;
		int32_t L_30 = __this->____index;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 3));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_33, 4));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_20<<((int32_t)24)))|((int32_t)((int32_t)L_24<<((int32_t)16)))))|((int32_t)((int32_t)L_28<<8))))|(int32_t)L_32));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BufferReader_ReadUInt32_m232721C663F60269387CA4D99282E811BE60F7AD (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BufferReader_ReadInt64_mF5E55A5504F0D0C07A0C77F9795A6B1986C1B9A9 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_00ad;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		int32_t L_5 = __this->____index;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____buffer;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____buffer;
		int32_t L_13 = __this->____index;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->____buffer;
		int32_t L_17 = __this->____index;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->____buffer;
		int32_t L_21 = __this->____index;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->____buffer;
		int32_t L_25 = __this->____index;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->____buffer;
		int32_t L_29 = __this->____index;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_19|((int32_t)((int32_t)L_23<<8))))|((int32_t)((int32_t)L_27<<((int32_t)16)))))|((int32_t)((int32_t)L_31<<((int32_t)24)))));
		int32_t L_32 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_32, 8));
		int32_t L_33 = V_0;
		return ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))))))|((int64_t)(((int64_t)L_33)<<((int32_t)32)))));
	}

IL_00ad:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = __this->____index;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->____buffer;
		int32_t L_39 = __this->____index;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->____buffer;
		int32_t L_43 = __this->____index;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 2));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->____buffer;
		int32_t L_47 = __this->____index;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 3));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_37<<((int32_t)24)))|((int32_t)((int32_t)L_41<<((int32_t)16)))))|((int32_t)((int32_t)L_45<<8))))|(int32_t)L_49));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->____buffer;
		int32_t L_51 = __this->____index;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 4));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->____buffer;
		int32_t L_55 = __this->____index;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 5));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = __this->____index;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 6));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->____buffer;
		int32_t L_63 = __this->____index;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 7));
		uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_66, 8));
		int32_t L_67 = V_1;
		return ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_53<<((int32_t)24)))|((int32_t)((int32_t)L_57<<((int32_t)16)))))|((int32_t)((int32_t)L_61<<8))))|(int32_t)L_65))))|((int64_t)(((int64_t)L_67)<<((int32_t)32)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_2;
	}

IL_0010:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		int32_t L_5 = __this->____index;
		uint16_t L_6 = V_0;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(48, L_3, L_4, L_5, L_6);
		int32_t L_8 = __this->____index;
		uint16_t L_9 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_8, (int32_t)L_9));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BufferReader_ReadInt32Array_m299D7566FB9F588CDF22C883BF02157863B2C7F6 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A(__this, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BufferReader_ReadUTF8Array_mE5696019520879DFD4104B6CF755E5CEA4D21A2C (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		int32_t L_4 = V_2;
		String_t* L_5;
		L_5 = BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4(__this, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (String_t*)L_5);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		return L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter__ctor_m5B2AF42B56EEBAE07F67B8AE314BC223DACC2EDB (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buffer = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_Clear_mE0FC4859F1FBCBC6FB621B868A1FAB2762AAB0DA (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, const RuntimeMethod* method) 
{
	{
		__this->____index = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteToStream_mA997D1C5E4CB380C7DAE16E0BF243D0160759B72 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___0_fileStream, const RuntimeMethod* method) 
{
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_0 = ___0_fileStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		int32_t L_2 = __this->____index;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(38, L_0, L_1, 0, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer;
		int32_t L_3 = __this->____index;
		int32_t L_4 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->____index;
		int32_t L_6 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint16_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer;
		int32_t L_6 = __this->____index;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		uint16_t L_9 = ___0_value;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_9>>8))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteInt64_m68239C91573978F31F2268CD8BE30847D6D4E455 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->____index;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint64_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer;
		int32_t L_6 = __this->____index;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		uint64_t L_9 = ___0_value;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_9>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____buffer;
		int32_t L_11 = __this->____index;
		V_0 = L_11;
		int32_t L_12 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_0;
		uint64_t L_14 = ___0_value;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		int32_t L_16 = __this->____index;
		V_0 = L_16;
		int32_t L_17 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		uint64_t L_19 = ___0_value;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_19>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->____buffer;
		int32_t L_21 = __this->____index;
		V_0 = L_21;
		int32_t L_22 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		uint64_t L_24 = ___0_value;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_24>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____buffer;
		int32_t L_26 = __this->____index;
		V_0 = L_26;
		int32_t L_27 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_0;
		uint64_t L_29 = ___0_value;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_29>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->____buffer;
		int32_t L_31 = __this->____index;
		V_0 = L_31;
		int32_t L_32 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_0;
		uint64_t L_34 = ___0_value;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_34>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____buffer;
		int32_t L_36 = __this->____index;
		V_0 = L_36;
		int32_t L_37 = V_0;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		uint64_t L_39 = ___0_value;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_39>>((int32_t)56)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5(__this, (uint16_t)0, NULL);
		return;
	}

IL_0010:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___0_value;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(27, L_2, L_3);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0042;
		}
	}
	{
		uint16_t L_7 = ((uint16_t)((int32_t)65535));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A58863259934947B04C885DB1013F7BD17F85C1)), L_8, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_10 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334_RuntimeMethod_var)));
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_12;
		L_12 = Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B(L_11, NULL);
		BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5(__this, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0(__this, L_13, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->____table = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____table), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF(__this, ((int32_t)-306674912), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_poly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t G_B6_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____table;
		V_0 = L_0;
		V_1 = 0;
		goto IL_004e;
	}

IL_000b:
	{
		uint32_t L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0045;
	}

IL_0011:
	{
		V_4 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		uint32_t L_2 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_2&1))) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_3 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((uint32_t)L_3>>1))));
		goto IL_0026;
	}

IL_0021:
	{
		uint32_t L_4 = ___0_poly;
		uint32_t L_5 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>1))))));
	}

IL_0026:
	{
		V_2 = G_B6_0;
		int32_t L_6 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002d:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0016;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_3;
		uint32_t L_10 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		uint32_t L_11 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10))))), (uint32_t)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)16))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_004e:
	{
		uint32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_crc, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		uint32_t L_0 = ___0_crc;
		V_0 = ((int32_t)((-1)^(int32_t)L_0));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____table;
		V_1 = L_1;
		goto IL_0117;
	}

IL_0010:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_input;
		int32_t L_4 = ___2_offset;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)12)));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)768), (int32_t)L_6));
		uint32_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_input;
		int32_t L_11 = ___2_offset;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)13)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)512), (int32_t)L_13));
		uint32_t L_15 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_input;
		int32_t L_18 = ___2_offset;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)14)));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)256), (int32_t)L_20));
		uint32_t L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___1_input;
		int32_t L_25 = ___2_offset;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)15)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		uint8_t L_28 = L_27;
		uint32_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_8^(int32_t)L_15))^(int32_t)L_22))^(int32_t)L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_input;
		int32_t L_32 = ___2_offset;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 8));
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)1792), (int32_t)L_34));
		uint32_t L_36 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___1_input;
		int32_t L_39 = ___2_offset;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)9)));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(((int32_t)1536), (int32_t)L_41));
		uint32_t L_43 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___1_input;
		int32_t L_46 = ___2_offset;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)10)));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_44);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(((int32_t)1280), (int32_t)L_48));
		uint32_t L_50 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___1_input;
		int32_t L_53 = ___2_offset;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, ((int32_t)11)));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_55));
		uint32_t L_57 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_36^(int32_t)L_43))^(int32_t)L_50))^(int32_t)L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___1_input;
		int32_t L_60 = ___2_offset;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_58);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(((int32_t)2816), (int32_t)L_62));
		uint32_t L_64 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___1_input;
		int32_t L_67 = ___2_offset;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_65);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(((int32_t)2560), (int32_t)L_69));
		uint32_t L_71 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___1_input;
		int32_t L_74 = ___2_offset;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 6));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(((int32_t)2304), (int32_t)L_76));
		uint32_t L_78 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ___1_input;
		int32_t L_81 = ___2_offset;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 7));
		uint8_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_79);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(((int32_t)2048), (int32_t)L_83));
		uint32_t L_85 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_4 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_64^(int32_t)L_71))^(int32_t)L_78))^(int32_t)L_85));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = V_1;
		uint32_t L_87 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___1_input;
		int32_t L_89 = ___2_offset;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(((int32_t)3840), ((int32_t)(((int32_t)(uint8_t)L_87)^(int32_t)L_91))));
		uint32_t L_93 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_1;
		uint32_t L_95 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___1_input;
		int32_t L_97 = ___2_offset;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		uint8_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_94);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(((int32_t)3584), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_95>>8)))^(int32_t)L_99))));
		uint32_t L_101 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = V_1;
		uint32_t L_103 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___1_input;
		int32_t L_105 = ___2_offset;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 2));
		uint8_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(((int32_t)3328), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))^(int32_t)L_107))));
		uint32_t L_109 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_1;
		uint32_t L_111 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ___1_input;
		int32_t L_113 = ___2_offset;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 3));
		uint8_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_110);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(((int32_t)3072), ((int32_t)(((int32_t)((uint32_t)L_111>>((int32_t)24)))^(int32_t)L_115))));
		uint32_t L_117 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		uint32_t L_118 = V_4;
		uint32_t L_119 = V_3;
		uint32_t L_120 = V_2;
		V_0 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_93^(int32_t)L_101))^(int32_t)L_109))^(int32_t)L_117))^(int32_t)L_118))^(int32_t)L_119))^(int32_t)L_120));
		int32_t L_121 = ___2_offset;
		___2_offset = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)16)));
		int32_t L_122 = ___3_length;
		___3_length = ((int32_t)il2cpp_codegen_subtract(L_122, ((int32_t)16)));
	}

IL_0117:
	{
		int32_t L_123 = ___3_length;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0134;
	}

IL_0122:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_1;
		uint32_t L_125 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = ___1_input;
		int32_t L_127 = ___2_offset;
		int32_t L_128 = L_127;
		___2_offset = ((int32_t)il2cpp_codegen_add(L_128, 1));
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_124);
		int32_t L_131 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_125^(int32_t)L_130)));
		uint32_t L_132 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint32_t L_133 = V_0;
		V_0 = ((int32_t)((int32_t)L_132^((int32_t)((uint32_t)L_133>>8))));
	}

IL_0134:
	{
		int32_t L_134 = ___3_length;
		int32_t L_135 = ((int32_t)il2cpp_codegen_subtract(L_134, 1));
		___3_length = L_135;
		if ((((int32_t)L_135) >= ((int32_t)0)))
		{
			goto IL_0122;
		}
	}
	{
		uint32_t L_136 = V_0;
		return ((int32_t)((int32_t)L_136^(-1)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)32);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_Initialize_m27E8AA0C2D4BDA0382732C455ED84D1B9A9FD7AF (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		__this->____currentCrc = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_HashCore_mEB09D2ED78FA41E68EA2435FCE1BC5B9C46FD25C (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____currentCrc;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_length;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD(L_0, L_1, L_2, L_3, NULL);
		__this->____currentCrc = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CRC32Algorithm_HashFinal_mD8007FC23543C5FFF5C689201CCCFF5A4A675E5F (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint32_t L_2 = __this->____currentCrc;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		uint32_t L_4 = __this->____currentCrc;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_4>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		uint32_t L_6 = __this->____currentCrc;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		uint32_t L_8 = __this->____currentCrc;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)24)))));
		return L_7;
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		uint32_t L_11 = __this->____currentCrc;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_10;
		uint32_t L_13 = __this->____currentCrc;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_13>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_12;
		uint32_t L_15 = __this->____currentCrc;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_15>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_14;
		uint32_t L_17 = __this->____currentCrc;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_17));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD (uint32_t ___0_initial, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_1 = ((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy;
		uint32_t L_2 = ___0_initial;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_input;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___3_length;
		NullCheck(L_1);
		uint32_t L_6;
		L_6 = SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0013:
	{
		uint32_t L_7 = ___0_initial;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__cctor_m12F15F3D28AF859729F6501A91A5F00C27469C80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_0 = (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E*)il2cpp_codegen_object_new(SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329(L_0, NULL);
		((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724 (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		String_t* L_2 = ___0_info;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(0, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		String_t* L_3 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Error_m30690253373083BEEF5813486E22F990791F7E14 (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		String_t* L_2 = ___0_info;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		String_t* L_3 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger;
		Exception_t* L_2 = ___0_exception;
		NullCheck(L_1);
		InterfaceActionInvoker1< Exception_t* >::Invoke(2, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		Exception_t* L_3 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_RemoveExtension_mB37809517DE9576A5A133FC6EB1C03A17A27C001 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___0_str;
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___0_str;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_6 = ___0_str;
		return L_6;
	}

IL_001c:
	{
		String_t* L_7 = ___0_str;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m6A27D589F2324DFC34626385A25BFE05153466CF (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_path1;
		String_t* L_1 = ___1_path2;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m4F74CC4C03DB1C83255A40383BFB8452A23D81B6 (String_t* ___0_path1, String_t* ___1_path2, String_t* ___2_path3, String_t* ___3_path4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_path1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_path2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___2_path3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___3_path4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15(_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA, L_7, NULL);
		return L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, L_5, L_6, NULL);
		StringBuilder_t* L_8 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		RuntimeObject* L_7 = ___2_arg1;
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, L_5, L_6, L_7, NULL);
		StringBuilder_t* L_9 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		RuntimeObject* L_7 = ___2_arg1;
		RuntimeObject* L_8 = ___3_arg2;
		NullCheck(L_4);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_4, L_5, L_6, L_7, L_8, NULL);
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var)));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_5 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_5);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_5, 0, NULL);
		StringBuilder_t* L_6 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		String_t* L_7 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___1_args;
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_6, L_7, L_8, NULL);
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtility__cctor_m0F9FD51CF1A36E6BCCB1E0BC0B6CF23F9100E4B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)2048), NULL);
		((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtility_ReadAllText_m0562C7080D4A1BBA4E9E917A24123F6EFEEA003B (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_2;
	}

IL_000e:
	{
		String_t* L_3 = ___0_filePath;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5;
		L_5 = File_ReadAllText_mA6792288578C523A888FCD35FD8032A277C24F4C(L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileUtility_ReadAllBytes_mD14D378FF3622F974AC86304BC07E714FDE4F96C (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		String_t* L_2 = ___0_filePath;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_WriteAllText_m19EAD0113063D600AA40F6362F1EF62900EEB12A (String_t* ___0_filePath, String_t* ___1_content, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_filePath;
		FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765(L_0, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___1_content;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(27, L_1, L_2);
		V_0 = L_3;
		String_t* L_4 = ___0_filePath;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765 (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_filePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3 (String_t* ___0_directory, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_directory;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___0_directory;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
	}

IL_000f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileUtility_GetFileSize_mF2BCBA341B32DC7CC759391050ED6DD8252DA52D (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_filePath;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_hashBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_hashBytes;
		String_t* L_1;
		L_1 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileMD5_mC15CC81E0A046E46B138159FC30AADD0E4012B6B (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			String_t* L_0 = ___0_filePath;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0013_1:
				{
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
						if (!L_2)
						{
							goto IL_001c_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_001c_1:
					{
						return;
					}
				}
			});
			try
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				String_t* L_5;
				L_5 = HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8(L_4, NULL);
				V_1 = L_5;
				goto IL_002a;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{
		YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty;
		V_1 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileCRC32_m19D18BFBB5686559F437B99AA7E7A374EC7C3947 (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			String_t* L_0 = ___0_filePath;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0013_1:
				{
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
						if (!L_2)
						{
							goto IL_001c_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_001c_1:
					{
						return;
					}
				}
			});
			try
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				String_t* L_5;
				L_5 = HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813(L_4, NULL);
				V_1 = L_5;
				goto IL_002a;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{
		YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty;
		V_1 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* L_0 = (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A*)il2cpp_codegen_object_new(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B(L_0, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E(L_2, NULL);
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Initialize_mB0A84BF8A5A714A29327289CC2D8FB194DAF56F3 (RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1, NULL);
		return;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_2 = ___0_logger;
		((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize = (bool)1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8, NULL);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver;
		NullCheck(L_4);
		YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* L_5;
		L_5 = GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7(L_4, GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Initialize_m77F8C5A3B4467F784749B4F2CB7B92781C246C78(NULL);
		il2cpp_codegen_runtime_class_init_inline(DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		DownloadSystem_Initialize_m008768F9A78ED34C63D7835C81D842A67B29DB42(NULL);
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Update_m4170415D518FA44937F2FCDB8886CFB802B6C5E0(NULL);
		il2cpp_codegen_runtime_class_init_inline(DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		DownloadSystem_Update_m70CECFA6D377796AF455BED02B84C117C8720B52(NULL);
		V_0 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3;
		L_3 = List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046(L_1, L_2, List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		NullCheck(L_3);
		ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline(L_6, List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0012:
	{
		String_t* L_2 = ___0_packageName;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0025:
	{
		String_t* L_5 = ___0_packageName;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_7 = ___0_packageName;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170)), NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0043:
	{
		String_t* L_10 = ___0_packageName;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_11 = (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)il2cpp_codegen_object_new(ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3(L_11, L_10, NULL);
		V_0 = L_11;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_12 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline(L_12, L_13, List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_GetPackage_m68AE6D22A074754AB7926D47C10DC2DC1CA9C098 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B2_0 = NULL;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_packageName;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_1;
		L_1 = YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B(L_0, NULL);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_3 = ___0_packageName;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1D29DEA29AB1C5A91F32D93F1959B09C88B25F5E, L_3, NULL);
		YooLogger_Error_m30690253373083BEEF5813486E22F990791F7E14(L_4, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_1 = NULL;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B_RuntimeMethod_var)));
	}

IL_0012:
	{
		String_t* L_2 = ___0_packageName;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_TryGetPackage_mDA85165D72151D0DA2BE6785C278CE044A7C276B_RuntimeMethod_var)));
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_5 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		NullCheck(L_5);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_6;
		L_6 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_5, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_0), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004c_1;
			}

IL_0032_1:
			{
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_7;
				L_7 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_0), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				V_1 = L_7;
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_8 = V_1;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline(L_8, NULL);
				String_t* L_10 = ___0_packageName;
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_12 = V_1;
				V_2 = L_12;
				goto IL_0067;
			}

IL_004c_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_0), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0065;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		return (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)NULL;
	}

IL_0067:
	{
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184_RuntimeMethod_var)));
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_2 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		NullCheck(L_2);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_3;
		L_3 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_2, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_0), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0037_1;
			}

IL_001f_1:
			{
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_4;
				L_4 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_0), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				NullCheck(L_4);
				String_t* L_5;
				L_5 = ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline(L_4, NULL);
				String_t* L_6 = ___0_packageName;
				bool L_7;
				L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0037_1;
				}
			}
			{
				V_1 = (bool)1;
				goto IL_0052;
			}

IL_0037_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_0), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0050;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return (bool)0;
	}

IL_0052:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* YooAssets_GetDebugReport_m76E1839C08757D6335A741D657E84471D2516E82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* V_0 = NULL;
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* V_2 = NULL;
	{
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_0 = (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D*)il2cpp_codegen_object_new(DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43(L_0, NULL);
		V_0 = L_0;
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_1);
		L_1->___FrameCount = L_2;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_3 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages;
		NullCheck(L_3);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_4;
		L_4 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_3, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_1), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0037_1;
			}

IL_001e_1:
			{
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_5;
				L_5 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_1), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				NullCheck(L_5);
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_6;
				L_6 = ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820(L_5, NULL);
				V_2 = L_6;
				DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_7 = V_0;
				NullCheck(L_7);
				List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* L_8 = L_7->___PackageDatas;
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_9 = V_2;
				NullCheck(L_8);
				List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline(L_8, L_9, List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
			}

IL_0037_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_1), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0050;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetDefaultPackage_mB83D34E411C4AB0C42DD9E9CB1992E836BA06328 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ___0_package;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* YooAssets_LoadSceneAsync_mA40D4E8EED91F552702DC6845550315EB819B4E3 (String_t* ___0_location, int32_t ___1_sceneMode, bool ___2_suspendLoad, int32_t ___3_priority, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage;
		String_t* L_1 = ___0_location;
		int32_t L_2 = ___1_sceneMode;
		bool L_3 = ___2_suspendLoad;
		int32_t L_4 = ___3_priority;
		NullCheck(L_0);
		SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* L_5;
		L_5 = ResourcePackage_LoadSceneAsync_mEF2571DC2069BC7A8152A9C56AEA8B57C301E213(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets__cctor_m1B500E6E007DCC1FBBEDB59384C6041AD144C580 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize = (bool)0;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_0 = (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*)il2cpp_codegen_object_new(List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728(L_0, List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_Update_m990474D140444AB6B0599A0E562A0941C518005F (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_DebugCheckDuplicateDriver_mD08D8F69F86927A2C4F01EF2D35C644C06151CEB (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724(_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96, NULL);
	}

IL_001e:
	{
		int32_t L_3;
		L_3 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver__ctor_m354D5C4B4F226C2FB6B5B7E9E19B764A1769438C (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPackageNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
