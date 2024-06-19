#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaterDie_Overlap_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WaterDie_Overlap_BP.WaterDie_Overlap_BP_C.BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'WaterDie_Overlap_BP_C_BndEvt__Water_Die_OVerlap_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function WaterDie_Overlap_BP.WaterDie_Overlap_BP_C.ExecuteUbergraph_WaterDie_Overlap_BP
// 0x0270 (0x0270 - 0x0000)
struct WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3600[0x1];                                     // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3601[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3602[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAI_FieldDefault_Enemy_BP_C*            K2Node_DynamicCast_AsAI_Field_Default_Enemy_BP;    // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3603[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3604[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AALTF42_Bike_BP_Origin_C*               K2Node_DynamicCast_AsALTF42_Bike_BP_Origin;        // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3605[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWaterDie_Widget_C*                     CallFunc_Create_ReturnValue;                       // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3606[0x6];                                     // 0x0222(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3607[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP) == 0x000008, "Wrong alignment on WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP");
static_assert(sizeof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP) == 0x000270, "Wrong size on WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, EntryPoint) == 0x000000, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, Temp_bool_IsClosed_Variable) == 0x000110, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_bBlockingHit) == 0x000111, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_bInitialOverlap) == 0x000112, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_Time) == 0x000114, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_Distance) == 0x000118, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_Location) == 0x000120, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_ImpactPoint) == 0x000138, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_Normal) == 0x000150, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_ImpactNormal) == 0x000168, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_PhysMat) == 0x000180, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_HitActor) == 0x000188, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_HitComponent) == 0x000190, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_HitBoneName) == 0x000198, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_BoneName) == 0x0001A0, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_HitItem) == 0x0001A8, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_ElementIndex) == 0x0001AC, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_FaceIndex) == 0x0001B0, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_TraceStart) == 0x0001B8, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakHitResult_TraceEnd) == 0x0001D0, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_AsAI_Field_Default_Enemy_BP) == 0x0001E8, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_AsAI_Field_Default_Enemy_BP' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x0001F8, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_bSuccess_1) == 0x000200, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_AsALTF42_Bike_BP_Origin) == 0x000208, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_AsALTF42_Bike_BP_Origin' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, K2Node_DynamicCast_bSuccess_2) == 0x000210, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_Create_ReturnValue) == 0x000218, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000220, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, Temp_bool_IsClosed_Variable_1) == 0x000221, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000228, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000230, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakVector_X) == 0x000248, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakVector_Y) == 0x000250, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_BreakVector_Z) == 0x000258, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, Temp_bool_Has_Been_Initd_Variable_1) == 0x000260, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_Delay_Duration_ImplicitCast) == 0x000264, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000268, "Member 'WaterDie_Overlap_BP_C_ExecuteUbergraph_WaterDie_Overlap_BP::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

}

