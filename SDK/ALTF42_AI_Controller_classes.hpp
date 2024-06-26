#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF42_AI_Controller

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ALTF42_AI_Controller.ALTF42_AI_Controller_C
// 0x0030 (0x03F0 - 0x03C0)
class AALTF42_AI_Controller_C final : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTickOptToolkitMimicComponent*          TickOptToolkitMimic;                               // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   SetPlayer_BBKey;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Roam_BBKey;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SetTarget_BBKey;                                   // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ALTF42_AI_Controller(int32 EntryPoint);
	void F_RandomRoam(bool InputPin);
	void F_SetPlayer(bool BoolValue);
	void F_TargetActor(class UObject* TargetActor);
	void ReceivePossess(class APawn* PossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALTF42_AI_Controller_C">();
	}
	static class AALTF42_AI_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AALTF42_AI_Controller_C>();
	}
};
static_assert(alignof(AALTF42_AI_Controller_C) == 0x000008, "Wrong alignment on AALTF42_AI_Controller_C");
static_assert(sizeof(AALTF42_AI_Controller_C) == 0x0003F0, "Wrong size on AALTF42_AI_Controller_C");
static_assert(offsetof(AALTF42_AI_Controller_C, UberGraphFrame) == 0x0003C0, "Member 'AALTF42_AI_Controller_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AALTF42_AI_Controller_C, TickOptToolkitMimic) == 0x0003C8, "Member 'AALTF42_AI_Controller_C::TickOptToolkitMimic' has a wrong offset!");
static_assert(offsetof(AALTF42_AI_Controller_C, AIPerception) == 0x0003D0, "Member 'AALTF42_AI_Controller_C::AIPerception' has a wrong offset!");
static_assert(offsetof(AALTF42_AI_Controller_C, SetPlayer_BBKey) == 0x0003D8, "Member 'AALTF42_AI_Controller_C::SetPlayer_BBKey' has a wrong offset!");
static_assert(offsetof(AALTF42_AI_Controller_C, Roam_BBKey) == 0x0003E0, "Member 'AALTF42_AI_Controller_C::Roam_BBKey' has a wrong offset!");
static_assert(offsetof(AALTF42_AI_Controller_C, SetTarget_BBKey) == 0x0003E8, "Member 'AALTF42_AI_Controller_C::SetTarget_BBKey' has a wrong offset!");

}

