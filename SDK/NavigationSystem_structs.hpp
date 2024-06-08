#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationSystem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum NavigationSystem.ERuntimeGenerationType
// NumValues: 0x0005
enum class ERuntimeGenerationType : uint8
{
	Static                                   = 0,
	DynamicModifiersOnly                     = 1,
	Dynamic                                  = 2,
	LegacyGeneration                         = 3,
	ERuntimeGenerationType_MAX               = 4,
};

// Enum NavigationSystem.ENavCostDisplay
// NumValues: 0x0004
enum class ENavCostDisplay : uint8
{
	TotalCost                                = 0,
	HeuristicOnly                            = 1,
	RealCostOnly                             = 2,
	ENavCostDisplay_MAX                      = 3,
};

// Enum NavigationSystem.ERecastPartitioning
// NumValues: 0x0004
enum class ERecastPartitioning : uint8
{
	Monotone                                 = 0,
	Watershed                                = 1,
	ChunkyMonotone                           = 2,
	ERecastPartitioning_MAX                  = 3,
};

// Enum NavigationSystem.EHeightFieldRenderMode
// NumValues: 0x0003
enum class EHeightFieldRenderMode : uint8
{
	Solid                                    = 0,
	Walkable                                 = 1,
	EHeightFieldRenderMode_MAX               = 2,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
// NumValues: 0x0004
enum class ENavSystemOverridePolicy : uint8
{
	Override                                 = 0,
	Append                                   = 1,
	Skip                                     = 2,
	ENavSystemOverridePolicy_MAX             = 3,
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0020 (0x0020 - 0x0000)
struct FNavCollisionCylinder final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionCylinder) == 0x000008, "Wrong alignment on FNavCollisionCylinder");
static_assert(sizeof(FNavCollisionCylinder) == 0x000020, "Wrong size on FNavCollisionCylinder");
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x000000, "Member 'FNavCollisionCylinder::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Radius) == 0x000018, "Member 'FNavCollisionCylinder::Radius' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Height) == 0x00001C, "Member 'FNavCollisionCylinder::Height' has a wrong offset!");

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0030 (0x0030 - 0x0000)
struct FNavCollisionBox final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Extent;                                            // 0x0018(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionBox) == 0x000008, "Wrong alignment on FNavCollisionBox");
static_assert(sizeof(FNavCollisionBox) == 0x000030, "Wrong size on FNavCollisionBox");
static_assert(offsetof(FNavCollisionBox, Offset) == 0x000000, "Member 'FNavCollisionBox::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000018, "Member 'FNavCollisionBox::Extent' has a wrong offset!");

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018 (0x0018 - 0x0000)
struct FNavigationFilterArea final
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TravelCostOverride;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnteringCostOverride;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsExcluded : 1;                                   // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideTravelCost : 1;                           // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideEnteringCost : 1;                         // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2506[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterArea) == 0x000008, "Wrong alignment on FNavigationFilterArea");
static_assert(sizeof(FNavigationFilterArea) == 0x000018, "Wrong size on FNavigationFilterArea");
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x000000, "Member 'FNavigationFilterArea::AreaClass' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, TravelCostOverride) == 0x000008, "Member 'FNavigationFilterArea::TravelCostOverride' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, EnteringCostOverride) == 0x00000C, "Member 'FNavigationFilterArea::EnteringCostOverride' has a wrong offset!");

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FNavigationFilterFlags final
{
public:
	uint8                                         bNavFlag0 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag1 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag2 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag3 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag4 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag5 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag6 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag7 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag8 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag9 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag10 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag11 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag12 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag13 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag14 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag15 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2507[0x2];                                     // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterFlags) == 0x000004, "Wrong alignment on FNavigationFilterFlags");
static_assert(sizeof(FNavigationFilterFlags) == 0x000004, "Wrong size on FNavigationFilterFlags");

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FNavGraphEdge final
{
public:
	uint8                                         Pad_2508[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphEdge) == 0x000008, "Wrong alignment on FNavGraphEdge");
static_assert(sizeof(FNavGraphEdge) == 0x000018, "Wrong size on FNavGraphEdge");

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018 (0x0018 - 0x0000)
struct FNavGraphNode final
{
public:
	class UObject*                                Owner;                                             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2509[0x10];                                    // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphNode) == 0x000008, "Wrong alignment on FNavGraphNode");
static_assert(sizeof(FNavGraphNode) == 0x000018, "Wrong size on FNavGraphNode");
static_assert(offsetof(FNavGraphNode, Owner) == 0x000000, "Member 'FNavGraphNode::Owner' has a wrong offset!");

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020 (0x0020 - 0x0000)
struct FSupportedAreaData final
{
public:
	class FString                                 AreaClassName;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AreaID;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_250A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    AreaClass;                                         // 0x0018(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSupportedAreaData) == 0x000008, "Wrong alignment on FSupportedAreaData");
static_assert(sizeof(FSupportedAreaData) == 0x000020, "Wrong size on FSupportedAreaData");
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x000000, "Member 'FSupportedAreaData::AreaClassName' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaID) == 0x000010, "Member 'FSupportedAreaData::AreaID' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x000018, "Member 'FSupportedAreaData::AreaClass' has a wrong offset!");

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0010 (0x0078 - 0x0068)
struct FNavLinkCustomInstanceData final : public FActorComponentInstanceData
{
public:
	struct FNavLinkId                             CustomLinkId;                                      // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavLinkAuxiliaryId                    AuxiliaryCustomLinkId;                             // 0x0070(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavLinkCustomInstanceData) == 0x000008, "Wrong alignment on FNavLinkCustomInstanceData");
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x000078, "Wrong size on FNavLinkCustomInstanceData");
static_assert(offsetof(FNavLinkCustomInstanceData, CustomLinkId) == 0x000068, "Member 'FNavLinkCustomInstanceData::CustomLinkId' has a wrong offset!");
static_assert(offsetof(FNavLinkCustomInstanceData, AuxiliaryCustomLinkId) == 0x000070, "Member 'FNavLinkCustomInstanceData::AuxiliaryCustomLinkId' has a wrong offset!");

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040 (0x0040 - 0x0000)
struct FRecastNavMeshGenerationProperties final
{
public:
	int32                                         TilePoolSize;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileSizeUU;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSize;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentRadius;                                       // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentHeight;                                       // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxSlope;                                     // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxStepHeight;                                // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinRegionArea;                                     // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MergeRegionSize;                                   // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxSimplificationError;                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TileNumberHardLimit;                               // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecastPartitioning                           RegionPartitioning;                                // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecastPartitioning                           LayerPartitioning;                                 // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_250B[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RegionChunkSplits;                                 // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LayerChunkSplits;                                  // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSortNavigationAreasByCost : 1;                    // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPerformVoxelFiltering : 1;                        // 0x003C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bMarkLowHeightAreas : 1;                           // 0x003C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseExtraTopCellWhenMarkingAreas : 1;              // 0x003C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFilterLowSpanSequences : 1;                       // 0x003C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFilterLowSpanFromTileCache : 1;                   // 0x003C(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFixedTilePoolSize : 1;                            // 0x003C(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsWorldPartitioned : 1;                           // 0x003C(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_250C[0x3];                                     // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRecastNavMeshGenerationProperties) == 0x000004, "Wrong alignment on FRecastNavMeshGenerationProperties");
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x000040, "Wrong size on FRecastNavMeshGenerationProperties");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TilePoolSize) == 0x000000, "Member 'FRecastNavMeshGenerationProperties::TilePoolSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TileSizeUU) == 0x000004, "Member 'FRecastNavMeshGenerationProperties::TileSizeUU' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, CellSize) == 0x000008, "Member 'FRecastNavMeshGenerationProperties::CellSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, CellHeight) == 0x00000C, "Member 'FRecastNavMeshGenerationProperties::CellHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentRadius) == 0x000010, "Member 'FRecastNavMeshGenerationProperties::AgentRadius' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentHeight) == 0x000014, "Member 'FRecastNavMeshGenerationProperties::AgentHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentMaxSlope) == 0x000018, "Member 'FRecastNavMeshGenerationProperties::AgentMaxSlope' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentMaxStepHeight) == 0x00001C, "Member 'FRecastNavMeshGenerationProperties::AgentMaxStepHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MinRegionArea) == 0x000020, "Member 'FRecastNavMeshGenerationProperties::MinRegionArea' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MergeRegionSize) == 0x000024, "Member 'FRecastNavMeshGenerationProperties::MergeRegionSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MaxSimplificationError) == 0x000028, "Member 'FRecastNavMeshGenerationProperties::MaxSimplificationError' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TileNumberHardLimit) == 0x00002C, "Member 'FRecastNavMeshGenerationProperties::TileNumberHardLimit' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x000030, "Member 'FRecastNavMeshGenerationProperties::RegionPartitioning' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x000031, "Member 'FRecastNavMeshGenerationProperties::LayerPartitioning' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionChunkSplits) == 0x000034, "Member 'FRecastNavMeshGenerationProperties::RegionChunkSplits' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerChunkSplits) == 0x000038, "Member 'FRecastNavMeshGenerationProperties::LayerChunkSplits' has a wrong offset!");

// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
// 0x001C (0x001C - 0x0000)
struct FRecastNavMeshTileGenerationDebug final
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_250D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             TileCoordinate;                                    // 0x0004(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bGenerateDebugTileOnly : 1;                        // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCollisionGeometry : 1;                            // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_250E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EHeightFieldRenderMode                        HeightFieldRenderMode;                             // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_250F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bHeightfieldFromRasterization : 1;                 // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostInclusionBoundsFiltering : 1;      // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostHeightFiltering : 1;               // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldBounds : 1;                            // 0x0018(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfield : 1;                           // 0x0018(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldEroded : 1;                     // 0x0018(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldRegions : 1;                    // 0x0018(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldDistances : 1;                  // 0x0018(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerAreas : 1;                          // 0x0019(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerRegions : 1;                        // 0x0019(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheContours : 1;                            // 0x0019(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCachePolyMesh : 1;                            // 0x0019(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheDetailMesh : 1;                          // 0x0019(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2510[0x2];                                     // 0x001A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRecastNavMeshTileGenerationDebug) == 0x000004, "Wrong alignment on FRecastNavMeshTileGenerationDebug");
static_assert(sizeof(FRecastNavMeshTileGenerationDebug) == 0x00001C, "Wrong size on FRecastNavMeshTileGenerationDebug");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, TileCoordinate) == 0x000004, "Member 'FRecastNavMeshTileGenerationDebug::TileCoordinate' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode) == 0x000014, "Member 'FRecastNavMeshTileGenerationDebug::HeightFieldRenderMode' has a wrong offset!");

// ScriptStruct NavigationSystem.NavMeshResolutionParam
// 0x000C (0x000C - 0x0000)
struct FNavMeshResolutionParam final
{
public:
	float                                         CellSize;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxStepHeight;                                // 0x0008(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavMeshResolutionParam) == 0x000004, "Wrong alignment on FNavMeshResolutionParam");
static_assert(sizeof(FNavMeshResolutionParam) == 0x00000C, "Wrong size on FNavMeshResolutionParam");
static_assert(offsetof(FNavMeshResolutionParam, CellSize) == 0x000000, "Member 'FNavMeshResolutionParam::CellSize' has a wrong offset!");
static_assert(offsetof(FNavMeshResolutionParam, CellHeight) == 0x000004, "Member 'FNavMeshResolutionParam::CellHeight' has a wrong offset!");
static_assert(offsetof(FNavMeshResolutionParam, AgentMaxStepHeight) == 0x000008, "Member 'FNavMeshResolutionParam::AgentMaxStepHeight' has a wrong offset!");

}

