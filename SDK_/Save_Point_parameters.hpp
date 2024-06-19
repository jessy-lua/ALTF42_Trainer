#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_Point

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Save_Point.Save_Point_C.BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2748[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Save_Point_C_BndEvt__Save_Point_HitOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Save_Point.Save_Point_C.BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2749[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Save_Point_C_BndEvt__Save_Point_SavePanel_Overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Save_Point.Save_Point_C.ExecuteUbergraph_Save_Point
// 0x03B8 (0x03B8 - 0x0000)
struct Save_Point_C_ExecuteUbergraph_Save_Point final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 K2Node_DynamicCast_AsALTF42_Game_Instance;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274B[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274C[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x0078(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_ActorHasTag_ReturnValue;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274D[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274E[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0188(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActorHasTag_ReturnValue_1;                // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274F[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0290(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2750[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_4;    // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2751[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2752[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MakeVector_X_ImplicitCast;                // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_Y_ImplicitCast;                // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Save_Point_C_ExecuteUbergraph_Save_Point) == 0x000008, "Wrong alignment on Save_Point_C_ExecuteUbergraph_Save_Point");
static_assert(sizeof(Save_Point_C_ExecuteUbergraph_Save_Point) == 0x0003B8, "Wrong size on Save_Point_C_ExecuteUbergraph_Save_Point");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, EntryPoint) == 0x000000, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::EntryPoint' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_Has_Been_Initd_Variable_1) == 0x000006, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_Has_Been_Initd_Variable_2) == 0x000007, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000030, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_DynamicCast_AsALTF42_Game_Instance) == 0x000048, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_DynamicCast_AsALTF42_Game_Instance' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000058, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000060, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000068, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000070, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x000074, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000078, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_ActorHasTag_ReturnValue) == 0x000160, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000168, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherActor) == 0x000170, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherComp) == 0x000178, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000180, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_bFromSweep) == 0x000184, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_ComponentBoundEvent_SweepResult) == 0x000188, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000270, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_ActorHasTag_ReturnValue_1) == 0x000288, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_ActorHasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000290, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x000298, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, K2Node_DynamicCast_bSuccess_1) == 0x0002A0, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_MakeVector_ReturnValue) == 0x0002A8, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x0002C0, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_Add_VectorVector_ReturnValue) == 0x0002D8, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0002F0, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_K2_GetComponentLocation_ReturnValue_3) == 0x0002F8, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_K2_GetComponentLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_X) == 0x000310, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_Y) == 0x000318, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_Z) == 0x000320, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_K2_GetComponentLocation_ReturnValue_4) == 0x000328, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_K2_GetComponentLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_X_1) == 0x000340, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_Y_1) == 0x000348, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_BreakVector_Z_1) == 0x000350, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_IsClosed_Variable_1) == 0x000358, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000359, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_MakeVector_ReturnValue_1) == 0x000360, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000378, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000390, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, Temp_bool_IsClosed_Variable_2) == 0x000398, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_MakeVector_X_ImplicitCast) == 0x0003A0, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_MakeVector_Y_ImplicitCast) == 0x0003A8, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Save_Point_C_ExecuteUbergraph_Save_Point, CallFunc_MakeVector_Z_ImplicitCast) == 0x0003B0, "Member 'Save_Point_C_ExecuteUbergraph_Save_Point::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

// Function Save_Point.Save_Point_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Save_Point_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Save_Point_C_ReceiveTick) == 0x000004, "Wrong alignment on Save_Point_C_ReceiveTick");
static_assert(sizeof(Save_Point_C_ReceiveTick) == 0x000004, "Wrong size on Save_Point_C_ReceiveTick");
static_assert(offsetof(Save_Point_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Save_Point_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

