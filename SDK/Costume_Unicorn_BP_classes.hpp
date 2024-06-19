#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Costume_Unicorn_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Costume_Unicorn_BP.Costume_Unicorn_BP_C
// 0x0098 (0x0330 - 0x0298)
class ACostume_Unicorn_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Unicorn_Tail_Effect;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Unicorn_Tail;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Unicron_Head;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Costume_Location;                                  // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               Costume_Rotation;                                  // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FVector                                Costume_Tail_Location;                             // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               Costume_Tail_Rotation;                             // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CannonBall_;                                       // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_385C[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AUnlockLocation_BP_C*                   What_Unlock_Area;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Costume_TakeOFF();
	void ExecuteUbergraph_Costume_Unicorn_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UnicornTail_Effect_OnOff(bool ON_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Costume_Unicorn_BP_C">();
	}
	static class ACostume_Unicorn_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACostume_Unicorn_BP_C>();
	}
};
static_assert(alignof(ACostume_Unicorn_BP_C) == 0x000008, "Wrong alignment on ACostume_Unicorn_BP_C");
static_assert(sizeof(ACostume_Unicorn_BP_C) == 0x000330, "Wrong size on ACostume_Unicorn_BP_C");
static_assert(offsetof(ACostume_Unicorn_BP_C, UberGraphFrame) == 0x000298, "Member 'ACostume_Unicorn_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Unicorn_Tail_Effect) == 0x0002A0, "Member 'ACostume_Unicorn_BP_C::Unicorn_Tail_Effect' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Unicorn_Tail) == 0x0002A8, "Member 'ACostume_Unicorn_BP_C::Unicorn_Tail' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Unicron_Head) == 0x0002B0, "Member 'ACostume_Unicorn_BP_C::Unicron_Head' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'ACostume_Unicorn_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Costume_Location) == 0x0002C0, "Member 'ACostume_Unicorn_BP_C::Costume_Location' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Costume_Rotation) == 0x0002D8, "Member 'ACostume_Unicorn_BP_C::Costume_Rotation' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Costume_Tail_Location) == 0x0002F0, "Member 'ACostume_Unicorn_BP_C::Costume_Tail_Location' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, Costume_Tail_Rotation) == 0x000308, "Member 'ACostume_Unicorn_BP_C::Costume_Tail_Rotation' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, CannonBall_) == 0x000320, "Member 'ACostume_Unicorn_BP_C::CannonBall_' has a wrong offset!");
static_assert(offsetof(ACostume_Unicorn_BP_C, What_Unlock_Area) == 0x000328, "Member 'ACostume_Unicorn_BP_C::What_Unlock_Area' has a wrong offset!");

}

