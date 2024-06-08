#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangePipelines

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangePipelines.EInterchangeForceMeshType
// NumValues: 0x0004
enum class EInterchangeForceMeshType : uint8
{
	IFMT_None                                = 0,
	IFMT_StaticMesh                          = 1,
	IFMT_SkeletalMesh                        = 2,
	IFMT_MAX                                 = 3,
};

// Enum InterchangePipelines.EInterchangeVertexColorImportOption
// NumValues: 0x0004
enum class EInterchangeVertexColorImportOption : uint8
{
	IVCIO_Replace                            = 0,
	IVCIO_Ignore                             = 1,
	IVCIO_Override                           = 2,
	IVCIO_MAX                                = 3,
};

// Enum InterchangePipelines.EInterchangeMaterialXShaders
// NumValues: 0x0006
enum class EInterchangeMaterialXShaders : uint8
{
	StandardSurface                          = 0,
	StandardSurfaceTransmission              = 1,
	SurfaceUnlit                             = 2,
	UsdPreviewSurface                        = 3,
	MaxShaderCount                           = 4,
	EInterchangeMaterialXShaders_MAX         = 5,
};

// Enum InterchangePipelines.EInterchangeAnimationRange
// NumValues: 0x0004
enum class EInterchangeAnimationRange : uint8
{
	Timeline                                 = 0,
	Animated                                 = 1,
	SetRange                                 = 2,
	MAX                                      = 3,
};

// Enum InterchangePipelines.EInterchangeMaterialImportOption
// NumValues: 0x0003
enum class EInterchangeMaterialImportOption : uint8
{
	ImportAsMaterials                        = 0,
	ImportAsMaterialInstances                = 1,
	EInterchangeMaterialImportOption_MAX     = 2,
};

// ScriptStruct InterchangePipelines.InterchangeLodSceneNodeContainer
// 0x0010 (0x0010 - 0x0000)
struct FInterchangeLodSceneNodeContainer final
{
public:
	TArray<class UInterchangeSceneNode*>          SceneNodes;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangeLodSceneNodeContainer) == 0x000008, "Wrong alignment on FInterchangeLodSceneNodeContainer");
static_assert(sizeof(FInterchangeLodSceneNodeContainer) == 0x000010, "Wrong size on FInterchangeLodSceneNodeContainer");
static_assert(offsetof(FInterchangeLodSceneNodeContainer, SceneNodes) == 0x000000, "Member 'FInterchangeLodSceneNodeContainer::SceneNodes' has a wrong offset!");

// ScriptStruct InterchangePipelines.InterchangeMeshInstance
// 0x0080 (0x0080 - 0x0000)
struct FInterchangeMeshInstance final
{
public:
	class FString                                 MeshInstanceUid;                                   // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSceneNode*                  LodGroupNode;                                      // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReferenceSkinnedMesh;                             // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReferenceMorphTarget;                             // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasMorphTargets;                                  // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B5A[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, struct FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex;                              // 0x0020(0x0050)(Edit, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReferencingMeshGeometryUids;                       // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangeMeshInstance) == 0x000008, "Wrong alignment on FInterchangeMeshInstance");
static_assert(sizeof(FInterchangeMeshInstance) == 0x000080, "Wrong size on FInterchangeMeshInstance");
static_assert(offsetof(FInterchangeMeshInstance, MeshInstanceUid) == 0x000000, "Member 'FInterchangeMeshInstance::MeshInstanceUid' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, LodGroupNode) == 0x000010, "Member 'FInterchangeMeshInstance::LodGroupNode' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, bReferenceSkinnedMesh) == 0x000018, "Member 'FInterchangeMeshInstance::bReferenceSkinnedMesh' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, bReferenceMorphTarget) == 0x000019, "Member 'FInterchangeMeshInstance::bReferenceMorphTarget' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, bHasMorphTargets) == 0x00001A, "Member 'FInterchangeMeshInstance::bHasMorphTargets' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, SceneNodePerLodIndex) == 0x000020, "Member 'FInterchangeMeshInstance::SceneNodePerLodIndex' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshInstance, ReferencingMeshGeometryUids) == 0x000070, "Member 'FInterchangeMeshInstance::ReferencingMeshGeometryUids' has a wrong offset!");

// ScriptStruct InterchangePipelines.InterchangeMeshGeometry
// 0x0038 (0x0038 - 0x0000)
struct FInterchangeMeshGeometry final
{
public:
	class FString                                 MeshUid;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeMeshNode*                   MeshNode;                                          // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReferencingMeshInstanceUids;                       // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         AttachedSocketUids;                                // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangeMeshGeometry) == 0x000008, "Wrong alignment on FInterchangeMeshGeometry");
static_assert(sizeof(FInterchangeMeshGeometry) == 0x000038, "Wrong size on FInterchangeMeshGeometry");
static_assert(offsetof(FInterchangeMeshGeometry, MeshUid) == 0x000000, "Member 'FInterchangeMeshGeometry::MeshUid' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshGeometry, MeshNode) == 0x000010, "Member 'FInterchangeMeshGeometry::MeshNode' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshGeometry, ReferencingMeshInstanceUids) == 0x000018, "Member 'FInterchangeMeshGeometry::ReferencingMeshInstanceUids' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshGeometry, AttachedSocketUids) == 0x000028, "Member 'FInterchangeMeshGeometry::AttachedSocketUids' has a wrong offset!");

// ScriptStruct InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
// 0x0005 (0x0005 - 0x0000)
struct FInterchangePipelineMeshesUtilitiesContext final
{
public:
	bool                                          bConvertStaticMeshToSkeletalMesh;                  // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConvertSkeletalMeshToStaticMesh;                  // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConvertStaticsWithMorphTargetsToSkeletals;        // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImportMeshesInBoneHierarchy;                      // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bQueryGeometryOnlyIfNoInstance;                    // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangePipelineMeshesUtilitiesContext) == 0x000001, "Wrong alignment on FInterchangePipelineMeshesUtilitiesContext");
static_assert(sizeof(FInterchangePipelineMeshesUtilitiesContext) == 0x000005, "Wrong size on FInterchangePipelineMeshesUtilitiesContext");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticMeshToSkeletalMesh) == 0x000000, "Member 'FInterchangePipelineMeshesUtilitiesContext::bConvertStaticMeshToSkeletalMesh' has a wrong offset!");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertSkeletalMeshToStaticMesh) == 0x000001, "Member 'FInterchangePipelineMeshesUtilitiesContext::bConvertSkeletalMeshToStaticMesh' has a wrong offset!");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticsWithMorphTargetsToSkeletals) == 0x000002, "Member 'FInterchangePipelineMeshesUtilitiesContext::bConvertStaticsWithMorphTargetsToSkeletals' has a wrong offset!");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bImportMeshesInBoneHierarchy) == 0x000003, "Member 'FInterchangePipelineMeshesUtilitiesContext::bImportMeshesInBoneHierarchy' has a wrong offset!");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bQueryGeometryOnlyIfNoInstance) == 0x000004, "Member 'FInterchangePipelineMeshesUtilitiesContext::bQueryGeometryOnlyIfNoInstance' has a wrong offset!");

}

