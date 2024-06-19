#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrapDoor_Modify

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TrapDoor_Modify.BP_TrapDoor_Modify_C.BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_TrapDoor_Modify_C_BndEvt__BP_TrapDoor_Modify_BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_TrapDoor_Modify.BP_TrapDoor_Modify_C.ExecuteUbergraph_BP_TrapDoor_Modify
// 0x0330 (0x0330 - 0x0000)
struct BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A9[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AA[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0130(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AB[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0238(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMH_Tarzan_BP_C*                        K2Node_DynamicCast_AsMH_Tarzan_BP;                 // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AC[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify) == 0x000008, "Wrong alignment on BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify");
static_assert(sizeof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify) == 0x000330, "Wrong size on BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, EntryPoint) == 0x000000, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_MakeRotator_ReturnValue_1) == 0x000020, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000040, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_BooleanAND_ReturnValue_1) == 0x000129, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000130, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000218, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_OtherActor) == 0x000220, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_OtherComp) == 0x000228, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000230, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_bFromSweep) == 0x000234, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_ComponentBoundEvent_SweepResult) == 0x000238, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_DynamicCast_AsMH_Tarzan_BP) == 0x000320, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_DynamicCast_AsMH_Tarzan_BP' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, K2Node_DynamicCast_bSuccess) == 0x000328, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify, CallFunc_Delay_Duration_ImplicitCast) == 0x00032C, "Member 'BP_TrapDoor_Modify_C_ExecuteUbergraph_BP_TrapDoor_Modify::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_TrapDoor_Modify.BP_TrapDoor_Modify_C.MetalMatOverride
// 0x0010 (0x0010 - 0x0000)
struct BP_TrapDoor_Modify_C_MetalMatOverride final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrapDoor_Modify_C_MetalMatOverride) == 0x000008, "Wrong alignment on BP_TrapDoor_Modify_C_MetalMatOverride");
static_assert(sizeof(BP_TrapDoor_Modify_C_MetalMatOverride) == 0x000010, "Wrong size on BP_TrapDoor_Modify_C_MetalMatOverride");
static_assert(offsetof(BP_TrapDoor_Modify_C_MetalMatOverride, Material) == 0x000000, "Member 'BP_TrapDoor_Modify_C_MetalMatOverride::Material' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_MetalMatOverride, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_TrapDoor_Modify_C_MetalMatOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_TrapDoor_Modify.BP_TrapDoor_Modify_C.WoodMatOverride
// 0x0010 (0x0010 - 0x0000)
struct BP_TrapDoor_Modify_C_WoodMatOverride final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrapDoor_Modify_C_WoodMatOverride) == 0x000008, "Wrong alignment on BP_TrapDoor_Modify_C_WoodMatOverride");
static_assert(sizeof(BP_TrapDoor_Modify_C_WoodMatOverride) == 0x000010, "Wrong size on BP_TrapDoor_Modify_C_WoodMatOverride");
static_assert(offsetof(BP_TrapDoor_Modify_C_WoodMatOverride, Material) == 0x000000, "Member 'BP_TrapDoor_Modify_C_WoodMatOverride::Material' has a wrong offset!");
static_assert(offsetof(BP_TrapDoor_Modify_C_WoodMatOverride, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_TrapDoor_Modify_C_WoodMatOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
