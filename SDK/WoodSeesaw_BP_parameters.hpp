#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WoodSeesaw_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WoodSeesaw_BP.WoodSeesaw_BP_C.BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'WoodSeesaw_BP_C_BndEvt__S_Mossy_Tree_Log_rdkeg_high_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function WoodSeesaw_BP.WoodSeesaw_BP_C.ExecuteUbergraph_WoodSeesaw_BP
// 0x0250 (0x0250 - 0x0000)
struct WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3438[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0058(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3439[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_343A[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP) == 0x000008, "Wrong alignment on WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP");
static_assert(sizeof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP) == 0x000250, "Wrong size on WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, EntryPoint) == 0x000000, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_ComponentBoundEvent_HitComponent) == 0x000028, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000030, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000038, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000040, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_ComponentBoundEvent_Hit) == 0x000058, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x000140, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000150, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, Temp_bool_IsClosed_Variable) == 0x000238, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000239, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000240, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000248, "Member 'WoodSeesaw_BP_C_ExecuteUbergraph_WoodSeesaw_BP::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

}

