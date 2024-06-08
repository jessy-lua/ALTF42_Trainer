#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Suicide_Tip_Trigger_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Suicide_Tip_Trigger_BP.Suicide_Tip_Trigger_BP_C
// 0x0030 (0x02C8 - 0x0298)
class ASuicide_Tip_Trigger_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Overlap;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                In_Box_Extent;                                     // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ExecuteUbergraph_Suicide_Tip_Trigger_BP(int32 EntryPoint);
	void BndEvt__Suicide_Tip_Trigger_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Suicide_Tip_Trigger_BP_C">();
	}
	static class ASuicide_Tip_Trigger_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASuicide_Tip_Trigger_BP_C>();
	}
};
static_assert(alignof(ASuicide_Tip_Trigger_BP_C) == 0x000008, "Wrong alignment on ASuicide_Tip_Trigger_BP_C");
static_assert(sizeof(ASuicide_Tip_Trigger_BP_C) == 0x0002C8, "Wrong size on ASuicide_Tip_Trigger_BP_C");
static_assert(offsetof(ASuicide_Tip_Trigger_BP_C, UberGraphFrame) == 0x000298, "Member 'ASuicide_Tip_Trigger_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASuicide_Tip_Trigger_BP_C, Overlap) == 0x0002A0, "Member 'ASuicide_Tip_Trigger_BP_C::Overlap' has a wrong offset!");
static_assert(offsetof(ASuicide_Tip_Trigger_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ASuicide_Tip_Trigger_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASuicide_Tip_Trigger_BP_C, In_Box_Extent) == 0x0002B0, "Member 'ASuicide_Tip_Trigger_BP_C::In_Box_Extent' has a wrong offset!");

}
