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
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShipFire_BP.ShipFire_BP_C
// 0x0080 (0x0318 - 0x0298)
class AShipFire_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          CannonActivate_Zone;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Canonshot;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Explosion_Big_5;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   OnlyEditor_ViewSM;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Fire_Root;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fire_Check_TL__Direction_B37DE3D2483F9FE8EE91E3908FB4358A; // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36B8[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fire_Check_TL;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Fire_Loop_;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36B9[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Detect_Radius;                                     // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Playerble_Die_;                                    // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Absolute_STOP_;                                    // 0x02F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BA[0x2];                                     // 0x02F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Absolte_Stop_Zone_Size;                            // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Fire_ing_;                                         // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Absolute_Stop_Event(bool Param_Absolute_STOP_);
	void ExecuteUbergraph_ShipFire_BP(int32 EntryPoint);
	void Fire();
	void Fire_Check_TL__Distance_Check__EventFunc();
	void Fire_Check_TL__FinishedFunc();
	void Fire_Check_TL__UpdateFunc();
	void Fire_loop();
	void Stop_fire();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShipFire_BP_C">();
	}
	static class AShipFire_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShipFire_BP_C>();
	}
};
static_assert(alignof(AShipFire_BP_C) == 0x000008, "Wrong alignment on AShipFire_BP_C");
static_assert(sizeof(AShipFire_BP_C) == 0x000318, "Wrong size on AShipFire_BP_C");
static_assert(offsetof(AShipFire_BP_C, UberGraphFrame) == 0x000298, "Member 'AShipFire_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, CannonActivate_Zone) == 0x0002A0, "Member 'AShipFire_BP_C::CannonActivate_Zone' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Canonshot) == 0x0002A8, "Member 'AShipFire_BP_C::Canonshot' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, NS_Explosion_Big_5) == 0x0002B0, "Member 'AShipFire_BP_C::NS_Explosion_Big_5' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, OnlyEditor_ViewSM) == 0x0002B8, "Member 'AShipFire_BP_C::OnlyEditor_ViewSM' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Arrow) == 0x0002C0, "Member 'AShipFire_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Fire_Root) == 0x0002C8, "Member 'AShipFire_BP_C::Fire_Root' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'AShipFire_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Fire_Check_TL__Direction_B37DE3D2483F9FE8EE91E3908FB4358A) == 0x0002D8, "Member 'AShipFire_BP_C::Fire_Check_TL__Direction_B37DE3D2483F9FE8EE91E3908FB4358A' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Fire_Check_TL) == 0x0002E0, "Member 'AShipFire_BP_C::Fire_Check_TL' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Fire_Loop_) == 0x0002E8, "Member 'AShipFire_BP_C::Fire_Loop_' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Time) == 0x0002EC, "Member 'AShipFire_BP_C::Time' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Detect_Radius) == 0x0002F0, "Member 'AShipFire_BP_C::Detect_Radius' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Playerble_Die_) == 0x0002F4, "Member 'AShipFire_BP_C::Playerble_Die_' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Absolute_STOP_) == 0x0002F5, "Member 'AShipFire_BP_C::Absolute_STOP_' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Absolte_Stop_Zone_Size) == 0x0002F8, "Member 'AShipFire_BP_C::Absolte_Stop_Zone_Size' has a wrong offset!");
static_assert(offsetof(AShipFire_BP_C, Fire_ing_) == 0x000310, "Member 'AShipFire_BP_C::Fire_ing_' has a wrong offset!");

}

