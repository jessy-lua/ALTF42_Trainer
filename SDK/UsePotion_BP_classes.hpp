#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UsePotion_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UsePotion_BP.UsePotion_BP_C
// 0x0010 (0x02A8 - 0x0298)
class AUsePotion_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Potion_02;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UsePotion_BP(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UsePotion_BP_C">();
	}
	static class AUsePotion_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUsePotion_BP_C>();
	}
};
static_assert(alignof(AUsePotion_BP_C) == 0x000008, "Wrong alignment on AUsePotion_BP_C");
static_assert(sizeof(AUsePotion_BP_C) == 0x0002A8, "Wrong size on AUsePotion_BP_C");
static_assert(offsetof(AUsePotion_BP_C, UberGraphFrame) == 0x000298, "Member 'AUsePotion_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUsePotion_BP_C, SM_Potion_02) == 0x0002A0, "Member 'AUsePotion_BP_C::SM_Potion_02' has a wrong offset!");

}
