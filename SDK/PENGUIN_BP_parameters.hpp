#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PENGUIN_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PENGUIN_BP.PENGUIN_BP_C.ExecuteUbergraph_PENGUIN_BP
// 0x0118 (0x0118 - 0x0000)
struct PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16F7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP) == 0x000008, "Wrong alignment on PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP");
static_assert(sizeof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP) == 0x000118, "Wrong size on PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP");
static_assert(offsetof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP, EntryPoint) == 0x000000, "Member 'PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000028, "Member 'PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000110, "Member 'PENGUIN_BP_C_ExecuteUbergraph_PENGUIN_BP::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");

}
