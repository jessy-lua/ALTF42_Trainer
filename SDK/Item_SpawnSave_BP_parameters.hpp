#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_SpawnSave_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Item_SpawnSave_BP.Item_SpawnSave_BP_C.ExecuteUbergraph_Item_SpawnSave_BP
// 0x06F8 (0x06F8 - 0x0000)
struct Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0090(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_2;          // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Effect_Location;                // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359D[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x01F8(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0208(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359E[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AItem_SpawnSave_BP_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x02F8(0x0010)(ReferenceParm)
	class AItem_SpawnSave_BP_C*                   CallFunc_Array_Get_Item;                           // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359F[0x1];                                     // 0x0317(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0390(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A0[0x4];                                     // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActorHasTag_ReturnValue;                  // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A1[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x03F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AItem_SpawnSave_BP_C*>           CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0408(0x0010)(ReferenceParm)
	class AItem_SpawnSave_BP_C*                   CallFunc_Array_Get_Item_1;                         // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A2[0x3];                                     // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0428(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0440(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0450(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x0468(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A3[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0558(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0560(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue_1;                      // 0x0568(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0580(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0668(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0680(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP_1;              // 0x0688(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A4[0x7];                                     // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0698(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x06A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A5[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP; // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON;  // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_;   // 0x06C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_;  // 0x06C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A6[0x5];                                     // 0x06C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim; // 0x06C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_; // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_; // 0x06D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A7[0x6];                                     // 0x06D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value; // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha; // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CustomTimeDilation_ImplicitCast; // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP) == 0x000008, "Wrong alignment on Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP");
static_assert(sizeof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP) == 0x0006F8, "Wrong size on Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, EntryPoint) == 0x000000, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, Temp_int_Variable) == 0x000004, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, Temp_int_Variable_1) == 0x000008, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000030, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000048, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000060, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_VLerp_ReturnValue) == 0x000078, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000090, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetSocketLocation_ReturnValue_2) == 0x000178, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetSocketLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_CustomEvent_Effect_Location) == 0x000190, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_CustomEvent_Effect_Location' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Add_VectorVector_ReturnValue) == 0x0001A8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0001C0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0001C8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001E0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x0001E8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, Temp_object_Variable) == 0x0001F8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_LineTraceSingle_OutHit) == 0x000208, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_LineTraceSingle_ReturnValue) == 0x0002F0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetAllActorsOfClass_OutActors) == 0x0002F8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Array_Get_Item) == 0x000308, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Array_Length_ReturnValue) == 0x000310, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Less_IntInt_ReturnValue) == 0x000314, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_bBlockingHit) == 0x000315, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_bInitialOverlap) == 0x000316, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_Time) == 0x000318, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_Distance) == 0x00031C, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_Location) == 0x000320, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_ImpactPoint) == 0x000338, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_Normal) == 0x000350, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_ImpactNormal) == 0x000368, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_PhysMat) == 0x000380, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_HitActor) == 0x000388, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_HitComponent) == 0x000390, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_HitBoneName) == 0x000398, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_BoneName) == 0x0003A0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_HitItem) == 0x0003A8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_ElementIndex) == 0x0003AC, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_FaceIndex) == 0x0003B0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_TraceStart) == 0x0003B8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BreakHitResult_TraceEnd) == 0x0003D0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_ActorHasTag_ReturnValue) == 0x0003E8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0003F0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000408, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Array_Get_Item_1) == 0x000418, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Array_Length_ReturnValue_1) == 0x000420, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Less_IntInt_ReturnValue_1) == 0x000424, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000428, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, Temp_object_Variable_1) == 0x000440, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000450, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_LineTraceSingle_OutHit_1) == 0x000468, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_LineTraceSingle_ReturnValue_1) == 0x000550, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000558, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000560, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_VLerp_ReturnValue_1) == 0x000568, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000580, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000668, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000680, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_AsALTF4_Loco_BP_1) == 0x000688, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_AsALTF4_Loco_BP_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_bSuccess_1) == 0x000690, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000698, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_AsALS_Character_BPI) == 0x0006A0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_DynamicCast_bSuccess_2) == 0x0006B0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP) == 0x0006B8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_ChickThrowAnimBP' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON) == 0x0006C0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TubeIdleON' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_) == 0x0006C1, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_Flamingo_' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_) == 0x0006C2, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_AgingMode_' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim) == 0x0006C8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceAnim' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_) == 0x0006D0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_CostumeDanceTime_' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_) == 0x0006D1, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlowMode_Active_' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value) == 0x0006D8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_SelfCustom_Value' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha) == 0x0006E0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_BPI_Get_PlayerbleChar_Status_TimeSlow_CameraAlpha' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0006E8, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP, K2Node_VariableSet_CustomTimeDilation_ImplicitCast) == 0x0006F0, "Member 'Item_SpawnSave_BP_C_ExecuteUbergraph_Item_SpawnSave_BP::K2Node_VariableSet_CustomTimeDilation_ImplicitCast' has a wrong offset!");

// Function Item_SpawnSave_BP.Item_SpawnSave_BP_C.Spawn_SoundAndEffect
// 0x0018 (0x0018 - 0x0000)
struct Item_SpawnSave_BP_C_Spawn_SoundAndEffect final
{
public:
	struct FVector                                Effect_Location;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Item_SpawnSave_BP_C_Spawn_SoundAndEffect) == 0x000008, "Wrong alignment on Item_SpawnSave_BP_C_Spawn_SoundAndEffect");
static_assert(sizeof(Item_SpawnSave_BP_C_Spawn_SoundAndEffect) == 0x000018, "Wrong size on Item_SpawnSave_BP_C_Spawn_SoundAndEffect");
static_assert(offsetof(Item_SpawnSave_BP_C_Spawn_SoundAndEffect, Effect_Location) == 0x000000, "Member 'Item_SpawnSave_BP_C_Spawn_SoundAndEffect::Effect_Location' has a wrong offset!");

}

