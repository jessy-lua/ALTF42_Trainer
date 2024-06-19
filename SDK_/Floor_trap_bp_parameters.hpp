#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Floor_trap_bp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function floor_trap_bp.floor_trap_bp_C.BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3585[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Floor_trap_bp_C_BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function floor_trap_bp.floor_trap_bp_C.ExecuteUbergraph_floor_trap_bp
// 0x0418 (0x0418 - 0x0000)
struct Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3586[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3587[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3588[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3589[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_358A[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x0130(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1; // 0x0218(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0330(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp) == 0x000008, "Wrong alignment on Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp");
static_assert(sizeof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp) == 0x000418, "Wrong size on Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, EntryPoint) == 0x000000, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, Temp_bool_IsClosed_Variable) == 0x000110, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000118, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000120, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_BooleanOR_ReturnValue) == 0x000121, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, K2Node_Event_DeltaSeconds) == 0x000124, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, Temp_bool_IsClosed_Variable_1) == 0x000128, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, Temp_bool_Has_Been_Initd_Variable_1) == 0x000129, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x000130, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1) == 0x000218, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000300, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_VLerp_ReturnValue) == 0x000318, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000330, "Member 'Floor_trap_bp_C_ExecuteUbergraph_floor_trap_bp::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function floor_trap_bp.floor_trap_bp_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Floor_trap_bp_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Floor_trap_bp_C_ReceiveTick) == 0x000004, "Wrong alignment on Floor_trap_bp_C_ReceiveTick");
static_assert(sizeof(Floor_trap_bp_C_ReceiveTick) == 0x000004, "Wrong size on Floor_trap_bp_C_ReceiveTick");
static_assert(offsetof(Floor_trap_bp_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Floor_trap_bp_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function floor_trap_bp.floor_trap_bp_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct Floor_trap_bp_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Floor_trap_bp_C_UserConstructionScript) == 0x000008, "Wrong alignment on Floor_trap_bp_C_UserConstructionScript");
static_assert(sizeof(Floor_trap_bp_C_UserConstructionScript) == 0x000018, "Wrong size on Floor_trap_bp_C_UserConstructionScript");
static_assert(offsetof(Floor_trap_bp_C_UserConstructionScript, CallFunc_GetSocketLocation_ReturnValue) == 0x000000, "Member 'Floor_trap_bp_C_UserConstructionScript::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

}

