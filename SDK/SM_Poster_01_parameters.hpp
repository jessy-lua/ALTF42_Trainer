#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_Poster_01

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SM_Poster_01.SM_Poster_01_C.ExecuteUbergraph_SM_Poster_01
// 0x01C0 (0x01C0 - 0x0000)
struct SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4173[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00A8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x01A0(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01) == 0x000010, "Wrong alignment on SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01");
static_assert(sizeof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01) == 0x0001C0, "Wrong size on SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, EntryPoint) == 0x000000, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, Temp_struct_Variable) == 0x000010, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000070, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, CallFunc_AddComponent_ReturnValue) == 0x000088, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, CallFunc_Add_VectorVector_ReturnValue) == 0x000090, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000A8, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, K2Node_Event_OtherActor) == 0x000190, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, CallFunc_GetPlayerController_ReturnValue) == 0x000198, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01, K2Node_InputKeyEvent_Key) == 0x0001A0, "Member 'SM_Poster_01_C_ExecuteUbergraph_SM_Poster_01::K2Node_InputKeyEvent_Key' has a wrong offset!");

// Function SM_Poster_01.SM_Poster_01_C.InpActEvt_E_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0");
static_assert(sizeof(SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0");
static_assert(offsetof(SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'SM_Poster_01_C_InpActEvt_E_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function SM_Poster_01.SM_Poster_01_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct SM_Poster_01_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SM_Poster_01_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on SM_Poster_01_C_ReceiveActorBeginOverlap");
static_assert(sizeof(SM_Poster_01_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on SM_Poster_01_C_ReceiveActorBeginOverlap");
static_assert(offsetof(SM_Poster_01_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'SM_Poster_01_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

