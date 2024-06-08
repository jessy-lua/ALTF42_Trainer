#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_Bogie

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_TrackConnectionPoint_structs.hpp"
#include "S_TrackSpline_structs.hpp"


namespace SDK::Params
{

// Function AC_Bogie.AC_Bogie_C.ChangeTrack
// 0x00F0 (0x00F0 - 0x0000)
struct AC_Bogie_C_ChangeTrack final
{
public:
	class ABP_TrainTrack_C*                       Param_Track;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackSplineIndex;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DistanceOnTrack;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CC[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CD[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_TrackSpline                         CallFunc_Array_Get_Item;                           // 0x00A8(0x0038)(HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CE[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_SplineLength_ImplicitCast;      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_ChangeTrack) == 0x000008, "Wrong alignment on AC_Bogie_C_ChangeTrack");
static_assert(sizeof(AC_Bogie_C_ChangeTrack) == 0x0000F0, "Wrong size on AC_Bogie_C_ChangeTrack");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, Param_Track) == 0x000000, "Member 'AC_Bogie_C_ChangeTrack::Param_Track' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, TrackSplineIndex) == 0x000008, "Member 'AC_Bogie_C_ChangeTrack::TrackSplineIndex' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, DistanceOnTrack) == 0x000010, "Member 'AC_Bogie_C_ChangeTrack::DistanceOnTrack' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000060, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000070, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000080, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000088, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000098, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_GetSplineLength_ReturnValue) == 0x0000E0, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000E4, "Member 'AC_Bogie_C_ChangeTrack::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_ChangeTrack, K2Node_VariableSet_SplineLength_ImplicitCast) == 0x0000E8, "Member 'AC_Bogie_C_ChangeTrack::K2Node_VariableSet_SplineLength_ImplicitCast' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.GetConnectionPoint
// 0x0058 (0x0058 - 0x0000)
struct AC_Bogie_C_GetConnectionPoint final
{
public:
	bool                                          GetEndPoint;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TrackConnectionPoint                ConnectionPoint;                                   // 0x0008(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          IsEndPoint;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TrackSpline                         CallFunc_Array_Get_Item;                           // 0x0020(0x0038)(HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_GetConnectionPoint) == 0x000008, "Wrong alignment on AC_Bogie_C_GetConnectionPoint");
static_assert(sizeof(AC_Bogie_C_GetConnectionPoint) == 0x000058, "Wrong size on AC_Bogie_C_GetConnectionPoint");
static_assert(offsetof(AC_Bogie_C_GetConnectionPoint, GetEndPoint) == 0x000000, "Member 'AC_Bogie_C_GetConnectionPoint::GetEndPoint' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetConnectionPoint, ConnectionPoint) == 0x000008, "Member 'AC_Bogie_C_GetConnectionPoint::ConnectionPoint' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetConnectionPoint, IsEndPoint) == 0x000018, "Member 'AC_Bogie_C_GetConnectionPoint::IsEndPoint' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetConnectionPoint, CallFunc_Array_Get_Item) == 0x000020, "Member 'AC_Bogie_C_GetConnectionPoint::CallFunc_Array_Get_Item' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.GetLocation
// 0x00D0 (0x00D0 - 0x0000)
struct AC_Bogie_C_GetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D1[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_BogieTransform;              // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_GetLocation) == 0x000010, "Wrong alignment on AC_Bogie_C_GetLocation");
static_assert(sizeof(AC_Bogie_C_GetLocation) == 0x0000D0, "Wrong size on AC_Bogie_C_GetLocation");
static_assert(offsetof(AC_Bogie_C_GetLocation, Location) == 0x000000, "Member 'AC_Bogie_C_GetLocation::Location' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetLocation, CallFunc_GetTransform_BogieTransform) == 0x000020, "Member 'AC_Bogie_C_GetLocation::CallFunc_GetTransform_BogieTransform' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetLocation, CallFunc_BreakTransform_Location) == 0x000080, "Member 'AC_Bogie_C_GetLocation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetLocation, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'AC_Bogie_C_GetLocation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetLocation, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'AC_Bogie_C_GetLocation::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.GetRotation
// 0x00D0 (0x00D0 - 0x0000)
struct AC_Bogie_C_GetRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40D2[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_BogieTransform;              // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_GetRotation) == 0x000010, "Wrong alignment on AC_Bogie_C_GetRotation");
static_assert(sizeof(AC_Bogie_C_GetRotation) == 0x0000D0, "Wrong size on AC_Bogie_C_GetRotation");
static_assert(offsetof(AC_Bogie_C_GetRotation, Rotation) == 0x000000, "Member 'AC_Bogie_C_GetRotation::Rotation' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetRotation, CallFunc_GetTransform_BogieTransform) == 0x000020, "Member 'AC_Bogie_C_GetRotation::CallFunc_GetTransform_BogieTransform' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetRotation, CallFunc_BreakTransform_Location) == 0x000080, "Member 'AC_Bogie_C_GetRotation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetRotation, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'AC_Bogie_C_GetRotation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetRotation, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'AC_Bogie_C_GetRotation::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.GetTransform
// 0x0220 (0x0220 - 0x0000)
struct AC_Bogie_C_GetTransform final
{
public:
	struct FTransform                             BogieTransform;                                    // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40D3[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue; // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D4[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue_1; // 0x0130(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40D5[0x8];                                     // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01B0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_GetTransform) == 0x000010, "Wrong alignment on AC_Bogie_C_GetTransform");
static_assert(sizeof(AC_Bogie_C_GetTransform) == 0x000220, "Wrong size on AC_Bogie_C_GetTransform");
static_assert(offsetof(AC_Bogie_C_GetTransform, BogieTransform) == 0x000000, "Member 'AC_Bogie_C_GetTransform::BogieTransform' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_MakeRotator_ReturnValue) == 0x000060, "Member 'AC_Bogie_C_GetTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue) == 0x000080, "Member 'AC_Bogie_C_GetTransform::CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_BreakTransform_Location) == 0x0000E0, "Member 'AC_Bogie_C_GetTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_BreakTransform_Rotation) == 0x0000F8, "Member 'AC_Bogie_C_GetTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_BreakTransform_Scale) == 0x000110, "Member 'AC_Bogie_C_GetTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue_1) == 0x000130, "Member 'AC_Bogie_C_GetTransform::CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_ComposeRotators_ReturnValue) == 0x000190, "Member 'AC_Bogie_C_GetTransform::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_MakeTransform_ReturnValue) == 0x0001B0, "Member 'AC_Bogie_C_GetTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000210, "Member 'AC_Bogie_C_GetTransform::CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetTransform, CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000214, "Member 'AC_Bogie_C_GetTransform::CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.RestorePreviousDistance
// 0x0008 (0x0008 - 0x0000)
struct AC_Bogie_C_RestorePreviousDistance final
{
public:
	int32                                         UpdateReverseID;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_RestorePreviousDistance) == 0x000004, "Wrong alignment on AC_Bogie_C_RestorePreviousDistance");
static_assert(sizeof(AC_Bogie_C_RestorePreviousDistance) == 0x000008, "Wrong size on AC_Bogie_C_RestorePreviousDistance");
static_assert(offsetof(AC_Bogie_C_RestorePreviousDistance, UpdateReverseID) == 0x000000, "Member 'AC_Bogie_C_RestorePreviousDistance::UpdateReverseID' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_RestorePreviousDistance, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'AC_Bogie_C_RestorePreviousDistance::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.TickMovement
// 0x0028 (0x0028 - 0x0000)
struct AC_Bogie_C_TickMovement final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_UpdateID;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_TickMovement) == 0x000008, "Wrong alignment on AC_Bogie_C_TickMovement");
static_assert(sizeof(AC_Bogie_C_TickMovement) == 0x000028, "Wrong size on AC_Bogie_C_TickMovement");
static_assert(offsetof(AC_Bogie_C_TickMovement, Speed) == 0x000000, "Member 'AC_Bogie_C_TickMovement::Speed' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_TickMovement, Param_UpdateID) == 0x000008, "Member 'AC_Bogie_C_TickMovement::Param_UpdateID' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_TickMovement, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'AC_Bogie_C_TickMovement::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_TickMovement, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'AC_Bogie_C_TickMovement::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_TickMovement, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'AC_Bogie_C_TickMovement::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.UpdateDistanceForEndOfClosedLoop
// 0x0010 (0x0010 - 0x0000)
struct AC_Bogie_C_UpdateDistanceForEndOfClosedLoop final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_UpdateDistanceForEndOfClosedLoop) == 0x000008, "Wrong alignment on AC_Bogie_C_UpdateDistanceForEndOfClosedLoop");
static_assert(sizeof(AC_Bogie_C_UpdateDistanceForEndOfClosedLoop) == 0x000010, "Wrong size on AC_Bogie_C_UpdateDistanceForEndOfClosedLoop");
static_assert(offsetof(AC_Bogie_C_UpdateDistanceForEndOfClosedLoop, Speed) == 0x000000, "Member 'AC_Bogie_C_UpdateDistanceForEndOfClosedLoop::Speed' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_UpdateDistanceForEndOfClosedLoop, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'AC_Bogie_C_UpdateDistanceForEndOfClosedLoop::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");

// Function AC_Bogie.AC_Bogie_C.GetDistanceToEndOfTrack
// 0x0028 (0x0028 - 0x0000)
struct AC_Bogie_C_GetDistanceToEndOfTrack final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AtSplineEnd;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D7[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_Bogie_C_GetDistanceToEndOfTrack) == 0x000008, "Wrong alignment on AC_Bogie_C_GetDistanceToEndOfTrack");
static_assert(sizeof(AC_Bogie_C_GetDistanceToEndOfTrack) == 0x000028, "Wrong size on AC_Bogie_C_GetDistanceToEndOfTrack");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, Speed) == 0x000000, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::Speed' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, Distance) == 0x000008, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::Distance' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, AtSplineEnd) == 0x000010, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::AtSplineEnd' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000011, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_Bogie_C_GetDistanceToEndOfTrack, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'AC_Bogie_C_GetDistanceToEndOfTrack::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");

}
