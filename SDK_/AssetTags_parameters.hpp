#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetTags

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AssetTags.AssetTagsSubsystem.CollectionExists
// 0x000C (0x000C - 0x0000)
struct AssetTagsSubsystem_CollectionExists final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2BA1[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AssetTagsSubsystem_CollectionExists) == 0x000004, "Wrong alignment on AssetTagsSubsystem_CollectionExists");
static_assert(sizeof(AssetTagsSubsystem_CollectionExists) == 0x00000C, "Wrong size on AssetTagsSubsystem_CollectionExists");
static_assert(offsetof(AssetTagsSubsystem_CollectionExists, Param_Name) == 0x000000, "Member 'AssetTagsSubsystem_CollectionExists::Param_Name' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_CollectionExists, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_CollectionExists::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetAssetsInCollection final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_GetAssetsInCollection) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetAssetsInCollection");
static_assert(sizeof(AssetTagsSubsystem_GetAssetsInCollection) == 0x000018, "Wrong size on AssetTagsSubsystem_GetAssetsInCollection");
static_assert(offsetof(AssetTagsSubsystem_GetAssetsInCollection, Param_Name) == 0x000000, "Member 'AssetTagsSubsystem_GetAssetsInCollection::Param_Name' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetAssetsInCollection, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetAssetsInCollection::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.GetCollections
// 0x0010 (0x0010 - 0x0000)
struct AssetTagsSubsystem_GetCollections final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_GetCollections) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollections");
static_assert(sizeof(AssetTagsSubsystem_GetCollections) == 0x000010, "Wrong size on AssetTagsSubsystem_GetCollections");
static_assert(offsetof(AssetTagsSubsystem_GetCollections, ReturnValue) == 0x000000, "Member 'AssetTagsSubsystem_GetCollections::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAsset final
{
public:
	class FName                                   AssetPathName;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAsset) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAsset");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAsset) == 0x000018, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAsset");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAsset, AssetPathName) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAsset::AssetPathName' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAsset, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetCollectionsContainingAsset::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// 0x0078 (0x0078 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAssetData final
{
public:
	struct FAssetData                             AssetData;                                         // 0x0000(0x0068)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0068(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAssetData) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAssetData");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAssetData) == 0x000078, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAssetData");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetData, AssetData) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetData::AssetData' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetData, ReturnValue) == 0x000068, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetData::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// 0x0018 (0x0018 - 0x0000)
struct AssetTagsSubsystem_GetCollectionsContainingAssetPtr final
{
public:
	const class UObject*                          AssetPtr;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAssetPtr");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr) == 0x000018, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAssetPtr");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr, AssetPtr) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetPtr::AssetPtr' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetPtr::ReturnValue' has a wrong offset!");

// Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
// 0x0030 (0x0030 - 0x0000)
struct AssetTagsSubsystem_K2_GetCollectionsContainingAsset final
{
public:
	struct FSoftObjectPath                        AssetPath;                                         // 0x0000(0x0020)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset) == 0x000008, "Wrong alignment on AssetTagsSubsystem_K2_GetCollectionsContainingAsset");
static_assert(sizeof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset) == 0x000030, "Wrong size on AssetTagsSubsystem_K2_GetCollectionsContainingAsset");
static_assert(offsetof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset, AssetPath) == 0x000000, "Member 'AssetTagsSubsystem_K2_GetCollectionsContainingAsset::AssetPath' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset, ReturnValue) == 0x000020, "Member 'AssetTagsSubsystem_K2_GetCollectionsContainingAsset::ReturnValue' has a wrong offset!");

}

