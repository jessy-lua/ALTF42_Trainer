#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RollTower_TrapBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RollTower_TrapBP.RollTower_TrapBP_C.BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature final
{
public:
	class UPFPathFollowerComponent*               FollowerComp;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature) == 0x000008, "Wrong alignment on RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature");
static_assert(sizeof(RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature) == 0x000008, "Wrong size on RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature, FollowerComp) == 0x000000, "Member 'RollTower_TrapBP_C_BndEvt__Barrel_Follower_BP_PFPathFollower_K2Node_ComponentBoundEvent_1_ReachedEndSignature__DelegateSignature::FollowerComp' has a wrong offset!");

// Function RollTower_TrapBP.RollTower_TrapBP_C.BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'RollTower_TrapBP_C_BndEvt__RollTower_TrapBP_SM_Tower_Round_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function RollTower_TrapBP.RollTower_TrapBP_C.ExecuteUbergraph_RollTower_TrapBP
// 0x0180 (0x0180 - 0x0000)
struct RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPFPathFollowerComponent*               K2Node_ComponentBoundEvent_followerComp;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0040(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9E[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 K2Node_DynamicCast_AsALTF42_Game_Instance;         // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetAchievement_ReturnValue;               // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9F[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_______X__Roll__ImplicitCast;    // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP) == 0x000008, "Wrong alignment on RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP");
static_assert(sizeof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP) == 0x000180, "Wrong size on RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, EntryPoint) == 0x000000, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_followerComp) == 0x000008, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_followerComp' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_HitComponent) == 0x000010, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_OtherActor) == 0x000018, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_OtherComp) == 0x000020, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000028, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_ComponentBoundEvent_Hit) == 0x000040, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x000128, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, CallFunc_MakeRotator_ReturnValue) == 0x000138, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, CallFunc_Lerp_ReturnValue) == 0x000150, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, CallFunc_GetGameInstance_ReturnValue) == 0x000158, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_DynamicCast_AsALTF42_Game_Instance) == 0x000160, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_DynamicCast_AsALTF42_Game_Instance' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, CallFunc_SetAchievement_ReturnValue) == 0x000169, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::CallFunc_SetAchievement_ReturnValue' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, Temp_bool_Has_Been_Initd_Variable) == 0x00016A, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, Temp_bool_IsClosed_Variable) == 0x00016B, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000170, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP, K2Node_VariableSet_______X__Roll__ImplicitCast) == 0x000178, "Member 'RollTower_TrapBP_C_ExecuteUbergraph_RollTower_TrapBP::K2Node_VariableSet_______X__Roll__ImplicitCast' has a wrong offset!");

}

