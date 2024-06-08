#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Costume_Manatee_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Costume_Manatee_BP.Costume_Manatee_BP_C
// 0x0048 (0x02E0 - 0x0298)
class ACostume_Manatee_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Manatee_SK;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Costume_Location;                                  // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               Costume_Rotation;                                  // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void Char_SK_Setup();
	void Costume_TakeOFF();
	void ExecuteUbergraph_Costume_Manatee_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Costume_Manatee_BP_C">();
	}
	static class ACostume_Manatee_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACostume_Manatee_BP_C>();
	}
};
static_assert(alignof(ACostume_Manatee_BP_C) == 0x000008, "Wrong alignment on ACostume_Manatee_BP_C");
static_assert(sizeof(ACostume_Manatee_BP_C) == 0x0002E0, "Wrong size on ACostume_Manatee_BP_C");
static_assert(offsetof(ACostume_Manatee_BP_C, UberGraphFrame) == 0x000298, "Member 'ACostume_Manatee_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACostume_Manatee_BP_C, Manatee_SK) == 0x0002A0, "Member 'ACostume_Manatee_BP_C::Manatee_SK' has a wrong offset!");
static_assert(offsetof(ACostume_Manatee_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ACostume_Manatee_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACostume_Manatee_BP_C, Costume_Location) == 0x0002B0, "Member 'ACostume_Manatee_BP_C::Costume_Location' has a wrong offset!");
static_assert(offsetof(ACostume_Manatee_BP_C, Costume_Rotation) == 0x0002C8, "Member 'ACostume_Manatee_BP_C::Costume_Rotation' has a wrong offset!");

}
