#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Johnson_BP

#include "Basic.hpp"

#include "AI_StepTalk_WhoOrWhere_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Johnson_BP.NPC_Johnson_BP_C
// 0x00A0 (0x0338 - 0x0298)
class ANPC_Johnson_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Overlap_TalkCheck;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Skeleton_Cloth_UnGrp;                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Skeleton_Hat;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Skeleton;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       ALTF42_Char;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OverlapBoxSize;                                    // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SecondJohnson_;                                    // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          NPC_Talking_;                                      // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTalking_;                                     // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TextJumpPossible;                                  // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TalkInteger;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTalk;                                           // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EF[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Talk_Npc_Name;                                     // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                Talk_NPC_Image;                                    // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   Talk_Speak_Text_;                                  // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EAI_StepTalk_WhoOrWhere                       Who_Npc;                                           // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__NPC_Johnson_BP_Overlap_TalkCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_NPC_Johnson_BP(int32 EntryPoint);
	void NextTalk();
	void Talk_End_Event();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Johnson_BP_C">();
	}
	static class ANPC_Johnson_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Johnson_BP_C>();
	}
};
static_assert(alignof(ANPC_Johnson_BP_C) == 0x000008, "Wrong alignment on ANPC_Johnson_BP_C");
static_assert(sizeof(ANPC_Johnson_BP_C) == 0x000338, "Wrong size on ANPC_Johnson_BP_C");
static_assert(offsetof(ANPC_Johnson_BP_C, UberGraphFrame) == 0x000298, "Member 'ANPC_Johnson_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, Overlap_TalkCheck) == 0x0002A0, "Member 'ANPC_Johnson_BP_C::Overlap_TalkCheck' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, SK_Skeleton_Cloth_UnGrp) == 0x0002A8, "Member 'ANPC_Johnson_BP_C::SK_Skeleton_Cloth_UnGrp' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, SM_Skeleton_Hat) == 0x0002B0, "Member 'ANPC_Johnson_BP_C::SM_Skeleton_Hat' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, SK_Skeleton) == 0x0002B8, "Member 'ANPC_Johnson_BP_C::SK_Skeleton' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, DefaultSceneRoot) == 0x0002C0, "Member 'ANPC_Johnson_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, ALTF42_Char) == 0x0002C8, "Member 'ANPC_Johnson_BP_C::ALTF42_Char' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, OverlapBoxSize) == 0x0002D0, "Member 'ANPC_Johnson_BP_C::OverlapBoxSize' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, SecondJohnson_) == 0x0002E8, "Member 'ANPC_Johnson_BP_C::SecondJohnson_' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, NPC_Talking_) == 0x0002E9, "Member 'ANPC_Johnson_BP_C::NPC_Talking_' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, FirstTalking_) == 0x0002EA, "Member 'ANPC_Johnson_BP_C::FirstTalking_' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, TextJumpPossible) == 0x0002EB, "Member 'ANPC_Johnson_BP_C::TextJumpPossible' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, TalkInteger) == 0x0002EC, "Member 'ANPC_Johnson_BP_C::TalkInteger' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, MaxTalk) == 0x0002F0, "Member 'ANPC_Johnson_BP_C::MaxTalk' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, Talk_Npc_Name) == 0x0002F8, "Member 'ANPC_Johnson_BP_C::Talk_Npc_Name' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, Talk_NPC_Image) == 0x000310, "Member 'ANPC_Johnson_BP_C::Talk_NPC_Image' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, Talk_Speak_Text_) == 0x000318, "Member 'ANPC_Johnson_BP_C::Talk_Speak_Text_' has a wrong offset!");
static_assert(offsetof(ANPC_Johnson_BP_C, Who_Npc) == 0x000330, "Member 'ANPC_Johnson_BP_C::Who_Npc' has a wrong offset!");

}
