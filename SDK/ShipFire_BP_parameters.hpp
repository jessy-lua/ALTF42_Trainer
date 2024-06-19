#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShipFire_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ShipFire_BP.ShipFire_BP_C.Absolute_Stop_Event
// 0x0001 (0x0001 - 0x0000)
struct ShipFire_BP_C_Absolute_Stop_Event final
{
public:
	bool                                          Param_Absolute_STOP_;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShipFire_BP_C_Absolute_Stop_Event) == 0x000001, "Wrong alignment on ShipFire_BP_C_Absolute_Stop_Event");
static_assert(sizeof(ShipFire_BP_C_Absolute_Stop_Event) == 0x000001, "Wrong size on ShipFire_BP_C_Absolute_Stop_Event");
static_assert(offsetof(ShipFire_BP_C_Absolute_Stop_Event, Param_Absolute_STOP_) == 0x000000, "Member 'ShipFire_BP_C_Absolute_Stop_Event::Param_Absolute_STOP_' has a wrong offset!");

// Function ShipFire_BP.ShipFire_BP_C.ExecuteUbergraph_ShipFire_BP
// 0x00C0 (0x00C0 - 0x0000)
struct ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Absolute_STOP_;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BC[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProjectile_5_C*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BD[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverlappingActor_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP) == 0x000010, "Wrong alignment on ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP");
static_assert(sizeof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP) == 0x0000C0, "Wrong size on ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, EntryPoint) == 0x000000, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000090, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, K2Node_CustomEvent_Absolute_STOP_) == 0x000098, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::K2Node_CustomEvent_Absolute_STOP_' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A0, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, Temp_bool_Has_Been_Initd_Variable_1) == 0x0000A8, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, Temp_bool_IsClosed_Variable_1) == 0x0000A9, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_BooleanOR_ReturnValue) == 0x0000AA, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000B0, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP, CallFunc_IsOverlappingActor_ReturnValue) == 0x0000B8, "Member 'ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP::CallFunc_IsOverlappingActor_ReturnValue' has a wrong offset!");

}

