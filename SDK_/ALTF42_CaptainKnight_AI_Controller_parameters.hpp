#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF42_CaptainKnight_AI_Controller

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller
// 0x0018 (0x0018 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller) == 0x000008, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller) == 0x000018, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller, EntryPoint) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller::EntryPoint' has a wrong offset!");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller, K2Node_Event_PossessedPawn) == 0x000008, "Member 'ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller, CallFunc_RunBehaviorTree_ReturnValue) == 0x000010, "Member 'ALTF42_CaptainKnight_AI_Controller_C_ExecuteUbergraph_ALTF42_CaptainKnight_AI_Controller::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.F_RandomRoam
// 0x0001 (0x0001 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam final
{
public:
	bool                                          InputPin;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam) == 0x000001, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam) == 0x000001, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam, InputPin) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_F_RandomRoam::InputPin' has a wrong offset!");

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.F_SetPlayer
// 0x0001 (0x0001 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer final
{
public:
	bool                                          SeePlayer;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer) == 0x000001, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer) == 0x000001, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer, SeePlayer) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_F_SetPlayer::SeePlayer' has a wrong offset!");

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.F_TargetActor
// 0x0008 (0x0008 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor final
{
public:
	class UObject*                                TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor) == 0x000008, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor) == 0x000008, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor, TargetActor) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_F_TargetActor::TargetActor' has a wrong offset!");

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.F_TargetLocation_NotUse
// 0x0018 (0x0018 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse) == 0x000008, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse) == 0x000018, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse, TargetLocation) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_F_TargetLocation_NotUse::TargetLocation' has a wrong offset!");

// Function ALTF42_CaptainKnight_AI_Controller.ALTF42_CaptainKnight_AI_Controller_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess) == 0x000008, "Wrong alignment on ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess");
static_assert(sizeof(ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess) == 0x000008, "Wrong size on ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess");
static_assert(offsetof(ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'ALTF42_CaptainKnight_AI_Controller_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

