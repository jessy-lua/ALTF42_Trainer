#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Costume_Bikini_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Costume_Bikini_BP.Costume_Bikini_BP_C.ExecuteUbergraph_Costume_Bikini_BP
// 0x0430 (0x0430 - 0x0000)
struct Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1; // 0x00F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2; // 0x01D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3; // 0x02C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x03A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF42_Bike_BP_Origin_C*               K2Node_DynamicCast_AsALTF42_Bike_BP_Origin;        // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388B[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x03CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x03CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388C[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x03D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388D[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP; // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON;  // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_;   // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_;  // 0x03FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388E[0x5];                                     // 0x03FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim; // 0x0400(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_; // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_; // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388F[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value; // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha; // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CustomTimeDilation_ImplicitCast; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP) == 0x000008, "Wrong alignment on Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP");
static_assert(sizeof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP) == 0x000430, "Wrong size on Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, EntryPoint) == 0x000000, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x000008, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1) == 0x0000F0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2) == 0x0001D8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3) == 0x0002C0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0003A8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_AsALTF42_Bike_BP_Origin) == 0x0003B0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_AsALTF42_Bike_BP_Origin' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_bSuccess) == 0x0003B8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x0003C0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_bSuccess_1) == 0x0003C8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0003C9, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x0003CA, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_AttachToComponent_ReturnValue_2) == 0x0003CB, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_AttachToComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_K2_AttachToComponent_ReturnValue_3) == 0x0003CC, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_K2_AttachToComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0003D0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_AsALS_Character_BPI) == 0x0003D8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_DynamicCast_bSuccess_2) == 0x0003E8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_Event_DeltaSeconds) == 0x0003EC, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP) == 0x0003F0, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON) == 0x0003F8, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_) == 0x0003F9, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_) == 0x0003FA, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim) == 0x000400, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_) == 0x000408, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_) == 0x000409, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value) == 0x000410, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha) == 0x000418, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000420, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP, K2Node_VariableSet_CustomTimeDilation_ImplicitCast) == 0x000428, "Member 'Costume_Bikini_BP_C_ExecuteUbergraph_Costume_Bikini_BP::K2Node_VariableSet_CustomTimeDilation_ImplicitCast' has a wrong offset!");

// Function Costume_Bikini_BP.Costume_Bikini_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Costume_Bikini_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Costume_Bikini_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on Costume_Bikini_BP_C_ReceiveTick");
static_assert(sizeof(Costume_Bikini_BP_C_ReceiveTick) == 0x000004, "Wrong size on Costume_Bikini_BP_C_ReceiveTick");
static_assert(offsetof(Costume_Bikini_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Costume_Bikini_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

