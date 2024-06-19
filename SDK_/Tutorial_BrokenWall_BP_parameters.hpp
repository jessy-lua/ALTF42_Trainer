#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_BrokenWall_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Tutorial_BrokenWall_BP.Tutorial_BrokenWall_BP_C.BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature
// 0x0078 (0x0078 - 0x0000)
struct Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature final
{
public:
	struct FChaosBreakEvent                       BreakEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature) == 0x000008, "Wrong alignment on Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature");
static_assert(sizeof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature) == 0x000078, "Wrong size on Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature, BreakEvent) == 0x000000, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_BrokenWall_Destuction_K2Node_ComponentBoundEvent_1_OnChaosBreakEvent__DelegateSignature::BreakEvent' has a wrong offset!");

// Function Tutorial_BrokenWall_BP.Tutorial_BrokenWall_BP_C.BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3303[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Tutorial_BrokenWall_BP_C_BndEvt__Tutorial_BrokenWall_BP_OverlapCheck_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Tutorial_BrokenWall_BP.Tutorial_BrokenWall_BP_C.ExecuteUbergraph_Tutorial_BrokenWall_BP
// 0x01D8 (0x01D8 - 0x0000)
struct Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3304[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ARespawnTutorial_BrokenWall_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3305[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARespawnTutorial_BrokenWall_BP_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3306[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 K2Node_DynamicCast_AsALTF42_Game_Instance;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3307[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChaosBreakEvent                       K2Node_ComponentBoundEvent_BreakEvent;             // 0x0050(0x0078)(ConstParm, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3308[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3309[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00F0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP) == 0x000008, "Wrong alignment on Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP");
static_assert(sizeof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP) == 0x0001D8, "Wrong size on Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, EntryPoint) == 0x000000, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, Temp_int_Variable) == 0x00001C, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_Array_Get_Item) == 0x000028, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, CallFunc_GetGameInstance_ReturnValue) == 0x000038, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_DynamicCast_AsALTF42_Game_Instance) == 0x000040, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_DynamicCast_AsALTF42_Game_Instance' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_BreakEvent) == 0x000050, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_BreakEvent' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, Temp_bool_Has_Been_Initd_Variable) == 0x0000C8, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, Temp_bool_IsClosed_Variable) == 0x0000C9, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000D0, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D8, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x0000E0, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000E8, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000EC, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x0000F0, "Member 'Tutorial_BrokenWall_BP_C_ExecuteUbergraph_Tutorial_BrokenWall_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");

}
