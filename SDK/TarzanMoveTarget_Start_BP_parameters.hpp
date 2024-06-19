#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TarzanMoveTarget_Start_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TarzanMoveTarget_Start_BP.TarzanMoveTarget_Start_BP_C.BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F84[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'TarzanMoveTarget_Start_BP_C_BndEvt__TarzanMoveTarget_Start_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function TarzanMoveTarget_Start_BP.TarzanMoveTarget_Start_BP_C.ExecuteUbergraph_TarzanMoveTarget_Start_BP
// 0x0120 (0x0120 - 0x0000)
struct TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F85[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F86[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMH_Tarzan_BP_C*                        K2Node_DynamicCast_AsMH_Tarzan_BP;                 // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP) == 0x000008, "Wrong alignment on TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP");
static_assert(sizeof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP) == 0x000120, "Wrong size on TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, EntryPoint) == 0x000000, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_DynamicCast_AsMH_Tarzan_BP) == 0x000110, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_DynamicCast_AsMH_Tarzan_BP' has a wrong offset!");
static_assert(offsetof(TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'TarzanMoveTarget_Start_BP_C_ExecuteUbergraph_TarzanMoveTarget_Start_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

