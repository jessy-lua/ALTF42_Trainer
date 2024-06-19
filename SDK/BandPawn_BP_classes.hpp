#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BandPawn_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BandPawn_BP.BandPawn_BP_C
// 0x00C0 (0x03E0 - 0x0320)
class ABandPawn_BP_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      ManHit_Collision;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BoyHit_Collision;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      GoblinHit_Collision;                               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BandBGM;                                           // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Lute;                                           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Peasant_man;                                    // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Horn_wood;                                         // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Peasant_Boy;                                    // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Drum;                                           // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Stick;                                          // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_GoblinBard_red;                                 // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _____0_NewTrack_0_E5FC870A4C776BADD24602A2A76AB2A7; // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _____0__Direction_E5FC870A4C776BADD24602A2A76AB2A7; // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F87[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ___x_0;                                            // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_C4C51B6C492D40A16523D198A7FD8E6B; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_C4C51B6C492D40A16523D198A7FD8E6B; // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F88[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         HIT_Active_NewTrack_0_2C70BA384ABBDC25318D45AD1BB0C2EB; // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HIT_Active__Direction_2C70BA384ABBDC25318D45AD1BB0C2EB; // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F89[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HIT_Active;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Goblin_Hit_;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Boy_Hit_;                                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Man_Hit_;                                          // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GetSound;                                          // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         MusicSelect_Integer;                               // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CantTouchBand;                                     // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BandSound_JustStart();
	void BandSound_JustStop();
	void BandSound_SetPlay(class USoundBase* Sound);
	void BndEvt__BandPawn_BP_BoyHit_Collision_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BandPawn_BP_GoblinHit_Collision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BandPawn_BP_ManHit_Collision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BandPawn_BP(int32 EntryPoint);
	void HIT_Active__FinishedFunc();
	void HIT_Active__UpdateFunc();
	void LevelBGM_Get_Start(class AAmbientSound* Get_Sound, float FadeInDuration, float FadeVolumeLevel);
	void LevelBGM_Get_Stop(float FadeOutDuration, float FadeVolumeLevel);
	void LevelBGM_Spawn_Start(float Fade_IN_Time, float MaxVolume, const EAudioFaderCurve FadeCurve);
	void LevelBGM_Spawn_Stop(float FadeOutTime, float Fade_Out_Volume);
	void MusicChanged();
	void MusicChangingEnd_Reset();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ___x_0__FinishedFunc();
	void ___x_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BandPawn_BP_C">();
	}
	static class ABandPawn_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABandPawn_BP_C>();
	}
};
static_assert(alignof(ABandPawn_BP_C) == 0x000008, "Wrong alignment on ABandPawn_BP_C");
static_assert(sizeof(ABandPawn_BP_C) == 0x0003E0, "Wrong size on ABandPawn_BP_C");
static_assert(offsetof(ABandPawn_BP_C, UberGraphFrame) == 0x000320, "Member 'ABandPawn_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, ManHit_Collision) == 0x000328, "Member 'ABandPawn_BP_C::ManHit_Collision' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, BoyHit_Collision) == 0x000330, "Member 'ABandPawn_BP_C::BoyHit_Collision' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, GoblinHit_Collision) == 0x000338, "Member 'ABandPawn_BP_C::GoblinHit_Collision' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, BandBGM) == 0x000340, "Member 'ABandPawn_BP_C::BandBGM' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_Lute) == 0x000348, "Member 'ABandPawn_BP_C::SK_Lute' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_Peasant_man) == 0x000350, "Member 'ABandPawn_BP_C::SK_Peasant_man' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Horn_wood) == 0x000358, "Member 'ABandPawn_BP_C::Horn_wood' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_Peasant_Boy) == 0x000360, "Member 'ABandPawn_BP_C::SK_Peasant_Boy' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_Drum) == 0x000368, "Member 'ABandPawn_BP_C::SK_Drum' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_Stick) == 0x000370, "Member 'ABandPawn_BP_C::SK_Stick' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, SK_GoblinBard_red) == 0x000378, "Member 'ABandPawn_BP_C::SK_GoblinBard_red' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, DefaultSceneRoot) == 0x000380, "Member 'ABandPawn_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, _____0_NewTrack_0_E5FC870A4C776BADD24602A2A76AB2A7) == 0x000388, "Member 'ABandPawn_BP_C::_____0_NewTrack_0_E5FC870A4C776BADD24602A2A76AB2A7' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, _____0__Direction_E5FC870A4C776BADD24602A2A76AB2A7) == 0x00038C, "Member 'ABandPawn_BP_C::_____0__Direction_E5FC870A4C776BADD24602A2A76AB2A7' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, ___x_0) == 0x000390, "Member 'ABandPawn_BP_C::___x_0' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Timeline_0_NewTrack_0_C4C51B6C492D40A16523D198A7FD8E6B) == 0x000398, "Member 'ABandPawn_BP_C::Timeline_0_NewTrack_0_C4C51B6C492D40A16523D198A7FD8E6B' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Timeline_0__Direction_C4C51B6C492D40A16523D198A7FD8E6B) == 0x00039C, "Member 'ABandPawn_BP_C::Timeline_0__Direction_C4C51B6C492D40A16523D198A7FD8E6B' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Timeline_0) == 0x0003A0, "Member 'ABandPawn_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, HIT_Active_NewTrack_0_2C70BA384ABBDC25318D45AD1BB0C2EB) == 0x0003A8, "Member 'ABandPawn_BP_C::HIT_Active_NewTrack_0_2C70BA384ABBDC25318D45AD1BB0C2EB' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, HIT_Active__Direction_2C70BA384ABBDC25318D45AD1BB0C2EB) == 0x0003AC, "Member 'ABandPawn_BP_C::HIT_Active__Direction_2C70BA384ABBDC25318D45AD1BB0C2EB' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, HIT_Active) == 0x0003B0, "Member 'ABandPawn_BP_C::HIT_Active' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Goblin_Hit_) == 0x0003B8, "Member 'ABandPawn_BP_C::Goblin_Hit_' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Boy_Hit_) == 0x0003C0, "Member 'ABandPawn_BP_C::Boy_Hit_' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, Man_Hit_) == 0x0003C8, "Member 'ABandPawn_BP_C::Man_Hit_' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, GetSound) == 0x0003D0, "Member 'ABandPawn_BP_C::GetSound' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, MusicSelect_Integer) == 0x0003D8, "Member 'ABandPawn_BP_C::MusicSelect_Integer' has a wrong offset!");
static_assert(offsetof(ABandPawn_BP_C, CantTouchBand) == 0x0003DC, "Member 'ABandPawn_BP_C::CantTouchBand' has a wrong offset!");

}

