﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<System.Int32Enum>
struct InterruptiblePromise_1_t64A6CB6958A6E8BE16C7DC48574F1034531399E5;
// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>
struct InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>
struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>
struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.XR.ARCoreExtensions.Internal.IDependentModule[]
struct IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Google.XR.ARCoreExtensions.Track[]
struct TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F;
// Google.XR.ARCoreExtensions.TrackData[]
struct TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.ARSubsystems.XRCameraConfiguration[]
struct XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// Google.XR.ARCoreExtensions.ARCloudAnchor
struct ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E;
// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322;
// Google.XR.ARCoreExtensions.Internal.ARPrestoApi
struct ARPrestoApi_t84EDCA85E3C70A037A1B8DA11A889F68A0C69C6F;
// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Google.XR.ARCoreExtensions.Internal.AuthenticationModule
struct AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB;
// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Google.XR.ARCoreExtensions.Internal.ConfigApi
struct ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.XR.ARCoreExtensions.Internal.DependentModuleBase
struct DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310;
// Google.XR.ARCoreExtensions.Internal.DependentModulesManager
struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66;
// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2;
// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1;
// Google.XR.ARCoreExtensions.Internal.EarthApi
struct EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8;
// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C;
// Google.XR.ARCoreExtensions.Internal.FrameApi
struct FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2;
// Google.XR.ARCoreExtensions.Internal.FutureApi
struct FutureApi_t5CCDC74CF42E78970965FDBFC0FB42DC4D684344;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi
struct GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.XR.ARCoreExtensions.Internal.IDependentModule
struct IDependentModule_tBFB4DFFF7BF43EE43DD3A4F7F5B5880BE8FD72FA;
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A;
// Google.XR.ARCoreExtensions.Internal.LocationModule
struct LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Google.XR.ARCoreExtensions.Internal.PoseApi
struct PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Google.XR.ARCoreExtensions.Internal.SessionApi
struct SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// Google.XR.ARCoreExtensions.Internal.TrackApi
struct TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C;
// Google.XR.ARCoreExtensions.Internal.TrackDataApi
struct TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385;
// Google.XR.ARCoreExtensions.Internal.TrackDataListApi
struct TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Google.XR.ARCoreExtensions.VersionInfo
struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06D95DBA1BCE9A4D92721B753E3211EC8E063160;
IL2CPP_EXTERN_C String_t* _stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539;
IL2CPP_EXTERN_C String_t* _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53;
IL2CPP_EXTERN_C String_t* _stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50;
IL2CPP_EXTERN_C String_t* _stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B;
IL2CPP_EXTERN_C String_t* _stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3E36046B96D80329B0519BF055E3C17934B46792;
IL2CPP_EXTERN_C String_t* _stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral59C23871107D241BF9D160CD46876D62583516A3;
IL2CPP_EXTERN_C String_t* _stringLiteral5A83B08B4F18230DB6FC5DD3AB0DD0F7467534CC;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD07E206E2A4B4BC5462A5A78E644165DCCB2F2;
IL2CPP_EXTERN_C String_t* _stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C831849415D472ACDAD3625736030C927879A25;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDB321BE5801415692A2A84196FB89319361331;
IL2CPP_EXTERN_C String_t* _stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75;
IL2CPP_EXTERN_C String_t* _stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B;
IL2CPP_EXTERN_C String_t* _stringLiteral668936CFE23FA8632946331EFDA7879F3BE81AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE;
IL2CPP_EXTERN_C String_t* _stringLiteral75D9A48E410D21C66D85D1F2027EC1C374844ABF;
IL2CPP_EXTERN_C String_t* _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860;
IL2CPP_EXTERN_C String_t* _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679;
IL2CPP_EXTERN_C String_t* _stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral899FED050775F167B273CB31245A56C36C4BAE41;
IL2CPP_EXTERN_C String_t* _stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356;
IL2CPP_EXTERN_C String_t* _stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878;
IL2CPP_EXTERN_C String_t* _stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B;
IL2CPP_EXTERN_C String_t* _stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E;
IL2CPP_EXTERN_C String_t* _stringLiteralB4432262AE6A666FBDA5AABAC37A44BF852B0EFF;
IL2CPP_EXTERN_C String_t* _stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B;
IL2CPP_EXTERN_C String_t* _stringLiteralB856C54E196101464C3ED9F7883597180C9FC255;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485;
IL2CPP_EXTERN_C String_t* _stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F6371DD6CF6CD32300060BD6369CEA8CEA65BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE72C6333E41274633A472EB00E664E60390F9953;
IL2CPP_EXTERN_C String_t* _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D0EAA697C6B65ECCBE4005F97729A49E01072B;
IL2CPP_EXTERN_C String_t* _stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12;
IL2CPP_EXTERN_C String_t* _stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_mD1AED806DF087D81B5D869B6BBA4E7BC2E9E47EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBE755C7D2729C4D7C24A0F4FD0341F51F7FC9007 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>
struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>
struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2* ___s_emptyArray_5;
};

// Google.XR.ARCoreExtensions.ARAnchorManagerExtensions
struct ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394  : public RuntimeObject
{
};

struct ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_cloudAnchorName
	String_t* ____cloudAnchorName_0;
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_geospatialAnchorName
	String_t* ____geospatialAnchorName_1;
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_terrainAnchorName
	String_t* ____terrainAnchorName_2;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions
struct ARCoreHandleExtensions_tD8AE534A01C773947EB1A0EEA94E1161AA55F284  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.ARPrestoApi
struct ARPrestoApi_t84EDCA85E3C70A037A1B8DA11A889F68A0C69C6F  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Google.XR.ARCoreExtensions.Internal.ApiConstants
struct ApiConstants_t7D7F3438150129CA27EF34DD2A160E82939C273B  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.CachedData
struct CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E  : public RuntimeObject
{
};

struct CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.XR.ARCoreExtensions.Internal.CachedData::_cachedData
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____cachedData_0;
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.ConfigApi
struct ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModuleBase
struct DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModulesManager
struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66  : public RuntimeObject
{
};

struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule> Google.XR.ARCoreExtensions.Internal.DependentModulesManager::_modules
	List_1_t54955D954398D6C34C95F0A09188E388BD45008A* ____modules_0;
};

// Google.XR.ARCoreExtensions.Internal.EarthApi
struct EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.FrameApi
struct FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.FutureApi
struct FutureApi_t5CCDC74CF42E78970965FDBFC0FB42DC4D684344  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi
struct GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.PoseApi
struct PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.SessionApi
struct SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D  : public RuntimeObject
{
};

struct SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.Internal.SessionApi::_latestAuthToken
	String_t* ____latestAuthToken_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// Google.XR.ARCoreExtensions.Internal.TrackApi
struct TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.TrackDataApi
struct TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.TrackDataListApi
struct TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Google.XR.ARCoreExtensions.VersionInfo
struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7  : public RuntimeObject
{
};

struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.VersionInfo::Version
	String_t* ___Version_0;
};

// Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions
struct XRCameraConfigurationExtensions_t7B9ACCC462CC2E32D7BDAB7865FC9446C11E0237  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.XRCameraFrameExtensions
struct XRCameraFrameExtensions_tA7BDFAFD8CE4454657C413FA6645FD6A9B531F06  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::modulesEnabled
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___modulesEnabled_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Google.XR.ARCoreExtensions.Internal.ApiPose
struct ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 
{
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qx
	float ___Qx_0;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qy
	float ___Qy_1;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qz
	float ___Qz_2;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qw
	float ___Qw_3;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::X
	float ___X_4;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Y
	float ___Y_5;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Z
	float ___Z_6;
};

// Google.XR.ARCoreExtensions.Internal.ApiQuaternion
struct ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 
{
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qx
	float ___Qx_0;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qy
	float ___Qy_1;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qz
	float ___Qz_2;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qw
	float ___Qw_3;
};

