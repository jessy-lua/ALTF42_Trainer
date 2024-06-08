#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeSlow_Snail_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TimeSlow_Snail_BP.TimeSlow_Snail_BP_C.ExecuteUbergraph_TimeSlow_Snail_BP
// 0x0180 (0x0180 - 0x0000)
struct TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3489[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_;   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_;  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348A[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_; // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348B[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348C[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0090(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348D[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_CustomTimeDilation_ImplicitCast; // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP) == 0x000008, "Wrong alignment on TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP");
static_assert(sizeof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP) == 0x000180, "Wrong size on TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, EntryPoint) == 0x000000, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_RLerp_ReturnValue) == 0x000008, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_DynamicCast_AsALS_Character_BPI) == 0x000028, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP) == 0x000040, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON) == 0x000048, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_) == 0x000049, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_) == 0x00004A, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim) == 0x000050, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_) == 0x000058, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_) == 0x000059, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value) == 0x000060, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha) == 0x000068, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000070, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000078, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x000080, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000090, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000178, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP, K2Node_VariableSet_CustomTimeDilation_ImplicitCast) == 0x00017C, "Member 'TimeSlow_Snail_BP_C_ExecuteUbergraph_TimeSlow_Snail_BP::K2Node_VariableSet_CustomTimeDilation_ImplicitCast' has a wrong offset!");

// Function TimeSlow_Snail_BP.TimeSlow_Snail_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct TimeSlow_Snail_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeSlow_Snail_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on TimeSlow_Snail_BP_C_ReceiveTick");
static_assert(sizeof(TimeSlow_Snail_BP_C_ReceiveTick) == 0x000004, "Wrong size on TimeSlow_Snail_BP_C_ReceiveTick");
static_assert(offsetof(TimeSlow_Snail_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'TimeSlow_Snail_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
