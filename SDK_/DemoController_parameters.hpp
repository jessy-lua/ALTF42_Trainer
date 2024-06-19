#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DemoController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DemoController.DemoController_C.ExecuteUbergraph_DemoController
// 0x00A8 (0x00A8 - 0x0000)
struct DemoController_C_ExecuteUbergraph_DemoController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentPathIndex_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F0A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        CallFunc_GetCurrentPathPoints_ReturnValue;         // 0x0038(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F0B[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F0C[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DemoController_C_ExecuteUbergraph_DemoController) == 0x000008, "Wrong alignment on DemoController_C_ExecuteUbergraph_DemoController");
static_assert(sizeof(DemoController_C_ExecuteUbergraph_DemoController) == 0x0000A8, "Wrong size on DemoController_C_ExecuteUbergraph_DemoController");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, EntryPoint) == 0x000000, "Member 'DemoController_C_ExecuteUbergraph_DemoController::EntryPoint' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_GetCurrentPathIndex_ReturnValue) == 0x000004, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_GetCurrentPathIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, Temp_int_Array_Index_Variable) == 0x000008, "Member 'DemoController_C_ExecuteUbergraph_DemoController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'DemoController_C_ExecuteUbergraph_DemoController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'DemoController_C_ExecuteUbergraph_DemoController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_GetCurrentPathPoints_ReturnValue) == 0x000038, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_GetCurrentPathPoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Array_Get_Item) == 0x000048, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_K2_GetPawn_ReturnValue) == 0x000070, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoController_C_ExecuteUbergraph_DemoController, CallFunc_Add_VectorVector_ReturnValue) == 0x000090, "Member 'DemoController_C_ExecuteUbergraph_DemoController::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function DemoController.DemoController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct DemoController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DemoController_C_ReceiveTick) == 0x000004, "Wrong alignment on DemoController_C_ReceiveTick");
static_assert(sizeof(DemoController_C_ReceiveTick) == 0x000004, "Wrong size on DemoController_C_ReceiveTick");
static_assert(offsetof(DemoController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'DemoController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