// Google.XR.ARCoreExtensions.Internal.AuthenticationModule
struct AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291  : public DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1 
{
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Group
	String_t* ___Group_0;
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Artifact
	String_t* ___Artifact_1;
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Version
	String_t* ___Version_2;
	// System.String[] Google.XR.ARCoreExtensions.Internal.JarArtifact::PackageIds
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___PackageIds_3;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke
{
	char* ___Group_0;
	char* ___Artifact_1;
	char* ___Version_2;
	char** ___PackageIds_3;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com
{
	Il2CppChar* ___Group_0;
	Il2CppChar* ___Artifact_1;
	Il2CppChar* ___Version_2;
	Il2CppChar** ___PackageIds_3;
};

// Google.XR.ARCoreExtensions.Internal.LocationModule
struct LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90  : public DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310
{
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44 
{
	// System.Int64 Google.XR.ARCoreExtensions.TrackData::FrameTimestamp
	int64_t ___FrameTimestamp_0;
	// System.Byte[] Google.XR.ARCoreExtensions.TrackData::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_1;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke
{
	int64_t ___FrameTimestamp_0;
	Il2CppSafeArray/*NONE*/* ___Data_1;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com
{
	int64_t ___FrameTimestamp_0;
	Il2CppSafeArray/*NONE*/* ___Data_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.XR.ARSubsystems.XRCameraParams
struct XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 
{
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;
};

// Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi
struct ExternApi_t60B1123719A0085F863DA4E070B4C3FDD73A5F0A 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t60B1123719A0085F863DA4E070B4C3FDD73A5F0A__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi
struct ExternApi_t306B75119DCB037FC62A0D359E7ACE50698F4CBD 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t306B75119DCB037FC62A0D359E7ACE50698F4CBD__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi
struct ExternApi_t28F81FC1184941953EA5DA1DDAABB2E215441A59 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t28F81FC1184941953EA5DA1DDAABB2E215441A59__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi
struct ExternApi_t7B0E4DDC4AA9DC164268ADB294D270DBAE998A8C 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t7B0E4DDC4AA9DC164268ADB294D270DBAE998A8C__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi
struct ExternApi_t1BCEB7D36F686886B22BA3007485AA26EB888A59 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t1BCEB7D36F686886B22BA3007485AA26EB888A59__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi
struct ExternApi_tE4E404A57BDBA92C8918A8B07208056F78A32B28 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tE4E404A57BDBA92C8918A8B07208056F78A32B28__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi
struct ExternApi_t4F0586BD06A4774928F79F4ACDF0C2E1737D16C9 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t4F0586BD06A4774928F79F4ACDF0C2E1737D16C9__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi
struct ExternApi_tF2B538FE59F014673D0DA26E9C28FBDB5A4F3395 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tF2B538FE59F014673D0DA26E9C28FBDB5A4F3395__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi
struct ExternApi_t18FAFBEF645F789F552DA3EDD9904DB363B26E2C 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t18FAFBEF645F789F552DA3EDD9904DB363B26E2C__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi
struct ExternApi_t34B2D0D9A8D7932D5448E2C32AD773B8B6BF867D 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t34B2D0D9A8D7932D5448E2C32AD773B8B6BF867D__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi
struct ExternApi_tD86A33FB8C6104C81A085391AC6C79FE1596A796 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tD86A33FB8C6104C81A085391AC6C79FE1596A796__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi
struct ExternApi_tA2E73CB97E672B68DBA992672F91757CE943B2C6 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tA2E73CB97E672B68DBA992672F91757CE943B2C6__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi
struct ExternApi_tDB9309FC648BC5010D1D14217A4DDCAF447D35F5 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tDB9309FC648BC5010D1D14217A4DDCAF447D35F5__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackApi/ExternApi
struct ExternApi_tBCC331512FDB7156DE67EB32C03020D358479CDD 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tBCC331512FDB7156DE67EB32C03020D358479CDD__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackDataApi/ExternApi
struct ExternApi_tE24204F5C3E6D7DA6274BCF05C94DB8099CEE437 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tE24204F5C3E6D7DA6274BCF05C94DB8099CEE437__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackDataListApi/ExternApi
struct ExternApi_tB13CC4A26F27E8DD4C6A746B62A5A7D0ADC520F9 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tB13CC4A26F27E8DD4C6A746B62A5A7D0ADC520F9__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>
struct InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_state
	int32_t ____state_0;
	// T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_result
	int32_t ____result_1;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_future
	intptr_t ____future_2;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::CheckingFunction
	String_t* ___CheckingFunction_0;
};

// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::EnumType
	Type_t* ___EnumType_0;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.GeospatialPose::EunRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_7;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::OrientationYawAccuracy
	double ___OrientationYawAccuracy_8;
};

// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Google.XR.ARCoreExtensions.Internal.HelpAttribute::HelpMessage
	String_t* ___HelpMessage_0;
	// Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType Google.XR.ARCoreExtensions.Internal.HelpAttribute::MessageType
	int32_t ___MessageType_1;
};

// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A  : public RuntimeObject
{
	// System.Boolean Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_isEnabled
	bool ____isEnabled_2;
	// System.String Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_iosCloudServicesApiKey
	String_t* ____iosCloudServicesApiKey_3;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_4;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_sessionHandle
	intptr_t ____sessionHandle_5;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_frameHandle
	intptr_t ____frameHandle_6;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_arKitSession
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ____arKitSession_7;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ____cameraManager_8;
};

struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_instance
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* ____instance_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC 
{
	// System.Guid Google.XR.ARCoreExtensions.Track::Id
	Guid_t ___Id_0;
	// System.Byte[] Google.XR.ARCoreExtensions.Track::Metadata
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Metadata_1;
	// System.String Google.XR.ARCoreExtensions.Track::MimeType
	String_t* ___MimeType_2;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke
{
	Guid_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Metadata_1;
	char* ___MimeType_2;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com
{
	Guid_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Metadata_1;
	Il2CppChar* ___MimeType_2;
};

// Google.XR.ARCoreExtensions.Internal.Translators
struct Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE  : public RuntimeObject
{
};

struct Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields
{
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____unityWorldToGLWorld_0;
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorldInverse
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____unityWorldToGLWorldInverse_1;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____unityWorldToGLWorldRotation_2;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::_glWorldToUnityWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____glWorldToUnityWorldRotation_3;
};

// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;
	// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_DepthSensorSupported
	int32_t ___m_DepthSensorSupported_3;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140  : public SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB
{
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct
struct AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::AnchorHandle
	intptr_t ___AnchorHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct
struct FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::FrameHandle
	intptr_t ___FrameHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct
struct PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::PlaneHandle
	intptr_t ___PlaneHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct
struct SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::SessionHandle
	intptr_t ___SessionHandle_1;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_instance
	AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* ____instance_7;
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____permissionNames_8;
	// System.Action`2<System.String,System.Boolean> Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionRequest
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ____permissionRequest_9;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____activity_10;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionService
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____permissionService_11;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1  : public InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 
{
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageIntensityInLumens
	float ___m_AverageIntensityInLumens_9;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureDuration
	double ___m_ExposureDuration_10;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureOffset
	float ___m_ExposureOffset_11;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightIntensityLumens
	float ___m_MainLightIntensityLumens_12;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_MainLightColor_13;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MainLightDirection_14;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AmbientSphericalHarmonics
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___m_AmbientSphericalHarmonics_15;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XRCameraFrame::m_CameraGrain
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_CameraGrain_16;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NoiseIntensity
	float ___m_NoiseIntensity_17;
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A  : public MulticastDelegate_t
{
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CameraConfigTargetFps Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::TargetCameraFramerate
	int32_t ___TargetCameraFramerate_4;
	// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::DepthSensorUsage
	int32_t ___DepthSensorUsage_5;
	// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::StereoCameraUsage
	int32_t ___StereoCameraUsage_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Google.XR.ARCoreExtensions.ARCoreRecordingConfig::AutoStopOnPause
	bool ___AutoStopOnPause_4;
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track> Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Tracks
	List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* ___Tracks_5;
	// System.Uri Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Mp4DatasetUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___Mp4DatasetUri_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Google.XR.ARCoreExtensions.Internal.RuntimeConfig::IOSCloudServicesApiKey
	String_t* ___IOSCloudServicesApiKey_5;
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.RuntimeConfig::ModulesEnabled
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ModulesEnabled_6;
};

struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.RuntimeConfig Google.XR.ARCoreExtensions.Internal.RuntimeConfig::Instance
	RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* ___Instance_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousDesiredFeatures
	uint64_t ___m_PreviousDesiredFeatures_5;
	// UnityEngine.XR.ARSubsystems.Configuration UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousConfiguration
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___m_PreviousConfiguration_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_FirstUpdate
	bool ___m_FirstUpdate_7;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_8;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_9;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCloudAnchor
struct ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_10;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2  : public ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E
{
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
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
// System.String[]
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_gshared (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* __this, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_gshared (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterruptiblePromise_1__ctor_mEEAF2154E09F696C284F90D224B778E4EA876F91_gshared (InterruptiblePromise_1_t64A6CB6958A6E8BE16C7DC48574F1034531399E5* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<System.Int32Enum>::GetSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterruptiblePromise_1_GetSessionHandle_m039011A9C3C7ECCE16E27487F06EFFE186F2D804_gshared (InterruptiblePromise_1_t64A6CB6958A6E8BE16C7DC48574F1034531399E5* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mBE664E52864F727B39B81313FA00C5FCFF9BAE62_gshared (const RuntimeMethod* method) ;

// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARFoundation.ARAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4 (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m13D53986925E23A4A9EBD3DC488EFB317D77AEDC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudAnchor>()
inline ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_mD39E92FBE4C10E547E557460BF52B58FF7883680 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_mBF2F524AEF7AA8517B622172F9A690A75B3A7F3F (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudReferencePoint>()
inline ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_mF747C9B1F08E6B942C85A4040788A4B5F862F3A3 (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_mADD766240C66E844C64BC1A97DBDC9D0F61F3D60 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::AcquireEarth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::AddAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EarthApi_AddAnchor_m0E5F7A0A7E37DBD3A9E22CF43FFAC81F48F68434 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitude4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARGeospatialAnchor>()
inline ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::ResolveAnchorOnTerrain(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EarthApi_ResolveAnchorOnTerrain_mB156F9DBA4EC8BE8C31CB1DE0A7DCA2B235E7C91 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitudeAboveTerrain4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_mDA3D4972F102F0849ADAA1B5BE82B46F4B56D848 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_m4A5DAC7A0C7295768478EA716E1C9F3AE502B995 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m4312C9B5A0B5017EEAF3444F8308A668E7E3C4F1 (int32_t ___state0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_mBF0C6CC2B2F03E59A6D8A51F998E9EBBA724F45C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630 (int32_t ___state0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 AnchorApi_GetAnchorPose_m229B587E47B003BE5A90F02EB5E5DE292C59A76A (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Translators_ToUnityPose_mAF66ACB04DFD50720935B1E1176674EB23BE9397 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 ___apiPose0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_mD0C47CDE1AFD8B65C3E96ED05BBE528D8C5D269D (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_mE5EB1FCC743B11244550CAF0E5F2EB2C2BC03DF4 (intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5 (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mDDF4F5F99A9C70C047E56686358B3330F11B8BBF_inline (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateARSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateCameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_m5FFCC18368C150948AE0E91E13C2C9ABD6626F5E (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetInstanceAndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5 (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>::.ctor()
inline void List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42*, const RuntimeMethod*))List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthState_m8260DD38B1B07FE8B9B4BB5645265D2F87D18A45 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthTrackingState_mBB0E4F5CBD0A69344FEAFFF1EED5FE4FC70EFC5E (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::TryGetCameraGeospatialPose(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_TryGetCameraGeospatialPose_m6A1917B93BF1146CCBD54EA9DAAA8263C7B66A52 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise__ctor_m2AFC3E7AE1335B7D1A9BB1AB180705114F7FAA62 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise__ctor_mA393535E7E0EB79683395845F6E391A36BE60D46 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.Internal.SessionApi::IsGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_IsGeospatialModeSupported_m2A666EF385F08AAF0B8755C47A1960CC8FBA5406 (intptr_t ___sessionHandle0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::Convert(System.IntPtr,UnityEngine.Pose,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_Convert_m61287D4C4F0AB7B7AECB0CC743959DA92341E817 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::Convert(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_Convert_m3C34CBA41C72F55D48859893B65A1EA3A959B0A4 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C ___geospatialPose1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTerrainAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTerrainAnchorState_m45AB3A5F4AE7EA07970DECAF2FBCF0C588C47536 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToTerrainAnchorState(Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTerrainAnchorState_mFED2B8BC539BECEFB896A0138DC10D781C13A73D (int32_t ___state0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_m5A85615C4C4669EA49F78D40C3D2D5BA787F2528 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystem()
inline XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline (SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5* __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* (*) (SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_m319112F6F7C2A657C054D9921B180F4338EDD326 (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDatasetUri(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDatasetUri_mBD3714BD1C8CA8C74D22FB3122304F6DFA5BE817 (intptr_t ___sessionHandle0, String_t* ___datasetUri1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>::.ctor()
inline void List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*, const RuntimeMethod*))List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zNear(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zFar(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>::get_subsystem()
inline XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline (SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B* __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* (*) (SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::TryGetLatestFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58 (XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* __this, XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 ___cameraParams0, XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* ___frame1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::get_timestampNs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.Internal.FrameApi::GetUpdatedTrackData(System.IntPtr,System.IntPtr,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* FrameApi_GetUpdatedTrackData_mBA2927549CF9D69A1BC02393E84E39A200D2462F (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_m350B64450AFB85E72820E502E3D275DE0EAC8790 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_mB14EAA552370F1C71DD672FB46D9E7C6AF951BAE (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_mDE2EE481118C87D932BC1F2D0BBA4C8FA989917D (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.FrameApi::RecordTrackData(System.IntPtr,System.IntPtr,System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameApi_RecordTrackData_m44B505299A938CECCB902A76600A3AF54F8FD2B3 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::.ctor()
inline void InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E (InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270* __this, const RuntimeMethod* method)
{
	((  void (*) (InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*, const RuntimeMethod*))InterruptiblePromise_1__ctor_mEEAF2154E09F696C284F90D224B778E4EA876F91_gshared)(__this, method);
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::GetSessionHandle()
inline intptr_t InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D (InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*, const RuntimeMethod*))InterruptiblePromise_1_GetSessionHandle_m039011A9C3C7ECCE16E27487F06EFFE186F2D804_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_m7DEDF9BB7555E86C1598AC3E9DEDBACC3933A70C (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.FutureApi::CheckVpsAvailabilityAsync(System.IntPtr,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureApi_CheckVpsAvailabilityAsync_m42BB97C1E9C4CD0DBB0FDCD8F21172DA1183A596 (intptr_t ___sessionHandle0, double ___latitude1, double ___longitude2, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureApi_Release_m6F8A1E040172B4880941F58BA140EB33DDB63857 (intptr_t ___futureHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.FutureApi::GetState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureApi_GetState_mE652BDBFAB580A45BB95819AD21041C28A6BF9D9 (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.VpsAvailability Google.XR.ARCoreExtensions.Internal.FutureApi::GetResult(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureApi_GetResult_mC621F591F617678AF24CC10DF0384FDD36A716F8 (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi::Cancel(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureApi_Cancel_m04EDC360ADC7B931FECD03F851ECCD341BC5531D (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_nativeConfigurationHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m307ED4C3B8F991322B19BB6A6139F9F43109ECED (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetTextureDimensions_m47949FC7AC7C644CA3AA3B60983AE68D051F5EDA (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetFPSRange_mBA6394A42C8ABDA1AE9717AF34680FCE2702E34A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_m9B13C0CE85536A0846EBF6921A3688ACC4DA4B6E (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m9CDC4A160CD8D4A6DD9293F25D90C336BA6E0846 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Google.XR.ARCoreExtensions.Internal.FrameApi::TransformCoordinates2d(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FrameApi_TransformCoordinates2d_mCD89EF923CC3B46780B51F79B18A70AA2D263201 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, int32_t ___inputType2, int32_t ___outputType3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvIn4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_m8CAB356E0BB06246EE9C37EB6403AF0BCEACD498 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetUnityActivity_m309823E18850E02C8E28E9BEF232A0DE53BC01BB (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_mBAA097F3F1030A3BE886503F2CA7963446A70CD9 (String_t* ___permissionName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`2<System.String,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* __this, String_t* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*, String_t*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* AndroidPermissionsManager_GetInstance_m6208FDBD1AA629B65BE7F45028FDC84301C39DBC (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARFoundation.ARPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARPlane_get_nativePtr_m0227A663EF6E1CC15D6A5BE2BF3D5EC21BCFFA25 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::.ctor()
inline void List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.LocationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::Add(T)
inline void List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AuthenticationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7 (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m4878EA8D197763D9264830236A4E73BC9BB22916 (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::FindAll(System.Predicate`1<T>)
inline List_1_t54955D954398D6C34C95F0A09188E388BD45008A* List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11 (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* ___match0, const RuntimeMethod* method)
{
	return ((  List_1_t54955D954398D6C34C95F0A09188E388BD45008A* (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*, const RuntimeMethod*))List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared)(__this, ___match0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModuleBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.ARCoreExtensions.Internal.LocationModule::UseLocation(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationModule_UseLocation_m0BB4E768A1A626BF41F466B9023BC55DD9227EC6 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::CreateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi_ReleaseFrame_m83CDD4D95F45AD56BDA00A01EDA9C32A54C3A404 (intptr_t ___frameHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_mA20413FEB3062B86F9087D2382B21205292EFD13 (intptr_t ___session0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_mA42595A0B5E47BBE52B1124B59E8AE1809E7F099 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_m5F16726CE3F7A08ABF668462A283EBED9E60EE11 (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<Google.XR.ARCoreExtensions.ARCoreExtensionsConfig>()
inline ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_mD1AED806DF087D81B5D869B6BBA4E7BC2E9E47EC (const RuntimeMethod* method)
{
	return ((  ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mBE664E52864F727B39B81313FA00C5FCFF9BAE62_gshared)(method);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___otherConfig0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::ConfigureSession(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_ConfigureSession_m5759D26FCB3A61E532EFFB2C16A0896B93A9487D (intptr_t ___sessionHandle0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.ApiQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m68834854FFE09120418A1DDDF0181FA9A83ECA31 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m1BB954BCA9CA3AB8F7510022B3C1BE67DABB6B8F (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 PoseApi_ExtractPoseValue_m3A39F1F8C21E6A21A614F59133164C0D55F9AA58 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_m3974AF75E241EEE8BC165AC3EDD90533CBBEC92A (intptr_t ___poseHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_m1B49B9713E77EF5205D0E83800E6F32334889126 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTerrainAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTerrainAnchorState_m8471CF1EDC82DF7C4598D5AF3F463BAD5908CD34 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___terrainAnchorState2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_m2AB56AF09C1EA818C9B975DE1622ACEEDD7CF377 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_mE995E3C504B468F5A0F8CA92AD9DCEDAA1A30D8D (intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_setSessionRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPresto_setSessionRequired_mE931C0DBBBCB6F780C0E56A6D87B1621C7EADB5B (bool ___isRequired0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_getSession(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPresto_getSession_m8C855424356F2AC3486E47133E2F731CF3B22C05 (intptr_t* ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_create_m3194F16DAD8222E41B077F981735CE10C8A49D85 (intptr_t ___sessionHandle0, intptr_t* ___configHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_UpdateSessionConfig_m8C9F4947D7CB373004224BA2607EE732770463D5 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArSession_configure(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_configure_mE7111EF5F426A474C1D133648AB0F9EFFEB7479C (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_destroy_m8AC61342E1886D86196845B3C295497E14F6C98C (intptr_t ___configHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode Google.XR.ARCoreExtensions.Internal.Translators::ToApiGeospatialMode(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToApiGeospatialMode_m258B8675892DFB03EF2C9DC4F91053073CD2AD8C (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setGeospatialMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setGeospatialMode_mC71A34F91045C3645350E0A2F311725CACF914B6 (intptr_t ___sessionHandle0, intptr_t ___config1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getEarthState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.EarthState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getEarthState_m87C6F2E7AD0171DD04410E80C1D74434F2B45804 (intptr_t ___session0, intptr_t ___earth1, int32_t* ___out_state2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD (intptr_t ___earthHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_getTrackingState_m6E0A643B639BA6EA84AA3FD168CDE302053E4280 (intptr_t ___sessionHandle0, intptr_t ___trackableHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GeospatialPoseApi_Create_m0C096F81F36D7CC2318460028A0997B9453C2545 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getCameraGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getCameraGeospatialPose_m3751DEDB83F66B03649C7DB96B03708B3AF0AE65 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, intptr_t ___outGeospatialPoseHandle2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::GetGeospatialPose(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_GetGeospatialPose_mD68C405D3B7352AA847A81BC52AB7AE3F62D8961 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___pose2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_Destroy_m4EE0D63D79433BFB4B95882143098A7E70CF8EE3 (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiQuaternion Google.XR.ARCoreExtensions.Internal.Translators::ToApiQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 Translators_ToApiQuaternion_m93311F60F943F718EA5C68A92E44D1FFBE34B814 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_acquireNewAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_acquireNewAnchor_m22B7734601F6212B2359695E40AE58E32CA2A0B5 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitude4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t* ___out_anchor6, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_resolveAndAcquireNewAnchorOnTerrain(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_resolveAndAcquireNewAnchorOnTerrain_m05EFC82F09C5DE0FA0608129183FE07E17D83582 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitudeAboveTerrain4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t* ___out_anchor6, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mB74EF9F202A7F755F06A94B290CCBFB1787B34AC (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_getGeospatialPose_mA8E3C53270F7AE3070CED2F6F07DFEBF44DB450D (intptr_t ___session0, intptr_t ___earth1, intptr_t ___poseHandle2, intptr_t ___outGeospatialPoseHandle3, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getPose(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_getPose_mB921558DB5328A5A3F83D5DE174D0A5E0275A3F0 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitude4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t ___outPoseHandle6, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_m3E16807D42C9DDEFF61315985DCDEE2447E8AA69 (intptr_t ___frameHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_m718AD14A2F520E92B4E751634A1C565382525C9E (int32_t ___apiArStatus0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArSession_checkVpsAvailabilityAsync(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_checkVpsAvailabilityAsync_mE0EC0FD97ADA72CC724CC3AE3EEDAD42CCEEF45B (intptr_t ___sessionHandle0, double ___latitude1, double ___longitude2, intptr_t ___context3, intptr_t ___callback4, intptr_t* ___out_future5, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_getState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.PromiseState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_getState_m115154A89455590A328B78810B38FDF8109E9809 (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_state2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_getResult(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.VpsAvailability&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_getResult_m75B1BFD702876875B220BC1C7C7DA572D0BF732A (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_result2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_cancel(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_cancel_mB2C3A82F4B39850867FA8397F0A80AC0FA67B175 (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_cancel2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_release_m8395508FBE8AC3869B87030514897202A3C81A8B (intptr_t ___future0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_create_m9B3D6053960C4D17E11E4F6475491905F5A26184 (intptr_t ___sessionHandle0, intptr_t* ___outGeospatialPoseHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_destroy_m3991B5A73EBD0C398126B9F57E0B0CF66E5786C1 (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getLatitudeLongitude(System.IntPtr,System.IntPtr,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getLatitudeLongitude_m03FDCDB7109DB82E0A477B2C8CB8AD6E74EAC55E (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outLatitudeDegrees2, double* ___outLongitudeDegrees3, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getAltitude(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getAltitude_m7D88872F430766DCA4633EFC500EAB40F115935F (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outAltitudeMeters2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeading(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeading_mC0B3FE2956E5040AF70F3CF9E47312198277C2CB (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingDegrees2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeadingAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeadingAccuracy_m2743AA9F2C8D09775B45CA1307BE0557B7767DE2 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingAccuracyDegrees2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHorizontalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHorizontalAccuracy_mE46EF70AD701245CDCA066A75380ABEE463AA871 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHorizontalAccuracyMeters2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getVerticalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getVerticalAccuracy_mCA79C86B204BA17F247337975D9A0C8731733D41 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outVerticalAccuracyMeters2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getEastUpSouthQuaternion(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getEastUpSouthQuaternion_mC78AC545348317710FBB36D9F353FF8D2E350326 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_orientation_quaternion_42, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::ToUnityQuaternion(Google.XR.ARCoreExtensions.Internal.ApiQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Translators_ToUnityQuaternion_mFED0A8843CB2BC064E5BCAF5B2E0375F4162949B (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 ___apiQuaternion0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getOrientationYawAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getOrientationYawAccuracy_m1FC94B3809DE3DF597C24E6DF53A41AEFC676173 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outOrientationYawAccuracyDegrees2, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 Translators_ToApiPose_m4D960EF5E564EAA84C74A990D0DCC63F8667F294 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___unityPose0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_m6D8C2A0C4D247678B6616D8B54B9BF0D3F5A6910 (intptr_t ___sessionHandle0, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m3937CA8E1BD9E5915272CA6502D4F1859B572389 (intptr_t ___poseHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_mFB171945121BCF6380D3972B16B2ABE409B9D372 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_m6AE7E0434580F512C85CF92C7392615E4BAB64E4 (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_m246DD9D60F0C50370E66D50DD249B941824FBE86 (int32_t ___apiStatus0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_mD9C44CE09C3BDD00FEBF23796E2E17E1A33FBCC6 (int32_t ___apiStatus0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_m4375BE342296D2B0E814997F6BEDCA6077BEBD55 (int32_t ___apiArStatus0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_isGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_isGeospatialModeSupported_m7A04B7A935BDC85E31D7D7FEDDD205279C09D04D (intptr_t ___sessionHandle0, int32_t ___mode1, int32_t* ___out_is_supported2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_acquireEarth(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_acquireEarth_mF1C53991B9B08A4A32FD2F27517764DD6E4E0CB4 (intptr_t ___sessionHandle0, intptr_t* ___earthHandle1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_create(char*, char*, intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_updateAndAcquireArFrame(intptr_t, intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getTerrainAnchorState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArString_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getPose(intptr_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getTrackingState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_detach(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_create(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_destroy(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_configure(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_setGeospatialMode(intptr_t, intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArEarth_getEarthState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArEarth_getCameraGeospatialPose(intptr_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArTrackable_getTrackingState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArTrackable_release(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArEarth_acquireNewAnchor(intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArEarth_resolveAndAcquireNewAnchorOnTerrain(intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArEarth_getGeospatialPose(intptr_t, intptr_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArEarth_getPose(intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArFrame_release(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_checkVpsAvailabilityAsync(intptr_t, double, double, intptr_t, intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArVpsAvailabilityFuture_getState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArVpsAvailabilityFuture_getResult(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArVpsAvailabilityFuture_cancel(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArVpsAvailabilityFuture_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_create(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getLatitudeLongitude(intptr_t, intptr_t, double*, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getHorizontalAccuracy(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getVerticalAccuracy(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getAltitude(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getHeading(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getHeadingAccuracy(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getEastUpSouthQuaternion(intptr_t, intptr_t, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArGeospatialPose_getOrientationYawAccuracy(intptr_t, intptr_t, double*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_create(intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_getPoseRaw(intptr_t, intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_isGeospatialModeSupported(intptr_t, int32_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_acquireEarth(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_setAuthToken(intptr_t, char*);
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
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_HostCloudAnchor_m3CA8423EB5B79679BBD5DE1EA43B7BF3F08E376B (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	bool V_2 = false;
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     anchor == null || anchor.nativePtr == IntPtr.Zero ||
		//     anchor.AnchorHandle() == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_3 = ___anchor1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_5 = ___anchor1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_5, NULL);
		bool L_7;
		L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, (0), NULL);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_8 = ___anchor1;
		intptr_t L_9;
		L_9 = ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4(L_8, NULL);
		bool L_10;
		L_10 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, (0), NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_00c0;
	}

IL_004e:
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle());
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_12;
		L_12 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_12);
		intptr_t L_13;
		L_13 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_12, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_14 = ___anchor1;
		intptr_t L_15;
		L_15 = ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_16;
		L_16 = SessionApi_HostCloudAnchor_m13D53986925E23A4A9EBD3DC488EFB317D77AEDC(L_13, L_15, NULL);
		V_0 = L_16;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_17 = V_0;
		bool L_18;
		L_18 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_17, (0), NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_00c0;
	}

IL_007a:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_20 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_21, L_20, NULL);
		NullCheck(L_21);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_22;
		L_22 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_21, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_22;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a0;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_26 = V_1;
		intptr_t L_27 = V_0;
		NullCheck(L_26);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428(L_26, L_27, NULL);
	}

IL_00a0:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_30;
		L_30 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_30);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_31 = L_30->___SessionOrigin_5;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_31, NULL);
		NullCheck(L_29);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_29, L_32, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_33 = V_1;
		V_3 = L_33;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_34 = V_3;
		return L_34;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_HostCloudAnchor_m8392DDC37C64F4820260D200B221C963AF8C5D8C (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor1, int32_t ___ttlDays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C831849415D472ACDAD3625736030C927879A25);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	bool V_2 = false;
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     anchor == null || anchor.nativePtr == IntPtr.Zero ||
		//     anchor.AnchorHandle() == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_3 = ___anchor1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_5 = ___anchor1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_5, NULL);
		bool L_7;
		L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, (0), NULL);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_8 = ___anchor1;
		intptr_t L_9;
		L_9 = ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4(L_8, NULL);
		bool L_10;
		L_10 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, (0), NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_00f8;
	}

IL_0051:
	{
		// if (ttlDays <= 0 || ttlDays > 365)
		int32_t L_12 = ___ttlDays2;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___ttlDays2;
		G_B10_0 = ((((int32_t)L_13) > ((int32_t)((int32_t)365)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
	}

IL_0060:
	{
		V_4 = (bool)G_B10_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to host a Cloud Anchor with invalid TTL {0}. " +
		//     "The lifetime of the anchor in days must be positive, " +
		//     "the maximum allowed value is 1 when using an API Key to authenticate with " +
		//     "the ARCore Cloud Anchor service, otherwise the maximum allowed value is 365.",
		//     ttlDays);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = ___ttlDays2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral5C831849415D472ACDAD3625736030C927879A25, L_16, NULL);
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_00f8;
	}

IL_0085:
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle(), ttlDays);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_20;
		L_20 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_20);
		intptr_t L_21;
		L_21 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_20, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_22 = ___anchor1;
		intptr_t L_23;
		L_23 = ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4(L_22, NULL);
		int32_t L_24 = ___ttlDays2;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_25;
		L_25 = SessionApi_HostCloudAnchor_mD39E92FBE4C10E547E557460BF52B58FF7883680(L_21, L_23, L_24, NULL);
		V_0 = L_25;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_26 = V_0;
		bool L_27;
		L_27 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_26, (0), NULL);
		V_5 = L_27;
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_00b2;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_00f8;
	}

IL_00b2:
	{
		// ARCloudAnchor cloudAnchor =
		//     new GameObject(_cloudAnchorName).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_29 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_30, L_29, NULL);
		NullCheck(L_30);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_31;
		L_31 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_30, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_31;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00d8;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_35 = V_1;
		intptr_t L_36 = V_0;
		NullCheck(L_35);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428(L_35, L_36, NULL);
	}

IL_00d8:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_37 = V_1;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_39;
		L_39 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_39);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_40 = L_39->___SessionOrigin_5;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_40, NULL);
		NullCheck(L_38);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_38, L_41, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_42 = V_1;
		V_3 = L_42;
		goto IL_00f8;
	}

IL_00f8:
	{
		// }
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_43 = V_3;
		return L_43;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::SetAuthToken(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions_SetAuthToken_m8838FF6461941AD494505A13E1A6AA658E3B4A03 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0069;
	}

IL_001c:
	{
		// if (!string.IsNullOrEmpty(RuntimeConfig.Instance.IOSCloudServicesApiKey))
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_4 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___IOSCloudServicesApiKey_5;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError(
		//     "Cannot set token in applications built using the 'API Key' " +
		//     "authentication strategy. To use it, check Edit > Project Settings " +
		//     "> XR Plug-in Management > ARCore Extensions > iOS Support Enabled and " +
		//     "set iOS Authentication Strategy to Authentication Token.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75, NULL);
		// return;
		goto IL_0069;
	}

IL_0040:
	{
		// if (string.IsNullOrEmpty(authToken))
		String_t* L_8 = ___authToken1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Cannot set empty token in applications.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679, NULL);
		// return;
		goto IL_0069;
	}

IL_0058:
	{
		// SessionApi.SetAuthToken(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, authToken);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		String_t* L_13 = ___authToken1;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		SessionApi_SetAuthToken_mBF2F524AEF7AA8517B622172F9A690A75B3A7F3F(L_12, L_13, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddCloudReferencePoint(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* ARAnchorManagerExtensions_AddCloudReferencePoint_m1B1C612D6783A4D362E46A0F189921D1735C5F42 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___referencePointManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___referencePoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_1 = NULL;
	bool V_2 = false;
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_3 = NULL;
	bool V_4 = false;
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     referencePoint.AnchorHandle());
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2 = ___referencePoint1;
		intptr_t L_3;
		L_3 = ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = SessionApi_HostCloudAnchor_m13D53986925E23A4A9EBD3DC488EFB317D77AEDC(L_1, L_3, NULL);
		V_0 = L_4;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_5, (0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// return null;
		V_3 = (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2*)NULL;
		goto IL_0071;
	}

IL_002b:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudReferencePoint>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_8 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_9, L_8, NULL);
		NullCheck(L_9);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_10;
		L_10 = GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA(L_9, GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		V_1 = L_10;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_14 = V_1;
		intptr_t L_15 = V_0;
		NullCheck(L_14);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428(L_14, L_15, NULL);
	}

IL_0051:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_18;
		L_18 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_18);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_19 = L_18->___SessionOrigin_5;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_19, NULL);
		NullCheck(L_17);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_17, L_20, (bool)0, NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_21 = V_1;
		V_3 = L_21;
		goto IL_0071;
	}

IL_0071:
	{
		// }
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_22 = V_3;
		return L_22;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudAnchorId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_ResolveCloudAnchorId_mEF0AF38EF4C1DAD65D398EEF2905337F1AF0C165 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	bool V_2 = false;
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     string.IsNullOrEmpty(cloudAnchorId))
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___cloudAnchorId1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_0096;
	}

IL_0029:
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudAnchorId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		String_t* L_8 = ___cloudAnchorId1;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = SessionApi_ResolveCloudAnchor_mF747C9B1F08E6B942C85A4040788A4B5F862F3A3(L_7, L_8, NULL);
		V_0 = L_9;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_10 = V_0;
		bool L_11;
		L_11 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_10, (0), NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		// return null;
		V_3 = (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
		goto IL_0096;
	}

IL_0050:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_13 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_14, L_13, NULL);
		NullCheck(L_14);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_15;
		L_15 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_14, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_15;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_19 = V_1;
		intptr_t L_20 = V_0;
		NullCheck(L_19);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428(L_19, L_20, NULL);
	}

IL_0076:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_23;
		L_23 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_23);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_24 = L_23->___SessionOrigin_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_24, NULL);
		NullCheck(L_22);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_22, L_25, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_26 = V_1;
		V_3 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_27 = V_3;
		return L_27;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudReferenceId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* ARAnchorManagerExtensions_ResolveCloudReferenceId_m3F14FF037E8D16E511AA797CD63172351B0A076B (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___referencePointManager0, String_t* ___cloudReferenceId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_1 = NULL;
	bool V_2 = false;
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_3 = NULL;
	bool V_4 = false;
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudReferenceId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		String_t* L_2 = ___cloudReferenceId1;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = SessionApi_ResolveCloudAnchor_mF747C9B1F08E6B942C85A4040788A4B5F862F3A3(L_1, L_2, NULL);
		V_0 = L_3;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_4, (0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		// return null;
		V_3 = (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2*)NULL;
		goto IL_006c;
	}

IL_0026:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudReferencePoint>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, L_7, NULL);
		NullCheck(L_8);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_9;
		L_9 = GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA(L_8, GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		V_1 = L_9;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_13 = V_1;
		intptr_t L_14 = V_0;
		NullCheck(L_13);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428(L_13, L_14, NULL);
	}

IL_004c:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_17;
		L_17 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_17);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_18 = L_17->___SessionOrigin_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_18, NULL);
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_19, (bool)0, NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_20 = V_1;
		V_3 = L_20;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_21 = V_3;
		return L_21;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::EstimateFeatureMapQualityForHosting(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARAnchorManagerExtensions_EstimateFeatureMapQualityForHosting_mB8D83D6911882C6FBD7BF3864BBC58D774350BE5 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return FeatureMapQuality.Insufficient;
		V_1 = 0;
		goto IL_0031;
	}

IL_001e:
	{
		// return SessionApi.EstimateFeatureMapQualityForHosting(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, pose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SessionApi_EstimateFeatureMapQualityForHosting_mADD766240C66E844C64BC1A97DBDC9D0F61F3D60(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m9AB188663991BAE77AF6579D1F1E0EEAC1E14174 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_2 = NULL;
	bool V_3 = false;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_0022:
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_5, NULL);
		V_0 = L_6;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_7 = V_0;
		bool L_8;
		L_8 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_7, (0), NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Failed to acquire earth.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255, NULL);
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_0054:
	{
		// IntPtr anchorHandle = EarthApi.AddAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     earthHandle, latitude, longitude, altitude, eunRotation);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10;
		L_10 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_10, NULL);
		intptr_t L_12 = V_0;
		double L_13 = ___latitude1;
		double L_14 = ___longitude2;
		double L_15 = ___altitude3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___eunRotation4;
		intptr_t L_17;
		L_17 = EarthApi_AddAnchor_m0E5F7A0A7E37DBD3A9E22CF43FFAC81F48F68434(L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		V_1 = L_17;
		// if (anchorHandle == IntPtr.Zero)
		intptr_t L_18 = V_1;
		bool L_19;
		L_19 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_18, (0), NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_008c;
		}
	}
	{
		// Debug.LogError("Failed to add geospatial anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539, NULL);
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_008c:
	{
		// ARGeospatialAnchor anchor =
		//     new GameObject(_geospatialAnchorName).AddComponent<ARGeospatialAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_21 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, L_21, NULL);
		NullCheck(L_22);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_23;
		L_23 = GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C(L_22, GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		V_2 = L_23;
		// if (anchor)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_24, NULL);
		V_7 = L_25;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		// anchor.SetAnchorHandle(anchorHandle);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_27 = V_2;
		intptr_t L_28 = V_1;
		NullCheck(L_27);
		ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D(L_27, L_28, NULL);
	}

IL_00b2:
	{
		// anchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_29 = V_2;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_31;
		L_31 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_31);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_32 = L_31->___SessionOrigin_5;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_32, NULL);
		NullCheck(L_30);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_30, L_33, (bool)0, NULL);
		// return anchor;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = V_2;
		V_4 = L_34;
		goto IL_00d3;
	}

IL_00d3:
	{
		// }
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_35 = V_4;
		return L_35;
	}
}
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveAnchorOnTerrain(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_ResolveAnchorOnTerrain_m1FD45EEE86F0DC367551C76685B1F25633EACEFE (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitudeAboveTerrain3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D95DBA1BCE9A4D92721B753E3211EC8E063160);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_2 = NULL;
	bool V_3 = false;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_0022:
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_5, NULL);
		V_0 = L_6;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_7 = V_0;
		bool L_8;
		L_8 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_7, (0), NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Failed to acquire earth.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255, NULL);
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_0054:
	{
		// IntPtr anchorHandle = EarthApi.ResolveAnchorOnTerrain(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, earthHandle, latitude,
		//     longitude, altitudeAboveTerrain, eunRotation);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10;
		L_10 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_10, NULL);
		intptr_t L_12 = V_0;
		double L_13 = ___latitude1;
		double L_14 = ___longitude2;
		double L_15 = ___altitudeAboveTerrain3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___eunRotation4;
		intptr_t L_17;
		L_17 = EarthApi_ResolveAnchorOnTerrain_mB156F9DBA4EC8BE8C31CB1DE0A7DCA2B235E7C91(L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		V_1 = L_17;
		// if (anchorHandle == IntPtr.Zero)
		intptr_t L_18 = V_1;
		bool L_19;
		L_19 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_18, (0), NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_008c;
		}
	}
	{
		// Debug.LogError("Failed to add geospatial terrain anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D95DBA1BCE9A4D92721B753E3211EC8E063160, NULL);
		// return null;
		V_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		goto IL_00d3;
	}

IL_008c:
	{
		// ARGeospatialAnchor anchor =
		//     new GameObject(_terrainAnchorName).AddComponent<ARGeospatialAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_21 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____terrainAnchorName_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, L_21, NULL);
		NullCheck(L_22);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_23;
		L_23 = GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C(L_22, GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		V_2 = L_23;
		// if (anchor)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_24, NULL);
		V_7 = L_25;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		// anchor.SetAnchorHandle(anchorHandle);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_27 = V_2;
		intptr_t L_28 = V_1;
		NullCheck(L_27);
		ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D(L_27, L_28, NULL);
	}

IL_00b2:
	{
		// anchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_29 = V_2;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_31;
		L_31 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_31);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_32 = L_31->___SessionOrigin_5;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_32, NULL);
		NullCheck(L_30);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_30, L_33, (bool)0, NULL);
		// return anchor;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = V_2;
		V_4 = L_34;
		goto IL_00d3;
	}

IL_00d3:
	{
		// }
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_35 = V_4;
		return L_35;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions__cctor_m2D60F30434D7EBCDE34178308C592B9C2CC36C45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F6371DD6CF6CD32300060BD6369CEA8CEA65BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string _cloudAnchorName = "ARCloudAnchor";
		((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0 = _stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414;
		Il2CppCodeGenWriteBarrier((void**)(&((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0), (void*)_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
		// private static readonly string _geospatialAnchorName = "ARGeospatialAnchor";
		((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1 = _stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE;
		Il2CppCodeGenWriteBarrier((void**)(&((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1), (void*)_stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE);
		// private static readonly string _terrainAnchorName = "ARTerrainAnchor";
		((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____terrainAnchorName_2 = _stringLiteralE0F6371DD6CF6CD32300060BD6369CEA8CEA65BB;
		Il2CppCodeGenWriteBarrier((void**)(&((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____terrainAnchorName_2), (void*)_stringLiteralE0F6371DD6CF6CD32300060BD6369CEA8CEA65BB);
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
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_004b;
	}

IL_0033:
	{
		// return AnchorApi.GetCloudAnchorId(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		String_t* L_9;
		L_9 = AnchorApi_GetCloudAnchorId_mDA3D4972F102F0849ADAA1B5BE82B46F4B56D848(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		String_t* L_10 = V_1;
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return CloudAnchorState.None;
		V_1 = 0;
		goto IL_0050;
	}

IL_0033:
	{
		// return AnchorApi.GetCloudAnchorState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToCloudAnchorState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		int32_t L_9;
		L_9 = AnchorApi_GetCloudAnchorState_m4A5DAC7A0C7295768478EA716E1C9F3AE502B995(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Translators_ToCloudAnchorState_m4312C9B5A0B5017EEAF3444F8308A668E7E3C4F1(L_9, NULL);
		V_1 = L_10;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TrackableId(0, (ulong)_anchorHandle);
		intptr_t L_0 = __this->____anchorHandle_4;
		int64_t L_1;
		L_1 = IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66(L_0, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_2), ((int64_t)0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return TrackingState.None;
		V_1 = 0;
		goto IL_0050;
	}

IL_0033:
	{
		// return AnchorApi.GetTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTrackingState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		int32_t L_9;
		L_9 = AnchorApi_GetTrackingState_mBF0C6CC2B2F03E59A6D8A51F998E9EBBA724F45C(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630(L_9, NULL);
		V_1 = L_10;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCloudAnchor_get_nativePtr_m3C263EC961BB8258ADDFD9B6C78BE7C066FAA3F5 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _anchorHandle;
		intptr_t L_0 = __this->____anchorHandle_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		goto IL_0081;
	}

IL_0031:
	{
		// ApiPose apiPose = AnchorApi.GetAnchorPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_9;
		L_9 = AnchorApi_GetAnchorPose_m229B587E47B003BE5A90F02EB5E5DE292C59A76A(L_7, L_8, NULL);
		V_0 = L_9;
		// _pose = apiPose.ToUnityPose();
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = Translators_ToUnityPose_mAF66ACB04DFD50720935B1E1176674EB23BE9397(L_10, NULL);
		__this->____pose_5 = L_11;
		// transform.localPosition = _pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&__this->____pose_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position_0;
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_14, NULL);
		// transform.localRotation = _pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = (&__this->____pose_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16->___rotation_1;
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_17, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_OnDestroy_mADCFC5DF57AFBB9261CEB409D0287D52952A27AC (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero &&
		//     _anchorHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// AnchorApi.Detach(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		AnchorApi_Detach_mD0C47CDE1AFD8B65C3E96ED05BBE528D8C5D269D(L_7, L_8, NULL);
		// AnchorApi.Release(_anchorHandle);
		intptr_t L_9 = __this->____anchorHandle_4;
		AnchorApi_Release_mE5EB1FCC743B11244550CAF0E5F2EB2C2BC03DF4(L_9, NULL);
		// _anchorHandle = IntPtr.Zero;
		__this->____anchorHandle_4 = (0);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudReferencePoint_get_cloudReferenceId_mE2956D89B766D3CD82E461ABDCA89C1ADE82378C (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return cloudAnchorId;
		String_t* L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.CloudReferenceState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_cloudReferenceState_m20FCDA23E2EC687F47A2DA9FCD2667302E54AA88 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (CloudReferenceState)cloudAnchorState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudReferencePoint_get_trackableId_m356D424603D31C1C250939E18D35B8E47B5BC78A (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return base.trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudReferencePoint_get_pose_m3802DA62177FA51202593C32AF8B5338EB47D18D (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return base.pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_trackingState_m950C385BE519333AA58BA8A5F10077F43A0E7830 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.trackingState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint_Update_m6F4882E76C9CDF38472E7B9E77CC6533D7A5CCCE (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint__ctor_m73189C5F3F3E88724B1E319C56001AD463AAB306 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9(__this, NULL);
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
// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mDDF4F5F99A9C70C047E56686358B3330F11B8BBF (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ___value0;
		((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (_instance == null || _instance.Session == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_2;
		L_2 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_2);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_3 = L_2->___Session_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("ARCore Extensions not found or not configured. Please " +
		//     "include an ARCore Extensions game object in your scene. " +
		//     "GameObject -> XR -> ARCore Extensions");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F, NULL);
		// return IntPtr.Zero;
		V_1 = (0);
		goto IL_0046;
	}

IL_0039:
	{
		// return IOSSupportManager.Instance.ARCoreSessionHandle;
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_6;
		L_6 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7(L_6, NULL);
		V_1 = L_7;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		intptr_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Awake_m462E93532CE1134F8D3820B4D045FCE4F6EF8A9B (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_instance)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("ARCore Extensions is already initialized. You may only " +
		//     "have one instance in your scene at a time.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B, NULL);
	}

IL_001c:
	{
		// _instance = this;
		ARCoreExtensions_set__instance_mDDF4F5F99A9C70C047E56686358B3330F11B8BBF_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Start_mD04C7D4673192D172926C02041EEB473910DC861 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		// IOSSupportManager.Instance.UpdateARSession(Session);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_1 = __this->___Session_4;
		NullCheck(L_0);
		IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4(L_0, L_1, NULL);
		// IOSSupportManager.Instance.UpdateCameraManager(CameraManager);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_2;
		L_2 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_3 = __this->___CameraManager_6;
		NullCheck(L_2);
		IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnEnable_mF4D459AA504573AA538902B493D3A3437A3B73D4 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IOSSupportManager.Instance.SetEnabled(true);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		NullCheck(L_0);
		IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55(L_0, (bool)1, NULL);
		// CachedData.Reset();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		CachedData_Reset_m5FFCC18368C150948AE0E91E13C2C9ABD6626F5E(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDisable_m6AA1E86685AA43C51A56805BD77B1CB80FE5F59D (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IOSSupportManager.Instance.SetEnabled(false);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		NullCheck(L_0);
		IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55(L_0, (bool)0, NULL);
		// CachedData.Reset();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		CachedData_Reset_m5FFCC18368C150948AE0E91E13C2C9ABD6626F5E(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDestroy_m6874CF48D40D0D5F03001DF524A2D654C2CD6E30 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// IOSSupportManager.Instance.ResetInstanceAndSession();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5(NULL);
		NullCheck(L_0);
		IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD(L_0, NULL);
		// if (_instance)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_1;
		L_1 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// _instance = null;
		ARCoreExtensions_set__instance_mDDF4F5F99A9C70C047E56686358B3330F11B8BBF_inline((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41*)NULL, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Update_mD9AC1AD31D56E839D4454AE2C62E13F464DEA87A (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions__ctor_m7C53C39B890BD8F468DB8EB21934E061D2EEE67C (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Multicast(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* currentDelegate = reinterpret_cast<OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___supportedConfigurations0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Open(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___supportedConfigurations0, method);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStaticInvoker(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* >::Invoke(__this->___method_ptr_0, method, NULL, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_ClosedStaticInvoker(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenVirtual(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInterface(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericVirtual(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< int32_t >::Invoke(method, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericInterface(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< int32_t >::Invoke(method, ___supportedConfigurations0);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChooseXRCameraConfigurationEvent__ctor_m24A508C72ACF7BDAC17898F07AE863770AA50836 (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Multicast;
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::Invoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___supportedConfigurations0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::BeginInvoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChooseXRCameraConfigurationEvent_BeginInvoke_m0EC24DB8125C1AEEBE2181403F9629F1347C5630 (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___supportedConfigurations0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_EndInvoke_mE71DBEDF777B55D0B5EA842FF75DAA25ACAE610A (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetTargetCameraFramerateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetTargetCameraFramerateInfo_mDE966A6395026119B735CAE24A7F2A9E19FA6E37 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* V_2 = NULL;
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->___TargetCameraFramerate_4;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_2 = __this->___TargetCameraFramerate_4;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_4 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_4, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		V_2 = L_4;
		goto IL_003f;
	}

IL_002d:
	{
		// return new HelpAttribute(
		//     "Target30FPS is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_5 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_5, _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, 2, NULL);
		V_2 = L_5;
		goto IL_003f;
	}

IL_003b:
	{
		// return null;
		V_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_6 = V_2;
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetDepthSensorUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetDepthSensorUsageInfo_m80F4380705229A3F945A8B089F5CFB610C6D8505 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* V_2 = NULL;
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_0 = __this->___DepthSensorUsage_5;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&2))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_2 = __this->___DepthSensorUsage_5;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_4 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_4, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		V_2 = L_4;
		goto IL_003f;
	}

IL_002d:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_5 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_5, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, NULL);
		V_2 = L_5;
		goto IL_003f;
	}

IL_003b:
	{
		// return null;
		V_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_6 = V_2;
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetStereoCameraUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetStereoCameraUsageInfo_mF6E4B3D1B553A0F4E57D6B3BF02A05FB7CA10FD9 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* V_2 = NULL;
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_0 = __this->___StereoCameraUsage_6;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&2))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_2 = __this->___StereoCameraUsage_6;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_4 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_4, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		V_2 = L_4;
		goto IL_003f;
	}

IL_002d:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_5 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_5, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, NULL);
		V_2 = L_5;
		goto IL_003f;
	}

IL_003b:
	{
		// return null;
		V_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_6 = V_2;
		return L_6;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_OnValidate_mFFF090CD677954E3CE0617C8D3BF60CE1A3A6869 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->___TargetCameraFramerate_4;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_2 = __this->___TargetCameraFramerate_4;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Target Camera Framerate are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC, NULL);
	}

IL_002b:
	{
		// Debug.LogWarning("Target30FPS is not selected, this may cause " +
		//    "no camera config be available for this filter and " +
		//    "the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, NULL);
	}

IL_0037:
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_4 = __this->___DepthSensorUsage_5;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_4&2))) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_6 = __this->___DepthSensorUsage_5;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Depth Sensor Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C, NULL);
	}

IL_0061:
	{
		// Debug.LogWarning(
		//     "DoNotUseDepthSensor is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE, NULL);
	}

IL_006d:
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_8 = __this->___StereoCameraUsage_6;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_8&2))) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00a7;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_10 = __this->___StereoCameraUsage_6;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Stereo Camera Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41, NULL);
	}

IL_009b:
	{
		// Debug.LogWarning(
		//     "DoNotUseStereoCamera is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsCameraConfigFilter_Equals_m503991851E55891C03FA5D74D585E3C756120046 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// ARCoreExtensionsCameraConfigFilter otherFilter =
		//     other as ARCoreExtensionsCameraConfigFilter;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3*)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var));
		// if (otherFilter == null)
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0055;
	}

IL_0018:
	{
		// if (TargetCameraFramerate != otherFilter.TargetCameraFramerate ||
		//     StereoCameraUsage != otherFilter.StereoCameraUsage ||
		//     DepthSensorUsage != otherFilter.DepthSensorUsage)
		int32_t L_4 = __this->___TargetCameraFramerate_4;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___TargetCameraFramerate_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = __this->___StereoCameraUsage_6;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___StereoCameraUsage_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_10 = __this->___DepthSensorUsage_5;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___DepthSensorUsage_5;
		G_B6_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 1;
	}

IL_0048:
	{
		V_3 = (bool)G_B6_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0055;
	}

IL_0051:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsCameraConfigFilter_GetHashCode_m6D6C86EE3583871CBD5C3F4356B1C4D002273E3F (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_CopyFrom_mE92DED10C229580E7F17A3773447EEE97677C3C4 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___otherFilter0, const RuntimeMethod* method) 
{
	{
		// TargetCameraFramerate = otherFilter.TargetCameraFramerate;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_0 = ___otherFilter0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___TargetCameraFramerate_4;
		__this->___TargetCameraFramerate_4 = L_1;
		// DepthSensorUsage = otherFilter.DepthSensorUsage;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_2 = ___otherFilter0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DepthSensorUsage_5;
		__this->___DepthSensorUsage_5 = L_3;
		// StereoCameraUsage = otherFilter.StereoCameraUsage;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_4 = ___otherFilter0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___StereoCameraUsage_6;
		__this->___StereoCameraUsage_6 = L_5;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter__ctor_mC3D3A31BB03CC0569A9280BAFF3693F522299F7A (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	{
		// public CameraConfigTargetFps TargetCameraFramerate =
		//     CameraConfigTargetFps.Target30FPS | CameraConfigTargetFps.Target60FPS;
		__this->___TargetCameraFramerate_4 = 3;
		// public CameraConfigDepthSensorUsage DepthSensorUsage =
		//     CameraConfigDepthSensorUsage.RequireAndUse | CameraConfigDepthSensorUsage.DoNotUse;
		__this->___DepthSensorUsage_5 = 3;
		// public CameraConfigStereoCameraUsage StereoCameraUsage =
		//     CameraConfigStereoCameraUsage.RequireAndUse | CameraConfigStereoCameraUsage.DoNotUse;
		__this->___StereoCameraUsage_6 = 3;
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
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::get_EnableCloudAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_get_EnableCloudAnchors_mCBE4F23C040BE20537095AD108C85E1D54CC9B75 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return CloudAnchorMode != CloudAnchorMode.Disabled;
		int32_t L_0 = __this->___CloudAnchorMode_4;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::set_EnableCloudAnchors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_set_EnableCloudAnchors_mA65EC7960171683803876EB54BB6C6ED2FC25541 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B2_0 = NULL;
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B3_1 = NULL;
	{
		// CloudAnchorMode = value ? CloudAnchorMode.Enabled : CloudAnchorMode.Disabled;
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		G_B3_1->___CloudAnchorMode_4 = G_B3_0;
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_Equals_mFB0B8DE2CA800FD7A1945CD480AC2DB619A5AA9D (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// ARCoreExtensionsConfig otherConfig = other as ARCoreExtensionsConfig;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD*)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var));
		// if (otherConfig == null ||
		//     GeospatialMode != otherConfig.GeospatialMode ||
		//     CloudAnchorMode != otherConfig.CloudAnchorMode)
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = __this->___GeospatialMode_5;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___GeospatialMode_5;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->___CloudAnchorMode_4;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___CloudAnchorMode_4;
		G_B4_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		V_1 = (bool)G_B4_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_003c:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsConfig_GetHashCode_mCE6686BF01651DFCC1EF587C885FB047FD7705DC (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___otherConfig0, const RuntimeMethod* method) 
{
	{
		// CloudAnchorMode = otherConfig.CloudAnchorMode;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___otherConfig0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___CloudAnchorMode_4;
		__this->___CloudAnchorMode_4 = L_1;
		// GeospatialMode = otherConfig.GeospatialMode;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_2 = ___otherConfig0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___GeospatialMode_5;
		__this->___GeospatialMode_5 = L_3;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig__ctor_mD2069330D92B021E17D258A3026895F0969E9947 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	{
		// public CloudAnchorMode CloudAnchorMode = CloudAnchorMode.Disabled;
		__this->___CloudAnchorMode_4 = 0;
		// public GeospatialMode GeospatialMode = GeospatialMode.Disabled;
		__this->___GeospatialMode_5 = 0;
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
// System.String Google.XR.ARCoreExtensions.ARCoreRecordingConfig::get_Mp4DatasetFilepath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreRecordingConfig_get_Mp4DatasetFilepath_m3776003B59E36EF58C3DF8F9FF6D7662CD0963D6 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (Mp4DatasetUri == null)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___Mp4DatasetUri_6;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_003b;
	}

IL_0016:
	{
		// if (!Mp4DatasetUri.IsFile)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = __this->___Mp4DatasetUri_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_003b;
	}

IL_002d:
	{
		// return Mp4DatasetUri.AbsolutePath;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = __this->___Mp4DatasetUri_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_6, NULL);
		V_1 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::set_Mp4DatasetFilepath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig_set_Mp4DatasetFilepath_m23DDA971D55B4ACE347E344C55EC4F5A76FD2449 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mp4DatasetUri = new Uri(value);
		String_t* L_0 = ___value0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		__this->___Mp4DatasetUri_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mp4DatasetUri_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig__ctor_m25B4BF303E90D1FA892E5DDC107F7854E08B3BC7 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AutoStopOnPause = true;
		__this->___AutoStopOnPause_4 = (bool)1;
		// public List<Track> Tracks = new List<Track>();
		List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* L_0 = (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42*)il2cpp_codegen_object_new(List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA(L_0, List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var);
		__this->___Tracks_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tracks_5), (void*)L_0);
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
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return EarthState.ErrorSessionNotReady;
		V_1 = ((int32_t)-101);
		goto IL_0062;
	}

IL_001f:
	{
		// if (ARCoreExtensions._instance.ARCoreExtensionsConfig == null ||
		//     ARCoreExtensions._instance.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_5 = L_4->___ARCoreExtensionsConfig_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_7);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_8 = L_7->___ARCoreExtensionsConfig_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___GeospatialMode_5;
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 1;
	}

IL_0046:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// return EarthState.ErrorGeospatialModeDisabled;
		V_1 = ((int32_t)-2);
		goto IL_0062;
	}

IL_0050:
	{
		// return EarthApi.GetEarthState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		int32_t L_13;
		L_13 = EarthApi_GetEarthState_m8260DD38B1B07FE8B9B4BB5645265D2F87D18A45(L_12, NULL);
		V_1 = L_13;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		int32_t L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return TrackingState.None;
		V_1 = 0;
		goto IL_0030;
	}

IL_001e:
	{
		// return EarthApi.GetEarthTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6;
		L_6 = EarthApi_GetEarthTrackingState_mBB0E4F5CBD0A69344FEAFFF1EED5FE4FC70EFC5E(L_5, NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var geospatialPose = new GeospatialPose();
		il2cpp_codegen_initobj((&V_0), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EarthApi.TryGetCameraGeospatialPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, ref geospatialPose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		EarthApi_TryGetCameraGeospatialPose_m6A1917B93BF1146CCBD54EA9DAAA8263C7B66A52(L_5, (&V_0), NULL);
	}

IL_0035:
	{
		// return geospatialPose;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		V_2 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_7 = V_2;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.AREarthManager::CheckVpsAvailability(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* AREarthManager_CheckVpsAvailability_m4681DEC0366D6739F58D829EA19190B36CCB3780 (double ___latitude0, double ___longitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_0;
		L_0 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2;
		L_2 = ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline(NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// return new VpsAvailabilityPromise();
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_4 = (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1*)il2cpp_codegen_object_new(VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VpsAvailabilityPromise__ctor_m2AFC3E7AE1335B7D1A9BB1AB180705114F7FAA62(L_4, NULL);
		V_1 = L_4;
		goto IL_0036;
	}

IL_002c:
	{
		// return new VpsAvailabilityPromise(latitude, longitude);
		double L_5 = ___latitude0;
		double L_6 = ___longitude1;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_7 = (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1*)il2cpp_codegen_object_new(VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		VpsAvailabilityPromise__ctor_mA393535E7E0EB79683395845F6E391A36BE60D46(L_7, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_8 = V_1;
		return L_8;
	}
}
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return FeatureSupported.Unknown;
		V_1 = 1;
		goto IL_0031;
	}

IL_001e:
	{
		// return SessionApi.IsGeospatialModeSupported(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, mode);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6 = ___mode0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SessionApi_IsGeospatialModeSupported_m2A666EF385F08AAF0B8755C47A1960CC8FBA5406(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::Convert(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_Convert_mFE57A53C163E9F5098E8F2CBA0A99D808D4675E1 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var geospatialPose = new GeospatialPose();
		il2cpp_codegen_initobj((&V_0), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// EarthApi.Convert(ARCoreExtensions._instance.currentARCoreSessionHandle, pose,
		//                  ref geospatialPose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___pose0;
		EarthApi_Convert_m61287D4C4F0AB7B7AECB0CC743959DA92341E817(L_5, L_6, (&V_0), NULL);
	}

IL_0036:
	{
		// return geospatialPose;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_7 = V_0;
		V_2 = L_7;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.AREarthManager::Convert(Google.XR.ARCoreExtensions.GeospatialPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 AREarthManager_Convert_m4D7FE190A244A4C8816326890E38D3DC87799F15 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C ___geospatialPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// ApiPose apiPose = new ApiPose();
		il2cpp_codegen_initobj((&V_0), sizeof(ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99));
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// EarthApi.Convert(ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     geospatialPose, ref apiPose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = ___geospatialPose0;
		EarthApi_Convert_m3C34CBA41C72F55D48859893B65A1EA3A959B0A4(L_5, L_6, (&V_0), NULL);
	}

IL_0036:
	{
		// return apiPose.ToUnityPose();
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = Translators_ToUnityPose_mAF66ACB04DFD50720935B1E1176674EB23BE9397(L_7, NULL);
		V_2 = L_8;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_2;
		return L_9;
	}
}
// System.Void Google.XR.ARCoreExtensions.AREarthManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AREarthManager__ctor_m86868AA75148F560BFE3CE098F98B4579AF0F1F9 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TrackableId(0, (ulong)_anchorHandle);
		intptr_t L_0 = __this->____anchorHandle_4;
		int64_t L_1;
		L_1 = IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66(L_0, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_2), ((int64_t)0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARGeospatialAnchor_get_pose_mF31A1EE53F6BD2100006E1720000F5946A28AC2B (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_trackingState_mD923B4E8BFB9C489DA720C1073095652B6E2CE59 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return TrackingState.None;
		V_1 = 0;
		goto IL_0050;
	}

IL_0033:
	{
		// return AnchorApi.GetTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTrackingState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		int32_t L_9;
		L_9 = AnchorApi_GetTrackingState_mBF0C6CC2B2F03E59A6D8A51F998E9EBBA724F45C(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630(L_9, NULL);
		V_1 = L_10;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_terrainAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return TerrainAnchorState.None;
		V_1 = 0;
		goto IL_0050;
	}

IL_0033:
	{
		// return AnchorApi.GetTerrainAnchorState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTerrainAnchorState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		int32_t L_9;
		L_9 = AnchorApi_GetTerrainAnchorState_m45AB3A5F4AE7EA07970DECAF2FBCF0C588C47536(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Translators_ToTerrainAnchorState_mFED2B8BC539BECEFB896A0138DC10D781C13A73D(L_9, NULL);
		V_1 = L_10;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARGeospatialAnchor_get_nativePtr_m2C14B2F86094291238B5368D8AC434E12DBE32BE (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _anchorHandle;
		intptr_t L_0 = __this->____anchorHandle_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_Update_m8D77A870A3390EA628066360DA574525FB9EF1C1 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		goto IL_0081;
	}

IL_0031:
	{
		// ApiPose apiPose = AnchorApi.GetAnchorPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_9;
		L_9 = AnchorApi_GetAnchorPose_m229B587E47B003BE5A90F02EB5E5DE292C59A76A(L_7, L_8, NULL);
		V_0 = L_9;
		// _pose = apiPose.ToUnityPose();
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = Translators_ToUnityPose_mAF66ACB04DFD50720935B1E1176674EB23BE9397(L_10, NULL);
		__this->____pose_5 = L_11;
		// transform.localPosition = _pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&__this->____pose_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position_0;
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_14, NULL);
		// transform.localRotation = _pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = (&__this->____pose_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16->___rotation_1;
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_17, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_OnDestroy_mCD0756C498B19EB6F39D9F3304BBA69261C4B040 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero &&
		//     _anchorHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_3 = __this->____anchorHandle_4;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// AnchorApi.Detach(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8 = __this->____anchorHandle_4;
		AnchorApi_Detach_mD0C47CDE1AFD8B65C3E96ED05BBE528D8C5D269D(L_7, L_8, NULL);
		// AnchorApi.Release(_anchorHandle);
		intptr_t L_9 = __this->____anchorHandle_4;
		AnchorApi_Release_mE5EB1FCC743B11244550CAF0E5F2EB2C2BC03DF4(L_9, NULL);
		// _anchorHandle = IntPtr.Zero;
		__this->____anchorHandle_4 = (0);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor__ctor_m4E6B7E6C04566FF6A194F26DD7551B5295CC1C04 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.ARPlaybackManager::get_PlaybackStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_get_PlaybackStatus_m9959CEC8234921BA6910BD2C32544C00D471FC7B (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return PlaybackStatus.None;
		V_1 = 0;
		goto IL_0030;
	}

IL_001e:
	{
		// return SessionApi.GetPlaybackStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SessionApi_GetPlaybackStatus_m5A85615C4C4669EA49F78D40C3D2D5BA787F2528(L_5, NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDataset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDataset_m17E5E80B036F238B3F032AD87BBD81DA77B52078 (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, String_t* ___datasetFilepath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_3;
		L_3 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_3);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = L_3->___Session_4;
		NullCheck(L_4);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_4, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_7 = L_6->___Session_4;
		NullCheck(L_7);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_7, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_8, NULL);
		G_B4_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// return PlaybackResult.SessionNotReady;
		V_1 = 1;
		goto IL_005d;
	}

IL_004a:
	{
		// return SessionApi.SetPlaybackDataset(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, datasetFilepath);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		String_t* L_13 = ___datasetFilepath0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = SessionApi_SetPlaybackDataset_m319112F6F7C2A657C054D9921B180F4338EDD326(L_12, L_13, NULL);
		V_1 = L_14;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDatasetUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDatasetUri_mA268AC343155352ADDB506B880329AA5BF4C327F (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___datasetUri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_3;
		L_3 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_3);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = L_3->___Session_4;
		NullCheck(L_4);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_4, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_7 = L_6->___Session_4;
		NullCheck(L_7);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_7, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_8, NULL);
		G_B4_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// return PlaybackResult.SessionNotReady;
		V_1 = 1;
		goto IL_0062;
	}

IL_004a:
	{
		// return SessionApi.SetPlaybackDatasetUri(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, datasetUri.AbsoluteUri);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = ___datasetUri0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = SessionApi_SetPlaybackDatasetUri_mBD3714BD1C8CA8C74D22FB3122304F6DFA5BE817(L_12, L_14, NULL);
		V_1 = L_15;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.ARPlaybackManager::GetUpdatedTrackData(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* ARPlaybackManager_GetUpdatedTrackData_m75D90E9CBFDD3D38852698E16B314731EDED3D6A (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, Guid_t ___trackId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDB321BE5801415692A2A84196FB89319361331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B);
		s_Il2CppMethodInitialized = true;
	}
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* V_0 = NULL;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* V_4 = NULL;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_3;
		L_3 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_3);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = L_3->___Session_4;
		NullCheck(L_4);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_4, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_7 = L_6->___Session_4;
		NullCheck(L_7);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_7, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_8, NULL);
		G_B4_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_3 = (bool)G_B4_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogWarning("Failed to fetch track data. The Session is not yet available. " +
		//                  "Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral5CDB321BE5801415692A2A84196FB89319361331, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_11 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_11, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		V_4 = L_11;
		goto IL_0140;
	}

IL_005d:
	{
		// ARCameraManager cameraManager = ARCoreExtensions._instance.CameraManager;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_12;
		L_12 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_12);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_13 = L_12->___CameraManager_6;
		V_0 = L_13;
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_14 = V_0;
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_14, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_15, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_5), L_16, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_17 = V_0;
		NullCheck(L_17);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_17, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_18);
		float L_19;
		L_19 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_18, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_5), L_19, NULL);
		int32_t L_20;
		L_20 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_5), ((float)L_20), NULL);
		int32_t L_21;
		L_21 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_5), ((float)L_21), NULL);
		int32_t L_22;
		L_22 = Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_5), L_22, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_23 = V_5;
		V_1 = L_23;
		// if (!cameraManager.subsystem.TryGetLatestFrame(cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_24 = V_0;
		NullCheck(L_24);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_25;
		L_25 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_24, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_26 = V_1;
		NullCheck(L_25);
		bool L_27;
		L_27 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_25, L_26, (&V_2), NULL);
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00ee;
		}
	}
	{
		// Debug.LogWarning("Failed to fetch track data. The current XRCameraFrame is not " +
		//                  "available. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_29 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_29, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		V_4 = L_29;
		goto IL_0140;
	}

IL_00ee:
	{
		// if (frame.timestampNs == 0 || frame.nativePtr == IntPtr.Zero)
		int64_t L_30;
		L_30 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_2), NULL);
		if (!L_30)
		{
			goto IL_010a;
		}
	}
	{
		intptr_t L_31;
		L_31 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&V_2), NULL);
		bool L_32;
		L_32 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_31, (0), NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_010b;
	}

IL_010a:
	{
		G_B11_0 = 1;
	}

IL_010b:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_0126;
		}
	}
	{
		// Debug.LogWarning("Failed to fetch track data. The current XRCameraFrame is not " +
		//                  "ready. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_34 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_34, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		V_4 = L_34;
		goto IL_0140;
	}

IL_0126:
	{
		// return FrameApi.GetUpdatedTrackData(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, frame.FrameHandle(),
		//     trackId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_35;
		L_35 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_35);
		intptr_t L_36;
		L_36 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_35, NULL);
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_37 = V_2;
		intptr_t L_38;
		L_38 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_37, NULL);
		Guid_t L_39 = ___trackId0;
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_40;
		L_40 = FrameApi_GetUpdatedTrackData_mBA2927549CF9D69A1BC02393E84E39A200D2462F(L_36, L_38, L_39, NULL);
		V_4 = L_40;
		goto IL_0140;
	}

IL_0140:
	{
		// }
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_41 = V_4;
		return L_41;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARPlaybackManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaybackManager__ctor_m8AD73A5EC7B4308C5B4A1956D08392796846BF82 (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.ARRecordingManager::get_RecordingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_get_RecordingStatus_mA1AC8470150C43DF233F26AB3F9074FDDF3312C9 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return RecordingStatus.None;
		V_1 = 0;
		goto IL_0030;
	}

IL_001e:
	{
		// return SessionApi.GetRecordingStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SessionApi_GetRecordingStatus_m350B64450AFB85E72820E502E3D275DE0EAC8790(L_5, NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StartRecording(Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StartRecording_m7F332E6E87C4BC49B9A5BAD45DBBC35E4E085F3E (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_3;
		L_3 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_3);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = L_3->___Session_4;
		NullCheck(L_4);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_4, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_7 = L_6->___Session_4;
		NullCheck(L_7);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_7, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_8, NULL);
		G_B4_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// return RecordingResult.SessionNotReady;
		V_1 = 1;
		goto IL_005d;
	}

IL_004a:
	{
		// return SessionApi.StartRecording(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, config);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* L_13 = ___config0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = SessionApi_StartRecording_mB14EAA552370F1C71DD672FB46D9E7C6AF951BAE(L_12, L_13, NULL);
		V_1 = L_14;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StopRecording_m7A30DE730809F224D6E3832BE2A3CAC8A649FECD (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return RecordingResult.SessionNotReady;
		V_1 = 1;
		goto IL_0030;
	}

IL_001e:
	{
		// return SessionApi.StopRecording(ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SessionApi_StopRecording_mDE2EE481118C87D932BC1F2D0BBA4C8FA989917D(L_5, NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::RecordTrackData(System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_RecordTrackData_m9A593C2B134C6CE2ACECB552C1235CBA9A4F9A29 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, Guid_t ___trackId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E36046B96D80329B0519BF055E3C17934B46792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C);
		s_Il2CppMethodInitialized = true;
	}
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* V_0 = NULL;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_3;
		L_3 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_3);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = L_3->___Session_4;
		NullCheck(L_4);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_4, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_7 = L_6->___Session_4;
		NullCheck(L_7);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_7, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_8, NULL);
		G_B4_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_3 = (bool)G_B4_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// Debug.LogWarning("Failed to record track data. The Session is not yet available. " +
		//                  "Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3E36046B96D80329B0519BF055E3C17934B46792, NULL);
		// return RecordingResult.ErrorIllegalState;
		V_4 = 4;
		goto IL_0135;
	}

IL_0059:
	{
		// ARCameraManager cameraManager = ARCoreExtensions._instance.CameraManager;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_11);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_12 = L_11->___CameraManager_6;
		V_0 = L_12;
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_13 = V_0;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_13, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_14, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_5), L_15, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_16 = V_0;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_16, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18;
		L_18 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_17, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_5), L_18, NULL);
		int32_t L_19;
		L_19 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_5), ((float)L_19), NULL);
		int32_t L_20;
		L_20 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_5), ((float)L_20), NULL);
		int32_t L_21;
		L_21 = Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_5), L_21, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_22 = V_5;
		V_1 = L_22;
		// if (!cameraManager.subsystem.TryGetLatestFrame(cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_23 = V_0;
		NullCheck(L_23);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_24;
		L_24 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_23, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_25 = V_1;
		NullCheck(L_24);
		bool L_26;
		L_26 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_24, L_25, (&V_2), NULL);
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		// Debug.LogWarning("Failed to record track data. The current XRCameraFrame is not " +
		//                  "available. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C, NULL);
		// return RecordingResult.ErrorIllegalState;
		V_4 = 4;
		goto IL_0135;
	}

IL_00e6:
	{
		// if (frame.timestampNs == 0 || frame.nativePtr == IntPtr.Zero)
		int64_t L_28;
		L_28 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_2), NULL);
		if (!L_28)
		{
			goto IL_0102;
		}
	}
	{
		intptr_t L_29;
		L_29 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&V_2), NULL);
		bool L_30;
		L_30 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_29, (0), NULL);
		G_B11_0 = ((int32_t)(L_30));
		goto IL_0103;
	}

IL_0102:
	{
		G_B11_0 = 1;
	}

IL_0103:
	{
		V_7 = (bool)G_B11_0;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		// Debug.LogWarning("Failed to record track data. The current XRCameraFrame is not " +
		//                  "ready. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C, NULL);
		// return RecordingResult.ErrorRecordingFailed;
		V_4 = 3;
		goto IL_0135;
	}

IL_011a:
	{
		// return FrameApi.RecordTrackData(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, frame.FrameHandle(), trackId,
		//     data);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_32;
		L_32 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_32);
		intptr_t L_33;
		L_33 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_32, NULL);
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_34 = V_2;
		intptr_t L_35;
		L_35 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_34, NULL);
		Guid_t L_36 = ___trackId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___data1;
		int32_t L_38;
		L_38 = FrameApi_RecordTrackData_m44B505299A938CECCB902A76600A3AF54F8FD2B3(L_33, L_35, L_36, L_37, NULL);
		V_4 = L_38;
		goto IL_0135;
	}

IL_0135:
	{
		// }
		int32_t L_39 = V_4;
		return L_39;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARRecordingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRecordingManager__ctor_mDCAB549E48AE1C8D00344B78F0DEABF220986850 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Metadata_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Metadata_1);
	marshaled.___MimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___MimeType_2);
}
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke_back(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t unmarshaledId_temp_0;
	memset((&unmarshaledId_temp_0), 0, sizeof(unmarshaledId_temp_0));
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Metadata_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Metadata_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1));
	unmarshaled.___MimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___MimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___MimeType_2));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke_cleanup(Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Metadata_1);
	marshaled.___Metadata_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___MimeType_2);
	marshaled.___MimeType_2 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Metadata_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Metadata_1);
	marshaled.___MimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___MimeType_2);
}
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com_back(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t unmarshaledId_temp_0;
	memset((&unmarshaledId_temp_0), 0, sizeof(unmarshaledId_temp_0));
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Metadata_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Metadata_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1));
	unmarshaled.___MimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___MimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___MimeType_2));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com_cleanup(Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Metadata_1);
	marshaled.___Metadata_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___MimeType_2);
	marshaled.___MimeType_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled)
{
	marshaled.___FrameTimestamp_0 = unmarshaled.___FrameTimestamp_0;
	marshaled.___Data_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_1);
}
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke_back(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledFrameTimestamp_temp_0 = 0;
	unmarshaledFrameTimestamp_temp_0 = marshaled.___FrameTimestamp_0;
	unmarshaled.___FrameTimestamp_0 = unmarshaledFrameTimestamp_temp_0;
	unmarshaled.___Data_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke_cleanup(TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_1);
	marshaled.___Data_1 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled)
{
	marshaled.___FrameTimestamp_0 = unmarshaled.___FrameTimestamp_0;
	marshaled.___Data_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_1);
}
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com_back(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledFrameTimestamp_temp_0 = 0;
	unmarshaledFrameTimestamp_temp_0 = marshaled.___FrameTimestamp_0;
	unmarshaled.___FrameTimestamp_0 = unmarshaledFrameTimestamp_temp_0;
	unmarshaled.___Data_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com_cleanup(TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_1);
	marshaled.___Data_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_mB0D083F4C30FCD658BD93A986790865303C9F96B (VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__cctor_m3AEB1EFAFC2F0F6ABE9F3A7D80A960C480CB7024 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD07E206E2A4B4BC5462A5A78E644165DCCB2F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string Version = "1.35.0";
		((VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var))->___Version_0 = _stringLiteral5AD07E206E2A4B4BC5462A5A78E644165DCCB2F2;
		Il2CppCodeGenWriteBarrier((void**)(&((VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var))->___Version_0), (void*)_stringLiteral5AD07E206E2A4B4BC5462A5A78E644165DCCB2F2);
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
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise__ctor_m2AFC3E7AE1335B7D1A9BB1AB180705114F7FAA62 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal VpsAvailabilityPromise()
		InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E(__this, InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E_RuntimeMethod_var);
		// _state = PromiseState.Done;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____state_0 = 2;
		// _result = VpsAvailability.Unknown;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____result_1 = 0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise__ctor_mA393535E7E0EB79683395845F6E391A36BE60D46 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// internal VpsAvailabilityPromise(double latitude, double longitude)
		InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E(__this, InterruptiblePromise_1__ctor_m320C3BF102ABE03D6141BB96C5822D75D85EA02E_RuntimeMethod_var);
		// SessionApi.SetAuthToken(GetSessionHandle());
		intptr_t L_0;
		L_0 = InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D(__this, InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		SessionApi_SetAuthToken_m7DEDF9BB7555E86C1598AC3E9DEDBACC3933A70C(L_0, NULL);
		// var sessionHandle = GetSessionHandle();
		intptr_t L_1;
		L_1 = InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D(__this, InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		V_0 = L_1;
		// if (sessionHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// _state = PromiseState.Done;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____state_0 = 2;
		// _result = VpsAvailability.ErrorInternal;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____result_1 = (-1);
		goto IL_0070;
	}

IL_003c:
	{
		// _future = FutureApi.CheckVpsAvailabilityAsync(sessionHandle, latitude, longitude);
		intptr_t L_5 = V_0;
		double L_6 = ___latitude0;
		double L_7 = ___longitude1;
		intptr_t L_8;
		L_8 = FutureApi_CheckVpsAvailabilityAsync_m42BB97C1E9C4CD0DBB0FDCD8F21172DA1183A596(L_5, L_6, L_7, NULL);
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2 = L_8;
		// if (_future == IntPtr.Zero)
		intptr_t L_9 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		bool L_10;
		L_10 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, (0), NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// _state = PromiseState.Done;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____state_0 = 2;
		// _result = VpsAvailability.ErrorInternal;
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____result_1 = (-1);
	}

IL_006f:
	{
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise_Finalize_m4E25E86E08C8349204F6800F39243D53E9202413 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// FutureApi.Release(_future);
			intptr_t L_0 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
			FutureApi_Release_m6F8A1E040172B4880941F58BA140EB33DDB63857(L_0, NULL);
			goto IL_0018;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.VpsAvailabilityPromise::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VpsAvailabilityPromise_get_State_mC1CEC8C6979E1B4AE12379FA1FB624A96CE45FF6 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// var sessionHandle = GetSessionHandle();
		intptr_t L_0;
		L_0 = InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D(__this, InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		V_0 = L_0;
		// if (_future != IntPtr.Zero && sessionHandle != IntPtr.Zero)
		intptr_t L_1 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// _state = FutureApi.GetState(sessionHandle, _future);
		intptr_t L_6 = V_0;
		intptr_t L_7 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		int32_t L_8;
		L_8 = FutureApi_GetState_mE652BDBFAB580A45BB95819AD21041C28A6BF9D9(L_6, L_7, NULL);
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____state_0 = L_8;
	}

IL_0040:
	{
		// return _state;
		int32_t L_9 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____state_0;
		V_2 = L_9;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.VpsAvailability Google.XR.ARCoreExtensions.VpsAvailabilityPromise::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VpsAvailabilityPromise_get_Result_m298D8DB4AF082782D44B3E50C4F710EA422DB0D9 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// var sessionHandle = GetSessionHandle();
		intptr_t L_0;
		L_0 = InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D(__this, InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		V_0 = L_0;
		// if (_future != IntPtr.Zero && sessionHandle != IntPtr.Zero)
		intptr_t L_1 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// _result = FutureApi.GetResult(sessionHandle, _future);
		intptr_t L_6 = V_0;
		intptr_t L_7 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		int32_t L_8;
		L_8 = FutureApi_GetResult_mC621F591F617678AF24CC10DF0384FDD36A716F8(L_6, L_7, NULL);
		((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____result_1 = L_8;
	}

IL_0040:
	{
		// return _result;
		int32_t L_9 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____result_1;
		V_2 = L_9;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Void Google.XR.ARCoreExtensions.VpsAvailabilityPromise::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsAvailabilityPromise_Cancel_m3B77C7963D2C8857141D859A3678A037F6FF1465 (VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FutureApi.Cancel(GetSessionHandle(), _future);
		intptr_t L_0;
		L_0 = InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D(__this, InterruptiblePromise_1_GetSessionHandle_mFE4973B61B65540C2C37DF6A1DAA21270A17E08D_RuntimeMethod_var);
		intptr_t L_1 = ((InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270*)__this)->____future_2;
		FutureApi_Cancel_m04EDC360ADC7B931FECD03F851ECCD341BC5531D(L_0, L_1, NULL);
		// }
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
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFacingDirection(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetFacingDirection_m34DCC2FA9EB2025F09282298A9E05461CFFA74B5 (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		intptr_t L_3;
		L_3 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return CameraConfigFacingDirection.Back;
		V_1 = 0;
		goto IL_004d;
	}

IL_0034:
	{
		// return CameraConfigApi.GetFacingDirection(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8;
		L_8 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_9;
		L_9 = CameraConfigApi_GetFacingDirection_m307ED4C3B8F991322B19BB6A6139F9F43109ECED(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetTextureDimensions(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRCameraConfigurationExtensions_GetTextureDimensions_m7E4FF6D36AAFEAB2DD6F9F3840FB060F06019C80 (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		intptr_t L_3;
		L_3 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// return Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		L_6 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		V_1 = L_6;
		goto IL_0051;
	}

IL_0038:
	{
		// return CameraConfigApi.GetTextureDimensions(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9;
		L_9 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		L_10 = CameraConfigApi_GetTextureDimensions_m47949FC7AC7C644CA3AA3B60983AE68D051F5EDA(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFPSRange(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRCameraConfigurationExtensions_GetFPSRange_m98767209CFC0C22418768FAF4A59225A3D65584D (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		intptr_t L_3;
		L_3 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// return Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		L_6 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		V_1 = L_6;
		goto IL_0051;
	}

IL_0038:
	{
		// return CameraConfigApi.GetFPSRange(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9;
		L_9 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		L_10 = CameraConfigApi_GetFPSRange_mBA6394A42C8ABDA1AE9717AF34680FCE2702E34A(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = V_1;
		return L_11;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetDepthSensorUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetDepthSensorUsage_m61C9294B0A6ABA1CE47336BC833C31AB91D1DA70 (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		intptr_t L_3;
		L_3 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return CameraConfigDepthSensorUsage.DoNotUse;
		V_1 = 2;
		goto IL_004d;
	}

IL_0034:
	{
		// return CameraConfigApi.GetDepthSensorUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8;
		L_8 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_9;
		L_9 = CameraConfigApi_GetDepthSensorUsage_m9B13C0CE85536A0846EBF6921A3688ACC4DA4B6E(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetStereoCameraUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetStereoCameraUsage_m15B1CA3D7EDF24CCBC9BA9E9DCEACD410C75034A (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		intptr_t L_3;
		L_3 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return CameraConfigStereoCameraUsage.DoNotUse;
		V_1 = 2;
		goto IL_004d;
	}

IL_0034:
	{
		// return CameraConfigApi.GetStereoCameraUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		intptr_t L_8;
		L_8 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_9;
		L_9 = CameraConfigApi_GetStereoCameraUsage_m9CDC4A160CD8D4A6DD9293F25D90C336BA6E0846(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_10 = V_1;
		return L_10;
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
// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.XRCameraFrameExtensions::GetImageDisplayMatrix(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 XRCameraFrameExtensions_GetImageDisplayMatrix_m676E5A963CB8ABAB5A7019F52546347B0EE2A72A (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// IntPtr sessionHandle = ARCoreExtensions._instance.currentARCoreSessionHandle;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		V_0 = L_1;
		// if (sessionHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_8 = L_3;
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		V_9 = L_5;
		goto IL_0126;
	}

IL_002a:
	{
		// Vector2 affineBasisX = new Vector2(1.0f, 1.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (1.0f), (1.0f), NULL);
		// Vector2 affineBasisY = new Vector2(0.0f, 0.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (0.0f), NULL);
		// Vector2 affineOrigin = new Vector2(0.0f, 1.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (1.0f), NULL);
		// Vector2 transformedX = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineBasisX);
		intptr_t L_6 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_7 = ___frame0;
		intptr_t L_8;
		L_8 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = FrameApi_TransformCoordinates2d_mCD89EF923CC3B46780B51F79B18A70AA2D263201(L_6, L_8, 8, 3, (&V_1), NULL);
		V_4 = L_9;
		// Vector2 transformedY = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineBasisY);
		intptr_t L_10 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_11 = ___frame0;
		intptr_t L_12;
		L_12 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = FrameApi_TransformCoordinates2d_mCD89EF923CC3B46780B51F79B18A70AA2D263201(L_10, L_12, 8, 3, (&V_2), NULL);
		V_5 = L_13;
		// Vector2 transformedOrigin = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineOrigin);
		intptr_t L_14 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_15 = ___frame0;
		intptr_t L_16;
		L_16 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = FrameApi_TransformCoordinates2d_mCD89EF923CC3B46780B51F79B18A70AA2D263201(L_14, L_16, 8, 3, (&V_3), NULL);
		V_6 = L_17;
		// Matrix4x4 imageMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		V_7 = L_18;
		// imageMatrix[0, 0] = transformedX.x - transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		float L_20 = L_19.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_6;
		float L_22 = L_21.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 0, 0, ((float)il2cpp_codegen_subtract(L_20, L_22)), NULL);
		// imageMatrix[0, 1] = transformedX.y - transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_4;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_6;
		float L_26 = L_25.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 0, 1, ((float)il2cpp_codegen_subtract(L_24, L_26)), NULL);
		// imageMatrix[1, 0] = transformedY.x - transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_5;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_6;
		float L_30 = L_29.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 1, 0, ((float)il2cpp_codegen_subtract(L_28, L_30)), NULL);
		// imageMatrix[1, 1] = transformedY.y - transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_5;
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_6;
		float L_34 = L_33.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 1, 1, ((float)il2cpp_codegen_subtract(L_32, L_34)), NULL);
		// imageMatrix[2, 0] = transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_6;
		float L_36 = L_35.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 2, 0, L_36, NULL);
		// imageMatrix[2, 1] = transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_6;
		float L_38 = L_37.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 2, 1, L_38, NULL);
		// return imageMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = V_7;
		V_9 = L_39;
		goto IL_0126;
	}

IL_0126:
	{
		// }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40 = V_9;
		return L_40;
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
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidPermissionsManager() : base(
		//     "com.unity3d.plugin.UnityAndroidPermissions$IPermissionRequestResult")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53, NULL);
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_mBAA097F3F1030A3BE886503F2CA7963446A70CD9 (String_t* ___permissionName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_003a;
	}

IL_0016:
	{
		// return GetPermissionsService().Call<bool>(
		//     "IsPermissionGranted", GetUnityActivity(), permissionName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidPermissionsManager_GetPermissionsService_m8CAB356E0BB06246EE9C37EB6403AF0BCEACD498(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidPermissionsManager_GetUnityActivity_m309823E18850E02C8E28E9BEF232A0DE53BC01BB(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___permissionName0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_2);
		bool L_8;
		L_8 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_2, _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87, L_6, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::RequestPermission(System.String[],System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_m8350FC58F7897F23662CC7E86EAFB5629E4E8184 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissionNames0, Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ___onRequestFinished1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// List<string> ungrantedPermissions = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var permission in permissionNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___permissionNames0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		// foreach (var permission in permissionNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (!IsPermissionGranted(permission))
		String_t* L_6 = V_3;
		bool L_7;
		L_7 = AndroidPermissionsManager_IsPermissionGranted_mBAA097F3F1030A3BE886503F2CA7963446A70CD9(L_6, NULL);
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// ungrantedPermissions.Add(permission);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
		String_t* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0039;
	}

IL_002e:
	{
		// onRequestFinished(permission, true);
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_11 = ___onRequestFinished1;
		String_t* L_12 = V_3;
		NullCheck(L_11);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(L_11, L_12, (bool)1, NULL);
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003e:
	{
		// foreach (var permission in permissionNames)
		int32_t L_14 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (ungrantedPermissions.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_16, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		goto IL_00b1;
	}

IL_0056:
	{
		// if (_permissionNames != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		V_6 = (bool)((!(((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError("Attempted to make simultaneous Android permissions requests.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356, NULL);
		// return;
		goto IL_00b1;
	}

IL_0072:
	{
		// _permissionNames = ungrantedPermissions;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8), (void*)L_21);
		// _permissionRequest = onRequestFinished;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_22 = ___onRequestFinished1;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9), (void*)L_22);
		// GetPermissionsService().Call("RequestPermissionAsync", GetUnityActivity(),
		//     _permissionNames.ToArray(), GetInstance());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23;
		L_23 = AndroidPermissionsManager_GetPermissionsService_m8CAB356E0BB06246EE9C37EB6403AF0BCEACD498(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
		L_26 = AndroidPermissionsManager_GetUnityActivity_m309823E18850E02C8E28E9BEF232A0DE53BC01BB(NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		NullCheck(L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29;
		L_29 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_28, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_27;
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_31;
		L_31 = AndroidPermissionsManager_GetInstance_m6208FDBD1AA629B65BE7F45028FDC84301C39DBC(NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		NullCheck(L_23);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_23, _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF, L_30, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionGranted_mC348AFFF790E299E41CDDC09551D854FBA205090 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, const RuntimeMethod* method) 
{
	{
		// OnPermissionResult(permissionName, true);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionDenied(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionDenied_mB3BADF142268B9A3E03B43BB83773F2CF2FD52E7 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, const RuntimeMethod* method) 
{
	{
		// OnPermissionResult(permissionName, false);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnActivityResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnActivityResult_m29AC9A70F55B793E41E083B0D15EF08A5010B3A0 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* AndroidPermissionsManager_GetInstance_m6208FDBD1AA629B65BE7F45028FDC84301C39DBC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* V_1 = NULL;
	{
		// if (_instance == null)
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7;
		V_0 = (bool)((((RuntimeObject*)(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _instance = new AndroidPermissionsManager();
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_2 = (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3*)il2cpp_codegen_object_new(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F(L_2, NULL);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7), (void*)L_2);
	}

IL_0019:
	{
		// return _instance;
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_3 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetUnityActivity_m309823E18850E02C8E28E9BEF232A0DE53BC01BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	{
		// if (_activity == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// AndroidJavaClass unityPlayer =
		//     new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_1 = L_2;
		// _activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_1;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10), (void*)L_4);
	}

IL_002a:
	{
		// return _activity;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10;
		V_2 = L_5;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_m8CAB356E0BB06246EE9C37EB6403AF0BCEACD498 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// if (_permissionService == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _permissionService =
		//     new AndroidJavaObject("com.unity3d.plugin.UnityAndroidPermissions");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860, L_2, NULL);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11), (void*)L_3);
	}

IL_0023:
	{
		// return _permissionService;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		return L_5;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_permissionNames == null || !_permissionNames.Contains(permissionName))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		String_t* L_2 = ___permissionName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_1, L_2, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogErrorFormat(
		//     "AndroidPermissionsManager received an unexpected permissions result {0}",
		//     permissionName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___permissionName0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B, L_6, NULL);
		// return;
		goto IL_006f;
	}

IL_0035:
	{
		// _permissionNames.Remove(permissionName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		String_t* L_9 = ___permissionName0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_8, L_9, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// var onRequestFinished = _permissionRequest;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_11 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9;
		V_0 = L_11;
		// if (_permissionNames.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_12, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// _permissionNames = null;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		// _permissionRequest = null;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9 = (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9), (void*)(Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*)NULL);
	}

IL_0066:
	{
		// onRequestFinished(permissionName, granted);
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_15 = V_0;
		String_t* L_16 = ___permissionName0;
		bool L_17 = ___granted1;
		NullCheck(L_15);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(L_15, L_16, L_17, NULL);
	}

IL_006f:
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::SessionHandle(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_SessionHandle_m45300668B25867CD2DFDBF2699172968CE6FCAFD (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// if (session.subsystem == null || session.subsystem.nativePtr == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_0 = ___session0;
		NullCheck(L_0);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_0, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = ___session0;
		NullCheck(L_2);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_2, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_3, NULL);
		G_B3_0 = 0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return IntPtr.Zero;
		V_2 = (0);
		goto IL_004f;
	}

IL_0026:
	{
		// SessionNativePointerStruct info = (SessionNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         session.subsystem.nativePtr,
		//         typeof(SessionNativePointerStruct));
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_6 = ___session0;
		NullCheck(L_6);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_7;
		L_7 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_6, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_8, L_10, NULL);
		V_0 = ((*(SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)((SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)(SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)UnBox(L_11, SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var))));
		// return info.SessionHandle;
		SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD L_12 = V_0;
		intptr_t L_13 = L_12.___SessionHandle_1;
		V_2 = L_13;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		intptr_t L_14 = V_2;
		return L_14;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_m29867EE9D3AE4ECC0399C408A09B3ED2BD9E92E4 (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// AnchorNativePointerStruct info = (AnchorNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         anchor.nativePtr,
		//         typeof(AnchorNativePointerStruct));
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___anchor0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_1, L_3, NULL);
		V_0 = ((*(AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)((AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)(AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)UnBox(L_4, AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var))));
		// return info.AnchorHandle;
		AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9 L_5 = V_0;
		intptr_t L_6 = L_5.___AnchorHandle_1;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::PlaneHandle(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_PlaneHandle_m4B43CC917150EF3039B47A7EA48DCF75C3A9A931 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// PlaneNativePointerStruct info = (PlaneNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         plane.nativePtr,
		//         typeof(PlaneNativePointerStruct));
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = ___plane0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARPlane_get_nativePtr_m0227A663EF6E1CC15D6A5BE2BF3D5EC21BCFFA25(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_1, L_3, NULL);
		V_0 = ((*(PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)((PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)(PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)UnBox(L_4, PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var))));
		// return info.PlaneHandle;
		PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5 L_5 = V_0;
		intptr_t L_6 = L_5.___PlaneHandle_1;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		intptr_t L_7 = V_1;
		return L_7;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FrameNativePointerStruct info = (FrameNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         frame.nativePtr,
		//         typeof(FrameNativePointerStruct));
		intptr_t L_0;
		L_0 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&___frame0), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_0, L_2, NULL);
		V_0 = ((*(FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)((FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)(FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)UnBox(L_3, FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var))));
		// return info.FrameHandle;
		FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA L_4 = V_0;
		intptr_t L_5 = L_4.___FrameHandle_1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		intptr_t L_6 = V_1;
		return L_6;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::SetCachedData(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_SetCachedData_m27E635069C50955C23795BA366D43901E49C52E6 (String_t* ___dataName0, RuntimeObject* ___dataValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (dataValue is IntPtr)
		RuntimeObject* L_0 = ___dataValue1;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, IntPtr_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_001e;
	}

IL_0011:
	{
		// _cachedData[dataName] = dataValue;
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0;
		String_t* L_3 = ___dataName0;
		RuntimeObject* L_4 = ___dataValue1;
		NullCheck(L_2);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_2, L_3, L_4, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_m5FFCC18368C150948AE0E91E13C2C9ABD6626F5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cachedData.Clear();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0;
		NullCheck(L_0);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_0, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData__cctor_m5C3B61F136D85C5076D123EE21ED474441101517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, object> _cachedData = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0), (void*)L_0);
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
// System.String[] Google.XR.ARCoreExtensions.Internal.DependentModuleBase::GetRuntimePermissions(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DependentModuleBase_GetRuntimePermissions_mAA5BD1B98F7DC2B90005A02B4F380C03C752AF55 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModuleBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule> Google.XR.ARCoreExtensions.Internal.DependentModulesManager::GetModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t54955D954398D6C34C95F0A09188E388BD45008A* DependentModulesManager_GetModules_mE7285925F620D9A9F42E9C0E44BE2A1C0C84C056 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* V_1 = NULL;
	List_1_t54955D954398D6C34C95F0A09188E388BD45008A* V_2 = NULL;
	List_1_t54955D954398D6C34C95F0A09188E388BD45008A* V_3 = NULL;
	{
		// if (_modules == null)
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_0 = ((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t54955D954398D6C34C95F0A09188E388BD45008A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_2 = (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C(L_2, NULL);
		V_1 = L_2;
		// List<IDependentModule> modules = new List<IDependentModule>()
		// {
		//     new LocationModule(),
		//     new AuthenticationModule(),
		// };
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_3 = (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*)il2cpp_codegen_object_new(List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B(L_3, List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_4 = L_3;
		LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* L_5 = (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90*)il2cpp_codegen_object_new(LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline(L_4, L_5, List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_6 = L_4;
		AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* L_7 = (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291*)il2cpp_codegen_object_new(AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline(L_6, L_7, List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		V_2 = L_6;
		// List<string> modulesEnabled = RuntimeConfig.Instance.ModulesEnabled;
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_8 = V_1;
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_9 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_9);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9->___ModulesEnabled_6;
		NullCheck(L_8);
		L_8->___modulesEnabled_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___modulesEnabled_0), (void*)L_10);
		// _modules = modules.FindAll(
		//     module => modulesEnabled.Contains(module.GetType().Name));
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_11 = V_2;
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_12 = V_1;
		Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* L_13 = (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*)il2cpp_codegen_object_new(Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Predicate_1__ctor_m4878EA8D197763D9264830236A4E73BC9BB22916(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_14;
		L_14 = List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11(L_11, L_13, List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var);
		((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0), (void*)L_14);
	}

IL_005a:
	{
		// return _modules;
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_15 = ((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0;
		V_3 = L_15;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_16 = V_3;
		return L_16;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModulesManager__ctor_mD7BA4EAFF4033575EEC1848298773DC419D0AEA3 (DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::<GetModules>b__0(Google.XR.ARCoreExtensions.Internal.IDependentModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, RuntimeObject* ___module0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// module => modulesEnabled.Contains(module.GetType().Name));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___modulesEnabled_0;
		RuntimeObject* L_1 = ___module0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_3, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		return L_4;
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
// System.Void Google.XR.ARCoreExtensions.Internal.AuthenticationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7 (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* __this, const RuntimeMethod* method) 
{
	{
		DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058(__this, NULL);
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
// System.String[] Google.XR.ARCoreExtensions.Internal.LocationModule::GetRuntimePermissions(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LocationModule_GetRuntimePermissions_mE5CD23DCDB7096319FB2C575CF2CC5333874E460 (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		// if (UseLocation(sessionConfig))
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___sessionConfig0;
		bool L_1;
		L_1 = LocationModule_UseLocation_m0BB4E768A1A626BF41F466B9023BC55DD9227EC6(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return new string[]
		// {
		//     "android.permission.ACCESS_FINE_LOCATION",
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		V_1 = L_4;
		goto IL_0025;
	}

IL_001d:
	{
		// return Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.LocationModule::UseLocation(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationModule_UseLocation_m0BB4E768A1A626BF41F466B9023BC55DD9227EC6 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (sessionConfig.GeospatialMode != GeospatialMode.Disabled)
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___sessionConfig0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___GeospatialMode_5;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0017;
	}

IL_0013:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.LocationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, const RuntimeMethod* method) 
{
	{
		DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058(__this, NULL);
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
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke_back(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke_cleanup(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com_back(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com_cleanup(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled)
{
}
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method) 
{
	{
		// this(group, artifact, version, null)
		String_t* L_0 = ___group0;
		String_t* L_1 = ___artifact1;
		String_t* L_2 = ___version2;
		JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E(__this, L_0, L_1, L_2, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E_AdjustorThunk (RuntimeObject* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E(_thisAdjusted, ___group0, ___artifact1, ___version2, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method) 
{
	{
		// this()
		il2cpp_codegen_initobj(__this, sizeof(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1));
		// Group = group;
		String_t* L_0 = ___group0;
		__this->___Group_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Group_0), (void*)L_0);
		// Artifact = artifact;
		String_t* L_1 = ___artifact1;
		__this->___Artifact_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Artifact_1), (void*)L_1);
		// Version = version;
		String_t* L_2 = ___version2;
		__this->___Version_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)L_2);
		// PackageIds = packages;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___packages3;
		__this->___PackageIds_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageIds_3), (void*)L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E_AdjustorThunk (RuntimeObject* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E(_thisAdjusted, ___group0, ___artifact1, ___version2, ___packages3, method);
}
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Key => Group + ":" + Artifact + ":" + Version;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = __this->___Group_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5 = __this->___Artifact_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___Version_2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		String_t* L_9;
		L_9 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_7, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Key;
		String_t* L_0;
		L_0 = JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.DllImportNoop::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllImportNoop__ctor_m41A01B82AB3EF4E808D1B363932D7E5B3A7786A9 (DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2* __this, String_t* ___dllName0, const RuntimeMethod* method) 
{
	{
		// public DllImportNoop(string dllName)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
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
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m4312C9B5A0B5017EEAF3444F8308A668E7E3C4F1 (int32_t ___state0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (state)
		int32_t L_0 = ___state0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)-10))))
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_0060;
			}
			case 5:
			{
				goto IL_005c;
			}
			case 6:
			{
				goto IL_0058;
			}
			case 7:
			{
				goto IL_0072;
			}
			case 8:
			{
				goto IL_0054;
			}
			case 9:
			{
				goto IL_0050;
			}
			case 10:
			{
				goto IL_0044;
			}
			case 11:
			{
				goto IL_0048;
			}
			case 12:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_0044:
	{
		// return CloudAnchorState.None;
		V_2 = 0;
		goto IL_0076;
	}

IL_0048:
	{
		// return CloudAnchorState.TaskInProgress;
		V_2 = 1;
		goto IL_0076;
	}

IL_004c:
	{
		// return CloudAnchorState.Success;
		V_2 = 2;
		goto IL_0076;
	}

IL_0050:
	{
		// return CloudAnchorState.ErrorInternal;
		V_2 = 3;
		goto IL_0076;
	}

IL_0054:
	{
		// return CloudAnchorState.ErrorNotAuthorized;
		V_2 = 4;
		goto IL_0076;
	}

IL_0058:
	{
		// return CloudAnchorState.ErrorResourceExhausted;
		V_2 = 5;
		goto IL_0076;
	}

IL_005c:
	{
		// return CloudAnchorState.ErrorHostingDatasetProcessingFailed;
		V_2 = 6;
		goto IL_0076;
	}

IL_0060:
	{
		// return CloudAnchorState.ErrorResolvingCloudIdNotFound;
		V_2 = 7;
		goto IL_0076;
	}

IL_0064:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooOld;
		V_2 = 8;
		goto IL_0076;
	}

IL_0068:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooNew;
		V_2 = ((int32_t)9);
		goto IL_0076;
	}

IL_006d:
	{
		// return CloudAnchorState.ErrorHostingServiceUnavailable;
		V_2 = ((int32_t)10);
		goto IL_0076;
	}

IL_0072:
	{
		// return CloudAnchorState.None;
		V_2 = 0;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		int32_t L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630 (int32_t ___state0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (state)
		int32_t L_0 = ___state0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1))) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_001a;
	}

IL_0012:
	{
		// return TrackingState.Tracking;
		V_2 = 2;
		goto IL_001e;
	}

IL_0016:
	{
		// return TrackingState.None;
		V_2 = 0;
		goto IL_001e;
	}

IL_001a:
	{
		// return TrackingState.None;
		V_2 = 0;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_4 = V_2;
		return L_4;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 Translators_ToApiPose_m4D960EF5E564EAA84C74A990D0DCC63F8667F294 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___unityPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(unityPose.position, unityPose.rotation, Vector3.one);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___unityPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___unityPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_1, L_3, L_4, NULL);
		V_0 = L_5;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_6, L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_8, L_9, NULL);
		V_1 = L_10;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_11, NULL);
		V_2 = L_12;
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_13, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_14, L_16, NULL);
		V_3 = L_17;
		// apiPose.X = position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = L_18.___x_2;
		(&V_4)->___X_4 = L_19;
		// apiPose.Y = position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = L_20.___y_3;
		(&V_4)->___Y_5 = L_21;
		// apiPose.Z = position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23 = L_22.___z_4;
		(&V_4)->___Z_6 = L_23;
		// apiPose.Qx = rotation.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_3;
		float L_25 = L_24.___x_0;
		(&V_4)->___Qx_0 = L_25;
		// apiPose.Qy = rotation.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_3;
		float L_27 = L_26.___y_1;
		(&V_4)->___Qy_1 = L_27;
		// apiPose.Qz = rotation.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = V_3;
		float L_29 = L_28.___z_2;
		(&V_4)->___Qz_2 = L_29;
		// apiPose.Qw = rotation.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_3;
		float L_31 = L_30.___w_3;
		(&V_4)->___Qw_3 = L_31;
		// return apiPose;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_32 = V_4;
		V_5 = L_32;
		goto IL_00bd;
	}

IL_00bd:
	{
		// }
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_33 = V_5;
		return L_33;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Translators_ToUnityPose_mAF66ACB04DFD50720935B1E1176674EB23BE9397 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 ___apiPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(
		//         new Vector3(apiPose.X, apiPose.Y, apiPose.Z),
		//         new Quaternion(apiPose.Qx, apiPose.Qy, apiPose.Qz, apiPose.Qw), Vector3.one);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_0 = ___apiPose0;
		float L_1 = L_0.___X_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_2 = ___apiPose0;
		float L_3 = L_2.___Y_5;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_4 = ___apiPose0;
		float L_5 = L_4.___Z_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_7 = ___apiPose0;
		float L_8 = L_7.___Qx_0;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_9 = ___apiPose0;
		float L_10 = L_9.___Qy_1;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_11 = ___apiPose0;
		float L_12 = L_11.___Qz_2;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_13 = ___apiPose0;
		float L_14 = L_13.___Qw_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_6, L_15, L_16, NULL);
		V_0 = L_17;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_18, L_19, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
		L_22 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_20, L_21, NULL);
		V_1 = L_22;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_23, NULL);
		V_2 = L_24;
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_25, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_26, L_28, NULL);
		V_3 = L_29;
		// return new Pose(position, rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_32), L_30, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = V_4;
		return L_33;
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_m246DD9D60F0C50370E66D50DD249B941824FBE86 (int32_t ___apiStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (apiStatus)
		int32_t L_0 = ___apiStatus0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0019;
			}
			case 2:
			{
				goto IL_001d;
			}
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		// return RecordingStatus.OK;
		V_2 = 1;
		goto IL_0043;
	}

IL_001d:
	{
		// return RecordingStatus.IOError;
		V_2 = 2;
		goto IL_0043;
	}

IL_0021:
	{
		// return RecordingStatus.None;
		V_2 = 0;
		goto IL_0043;
	}

IL_0025:
	{
		// Debug.LogErrorFormat("Unrecognized ApiRecordingStatus value {0}", apiStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___apiStatus0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7, L_4, NULL);
		// return RecordingStatus.None;
		V_2 = 0;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_m718AD14A2F520E92B4E751634A1C565382525C9E (int32_t ___apiArStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (apiArStatus)
		int32_t L_0 = ___apiArStatus0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)-20))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-23))))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)-20))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0033;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0033;
	}

IL_0023:
	{
		// return RecordingResult.OK;
		V_2 = 0;
		goto IL_0051;
	}

IL_0027:
	{
		// return RecordingResult.ErrorIllegalState;
		V_2 = 4;
		goto IL_0051;
	}

IL_002b:
	{
		// return RecordingResult.ErrorInvalidArgument;
		V_2 = 2;
		goto IL_0051;
	}

IL_002f:
	{
		// return RecordingResult.ErrorRecordingFailed;
		V_2 = 3;
		goto IL_0051;
	}

IL_0033:
	{
		// Debug.LogErrorFormat(
		//     "Recording failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		int32_t L_9 = ___apiArStatus0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B, L_8, NULL);
		// return RecordingResult.ErrorRecordingFailed;
		V_2 = 3;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_mD9C44CE09C3BDD00FEBF23796E2E17E1A33FBCC6 (int32_t ___apiStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (apiStatus)
		int32_t L_0 = ___apiStatus0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0025;
			}
			case 3:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001d:
	{
		// return PlaybackStatus.None;
		V_2 = 0;
		goto IL_004b;
	}

IL_0021:
	{
		// return PlaybackStatus.OK;
		V_2 = 1;
		goto IL_004b;
	}

IL_0025:
	{
		// return PlaybackStatus.IOError;
		V_2 = 2;
		goto IL_004b;
	}

IL_0029:
	{
		// return PlaybackStatus.FinishedSuccess;
		V_2 = 3;
		goto IL_004b;
	}

IL_002d:
	{
		// Debug.LogErrorFormat("Unrecognized ApiPlaybackStatus value {0}", apiStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___apiStatus0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6, L_4, NULL);
		// return PlaybackStatus.None;
		V_2 = 0;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_m4375BE342296D2B0E814997F6BEDCA6077BEBD55 (int32_t ___apiArStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (apiArStatus)
		int32_t L_0 = ___apiArStatus0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)-24))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-25))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)-24))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0034;
	}

IL_0024:
	{
		// return PlaybackResult.OK;
		V_2 = 0;
		goto IL_0052;
	}

IL_0028:
	{
		// return PlaybackResult.ErrorSessionNotPaused;
		V_2 = 2;
		goto IL_0052;
	}

IL_002c:
	{
		// return PlaybackResult.ErrorSessionUnsupported;
		V_2 = 3;
		goto IL_0052;
	}

IL_0030:
	{
		// return PlaybackResult.ErrorPlaybackFailed;
		V_2 = 4;
		goto IL_0052;
	}

IL_0034:
	{
		// Debug.LogErrorFormat(
		//     "Playback dataset failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		int32_t L_9 = ___apiArStatus0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0, L_8, NULL);
		// return PlaybackResult.ErrorPlaybackFailed;
		V_2 = 4;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode Google.XR.ARCoreExtensions.Internal.Translators::ToApiGeospatialMode(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToApiGeospatialMode_m258B8675892DFB03EF2C9DC4F91053073CD2AD8C (int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (mode)
		int32_t L_0 = ___mode0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0018;
	}

IL_0010:
	{
		// return ApiGeospatialMode.Enabled;
		V_2 = 2;
		goto IL_0036;
	}

IL_0014:
	{
		// return ApiGeospatialMode.Disabled;
		V_2 = 0;
		goto IL_0036;
	}

IL_0018:
	{
		// Debug.LogErrorFormat("Unrecognized GeospatialMode value: {0}", mode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___mode0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E, L_5, NULL);
		// return ApiGeospatialMode.Disabled;
		V_2 = 0;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::ToUnityQuaternion(Google.XR.ARCoreExtensions.Internal.ApiQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Translators_ToUnityQuaternion_mFED0A8843CB2BC064E5BCAF5B2E0375F4162949B (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 ___apiQuaternion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var glWorldQuaternion = new Quaternion(
		//     apiQuaternion.Qx, apiQuaternion.Qy, apiQuaternion.Qz, apiQuaternion.Qw);
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_0 = ___apiQuaternion0;
		float L_1 = L_0.___Qx_0;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_2 = ___apiQuaternion0;
		float L_3 = L_2.___Qy_1;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_4 = ___apiQuaternion0;
		float L_5 = L_4.___Qz_2;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_6 = ___apiQuaternion0;
		float L_7 = L_6.___Qw_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_0), L_1, L_3, L_5, L_7, NULL);
		// return _unityWorldToGLWorldRotation * glWorldQuaternion;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		return L_11;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiQuaternion Google.XR.ARCoreExtensions.Internal.Translators::ToApiQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 Translators_ToApiQuaternion_m93311F60F943F718EA5C68A92E44D1FFBE34B814 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Quaternion glWorldQuaternion = _glWorldToUnityWorldRotation * quaternion;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____glWorldToUnityWorldRotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___quaternion0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var apiQuaternion = new ApiQuaternion();
		il2cpp_codegen_initobj((&V_1), sizeof(ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063));
		// apiQuaternion.Qx = glWorldQuaternion.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		float L_4 = L_3.___x_0;
		(&V_1)->___Qx_0 = L_4;
		// apiQuaternion.Qy = glWorldQuaternion.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = L_5.___y_1;
		(&V_1)->___Qy_1 = L_6;
		// apiQuaternion.Qz = glWorldQuaternion.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		float L_8 = L_7.___z_2;
		(&V_1)->___Qz_2 = L_8;
		// apiQuaternion.Qw = glWorldQuaternion.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___w_3;
		(&V_1)->___Qw_3 = L_10;
		// return apiQuaternion;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_11 = V_1;
		V_2 = L_11;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_12 = V_2;
		return L_12;
	}
}
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToTerrainAnchorState(Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTerrainAnchorState_mFED2B8BC539BECEFB896A0138DC10D781C13A73D (int32_t ___state0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (state)
		int32_t L_0 = ___state0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)-3))))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0028;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_0028:
	{
		// return TerrainAnchorState.None;
		V_2 = 0;
		goto IL_0046;
	}

IL_002c:
	{
		// return TerrainAnchorState.TaskInProgress;
		V_2 = 1;
		goto IL_0046;
	}

IL_0030:
	{
		// return TerrainAnchorState.Success;
		V_2 = 2;
		goto IL_0046;
	}

IL_0034:
	{
		// return TerrainAnchorState.ErrorInternal;
		V_2 = (-1);
		goto IL_0046;
	}

IL_0038:
	{
		// return TerrainAnchorState.ErrorNotAuthorized;
		V_2 = ((int32_t)-2);
		goto IL_0046;
	}

IL_003d:
	{
		// return TerrainAnchorState.ErrorUnsupportedLocation;
		V_2 = ((int32_t)-3);
		goto IL_0046;
	}

IL_0042:
	{
		// return TerrainAnchorState.None;
		V_2 = 0;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		int32_t L_3 = V_2;
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.Translators::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translators__cctor_m8DB82739692C85A98F607B5B8FBBF25D12E5B9C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Matrix4x4 _unityWorldToGLWorld
		//     = Matrix4x4.Scale(new Vector3(1, 1, -1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_0, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0 = L_1;
		// private static readonly Matrix4x4 _unityWorldToGLWorldInverse
		//     = _unityWorldToGLWorld.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1 = L_2;
		// private static readonly Quaternion _unityWorldToGLWorldRotation
		//     = Quaternion.LookRotation(
		//         _unityWorldToGLWorld.GetColumn(2), _unityWorldToGLWorld.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_3, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_4, L_6, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2 = L_7;
		// private static readonly Quaternion _glWorldToUnityWorldRotation
		//     = Quaternion.Inverse(_unityWorldToGLWorldRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_8, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____glWorldToUnityWorldRotation_3 = L_9;
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
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* IOSSupportManager_get_Instance_m2C8F255BA4E2EA150950070484D9AAE18EDBBEB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* V_1 = NULL;
	{
		// if (_instance == null)
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		V_0 = (bool)((((RuntimeObject*)(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// _instance = new IOSSupportManager();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_2 = (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)il2cpp_codegen_object_new(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281(L_2, NULL);
		((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1), (void*)L_2);
		// _instance.CreateARCoreSession();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_3 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		NullCheck(L_3);
		IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752(L_3, NULL);
	}

IL_0024:
	{
		// return _instance;
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_4 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		V_1 = L_4;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_5 = V_1;
		return L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _sessionHandle;
		intptr_t L_0 = __this->____sessionHandle_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreFrameHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreFrameHandle_mE1946F5E1209F4FA74DCF1D338025DBCF6748392 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _frameHandle;
		intptr_t L_0 = __this->____frameHandle_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// _isEnabled = enabled;
		bool L_0 = ___enabled0;
		__this->____isEnabled_2 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateARSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_0 = ___session0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
	}

IL_0015:
	{
		// _arKitSession = session;
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_3 = ___session0;
		__this->____arKitSession_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arKitSession_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateCameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_cameraManager == cameraManager)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____cameraManager_8;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = ___cameraManager0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_006a;
	}

IL_0014:
	{
		// if (_cameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_4 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// cameraManager.frameReceived -= OnFrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_7 = ___cameraManager0;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_8 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_8, __this, (intptr_t)((void*)IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_7, L_8, NULL);
	}

IL_0039:
	{
		// _cameraManager = cameraManager;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_9 = ___cameraManager0;
		__this->____cameraManager_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraManager_8), (void*)L_9);
		// if (_cameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_10 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// _cameraManager.frameReceived += OnFrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_13 = __this->____cameraManager_8;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_14 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_14, __this, (intptr_t)((void*)IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_13, L_14, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_sessionHandle != IntPtr.Zero)
		intptr_t L_0 = __this->____sessionHandle_5;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.Log("Reset cross platform ARCoreSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50, NULL);
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_3 = __this->____frameHandle_6;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// FrameApi.ReleaseFrame(_frameHandle);
		intptr_t L_6 = __this->____frameHandle_6;
		FrameApi_ReleaseFrame_m83CDD4D95F45AD56BDA00A01EDA9C32A54C3A404(L_6, NULL);
		// _frameHandle = IntPtr.Zero;
		__this->____frameHandle_6 = (0);
	}

IL_004e:
	{
		// ExternApi.ArSession_destroy(_sessionHandle);
		intptr_t L_7 = __this->____sessionHandle_5;
		ExternApi_ArSession_destroy_mA20413FEB3062B86F9087D2382B21205292EFD13(L_7, NULL);
		// _sessionHandle = IntPtr.Zero;
		__this->____sessionHandle_5 = (0);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetInstanceAndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
		// if (_instance != null)
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		V_0 = (bool)((!(((RuntimeObject*)(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _instance = null;
		((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1 = (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1), (void*)(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::CreateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72C6333E41274633A472EB00E664E60390F9953);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B2_0 = NULL;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B3_1 = NULL;
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
		// _iosCloudServicesApiKey = RuntimeConfig.Instance == null ?
		//     string.Empty : RuntimeConfig.Instance.IOSCloudServicesApiKey;
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_0 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_2 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___IOSCloudServicesApiKey_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0022:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		NullCheck(G_B3_1);
		G_B3_1->____iosCloudServicesApiKey_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____iosCloudServicesApiKey_3), (void*)G_B3_0);
		// Debug.Log("Creating a cross platform ARCore session with IOS Cloud Services API Key:" +
		//     _iosCloudServicesApiKey);
		String_t* L_5 = __this->____iosCloudServicesApiKey_3;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE72C6333E41274633A472EB00E664E60390F9953, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// var status = ExternApi.ArSession_create(
		//     _iosCloudServicesApiKey, null, ref _sessionHandle);
		String_t* L_7 = __this->____iosCloudServicesApiKey_3;
		intptr_t* L_8 = (&__this->____sessionHandle_5);
		int32_t L_9;
		L_9 = ExternApi_ArSession_create_mA42595A0B5E47BBE52B1124B59E8AE1809E7F099(L_7, (String_t*)NULL, L_8, NULL);
		V_0 = L_9;
		// if (status != ApiArStatus.Success)
		int32_t L_10 = V_0;
		V_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to create a cross platform ARCore session with " +
		//     "error: {0}.", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485, L_13, NULL);
		// return;
		goto IL_007a;
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::OnFrameUpdate(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___frameEventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_mD1AED806DF087D81B5D869B6BBA4E7BC2E9E47EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_4;
	memset((&V_4), 0, sizeof(V_4));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if (!_isEnabled)
		bool L_0 = __this->____isEnabled_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0200;
	}

IL_0014:
	{
		// if (_sessionHandle == IntPtr.Zero)
		intptr_t L_2 = __this->____sessionHandle_5;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		goto IL_0200;
	}

IL_002e:
	{
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_5 = __this->____frameHandle_6;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_5, (0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// FrameApi.ReleaseFrame(_frameHandle);
		intptr_t L_8 = __this->____frameHandle_6;
		FrameApi_ReleaseFrame_m83CDD4D95F45AD56BDA00A01EDA9C32A54C3A404(L_8, NULL);
		// _frameHandle = IntPtr.Zero;
		__this->____frameHandle_6 = (0);
	}

IL_005b:
	{
		// if (_arKitSession != null && _cameraManager != null && _arKitSession.enabled)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_9 = __this->____arKitSession_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_11 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_13 = __this->____arKitSession_7;
		NullCheck(L_13);
		bool L_14;
		L_14 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_13, NULL);
		G_B10_0 = ((int32_t)(L_14));
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 0;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0200;
		}
	}
	{
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = _cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = _cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_7), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_16 = __this->____cameraManager_8;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_16, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18;
		L_18 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_17, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_7), L_18, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_19 = __this->____cameraManager_8;
		NullCheck(L_19);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20;
		L_20 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_19, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21;
		L_21 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_20, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_7), L_21, NULL);
		int32_t L_22;
		L_22 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_7), ((float)L_22), NULL);
		int32_t L_23;
		L_23 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_7), ((float)L_23), NULL);
		int32_t L_24;
		L_24 = Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_7), L_24, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_25 = V_7;
		V_4 = L_25;
		// if (!_cameraManager.subsystem.TryGetLatestFrame(
		//         cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_26 = __this->____cameraManager_8;
		NullCheck(L_26);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_27;
		L_27 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_26, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_28 = V_4;
		NullCheck(L_27);
		bool L_29;
		L_29 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_27, L_28, (&V_5), NULL);
		V_8 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_0120;
		}
	}
	{
		// Debug.LogWarning("XRCamera's latest frame is not available now.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB, NULL);
		// return;
		goto IL_0200;
	}

IL_0120:
	{
		// if (frame.timestampNs == 0 || frame.FrameHandle() == IntPtr.Zero)
		int64_t L_31;
		L_31 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_5), NULL);
		if (!L_31)
		{
			goto IL_013c;
		}
	}
	{
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_32 = V_5;
		intptr_t L_33;
		L_33 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_32, NULL);
		bool L_34;
		L_34 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_33, (0), NULL);
		G_B16_0 = ((int32_t)(L_34));
		goto IL_013d;
	}

IL_013c:
	{
		G_B16_0 = 1;
	}

IL_013d:
	{
		V_9 = (bool)G_B16_0;
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_0154;
		}
	}
	{
		// Debug.LogWarning("ARKit Plugin Frame is not ready.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878, NULL);
		// return;
		goto IL_0200;
	}

IL_0154:
	{
		// var status = ExternApi.ArSession_updateAndAcquireArFrame(
		//     _sessionHandle, frame.FrameHandle(), ref _frameHandle);
		intptr_t L_36 = __this->____sessionHandle_5;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_37 = V_5;
		intptr_t L_38;
		L_38 = ARCoreHandleExtensions_FrameHandle_m9F4F710C4EC26FCF5609F5F7B111459E483F7CCD(L_37, NULL);
		intptr_t* L_39 = (&__this->____frameHandle_6);
		int32_t L_40;
		L_40 = ExternApi_ArSession_updateAndAcquireArFrame_m5F16726CE3F7A08ABF668462A283EBED9E60EE11(L_36, L_38, L_39, NULL);
		V_6 = L_40;
		// if (status != ApiArStatus.Success)
		int32_t L_41 = V_6;
		V_10 = (bool)((!(((uint32_t)L_41) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_0197;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to update and acquire ARFrame with error: " +
		//     "{0}", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
		int32_t L_45 = V_6;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_47);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8, L_44, NULL);
		// return;
		goto IL_0200;
	}

IL_0197:
	{
		// if (ARCoreExtensions._instance.ARCoreExtensionsConfig != null &&
		//     !ARCoreExtensions._instance.ARCoreExtensionsConfig.Equals(_cachedConfig))
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_48;
		L_48 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_48);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_49 = L_48->___ARCoreExtensionsConfig_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_01c3;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_51;
		L_51 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_51);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_52 = L_51->___ARCoreExtensionsConfig_7;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_53 = __this->____cachedConfig_4;
		NullCheck(L_52);
		bool L_54;
		L_54 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_52, L_53);
		G_B23_0 = ((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
		goto IL_01c4;
	}

IL_01c3:
	{
		G_B23_0 = 0;
	}

IL_01c4:
	{
		V_11 = (bool)G_B23_0;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_01ff;
		}
	}
	{
		// _cachedConfig = ScriptableObject.CreateInstance<ARCoreExtensionsConfig>();
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_56;
		L_56 = ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_mD1AED806DF087D81B5D869B6BBA4E7BC2E9E47EC(ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_mD1AED806DF087D81B5D869B6BBA4E7BC2E9E47EC_RuntimeMethod_var);
		__this->____cachedConfig_4 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedConfig_4), (void*)L_56);
		// _cachedConfig.CopyFrom(ARCoreExtensions._instance.ARCoreExtensionsConfig);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_57 = __this->____cachedConfig_4;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_58;
		L_58 = ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline(NULL);
		NullCheck(L_58);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_59 = L_58->___ARCoreExtensionsConfig_7;
		NullCheck(L_57);
		ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA(L_57, L_59, NULL);
		// ConfigApi.ConfigureSession(_sessionHandle, _cachedConfig);
		intptr_t L_60 = __this->____sessionHandle_5;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_61 = __this->____cachedConfig_4;
		ConfigApi_ConfigureSession_m5759D26FCB3A61E532EFFB2C16A0896B93A9487D(L_60, L_61, NULL);
	}

IL_01ff:
	{
	}

IL_0200:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isEnabled = false;
		__this->____isEnabled_2 = (bool)0;
		// private string _iosCloudServicesApiKey = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____iosCloudServicesApiKey_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iosCloudServicesApiKey_3), (void*)L_0);
		// private IntPtr _sessionHandle = IntPtr.Zero;
		__this->____sessionHandle_5 = (0);
		// private IntPtr _frameHandle = IntPtr.Zero;
		__this->____frameHandle_6 = (0);
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
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_mA42595A0B5E47BBE52B1124B59E8AE1809E7F099 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, intptr_t*);

	// Marshaling of parameter '___apiKey0' to native representation
	char* ____apiKey0_marshaled = NULL;
	____apiKey0_marshaled = il2cpp_codegen_marshal_string(___apiKey0);

	// Marshaling of parameter '___bundleIdentifier1' to native representation
	char* ____bundleIdentifier1_marshaled = NULL;
	____bundleIdentifier1_marshaled = il2cpp_codegen_marshal_string(___bundleIdentifier1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_create)(____apiKey0_marshaled, ____bundleIdentifier1_marshaled, ___sessionHandle2);

	// Marshaling cleanup of parameter '___apiKey0' native representation
	il2cpp_codegen_marshal_free(____apiKey0_marshaled);
	____apiKey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___bundleIdentifier1' native representation
	il2cpp_codegen_marshal_free(____bundleIdentifier1_marshaled);
	____bundleIdentifier1_marshaled = NULL;

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_m5F16726CE3F7A08ABF668462A283EBED9E60EE11 (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_updateAndAcquireArFrame)(___sessionHandle0, ___arkitFrameHandle1, ___arFrame2);

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_mA20413FEB3062B86F9087D2382B21205292EFD13 (intptr_t ___session0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_destroy)(___session0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicHelpAttribute__ctor_mD493B6B9447763F41B5630672AB1DB79D999D0DD (DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1* __this, String_t* ___checkingFunction0, const RuntimeMethod* method) 
{
	{
		// public DynamicHelpAttribute(string checkingFunction)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// CheckingFunction = checkingFunction;
		String_t* L_0 = ___checkingFunction0;
		__this->___CheckingFunction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CheckingFunction_0), (void*)L_0);
		// }
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
// System.Void Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_mDD9EEC3C00D6DD3190DC5AFCD47A36984D7975B1 (EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// public EnumFlagsAttribute(System.Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// EnumType = type;
		Type_t* L_0 = ___type0;
		__this->___EnumType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EnumType_0), (void*)L_0);
		// }
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
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5 (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method) 
{
	{
		// public readonly string HelpMessage = null;
		__this->___HelpMessage_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HelpMessage_0), (void*)(String_t*)NULL);
		// public readonly HelpMessageType MessageType = HelpMessageType.None;
		__this->___MessageType_1 = 0;
		// public HelpAttribute(string helpMessage,
		//     HelpMessageType messageType = HelpMessageType.None)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// HelpMessage = helpMessage;
		String_t* L_0 = ___helpMessage0;
		__this->___HelpMessage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HelpMessage_0), (void*)L_0);
		// MessageType = messageType;
		int32_t L_1 = ___messageType1;
		__this->___MessageType_1 = L_1;
		// }
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
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_OnEnable_mD946D686E691FD78C5FB2ED8A61D490D338AA753 (RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mE9839C01FB954C811AD3A60978D06F954BD5EA1B (RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> ModulesEnabled = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___ModulesEnabled_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ModulesEnabled_6), (void*)L_0);
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
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("qx: {0}, qy: {1}, qz: {2}, qw: {3}, x: {4}, y: {5}, z: {6}",
		//     Qx, Qy, Qz, Qw, X, Y, Z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		float L_2 = __this->___Qx_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___Qy_1;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___Qz_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___Qw_3;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = __this->___X_4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		float L_22 = __this->___Y_5;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		float L_26 = __this->___Z_6;
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12, L_25, NULL);
		V_0 = L_29;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		String_t* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.Internal.ApiQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59C23871107D241BF9D160CD46876D62583516A3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("qx: {0}, qy: {1}, qz: {2}, qw: {3}", Qx, Qy, Qz, Qw);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		float L_2 = __this->___Qx_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___Qy_1;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___Qz_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___Qw_3;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral59C23871107D241BF9D160CD46876D62583516A3, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_mDA3D4972F102F0849ADAA1B5BE82B46F4B56D848 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_m4A5DAC7A0C7295768478EA716E1C9F3AE502B995 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiCloudAnchorState cloudAnchorState = ApiCloudAnchorState.None;
		V_0 = 0;
		// return cloudAnchorState;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 AnchorApi_GetAnchorPose_m229B587E47B003BE5A90F02EB5E5DE292C59A76A (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1;
		L_1 = PoseApi_Create_m68834854FFE09120418A1DDDF0181FA9A83ECA31(L_0, NULL);
		V_0 = L_1;
		// ExternApi.ArAnchor_getPose(sessionHandle, anchorHandle, poseHandle);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___anchorHandle1;
		intptr_t L_4 = V_0;
		ExternApi_ArAnchor_getPose_m1BB954BCA9CA3AB8F7510022B3C1BE67DABB6B8F(L_2, L_3, L_4, NULL);
		// ApiPose apiPose = PoseApi.ExtractPoseValue(sessionHandle, poseHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6 = V_0;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_7;
		L_7 = PoseApi_ExtractPoseValue_m3A39F1F8C21E6A21A614F59133164C0D55F9AA58(L_5, L_6, NULL);
		V_1 = L_7;
		// PoseApi.Destroy(poseHandle);
		intptr_t L_8 = V_0;
		PoseApi_Destroy_m3974AF75E241EEE8BC165AC3EDD90533CBBEC92A(L_8, NULL);
		// return apiPose;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_9 = V_1;
		V_2 = L_9;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_10 = V_2;
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_mBF0C6CC2B2F03E59A6D8A51F998E9EBBA724F45C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiTrackingState apiTrackingState = ApiTrackingState.Stopped;
		V_0 = 2;
		// ExternApi.ArAnchor_getTrackingState(sessionHandle, anchorHandle, ref apiTrackingState);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_getTrackingState_m1B49B9713E77EF5205D0E83800E6F32334889126(L_0, L_1, (&V_0), NULL);
		// return apiTrackingState;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTerrainAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTerrainAnchorState_m45AB3A5F4AE7EA07970DECAF2FBCF0C588C47536 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiTerrainAnchorState terrainAnchorState = ApiTerrainAnchorState.None;
		V_0 = 0;
		// ExternApi.ArAnchor_getTerrainAnchorState(
		//     sessionHandle,
		//     anchorHandle,
		//     ref terrainAnchorState);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_getTerrainAnchorState_m8471CF1EDC82DF7C4598D5AF3F463BAD5908CD34(L_0, L_1, (&V_0), NULL);
		// return terrainAnchorState;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_mD0C47CDE1AFD8B65C3E96ED05BBE528D8C5D269D (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArAnchor_detach(sessionHandle, anchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_detach_m2AB56AF09C1EA818C9B975DE1622ACEEDD7CF377(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_mE5EB1FCC743B11244550CAF0E5F2EB2C2BC03DF4 (intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArAnchor_release(anchorHandle);
		intptr_t L_0 = ___anchorHandle0;
		ExternApi_ArAnchor_release_mE995E3C504B468F5A0F8CA92AD9DCEDAA1A30D8D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi__ctor_m97F70392550B7468B36216302FA151A36DBF3EF3 (AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_acquireCloudAnchorId_mD56D04DBC978DD6DD317EF15B7FF8F724467320B (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___hostingHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getCloudAnchorState_mF080A9EA33B23CFB0262AC9E6339E00C38562745 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___cloudAnchorState2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTerrainAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTerrainAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTerrainAnchorState_m8471CF1EDC82DF7C4598D5AF3F463BAD5908CD34 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___terrainAnchorState2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_getTerrainAnchorState)(___sessionHandle0, ___anchorHandle1, ___terrainAnchorState2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArString_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArString_release_mB07A674C0DA13FD56A3B4742BCC90E61988003ED (intptr_t ___stringHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArString_release)(___stringHandle0);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m1BB954BCA9CA3AB8F7510022B3C1BE67DABB6B8F (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_getPose)(___sessionHandle0, ___anchorHandle1, ___pose2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_m1B49B9713E77EF5205D0E83800E6F32334889126 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_getTrackingState)(___sessionHandle0, ___anchorHandle1, ___trackingState2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_m2AB56AF09C1EA818C9B975DE1622ACEEDD7CF377 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_detach)(___sessionHandle0, ___anchorHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_mE995E3C504B468F5A0F8CA92AD9DCEDAA1A30D8D (intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_release)(___anchorHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi::SetSessionRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPrestoApi_SetSessionRequired_m11962FF5A2DA8F0145C908FE62BE61405C28FB64 (bool ___required0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArPresto_setSessionRequired(required);
		bool L_0 = ___required0;
		ExternApi_ArPresto_setSessionRequired_mE931C0DBBBCB6F780C0E56A6D87B1621C7EADB5B(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARPrestoApi::GetSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARPrestoApi_GetSessionHandle_m6EF4DA092C0DFFC6F0C6AB68D55CF42D50A88779 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr sessionHandle = IntPtr.Zero;
		V_0 = (0);
		// ExternApi.ArPresto_getSession(ref sessionHandle);
		ExternApi_ArPresto_getSession_m8C855424356F2AC3486E47133E2F731CF3B22C05((&V_0), NULL);
		// return sessionHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPrestoApi__ctor_m4D0EBB2589D654F080711DC93E4544B588E747C8 (ARPrestoApi_t84EDCA85E3C70A037A1B8DA11A889F68A0C69C6F* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_setSessionRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPresto_setSessionRequired_mE931C0DBBBCB6F780C0E56A6D87B1621C7EADB5B (bool ___isRequired0, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_setSessionRequired(System.Boolean)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_getSession(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPresto_getSession_m8C855424356F2AC3486E47133E2F731CF3B22C05 (intptr_t* ___sessionHandle0, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ARPrestoApi/ExternApi::ArPresto_getSession(System.IntPtr&)' has no implementation."), NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m307ED4C3B8F991322B19BB6A6139F9F43109ECED (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// CameraConfigFacingDirection facingDirection = CameraConfigFacingDirection.Back;
		V_0 = 0;
		// return facingDirection;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetTextureDimensions_m47949FC7AC7C644CA3AA3B60983AE68D051F5EDA (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int width = 0;
		V_0 = 0;
		// int height = 0;
		V_1 = 0;
		// return new Vector2Int(width, height);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetFPSRange_mBA6394A42C8ABDA1AE9717AF34680FCE2702E34A (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int minFps = 0;
		V_0 = 0;
		// int maxFps = 0;
		V_1 = 0;
		// return new Vector2Int(minFps, maxFps);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_2;
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_m9B13C0CE85536A0846EBF6921A3688ACC4DA4B6E (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int depth = (int)CameraConfigDepthSensorUsage.DoNotUse;
		V_0 = 2;
		// return (CameraConfigDepthSensorUsage)depth;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m9CDC4A160CD8D4A6DD9293F25D90C336BA6E0846 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int stereo = (int)CameraConfigStereoCameraUsage.DoNotUse;
		V_0 = 2;
		// return (CameraConfigStereoCameraUsage)stereo;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigApi__ctor_m2B66BAE79E707720B323BED0E34D41CBFC0FC6D5 (CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::UpdateFilter(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi_UpdateFilter_m32EA697E9D53896B19C68417842D925CC77225BF (intptr_t ___sessionHandle0, intptr_t ___filterHandle1, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___extensionsFilter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (extensionsFilter != null)
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_0 = ___extensionsFilter2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi__ctor_mCF7B047CD1724061A55856385CB41CAAD5B85996 (CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::ConfigureSession(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_ConfigureSession_m5759D26FCB3A61E532EFFB2C16A0896B93A9487D (intptr_t ___sessionHandle0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// IntPtr configHandle = IntPtr.Zero;
		V_0 = (0);
		// ExternApi.ArConfig_create(sessionHandle, ref configHandle);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArConfig_create_m3194F16DAD8222E41B077F981735CE10C8A49D85(L_0, (&V_0), NULL);
		// UpdateSessionConfig(sessionHandle, configHandle, config);
		intptr_t L_1 = ___sessionHandle0;
		intptr_t L_2 = V_0;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_3 = ___config1;
		ConfigApi_UpdateSessionConfig_m8C9F4947D7CB373004224BA2607EE732770463D5(L_1, L_2, L_3, NULL);
		// ApiArStatus status = ExternApi.ArSession_configure(sessionHandle, configHandle);
		intptr_t L_4 = ___sessionHandle0;
		intptr_t L_5 = V_0;
		int32_t L_6;
		L_6 = ExternApi_ArSession_configure_mE7111EF5F426A474C1D133648AB0F9EFFEB7479C(L_4, L_5, NULL);
		V_1 = L_6;
		// if (status != ApiArStatus.Success)
		int32_t L_7 = V_1;
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to configure the session with error: {0}.", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20, L_10, NULL);
	}

IL_0045:
	{
		// ExternApi.ArConfig_destroy(configHandle);
		intptr_t L_14 = V_0;
		ExternApi_ArConfig_destroy_m8AC61342E1886D86196845B3C295497E14F6C98C(L_14, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_UpdateSessionConfig_m8C9F4947D7CB373004224BA2607EE732770463D5 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ApiGeospatialMode geospatialMode = config.GeospatialMode.ToApiGeospatialMode();
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___config2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___GeospatialMode_5;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Translators_ToApiGeospatialMode_m258B8675892DFB03EF2C9DC4F91053073CD2AD8C(L_1, NULL);
		V_0 = L_2;
		// ExternApi.ArConfig_setGeospatialMode(sessionHandle, configHandle, geospatialMode);
		intptr_t L_3 = ___sessionHandle0;
		intptr_t L_4 = ___configHandle1;
		int32_t L_5 = V_0;
		ExternApi_ArConfig_setGeospatialMode_mC71A34F91045C3645350E0A2F311725CACF914B6(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi__ctor_mB59925183F64EC707FCE4C3E815466660C9BA663 (ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_create_m3194F16DAD8222E41B077F981735CE10C8A49D85 (intptr_t ___sessionHandle0, intptr_t* ___configHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArConfig_create)(___sessionHandle0, ___configHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_destroy_m8AC61342E1886D86196845B3C295497E14F6C98C (intptr_t ___configHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArConfig_destroy)(___configHandle0);

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArSession_configure(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_configure_mE7111EF5F426A474C1D133648AB0F9EFFEB7479C (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_configure)(___sessionHandle0, ___configHandle1);

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setCloudAnchorMode_m95155D9D897637576775C7F8BEFFEF3BC41D64AC (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t ___mode2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_getCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_getCloudAnchorMode_mB209EC125C3ECBC5E76861B975D725DB87CE1696 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t* ___mode2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_getCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setGeospatialMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setGeospatialMode_mC71A34F91045C3645350E0A2F311725CACF914B6 (intptr_t ___sessionHandle0, intptr_t ___config1, int32_t ___mode2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArConfig_setGeospatialMode)(___sessionHandle0, ___config1, ___mode2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthState_m8260DD38B1B07FE8B9B4BB5645265D2F87D18A45 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// var earthState = EarthState.ErrorInternal;
		V_0 = (-1);
		// IntPtr earthHandle = SessionApi.AcquireEarth(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_0, NULL);
		V_1 = L_1;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_2 = V_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return EarthState.ErrorEarthNotReady;
		V_3 = ((int32_t)-100);
		goto IL_0034;
	}

IL_001f:
	{
		// ExternApi.ArEarth_getEarthState(sessionHandle, earthHandle, ref earthState);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6 = V_1;
		ExternApi_ArEarth_getEarthState_m87C6F2E7AD0171DD04410E80C1D74434F2B45804(L_5, L_6, (&V_0), NULL);
		// ExternApi.ArTrackable_release(earthHandle);
		intptr_t L_7 = V_1;
		ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD(L_7, NULL);
		// return earthState;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		int32_t L_9 = V_3;
		return L_9;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthTrackingState_mBB0E4F5CBD0A69344FEAFFF1EED5FE4FC70EFC5E (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// var trackingState = ApiTrackingState.Stopped;
		V_0 = 2;
		// IntPtr earthHandle = SessionApi.AcquireEarth(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_0, NULL);
		V_1 = L_1;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_2 = V_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return trackingState.ToTrackingState();
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630(L_5, NULL);
		V_3 = L_6;
		goto IL_003d;
	}

IL_0023:
	{
		// ExternApi.ArTrackable_getTrackingState(sessionHandle, earthHandle, ref trackingState);
		intptr_t L_7 = ___sessionHandle0;
		intptr_t L_8 = V_1;
		ExternApi_ArTrackable_getTrackingState_m6E0A643B639BA6EA84AA3FD168CDE302053E4280(L_7, L_8, (&V_0), NULL);
		// ExternApi.ArTrackable_release(earthHandle);
		intptr_t L_9 = V_1;
		ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD(L_9, NULL);
		// return trackingState.ToTrackingState();
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Translators_ToTrackingState_m6A18B5271942BC2FA64E0D9A5D0A15683B256630(L_10, NULL);
		V_3 = L_11;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::TryGetCameraGeospatialPose(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_TryGetCameraGeospatialPose_m6A1917B93BF1146CCBD54EA9DAAA8263C7B66A52 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_0, NULL);
		V_0 = L_1;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0041;
	}

IL_001a:
	{
		// IntPtr geospatialPoseHandle = GeospatialPoseApi.Create(sessionHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6;
		L_6 = GeospatialPoseApi_Create_m0C096F81F36D7CC2318460028A0997B9453C2545(L_5, NULL);
		V_1 = L_6;
		// ExternApi.ArEarth_getCameraGeospatialPose(sessionHandle, earthHandle,
		//                                           geospatialPoseHandle);
		intptr_t L_7 = ___sessionHandle0;
		intptr_t L_8 = V_0;
		intptr_t L_9 = V_1;
		ExternApi_ArEarth_getCameraGeospatialPose_m3751DEDB83F66B03649C7DB96B03708B3AF0AE65(L_7, L_8, L_9, NULL);
		// GeospatialPoseApi.GetGeospatialPose(
		//     sessionHandle, geospatialPoseHandle, ref geospatialPose);
		intptr_t L_10 = ___sessionHandle0;
		intptr_t L_11 = V_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_12 = ___geospatialPose1;
		GeospatialPoseApi_GetGeospatialPose_mD68C405D3B7352AA847A81BC52AB7AE3F62D8961(L_10, L_11, L_12, NULL);
		// GeospatialPoseApi.Destroy(geospatialPoseHandle);
		intptr_t L_13 = V_1;
		GeospatialPoseApi_Destroy_m4EE0D63D79433BFB4B95882143098A7E70CF8EE3(L_13, NULL);
		// ExternApi.ArTrackable_release(earthHandle);
		intptr_t L_14 = V_0;
		ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD(L_14, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::AddAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EarthApi_AddAnchor_m0E5F7A0A7E37DBD3A9E22CF43FFAC81F48F68434 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitude4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4432262AE6A666FBDA5AABAC37A44BF852B0EFF);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// IntPtr anchorHandle = IntPtr.Zero;
		V_0 = (0);
		// ApiQuaternion apiQuaternion = eunRotation.ToApiQuaternion();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___eunRotation5;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_1;
		L_1 = Translators_ToApiQuaternion_m93311F60F943F718EA5C68A92E44D1FFBE34B814(L_0, NULL);
		V_1 = L_1;
		// ApiArStatus status = ExternApi.ArEarth_acquireNewAnchor(
		//     sessionHandle, earthHandle, latitude, longitude, altitude,
		//     ref apiQuaternion, ref anchorHandle);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___earthHandle1;
		double L_4 = ___latitude2;
		double L_5 = ___longitude3;
		double L_6 = ___altitude4;
		int32_t L_7;
		L_7 = ExternApi_ArEarth_acquireNewAnchor_m22B7734601F6212B2359695E40AE58E32CA2A0B5(L_2, L_3, L_4, L_5, L_6, (&V_1), (&V_0), NULL);
		V_2 = L_7;
		// if (status != ApiArStatus.Success)
		int32_t L_8 = V_2;
		V_3 = (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to add Geospatial Anchor, status '{0}'", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteralB4432262AE6A666FBDA5AABAC37A44BF852B0EFF, L_11, NULL);
	}

IL_0043:
	{
		// return anchorHandle;
		intptr_t L_15 = V_0;
		V_4 = L_15;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		intptr_t L_16 = V_4;
		return L_16;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::ResolveAnchorOnTerrain(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EarthApi_ResolveAnchorOnTerrain_mB156F9DBA4EC8BE8C31CB1DE0A7DCA2B235E7C91 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitudeAboveTerrain4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75D9A48E410D21C66D85D1F2027EC1C374844ABF);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// IntPtr anchorHandle = IntPtr.Zero;
		V_0 = (0);
		// ApiQuaternion apiQuaternion = eunRotation.ToApiQuaternion();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___eunRotation5;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_1;
		L_1 = Translators_ToApiQuaternion_m93311F60F943F718EA5C68A92E44D1FFBE34B814(L_0, NULL);
		V_1 = L_1;
		// ApiArStatus status = ExternApi.ArEarth_resolveAndAcquireNewAnchorOnTerrain(
		//     sessionHandle, earthHandle, latitude, longitude, altitudeAboveTerrain,
		//     ref apiQuaternion, ref anchorHandle);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___earthHandle1;
		double L_4 = ___latitude2;
		double L_5 = ___longitude3;
		double L_6 = ___altitudeAboveTerrain4;
		int32_t L_7;
		L_7 = ExternApi_ArEarth_resolveAndAcquireNewAnchorOnTerrain_m05EFC82F09C5DE0FA0608129183FE07E17D83582(L_2, L_3, L_4, L_5, L_6, (&V_1), (&V_0), NULL);
		V_2 = L_7;
		// if (status != ApiArStatus.Success)
		int32_t L_8 = V_2;
		V_3 = (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to add Geospatial Terrain anchor, status '{0}'",
		//     status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral75D9A48E410D21C66D85D1F2027EC1C374844ABF, L_11, NULL);
	}

IL_0043:
	{
		// return anchorHandle;
		intptr_t L_15 = V_0;
		V_4 = L_15;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		intptr_t L_16 = V_4;
		return L_16;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::Convert(System.IntPtr,UnityEngine.Pose,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_Convert_m61287D4C4F0AB7B7AECB0CC743959DA92341E817 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A83B08B4F18230DB6FC5DD3AB0DD0F7467534CC);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_0, NULL);
		V_0 = L_1;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0079;
	}

IL_001c:
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle, pose);
		intptr_t L_5 = ___sessionHandle0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___pose1;
		intptr_t L_7;
		L_7 = PoseApi_Create_mB74EF9F202A7F755F06A94B290CCBFB1787B34AC(L_5, L_6, NULL);
		V_1 = L_7;
		// IntPtr geospatialPoseHandle = GeospatialPoseApi.Create(sessionHandle);
		intptr_t L_8 = ___sessionHandle0;
		intptr_t L_9;
		L_9 = GeospatialPoseApi_Create_m0C096F81F36D7CC2318460028A0997B9453C2545(L_8, NULL);
		V_2 = L_9;
		// ApiArStatus status = ExternApi.ArEarth_getGeospatialPose(
		//     sessionHandle, earthHandle, poseHandle, geospatialPoseHandle);
		intptr_t L_10 = ___sessionHandle0;
		intptr_t L_11 = V_0;
		intptr_t L_12 = V_1;
		intptr_t L_13 = V_2;
		int32_t L_14;
		L_14 = ExternApi_ArEarth_getGeospatialPose_mA8E3C53270F7AE3070CED2F6F07DFEBF44DB450D(L_10, L_11, L_12, L_13, NULL);
		V_3 = L_14;
		// if (status != ApiArStatus.Success)
		int32_t L_15 = V_3;
		V_5 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to convert Pose to GeospatialPose, status '{0}'",
		//     status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral5A83B08B4F18230DB6FC5DD3AB0DD0F7467534CC, L_18, NULL);
	}

IL_005b:
	{
		// GeospatialPoseApi.GetGeospatialPose(
		//     sessionHandle, geospatialPoseHandle, ref geospatialPose);
		intptr_t L_22 = ___sessionHandle0;
		intptr_t L_23 = V_2;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_24 = ___geospatialPose2;
		GeospatialPoseApi_GetGeospatialPose_mD68C405D3B7352AA847A81BC52AB7AE3F62D8961(L_22, L_23, L_24, NULL);
		// GeospatialPoseApi.Destroy(geospatialPoseHandle);
		intptr_t L_25 = V_2;
		GeospatialPoseApi_Destroy_m4EE0D63D79433BFB4B95882143098A7E70CF8EE3(L_25, NULL);
		// PoseApi.Destroy(poseHandle);
		intptr_t L_26 = V_1;
		PoseApi_Destroy_m3974AF75E241EEE8BC165AC3EDD90533CBBEC92A(L_26, NULL);
		// ExternApi.ArTrackable_release(earthHandle);
		intptr_t L_27 = V_0;
		ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD(L_27, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::Convert(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_Convert_m3C34CBA41C72F55D48859893B65A1EA3A959B0A4 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C ___geospatialPose1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668936CFE23FA8632946331EFDA7879F3BE81AD1);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8(L_0, NULL);
		V_0 = L_1;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_008d;
	}

IL_001c:
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6;
		L_6 = PoseApi_Create_m68834854FFE09120418A1DDDF0181FA9A83ECA31(L_5, NULL);
		V_1 = L_6;
		// ApiQuaternion apiQuaternion = geospatialPose.EunRotation.ToApiQuaternion();
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_7 = ___geospatialPose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___EunRotation_7;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_9;
		L_9 = Translators_ToApiQuaternion_m93311F60F943F718EA5C68A92E44D1FFBE34B814(L_8, NULL);
		V_2 = L_9;
		// ApiArStatus status = ExternApi.ArEarth_getPose(
		//     sessionHandle, earthHandle, geospatialPose.Latitude, geospatialPose.Longitude,
		//     geospatialPose.Altitude, ref apiQuaternion, poseHandle);
		intptr_t L_10 = ___sessionHandle0;
		intptr_t L_11 = V_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_12 = ___geospatialPose1;
		double L_13 = L_12.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_14 = ___geospatialPose1;
		double L_15 = L_14.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_16 = ___geospatialPose1;
		double L_17 = L_16.___Altitude_2;
		intptr_t L_18 = V_1;
		int32_t L_19;
		L_19 = ExternApi_ArEarth_getPose_mB921558DB5328A5A3F83D5DE174D0A5E0275A3F0(L_10, L_11, L_13, L_15, L_17, (&V_2), L_18, NULL);
		V_3 = L_19;
		// if (status != ApiArStatus.Success)
		int32_t L_20 = V_3;
		V_5 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to convert GeospatialPose to Pose, status '{0}'",
		//     status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral668936CFE23FA8632946331EFDA7879F3BE81AD1, L_23, NULL);
	}

IL_0072:
	{
		// apiPose = PoseApi.ExtractPoseValue(sessionHandle, poseHandle);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* L_27 = ___apiPose2;
		intptr_t L_28 = ___sessionHandle0;
		intptr_t L_29 = V_1;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_30;
		L_30 = PoseApi_ExtractPoseValue_m3A39F1F8C21E6A21A614F59133164C0D55F9AA58(L_28, L_29, NULL);
		*(ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*)L_27 = L_30;
		// PoseApi.Destroy(poseHandle);
		intptr_t L_31 = V_1;
		PoseApi_Destroy_m3974AF75E241EEE8BC165AC3EDD90533CBBEC92A(L_31, NULL);
		// ExternApi.ArTrackable_release(earthHandle);
		intptr_t L_32 = V_0;
		ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD(L_32, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi__ctor_m55B31BA7BE3901941FB72F4333015F922F0C542A (EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getEarthState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.EarthState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getEarthState_m87C6F2E7AD0171DD04410E80C1D74434F2B45804 (intptr_t ___session0, intptr_t ___earth1, int32_t* ___out_state2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArEarth_getEarthState)(___session0, ___earth1, ___out_state2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getCameraGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getCameraGeospatialPose_m3751DEDB83F66B03649C7DB96B03708B3AF0AE65 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, intptr_t ___outGeospatialPoseHandle2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArEarth_getCameraGeospatialPose)(___sessionHandle0, ___earthHandle1, ___outGeospatialPoseHandle2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_getTrackingState_m6E0A643B639BA6EA84AA3FD168CDE302053E4280 (intptr_t ___sessionHandle0, intptr_t ___trackableHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArTrackable_getTrackingState)(___sessionHandle0, ___trackableHandle1, ___trackingState2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_release_mC3C628D62CA8DEFC4CC8A704447C7C8B73785EFD (intptr_t ___earthHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArTrackable_release)(___earthHandle0);

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_acquireNewAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_acquireNewAnchor_m22B7734601F6212B2359695E40AE58E32CA2A0B5 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitude4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t* ___out_anchor6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArEarth_acquireNewAnchor)(___session0, ___earth1, ___latitude2, ___longitude3, ___altitude4, ___eus_quaternion_45, ___out_anchor6);

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_resolveAndAcquireNewAnchorOnTerrain(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_resolveAndAcquireNewAnchorOnTerrain_m05EFC82F09C5DE0FA0608129183FE07E17D83582 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitudeAboveTerrain4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t* ___out_anchor6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArEarth_resolveAndAcquireNewAnchorOnTerrain)(___session0, ___earth1, ___latitude2, ___longitude3, ___altitudeAboveTerrain4, ___eus_quaternion_45, ___out_anchor6);

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_getGeospatialPose_mA8E3C53270F7AE3070CED2F6F07DFEBF44DB450D (intptr_t ___session0, intptr_t ___earth1, intptr_t ___poseHandle2, intptr_t ___outGeospatialPoseHandle3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArEarth_getGeospatialPose)(___session0, ___earth1, ___poseHandle2, ___outGeospatialPoseHandle3);

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getPose(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_getPose_mB921558DB5328A5A3F83D5DE174D0A5E0275A3F0 (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitude4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t ___outPoseHandle6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double, double, double, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArEarth_getPose)(___session0, ___earth1, ___latitude2, ___longitude3, ___altitude4, ___eus_quaternion_45, ___outPoseHandle6);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi_ReleaseFrame_m83CDD4D95F45AD56BDA00A01EDA9C32A54C3A404 (intptr_t ___frameHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArFrame_release(frameHandle);
		intptr_t L_0 = ___frameHandle0;
		ExternApi_ArFrame_release_m3E16807D42C9DDEFF61315985DCDEE2447E8AA69(L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Google.XR.ARCoreExtensions.Internal.FrameApi::TransformCoordinates2d(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FrameApi_TransformCoordinates2d_mCD89EF923CC3B46780B51F79B18A70AA2D263201 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, int32_t ___inputType2, int32_t ___outputType3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvIn4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 uvOut = new Vector2(uvIn.x, uvIn.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___uvIn4;
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___uvIn4;
		float L_3 = L_2->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_1, L_3, NULL);
		// return uvOut;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_1;
		return L_5;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.FrameApi::RecordTrackData(System.IntPtr,System.IntPtr,System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameApi_RecordTrackData_m44B505299A938CECCB902A76600A3AF54F8FD2B3 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		V_0 = ((int32_t)-2);
		// return status.ToRecordingResult();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToRecordingResult_m718AD14A2F520E92B4E751634A1C565382525C9E(L_0, NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.Internal.FrameApi::GetUpdatedTrackData(System.IntPtr,System.IntPtr,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* FrameApi_GetUpdatedTrackData_mBA2927549CF9D69A1BC02393E84E39A200D2462F (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* V_0 = NULL;
	List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* V_1 = NULL;
	{
		// List<TrackData> trackDataList = new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_0 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_0, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		V_0 = L_0;
		// return trackDataList;
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_2 = V_1;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi__ctor_m9D6802E1392F3D0002269A50874888CAC2EB233C (FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_m3E16807D42C9DDEFF61315985DCDEE2447E8AA69 (intptr_t ___frameHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArFrame_release)(___frameHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.FutureApi::CheckVpsAvailabilityAsync(System.IntPtr,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureApi_CheckVpsAvailabilityAsync_m42BB97C1E9C4CD0DBB0FDCD8F21172DA1183A596 (intptr_t ___sessionHandle0, double ___latitude1, double ___longitude2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D0EAA697C6B65ECCBE4005F97729A49E01072B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// IntPtr futureHandle = IntPtr.Zero;
		V_0 = (0);
		// ApiArStatus status = ExternApi.ArSession_checkVpsAvailabilityAsync(
		//     sessionHandle, latitude, longitude, IntPtr.Zero, IntPtr.Zero, ref futureHandle);
		intptr_t L_0 = ___sessionHandle0;
		double L_1 = ___latitude1;
		double L_2 = ___longitude2;
		int32_t L_3;
		L_3 = ExternApi_ArSession_checkVpsAvailabilityAsync_mE0EC0FD97ADA72CC724CC3AE3EEDAD42CCEEF45B(L_0, L_1, L_2, (0), (0), (&V_0), NULL);
		V_1 = L_3;
		// if (status != ApiArStatus.Success)
		int32_t L_4 = V_1;
		V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to get the availability of VPS, status '{0}'", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteralF7D0EAA697C6B65ECCBE4005F97729A49E01072B, L_7, NULL);
	}

IL_0040:
	{
		// return futureHandle;
		intptr_t L_11 = V_0;
		V_3 = L_11;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		intptr_t L_12 = V_3;
		return L_12;
	}
}
// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.FutureApi::GetState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureApi_GetState_mE652BDBFAB580A45BB95819AD21041C28A6BF9D9 (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var state = PromiseState.Pending;
		V_0 = 0;
		// ExternApi.ArVpsAvailabilityFuture_getState(sessionHandle, futureHandle, ref state);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___futureHandle1;
		ExternApi_ArVpsAvailabilityFuture_getState_m115154A89455590A328B78810B38FDF8109E9809(L_0, L_1, (&V_0), NULL);
		// return state;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// Google.XR.ARCoreExtensions.VpsAvailability Google.XR.ARCoreExtensions.Internal.FutureApi::GetResult(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureApi_GetResult_mC621F591F617678AF24CC10DF0384FDD36A716F8 (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var result = VpsAvailability.Unknown;
		V_0 = 0;
		// ExternApi.ArVpsAvailabilityFuture_getResult(sessionHandle, futureHandle, ref result);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___futureHandle1;
		ExternApi_ArVpsAvailabilityFuture_getResult_m75B1BFD702876875B220BC1C7C7DA572D0BF732A(L_0, L_1, (&V_0), NULL);
		// return result;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi::Cancel(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureApi_Cancel_m04EDC360ADC7B931FECD03F851ECCD341BC5531D (intptr_t ___sessionHandle0, intptr_t ___futureHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int defaultInt = 0;
		V_0 = 0;
		// ExternApi.ArVpsAvailabilityFuture_cancel(sessionHandle, futureHandle, ref defaultInt);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___futureHandle1;
		ExternApi_ArVpsAvailabilityFuture_cancel_mB2C3A82F4B39850867FA8397F0A80AC0FA67B175(L_0, L_1, (&V_0), NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureApi_Release_m6F8A1E040172B4880941F58BA140EB33DDB63857 (intptr_t ___futureHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ExternApi.ArVpsAvailabilityFuture_release(futureHandle);
		intptr_t L_0 = ___futureHandle0;
		ExternApi_ArVpsAvailabilityFuture_release_m8395508FBE8AC3869B87030514897202A3C81A8B(L_0, NULL);
		// futureHandle = IntPtr.Zero;
		___futureHandle0 = (0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureApi__ctor_m165C45CC32A6A5AA0083E248598039B1AE40DAD8 (FutureApi_t5CCDC74CF42E78970965FDBFC0FB42DC4D684344* __this, const RuntimeMethod* method) 
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
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArSession_checkVpsAvailabilityAsync(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_checkVpsAvailabilityAsync_mE0EC0FD97ADA72CC724CC3AE3EEDAD42CCEEF45B (intptr_t ___sessionHandle0, double ___latitude1, double ___longitude2, intptr_t ___context3, intptr_t ___callback4, intptr_t* ___out_future5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, double, double, intptr_t, intptr_t, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_checkVpsAvailabilityAsync)(___sessionHandle0, ___latitude1, ___longitude2, ___context3, ___callback4, ___out_future5);

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_getState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.PromiseState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_getState_m115154A89455590A328B78810B38FDF8109E9809 (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_state2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArVpsAvailabilityFuture_getState)(___sessionHandle0, ___future1, ___out_state2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_getResult(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.VpsAvailability&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_getResult_m75B1BFD702876875B220BC1C7C7DA572D0BF732A (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_result2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArVpsAvailabilityFuture_getResult)(___sessionHandle0, ___future1, ___out_result2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_cancel(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_cancel_mB2C3A82F4B39850867FA8397F0A80AC0FA67B175 (intptr_t ___sessionHandle0, intptr_t ___future1, int32_t* ___out_cancel2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArVpsAvailabilityFuture_cancel)(___sessionHandle0, ___future1, ___out_cancel2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.FutureApi/ExternApi::ArVpsAvailabilityFuture_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArVpsAvailabilityFuture_release_m8395508FBE8AC3869B87030514897202A3C81A8B (intptr_t ___future0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArVpsAvailabilityFuture_release)(___future0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GeospatialPoseApi_Create_m0C096F81F36D7CC2318460028A0997B9453C2545 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr geospatialPoseHandle = IntPtr.Zero;
		V_0 = (0);
		// ExternApi.ArGeospatialPose_create(sessionHandle, ref geospatialPoseHandle);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArGeospatialPose_create_m9B3D6053960C4D17E11E4F6475491905F5A26184(L_0, (&V_0), NULL);
		// return geospatialPoseHandle;
		intptr_t L_1 = V_0;
		V_1 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		intptr_t L_2 = V_1;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_Destroy_m4EE0D63D79433BFB4B95882143098A7E70CF8EE3 (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArGeospatialPose_destroy(geospatialPoseHandle);
		intptr_t L_0 = ___geospatialPoseHandle0;
		ExternApi_ArGeospatialPose_destroy_m3991B5A73EBD0C398126B9F57E0B0CF66E5786C1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::GetGeospatialPose(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_GetGeospatialPose_mD68C405D3B7352AA847A81BC52AB7AE3F62D8961 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___pose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExternApi.ArGeospatialPose_getLatitudeLongitude(
		//     sessionHandle, geospatialPoseHandle, ref pose.Latitude, ref pose.Longitude);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_2 = ___pose2;
		double* L_3 = (&L_2->___Latitude_0);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_4 = ___pose2;
		double* L_5 = (&L_4->___Longitude_1);
		ExternApi_ArGeospatialPose_getLatitudeLongitude_m03FDCDB7109DB82E0A477B2C8CB8AD6E74EAC55E(L_0, L_1, L_3, L_5, NULL);
		// ExternApi.ArGeospatialPose_getAltitude(
		//     sessionHandle, geospatialPoseHandle, ref pose.Altitude);
		intptr_t L_6 = ___sessionHandle0;
		intptr_t L_7 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_8 = ___pose2;
		double* L_9 = (&L_8->___Altitude_2);
		ExternApi_ArGeospatialPose_getAltitude_m7D88872F430766DCA4633EFC500EAB40F115935F(L_6, L_7, L_9, NULL);
		// ExternApi.ArGeospatialPose_getHeading(sessionHandle, geospatialPoseHandle,
		//                                       ref pose.Heading);
		intptr_t L_10 = ___sessionHandle0;
		intptr_t L_11 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_12 = ___pose2;
		double* L_13 = (&L_12->___Heading_3);
		ExternApi_ArGeospatialPose_getHeading_mC0B3FE2956E5040AF70F3CF9E47312198277C2CB(L_10, L_11, L_13, NULL);
		// ExternApi.ArGeospatialPose_getHeadingAccuracy(
		//     sessionHandle, geospatialPoseHandle, ref pose.HeadingAccuracy);
		intptr_t L_14 = ___sessionHandle0;
		intptr_t L_15 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_16 = ___pose2;
		double* L_17 = (&L_16->___HeadingAccuracy_4);
		ExternApi_ArGeospatialPose_getHeadingAccuracy_m2743AA9F2C8D09775B45CA1307BE0557B7767DE2(L_14, L_15, L_17, NULL);
		// ExternApi.ArGeospatialPose_getHorizontalAccuracy(
		//     sessionHandle, geospatialPoseHandle, ref pose.HorizontalAccuracy);
		intptr_t L_18 = ___sessionHandle0;
		intptr_t L_19 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_20 = ___pose2;
		double* L_21 = (&L_20->___HorizontalAccuracy_5);
		ExternApi_ArGeospatialPose_getHorizontalAccuracy_mE46EF70AD701245CDCA066A75380ABEE463AA871(L_18, L_19, L_21, NULL);
		// ExternApi.ArGeospatialPose_getVerticalAccuracy(
		//     sessionHandle, geospatialPoseHandle, ref pose.VerticalAccuracy);
		intptr_t L_22 = ___sessionHandle0;
		intptr_t L_23 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_24 = ___pose2;
		double* L_25 = (&L_24->___VerticalAccuracy_6);
		ExternApi_ArGeospatialPose_getVerticalAccuracy_mCA79C86B204BA17F247337975D9A0C8731733D41(L_22, L_23, L_25, NULL);
		// ApiQuaternion apiQuaternion = new ApiQuaternion();
		il2cpp_codegen_initobj((&V_0), sizeof(ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063));
		// ExternApi.ArGeospatialPose_getEastUpSouthQuaternion(
		//     sessionHandle, geospatialPoseHandle, ref apiQuaternion);
		intptr_t L_26 = ___sessionHandle0;
		intptr_t L_27 = ___geospatialPoseHandle1;
		ExternApi_ArGeospatialPose_getEastUpSouthQuaternion_mC78AC545348317710FBB36D9F353FF8D2E350326(L_26, L_27, (&V_0), NULL);
		// pose.EunRotation = apiQuaternion.ToUnityQuaternion();
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_28 = ___pose2;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Translators_ToUnityQuaternion_mFED0A8843CB2BC064E5BCAF5B2E0375F4162949B(L_29, NULL);
		L_28->___EunRotation_7 = L_30;
		// ExternApi.ArGeospatialPose_getOrientationYawAccuracy(
		//     sessionHandle, geospatialPoseHandle, ref pose.OrientationYawAccuracy);
		intptr_t L_31 = ___sessionHandle0;
		intptr_t L_32 = ___geospatialPoseHandle1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* L_33 = ___pose2;
		double* L_34 = (&L_33->___OrientationYawAccuracy_8);
		ExternApi_ArGeospatialPose_getOrientationYawAccuracy_m1FC94B3809DE3DF597C24E6DF53A41AEFC676173(L_31, L_32, L_34, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi__ctor_m5339921DBAAF91CF4E4D97AF52AE99BABC950C21 (GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_create_m9B3D6053960C4D17E11E4F6475491905F5A26184 (intptr_t ___sessionHandle0, intptr_t* ___outGeospatialPoseHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_create)(___sessionHandle0, ___outGeospatialPoseHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_destroy_m3991B5A73EBD0C398126B9F57E0B0CF66E5786C1 (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_destroy)(___geospatialPoseHandle0);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getLatitudeLongitude(System.IntPtr,System.IntPtr,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getLatitudeLongitude_m03FDCDB7109DB82E0A477B2C8CB8AD6E74EAC55E (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outLatitudeDegrees2, double* ___outLongitudeDegrees3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getLatitudeLongitude)(___sessionHandle0, ___geospatialPoseHandle1, ___outLatitudeDegrees2, ___outLongitudeDegrees3);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHorizontalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHorizontalAccuracy_mE46EF70AD701245CDCA066A75380ABEE463AA871 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHorizontalAccuracyMeters2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getHorizontalAccuracy)(___sessionHandle0, ___geospatialPoseHandle1, ___outHorizontalAccuracyMeters2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getVerticalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getVerticalAccuracy_mCA79C86B204BA17F247337975D9A0C8731733D41 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outVerticalAccuracyMeters2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getVerticalAccuracy)(___sessionHandle0, ___geospatialPoseHandle1, ___outVerticalAccuracyMeters2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getAltitude(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getAltitude_m7D88872F430766DCA4633EFC500EAB40F115935F (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outAltitudeMeters2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getAltitude)(___sessionHandle0, ___geospatialPoseHandle1, ___outAltitudeMeters2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeading(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeading_mC0B3FE2956E5040AF70F3CF9E47312198277C2CB (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingDegrees2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getHeading)(___sessionHandle0, ___geospatialPoseHandle1, ___outHeadingDegrees2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeadingAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeadingAccuracy_m2743AA9F2C8D09775B45CA1307BE0557B7767DE2 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingAccuracyDegrees2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getHeadingAccuracy)(___sessionHandle0, ___geospatialPoseHandle1, ___outHeadingAccuracyDegrees2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getEastUpSouthQuaternion(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getEastUpSouthQuaternion_mC78AC545348317710FBB36D9F353FF8D2E350326 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_orientation_quaternion_42, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getEastUpSouthQuaternion)(___sessionHandle0, ___geospatialPoseHandle1, ___eus_orientation_quaternion_42);

}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getOrientationYawAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getOrientationYawAccuracy_m1FC94B3809DE3DF597C24E6DF53A41AEFC676173 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outOrientationYawAccuracyDegrees2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, double*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArGeospatialPose_getOrientationYawAccuracy)(___sessionHandle0, ___geospatialPoseHandle1, ___outOrientationYawAccuracyDegrees2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_m68834854FFE09120418A1DDDF0181FA9A83ECA31 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Create(sessionHandle, Pose.identity);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		intptr_t L_2;
		L_2 = PoseApi_Create_mB74EF9F202A7F755F06A94B290CCBFB1787B34AC(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mB74EF9F202A7F755F06A94B290CCBFB1787B34AC (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// ApiPose apiPose = pose.ToApiPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_1;
		L_1 = Translators_ToApiPose_m4D960EF5E564EAA84C74A990D0DCC63F8667F294(L_0, NULL);
		V_0 = L_1;
		// IntPtr poseHandle = IntPtr.Zero;
		V_1 = (0);
		// ExternApi.ArPose_create(
		//     sessionHandle,
		//     ref apiPose,
		//     ref poseHandle);
		intptr_t L_2 = ___sessionHandle0;
		ExternApi_ArPose_create_m6D8C2A0C4D247678B6616D8B54B9BF0D3F5A6910(L_2, (&V_0), (&V_1), NULL);
		// return poseHandle;
		intptr_t L_3 = V_1;
		V_2 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		intptr_t L_4 = V_2;
		return L_4;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_m3974AF75E241EEE8BC165AC3EDD90533CBBEC92A (intptr_t ___poseHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArPose_destroy(poseHandle);
		intptr_t L_0 = ___poseHandle0;
		ExternApi_ArPose_destroy_m3937CA8E1BD9E5915272CA6502D4F1859B572389(L_0, NULL);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 PoseApi_ExtractPoseValue_m3A39F1F8C21E6A21A614F59133164C0D55F9AA58 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ApiPose apiPose = Pose.identity.ToApiPose();
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_1;
		L_1 = Translators_ToApiPose_m4D960EF5E564EAA84C74A990D0DCC63F8667F294(L_0, NULL);
		V_0 = L_1;
		// ExternApi.ArPose_getPoseRaw(
		//     sessionHandle,
		//     poseHandle,
		//     ref apiPose);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___poseHandle1;
		ExternApi_ArPose_getPoseRaw_mFB171945121BCF6380D3972B16B2ABE409B9D372(L_2, L_3, (&V_0), NULL);
		// return apiPose;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_4 = V_0;
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_5 = V_1;
		return L_5;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi__ctor_mDAF40A631DE7D4D3CCB9E1A77A193F717C24B551 (PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_m6D8C2A0C4D247678B6616D8B54B9BF0D3F5A6910 (intptr_t ___sessionHandle0, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_create)(___sessionHandle0, ___apiPose1, ___poseHandle2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m3937CA8E1BD9E5915272CA6502D4F1859B572389 (intptr_t ___poseHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_destroy)(___poseHandle0);

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_mFB171945121BCF6380D3972B16B2ABE409B9D372 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_getPoseRaw)(___sessionHandle0, ___poseHandle1, ___apiPose2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecordingConfigApi_Create_mF67A32CBD98DC9CBC644E34028896F474295DED5 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr configHandle = IntPtr.Zero;
		V_0 = (0);
		// return configHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi_Destroy_m849D091361FA77453548119660054ED9DEBE7448 (intptr_t ___recordingConfigHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi__ctor_mD41A38EE7A238832AD76E5CF1E0EAC11FB6CCA83 (RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m13D53986925E23A4A9EBD3DC488EFB317D77AEDC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (0);
		// return cloudAnchorHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_mD39E92FBE4C10E547E557460BF52B58FF7883680 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (0);
		// return cloudAnchorHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_mBF2F524AEF7AA8517B622172F9A690A75B3A7F3F (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _latestAuthToken = authToken;
		String_t* L_0 = ___authToken1;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0), (void*)L_0);
		// ExternApi.ArSession_setAuthToken(sessionHandle, authToken);
		intptr_t L_1 = ___sessionHandle0;
		String_t* L_2 = ___authToken1;
		ExternApi_ArSession_setAuthToken_m6AE7E0434580F512C85CF92C7392615E4BAB64E4(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_m7DEDF9BB7555E86C1598AC3E9DEDBACC3933A70C (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (string.IsNullOrEmpty(_latestAuthToken))
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_001e;
	}

IL_0012:
	{
		// ExternApi.ArSession_setAuthToken(sessionHandle, _latestAuthToken);
		intptr_t L_3 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		String_t* L_4 = ((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0;
		ExternApi_ArSession_setAuthToken_m6AE7E0434580F512C85CF92C7392615E4BAB64E4(L_3, L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_mF747C9B1F08E6B942C85A4040788A4B5F862F3A3 (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		V_0 = (0);
		// return cloudAnchorHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_mADD766240C66E844C64BC1A97DBDC9D0F61F3D60 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int featureMapQuality = (int)FeatureMapQuality.Insufficient;
		V_0 = 0;
		// return (FeatureMapQuality)featureMapQuality;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_m350B64450AFB85E72820E502E3D275DE0EAC8790 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiRecordingStatus apiStatus = ApiRecordingStatus.None;
		V_0 = 0;
		// return apiStatus.ToRecordingStatus();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToRecordingStatus_m246DD9D60F0C50370E66D50DD249B941824FBE86(L_0, NULL);
		V_1 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_mB14EAA552370F1C71DD672FB46D9E7C6AF951BAE (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		V_0 = ((int32_t)-2);
		// return status.ToRecordingResult();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToRecordingResult_m718AD14A2F520E92B4E751634A1C565382525C9E(L_0, NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_mDE2EE481118C87D932BC1F2D0BBA4C8FA989917D (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		V_0 = ((int32_t)-2);
		// return status.ToRecordingResult();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToRecordingResult_m718AD14A2F520E92B4E751634A1C565382525C9E(L_0, NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_m5A85615C4C4669EA49F78D40C3D2D5BA787F2528 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiPlaybackStatus apiStatus = ApiPlaybackStatus.None;
		V_0 = 0;
		// return apiStatus.ToPlaybackStatus();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToPlaybackStatus_mD9C44CE09C3BDD00FEBF23796E2E17E1A33FBCC6(L_0, NULL);
		V_1 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_m319112F6F7C2A657C054D9921B180F4338EDD326 (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		V_0 = ((int32_t)-2);
		// return status.ToPlaybackResult();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToPlaybackResult_m4375BE342296D2B0E814997F6BEDCA6077BEBD55(L_0, NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDatasetUri(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDatasetUri_mBD3714BD1C8CA8C74D22FB3122304F6DFA5BE817 (intptr_t ___sessionHandle0, String_t* ___datasetUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		V_0 = ((int32_t)-2);
		// return status.ToPlaybackResult();
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Translators_ToPlaybackResult_m4375BE342296D2B0E814997F6BEDCA6077BEBD55(L_0, NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.Internal.SessionApi::IsGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_IsGeospatialModeSupported_m2A666EF385F08AAF0B8755C47A1960CC8FBA5406 (intptr_t ___sessionHandle0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// FeatureSupported supported = FeatureSupported.Unknown;
		V_0 = 1;
		// int isSupported = 0;
		V_1 = 0;
		// ExternApi.ArSession_isGeospatialModeSupported(
		//     sessionHandle, mode.ToApiGeospatialMode(), ref isSupported);
		intptr_t L_0 = ___sessionHandle0;
		int32_t L_1 = ___mode1;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Translators_ToApiGeospatialMode_m258B8675892DFB03EF2C9DC4F91053073CD2AD8C(L_1, NULL);
		ExternApi_ArSession_isGeospatialModeSupported_m7A04B7A935BDC85E31D7D7FEDDD205279C09D04D(L_0, L_2, (&V_1), NULL);
		// supported = isSupported == 0 ?
		//     FeatureSupported.Unsupported : FeatureSupported.Supported;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 2;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// return supported;
		int32_t L_4 = V_0;
		V_2 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::AcquireEarth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_AcquireEarth_m464DFA121C2C7DF7F82DB080A99292905CA01CF8 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var earthHandle = IntPtr.Zero;
		V_0 = (0);
		// ExternApi.ArSession_acquireEarth(sessionHandle, ref earthHandle);
		intptr_t L_0 = ___sessionHandle0;
		ExternApi_ArSession_acquireEarth_mF1C53991B9B08A4A32FD2F27517764DD6E4E0CB4(L_0, (&V_0), NULL);
		// return earthHandle;
		intptr_t L_1 = V_0;
		V_1 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		intptr_t L_2 = V_1;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi__ctor_mDAC3C950DAFCC94738BE62B42C08A1F1F2CCA296 (SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi__cctor_mE6AF6382D884843DAB4007A02F8963D245FCDADE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string _latestAuthToken = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_StaticFields*)il2cpp_codegen_static_fields_for(SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D_il2cpp_TypeInfo_var))->____latestAuthToken_0), (void*)L_0);
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
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchor_m01FA52694188284EBE535B66DCD4D8BE27E214A0 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_resolveAndAcquireNewCloudAnchor_m7AFD4A654A351E7A5C580EBBACC92DCDD45D093A (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchorWithTtl_mE3C2E465F725D129BD5683582D9365F2B311D6DF (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, intptr_t* ___cloudAnchorHandle3, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_estimateFeatureMapQualityForHosting_mE60CE1E663D7E4F77F1EA9D2E8DAC5E045921C14 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, int32_t* ___featureMapQuality2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_isGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_isGeospatialModeSupported_m7A04B7A935BDC85E31D7D7FEDDD205279C09D04D (intptr_t ___sessionHandle0, int32_t ___mode1, int32_t* ___out_is_supported2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_isGeospatialModeSupported)(___sessionHandle0, ___mode1, ___out_is_supported2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_acquireEarth(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_acquireEarth_mF1C53991B9B08A4A32FD2F27517764DD6E4E0CB4 (intptr_t ___sessionHandle0, intptr_t* ___earthHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_acquireEarth)(___sessionHandle0, ___earthHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_m6AE7E0434580F512C85CF92C7392615E4BAB64E4 (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___authToken1' to native representation
	char* ____authToken1_marshaled = NULL;
	____authToken1_marshaled = il2cpp_codegen_marshal_string(___authToken1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_setAuthToken)(___sessionHandle0, ____authToken1_marshaled);

	// Marshaling cleanup of parameter '___authToken1' native representation
	il2cpp_codegen_marshal_free(____authToken1_marshaled);
	____authToken1_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.Track)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackApi_Create_m064BA61AA66C52D6FD5B3BB33AA5C94B0674A3D0 (intptr_t ___sessionHandle0, Track_t33BB000657D179174087DA9A156530F0DF0B90DC ___track1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr trackHandle = IntPtr.Zero;
		V_0 = (0);
		// return trackHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackApi_Destroy_m8F40BD61F5302446BE09AD4CC9A9A86342FCB834 (intptr_t ___trackHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackApi__ctor_m8C93432409B558B9DC9F7225937925071D24B69E (TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 Google.XR.ARCoreExtensions.Internal.TrackDataApi::GetFrameTimestamp(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TrackDataApi_GetFrameTimestamp_mE120E27292B10ABDD2716B79BB94D8689562AAB0 (intptr_t ___sessionHandle0, intptr_t ___trackDataHandle1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// long timestamp = 0L;
		V_0 = ((int64_t)0);
		// return timestamp;
		int64_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		int64_t L_1 = V_1;
		return L_1;
	}
}
// System.Byte[] Google.XR.ARCoreExtensions.Internal.TrackDataApi::GetData(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TrackDataApi_GetData_m805AFCEE13D7D58DFB90B98F8266F3E0470FEDB1 (intptr_t ___sessionHandle0, intptr_t ___trackDataHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// IntPtr dataPtr = IntPtr.Zero;
		V_0 = (0);
		// int size = 0;
		V_1 = 0;
		// byte[] data = new byte[size];
		int32_t L_0 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_2 = L_1;
		// if (size > 0)
		int32_t L_2 = V_1;
		V_3 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Marshal.Copy(dataPtr, data, 0, size);
		intptr_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_4, L_5, 0, L_6, NULL);
	}

IL_0024:
	{
		// return data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		V_4 = L_7;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_4;
		return L_8;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataApi_Release_mAED7EEC86EAD6E8C63D39119B2CEEE032FA1EF0A (intptr_t ___trackDataHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataApi__ctor_m2215D8DECD11532D6CCF68F170922C938FB003BD (TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackDataListApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackDataListApi_Create_m4AC07318E15FE502F19361891C0332784F5D83C2 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr handle = IntPtr.Zero;
		V_0 = (0);
		// return handle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataListApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataListApi_Destroy_m4053360C538E0B52B7B1576C9AF9C61E9F212A83 (intptr_t ___listHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Internal.TrackDataListApi::GetCount(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackDataListApi_GetCount_m4C7EB7A40780B79F0895CA2A6981DED715EF0CCC (intptr_t ___sessionHandle0, intptr_t ___listHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int count = 0;
		V_0 = 0;
		// return count;
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackDataListApi::AcquireItem(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackDataListApi_AcquireItem_mB196AA8F7C275158F94BE46A8B7F821178D61D1F (intptr_t ___sessionHandle0, intptr_t ___listHandle1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr trackDataHandle = IntPtr.Zero;
		V_0 = (0);
		// return trackDataHandle;
		intptr_t L_0 = V_0;
		V_1 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataListApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataListApi__ctor_mC0377162B3FE50A5BFC79ADFB7AAE77D564208DA (TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_mBD65220FB60A8965209CA0AED8298658C317E595_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_mDDF4F5F99A9C70C047E56686358B3330F11B8BBF_inline (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ___value0;
		((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mC4F2B27BEB506A5C0F7658C83C0994736490B65F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ZNear = value;
		float L_0 = ___value0;
		__this->___m_ZNear_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ZFar = value;
		float L_0 = ___value0;
		__this->___m_ZFar_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenWidth = value;
		float L_0 = ___value0;
		__this->___m_ScreenWidth_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenHeight = value;
		float L_0 = ___value0;
		__this->___m_ScreenHeight_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenOrientation = value;
		int32_t L_0 = ___value0;
		__this->___m_ScreenOrientation_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) 
{
	{
		// public long timestampNs => m_TimestampNs;
		int64_t L_0 = __this->___m_TimestampNs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativeConfigurationHandle => m_NativeConfigurationHandle;
		intptr_t L_0 = __this->___m_NativeConfigurationHandle_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Zero_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		float L_2 = ___value2;
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
