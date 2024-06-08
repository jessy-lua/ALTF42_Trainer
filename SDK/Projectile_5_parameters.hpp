#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projectile_5

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Projectile_5.Projectile_5_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'Projectile_5_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function Projectile_5.Projectile_5_C.ExecuteUbergraph_Projectile_5
// 0x0220 (0x0220 - 0x0000)
struct Projectile_5_C_ExecuteUbergraph_Projectile_5 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       K2Node_CustomEvent_set_target;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30DA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30DB[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00E0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30DC[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30DD[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       K2Node_DynamicCast_AsALTF4_Loco_BP;                // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Projectile_5_C_ExecuteUbergraph_Projectile_5) == 0x000008, "Wrong alignment on Projectile_5_C_ExecuteUbergraph_Projectile_5");
static_assert(sizeof(Projectile_5_C_ExecuteUbergraph_Projectile_5) == 0x000220, "Wrong size on Projectile_5_C_ExecuteUbergraph_Projectile_5");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, EntryPoint) == 0x000000, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::EntryPoint' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_IsClosed_Variable_1) == 0x000005, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_CustomEvent_set_target) == 0x000008, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_CustomEvent_set_target' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_Has_Been_Initd_Variable_2) == 0x000018, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000040, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000058, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_X) == 0x000060, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_Y) == 0x000068, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_Z) == 0x000070, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000078, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_Event_DeltaSeconds) == 0x000090, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_X_1) == 0x000098, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_Y_1) == 0x0000A0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_BreakVector_Z_1) == 0x0000A8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_ComponentBoundEvent_HitComponent) == 0x0000B0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000C8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_ComponentBoundEvent_Hit) == 0x0000E0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0001D0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0001D8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0001E8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, Temp_bool_IsClosed_Variable_2) == 0x0001F0, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001F1, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0001F8, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_IsValid_ReturnValue) == 0x000200, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000201, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000208, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_DynamicCast_AsALTF4_Loco_BP) == 0x000210, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_DynamicCast_AsALTF4_Loco_BP' has a wrong offset!");
static_assert(offsetof(Projectile_5_C_ExecuteUbergraph_Projectile_5, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'Projectile_5_C_ExecuteUbergraph_Projectile_5::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Projectile_5.Projectile_5_C.homing
// 0x0008 (0x0008 - 0x0000)
struct Projectile_5_C_Homing final
{
public:
	class AStaticMeshActor*                       Set_target;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Projectile_5_C_Homing) == 0x000008, "Wrong alignment on Projectile_5_C_Homing");
static_assert(sizeof(Projectile_5_C_Homing) == 0x000008, "Wrong size on Projectile_5_C_Homing");
static_assert(offsetof(Projectile_5_C_Homing, Set_target) == 0x000000, "Member 'Projectile_5_C_Homing::Set_target' has a wrong offset!");

// Function Projectile_5.Projectile_5_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Projectile_5_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Projectile_5_C_ReceiveTick) == 0x000004, "Wrong alignment on Projectile_5_C_ReceiveTick");
static_assert(sizeof(Projectile_5_C_ReceiveTick) == 0x000004, "Wrong size on Projectile_5_C_ReceiveTick");
static_assert(offsetof(Projectile_5_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Projectile_5_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

