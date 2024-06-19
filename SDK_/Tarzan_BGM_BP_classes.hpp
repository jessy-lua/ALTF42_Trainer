#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tarzan_BGM_BP

#include "Basic.hpp"

#include "AI_StepTalk_WhoOrWhere_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tarzan_BGM_BP.Tarzan_BGM_BP_C
// 0x0088 (0x0320 - 0x0298)
class ATarzan_BGM_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Overlap;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        TarzanBGM;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SpawnSound;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GetSound;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   Talk_Npc_Name;                                     // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                Talk_NPC_Image;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   Talk_Speak_Text_;                                  // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Talk_Integer;                                      // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTalk;                                           // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NPC_TalkStart_;                                    // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A8[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AALTF4_Loco_BP_C*                       ALTF42_Char;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TextJumpPossible;                                  // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAI_StepTalk_WhoOrWhere                       Who_NPC;                                           // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Tarzan_BGM_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Tarzan_BGM_BP(int32 EntryPoint);
	void LevelBGM_Spawn_Start(class USoundBase* Param_SpawnSound, float Sound_Pitch, float Fade_IN_Time, float MaxVolume, const EAudioFaderCurve FadeCurve);
	void LevelBGM_Spawn_Stop(float FadeOutTime, float Fade_Out_Volume);
	void NextTalk();
	void ReceiveBeginPlay();
	void Talk_End_Event();
	void TarzanBGM_Play();
	void TarzanBGM_Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tarzan_BGM_BP_C">();
	}
	static class ATarzan_BGM_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATarzan_BGM_BP_C>();
	}
};
static_assert(alignof(ATarzan_BGM_BP_C) == 0x000008, "Wrong alignment on ATarzan_BGM_BP_C");
static_assert(sizeof(ATarzan_BGM_BP_C) == 0x000320, "Wrong size on ATarzan_BGM_BP_C");
static_assert(offsetof(ATarzan_BGM_BP_C, UberGraphFrame) == 0x000298, "Member 'ATarzan_BGM_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Overlap) == 0x0002A0, "Member 'ATarzan_BGM_BP_C::Overlap' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, TarzanBGM) == 0x0002A8, "Member 'ATarzan_BGM_BP_C::TarzanBGM' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'ATarzan_BGM_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, SpawnSound) == 0x0002B8, "Member 'ATarzan_BGM_BP_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, GetSound) == 0x0002C0, "Member 'ATarzan_BGM_BP_C::GetSound' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Talk_Npc_Name) == 0x0002C8, "Member 'ATarzan_BGM_BP_C::Talk_Npc_Name' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Talk_NPC_Image) == 0x0002E0, "Member 'ATarzan_BGM_BP_C::Talk_NPC_Image' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Talk_Speak_Text_) == 0x0002E8, "Member 'ATarzan_BGM_BP_C::Talk_Speak_Text_' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Talk_Integer) == 0x000300, "Member 'ATarzan_BGM_BP_C::Talk_Integer' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, MaxTalk) == 0x000304, "Member 'ATarzan_BGM_BP_C::MaxTalk' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, NPC_TalkStart_) == 0x000308, "Member 'ATarzan_BGM_BP_C::NPC_TalkStart_' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, ALTF42_Char) == 0x000310, "Member 'ATarzan_BGM_BP_C::ALTF42_Char' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, TextJumpPossible) == 0x000318, "Member 'ATarzan_BGM_BP_C::TextJumpPossible' has a wrong offset!");
static_assert(offsetof(ATarzan_BGM_BP_C, Who_NPC) == 0x000319, "Member 'ATarzan_BGM_BP_C::Who_NPC' has a wrong offset!");

}

