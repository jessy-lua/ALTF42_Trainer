#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AI_MH_Nicholas

#include "Basic.hpp"

#include "AI_StepTalk_WhoOrWhere_structs.hpp"
#include "Mantle_Asset_structs.hpp"
#include "ALS_Base_CharacterBP_classes.hpp"
#include "Engine_structs.hpp"
#include "MantleType_structs.hpp"
#include "AI_NPC_Act_Data_structs.hpp"
#include "ALTF42_ItemList_OnlyBoxData_structs.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AI_MH_Nicholas.AI_MH_Nicholas_C
// 0x0380 (0x0ED0 - 0x0B50)
class AAI_MH_Nicholas_C final : public AALS_Base_CharacterBP_C
{
public:
	uint8                                         Pad_3B42[0x6];                                     // 0x0B42(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_AI_MH_Nicholas_C;                   // 0x0B48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGroomComponent*                        Hair;                                              // 0x0B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FarmerGoates;                                   // 0x0B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FarmerMustache;                                 // 0x0B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FarmerPocket;                                   // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Hat;                                            // 0x0B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FarmerEyeLashes;                                // 0x0B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Farmer;                                         // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULODSyncComponent*                      LODSync;                                           // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Hit_Head_Coillsion;                                // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Hit_Top_Coillsion;                                 // 0x0B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Char_TalkOverlap_Check;                            // 0x0BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Foot_Block_SM;                                     // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HeldObjectRoot;                                    // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_2m_Default;                                 // 0x0BC8(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_1m_Default;                                 // 0x0C08(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_1m_RH;                                      // 0x0C48(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_1m_LH;                                      // 0x0C88(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_1m_2H;                                      // 0x0CC8(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                          Mantle_1m_Box;                                     // 0x0D08(0x0040)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LandRoll_Default;                                  // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpFront_Default;                                // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LandRoll_RH;                                       // 0x0D58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LandRoll_LH;                                       // 0x0D60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LandRoll_2H;                                       // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpFront_RH;                                     // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpFront_LH;                                     // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpFront_2H;                                     // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpBack_Default;                                 // 0x0D88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpBack_RH;                                      // 0x0D90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpBack_LH;                                      // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GetUpBack_2H;                                      // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 ALTF42_GI;                                         // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ImPlayer;                                          // 0x0DB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAI_StepTalk_WhoOrWhere                       Who_NPC;                                           // 0x0DB1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B43[0x6];                                     // 0x0DB2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NPC_NAme;                                          // 0x0DB8(0x0018)(Edit, BlueprintVisible)
	class UObject*                                NPC_Image;                                         // 0x0DD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Hit_;                                              // 0x0DD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loop_Active;                                       // 0x0DD9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NPC_StartAction_;                                  // 0x0DDA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NPC_ActionMode;                                    // 0x0DDB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NPC_Talking_;                                      // 0x0DDC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B44[0x3];                                     // 0x0DDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      NPC_Action_Anim;                                   // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EAI_NPC_Act_Data                              NPC_Act;                                           // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B45[0x7];                                     // 0x0DE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPC_MoveTarget_BP_C*                   Npc_MoveTarget;                                    // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           NPC_Hit_Anim;                                      // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Hit_Talk;                                          // 0x0E00(0x0018)(Edit, BlueprintVisible)
	class UAnimMontage*                           Meet_HI_Anim;                                      // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         MeetHI_PlayRate;                                   // 0x0E20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B46[0x4];                                     // 0x0E24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           GiveItem_AnimMontage;                              // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         GiveItem_Play_Rate;                                // 0x0E30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B47[0x4];                                     // 0x0E34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EAI_NPC_Act_Data>                      NPC_Act_List;                                      // 0x0E38(0x0010)(Edit, BlueprintVisible)
	TArray<class UAnimSequenceBase*>              NPC_Act_AnimList;                                  // 0x0E48(0x0010)(Edit, BlueprintVisible)
	TArray<class ANPC_MoveTarget_BP_C*>           Npc_MoveTarget_List;                               // 0x0E58(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FText>                           NPC_TalkText_List;                                 // 0x0E68(0x0010)(Edit, BlueprintVisible)
	class FText                                   Talk_Text;                                         // 0x0E78(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Act_Integer;                                       // 0x0E90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Random_Roam_;                                      // 0x0E94(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B48[0x3];                                     // 0x0E95(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Act_Random_Caculation;                             // 0x0E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Item_Plus_Value;                                   // 0x0E9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALTF42_ItemList_OnlyBoxData                  NPC_Give_Item;                                     // 0x0EA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B49[0x7];                                     // 0x0EA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Action_Start_Time;                                 // 0x0EA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPC_Flag_BP_C*                         Flag_01;                                           // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANPC_Flag_BP_C*                         Flag_02;                                           // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          GoAway_;                                           // 0x0EC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool LeftHand, const struct FVector& Offset);
	void BndEvt__AI_MH_Default_Char_Char_TalkOverlap_Check_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AI_MH_Default_Char_Char_TalkOverlap_Check_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__AI_MH_Default_Char_Foot_Block_SM_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__AI_MH_Default_Char_Hit_Detect_Coillsion_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__AI_MH_Default_Char_Hit_Head_Coillsion_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ClearHeldObject();
	void ExecuteUbergraph_AI_MH_Nicholas(int32 EntryPoint);
	void Hit_Event();
	void Hit_Reset();
	void LevelAct_Setting();
	void NPC_Acting_Event(bool Param_NPC_ActionMode, bool Param_Loop_Active);
	void NPC_GoAway_Event();
	void UpdateHeldObject();
	void UserConstructionScript();
	struct FTransform BPI_Get_3P_PivotTarget();
	void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, double* TraceRadius, ETraceTypeQuery* TraceChannel);
	struct FVector BPI_Get_FP_CameraTarget();
	void BPI_GetAI_NPC_ActionMode(bool* Param_NPC_ActionMode, double* ActionStartTime, class UAnimSequenceBase** NPC_ActionAnim, bool* LoopActive, EAI_StepTalk_WhoOrWhere* Param_Who_NPC, bool* Param_Hit_);
	class UAnimMontage* GetGetUpAnimation(bool Param_RagdollFaceUp);
	struct FMantle_Asset GetMantleAsset(EMantleType MantleType);
	class UAnimMontage* GetRollAnimation();
	void MantleEnd();
	void MantleStart(double MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType);
	void OnOverlayStateChanged(EALS_OverlayState NewOverlayState);
	void RagdollEnd();
	void RagdollStart();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AI_MH_Nicholas_C">();
	}
	static class AAI_MH_Nicholas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAI_MH_Nicholas_C>();
	}
};
static_assert(alignof(AAI_MH_Nicholas_C) == 0x000010, "Wrong alignment on AAI_MH_Nicholas_C");
static_assert(sizeof(AAI_MH_Nicholas_C) == 0x000ED0, "Wrong size on AAI_MH_Nicholas_C");
static_assert(offsetof(AAI_MH_Nicholas_C, UberGraphFrame_AI_MH_Nicholas_C) == 0x000B48, "Member 'AAI_MH_Nicholas_C::UberGraphFrame_AI_MH_Nicholas_C' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Hair) == 0x000B50, "Member 'AAI_MH_Nicholas_C::Hair' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SM_FarmerGoates) == 0x000B58, "Member 'AAI_MH_Nicholas_C::SM_FarmerGoates' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SM_FarmerMustache) == 0x000B60, "Member 'AAI_MH_Nicholas_C::SM_FarmerMustache' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SM_FarmerPocket) == 0x000B68, "Member 'AAI_MH_Nicholas_C::SM_FarmerPocket' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SM_Hat) == 0x000B70, "Member 'AAI_MH_Nicholas_C::SM_Hat' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SM_FarmerEyeLashes) == 0x000B78, "Member 'AAI_MH_Nicholas_C::SM_FarmerEyeLashes' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SK_Farmer) == 0x000B80, "Member 'AAI_MH_Nicholas_C::SK_Farmer' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, LODSync) == 0x000B88, "Member 'AAI_MH_Nicholas_C::LODSync' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Hit_Head_Coillsion) == 0x000B90, "Member 'AAI_MH_Nicholas_C::Hit_Head_Coillsion' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Hit_Top_Coillsion) == 0x000B98, "Member 'AAI_MH_Nicholas_C::Hit_Top_Coillsion' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Char_TalkOverlap_Check) == 0x000BA0, "Member 'AAI_MH_Nicholas_C::Char_TalkOverlap_Check' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Foot_Block_SM) == 0x000BA8, "Member 'AAI_MH_Nicholas_C::Foot_Block_SM' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, HeldObjectRoot) == 0x000BB0, "Member 'AAI_MH_Nicholas_C::HeldObjectRoot' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, StaticMesh) == 0x000BB8, "Member 'AAI_MH_Nicholas_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, SkeletalMesh) == 0x000BC0, "Member 'AAI_MH_Nicholas_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_2m_Default) == 0x000BC8, "Member 'AAI_MH_Nicholas_C::Mantle_2m_Default' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_1m_Default) == 0x000C08, "Member 'AAI_MH_Nicholas_C::Mantle_1m_Default' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_1m_RH) == 0x000C48, "Member 'AAI_MH_Nicholas_C::Mantle_1m_RH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_1m_LH) == 0x000C88, "Member 'AAI_MH_Nicholas_C::Mantle_1m_LH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_1m_2H) == 0x000CC8, "Member 'AAI_MH_Nicholas_C::Mantle_1m_2H' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Mantle_1m_Box) == 0x000D08, "Member 'AAI_MH_Nicholas_C::Mantle_1m_Box' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, LandRoll_Default) == 0x000D48, "Member 'AAI_MH_Nicholas_C::LandRoll_Default' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpFront_Default) == 0x000D50, "Member 'AAI_MH_Nicholas_C::GetUpFront_Default' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, LandRoll_RH) == 0x000D58, "Member 'AAI_MH_Nicholas_C::LandRoll_RH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, LandRoll_LH) == 0x000D60, "Member 'AAI_MH_Nicholas_C::LandRoll_LH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, LandRoll_2H) == 0x000D68, "Member 'AAI_MH_Nicholas_C::LandRoll_2H' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpFront_RH) == 0x000D70, "Member 'AAI_MH_Nicholas_C::GetUpFront_RH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpFront_LH) == 0x000D78, "Member 'AAI_MH_Nicholas_C::GetUpFront_LH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpFront_2H) == 0x000D80, "Member 'AAI_MH_Nicholas_C::GetUpFront_2H' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpBack_Default) == 0x000D88, "Member 'AAI_MH_Nicholas_C::GetUpBack_Default' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpBack_RH) == 0x000D90, "Member 'AAI_MH_Nicholas_C::GetUpBack_RH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpBack_LH) == 0x000D98, "Member 'AAI_MH_Nicholas_C::GetUpBack_LH' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GetUpBack_2H) == 0x000DA0, "Member 'AAI_MH_Nicholas_C::GetUpBack_2H' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, ALTF42_GI) == 0x000DA8, "Member 'AAI_MH_Nicholas_C::ALTF42_GI' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, ImPlayer) == 0x000DB0, "Member 'AAI_MH_Nicholas_C::ImPlayer' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Who_NPC) == 0x000DB1, "Member 'AAI_MH_Nicholas_C::Who_NPC' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_NAme) == 0x000DB8, "Member 'AAI_MH_Nicholas_C::NPC_NAme' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Image) == 0x000DD0, "Member 'AAI_MH_Nicholas_C::NPC_Image' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Hit_) == 0x000DD8, "Member 'AAI_MH_Nicholas_C::Hit_' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Loop_Active) == 0x000DD9, "Member 'AAI_MH_Nicholas_C::Loop_Active' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_StartAction_) == 0x000DDA, "Member 'AAI_MH_Nicholas_C::NPC_StartAction_' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_ActionMode) == 0x000DDB, "Member 'AAI_MH_Nicholas_C::NPC_ActionMode' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Talking_) == 0x000DDC, "Member 'AAI_MH_Nicholas_C::NPC_Talking_' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Action_Anim) == 0x000DE0, "Member 'AAI_MH_Nicholas_C::NPC_Action_Anim' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Act) == 0x000DE8, "Member 'AAI_MH_Nicholas_C::NPC_Act' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Npc_MoveTarget) == 0x000DF0, "Member 'AAI_MH_Nicholas_C::Npc_MoveTarget' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Hit_Anim) == 0x000DF8, "Member 'AAI_MH_Nicholas_C::NPC_Hit_Anim' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Hit_Talk) == 0x000E00, "Member 'AAI_MH_Nicholas_C::Hit_Talk' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Meet_HI_Anim) == 0x000E18, "Member 'AAI_MH_Nicholas_C::Meet_HI_Anim' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, MeetHI_PlayRate) == 0x000E20, "Member 'AAI_MH_Nicholas_C::MeetHI_PlayRate' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GiveItem_AnimMontage) == 0x000E28, "Member 'AAI_MH_Nicholas_C::GiveItem_AnimMontage' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GiveItem_Play_Rate) == 0x000E30, "Member 'AAI_MH_Nicholas_C::GiveItem_Play_Rate' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Act_List) == 0x000E38, "Member 'AAI_MH_Nicholas_C::NPC_Act_List' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Act_AnimList) == 0x000E48, "Member 'AAI_MH_Nicholas_C::NPC_Act_AnimList' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Npc_MoveTarget_List) == 0x000E58, "Member 'AAI_MH_Nicholas_C::Npc_MoveTarget_List' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_TalkText_List) == 0x000E68, "Member 'AAI_MH_Nicholas_C::NPC_TalkText_List' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Talk_Text) == 0x000E78, "Member 'AAI_MH_Nicholas_C::Talk_Text' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Act_Integer) == 0x000E90, "Member 'AAI_MH_Nicholas_C::Act_Integer' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Random_Roam_) == 0x000E94, "Member 'AAI_MH_Nicholas_C::Random_Roam_' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Act_Random_Caculation) == 0x000E98, "Member 'AAI_MH_Nicholas_C::Act_Random_Caculation' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Item_Plus_Value) == 0x000E9C, "Member 'AAI_MH_Nicholas_C::Item_Plus_Value' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, NPC_Give_Item) == 0x000EA0, "Member 'AAI_MH_Nicholas_C::NPC_Give_Item' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Action_Start_Time) == 0x000EA8, "Member 'AAI_MH_Nicholas_C::Action_Start_Time' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Flag_01) == 0x000EB0, "Member 'AAI_MH_Nicholas_C::Flag_01' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, Flag_02) == 0x000EB8, "Member 'AAI_MH_Nicholas_C::Flag_02' has a wrong offset!");
static_assert(offsetof(AAI_MH_Nicholas_C, GoAway_) == 0x000EC0, "Member 'AAI_MH_Nicholas_C::GoAway_' has a wrong offset!");

}
