#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildPatchServices

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020 (0x0020 - 0x0000)
struct FCustomFieldData final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomFieldData) == 0x000008, "Wrong alignment on FCustomFieldData");
static_assert(sizeof(FCustomFieldData) == 0x000020, "Wrong size on FCustomFieldData");
static_assert(offsetof(FCustomFieldData, Key) == 0x000000, "Member 'FCustomFieldData::Key' has a wrong offset!");
static_assert(offsetof(FCustomFieldData, Value) == 0x000010, "Member 'FCustomFieldData::Value' has a wrong offset!");

// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014 (0x0014 - 0x0000)
struct FSHAHashData final
{
public:
	uint8                                         Hash[0x14];                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSHAHashData) == 0x000001, "Wrong alignment on FSHAHashData");
static_assert(sizeof(FSHAHashData) == 0x000014, "Wrong size on FSHAHashData");
static_assert(offsetof(FSHAHashData, Hash) == 0x000000, "Member 'FSHAHashData::Hash' has a wrong offset!");

// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040 (0x0040 - 0x0000)
struct FChunkInfoData final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                        Hash;                                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSHAHashData                           ShaHash;                                           // 0x0018(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_CD[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         FileSize;                                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         GroupNumber;                                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CE[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChunkInfoData) == 0x000008, "Wrong alignment on FChunkInfoData");
static_assert(sizeof(FChunkInfoData) == 0x000040, "Wrong size on FChunkInfoData");
static_assert(offsetof(FChunkInfoData, Guid) == 0x000000, "Member 'FChunkInfoData::Guid' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, Hash) == 0x000010, "Member 'FChunkInfoData::Hash' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, ShaHash) == 0x000018, "Member 'FChunkInfoData::ShaHash' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, FileSize) == 0x000030, "Member 'FChunkInfoData::FileSize' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, GroupNumber) == 0x000038, "Member 'FChunkInfoData::GroupNumber' has a wrong offset!");

// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018 (0x0018 - 0x0000)
struct FChunkPartData final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Offset;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Size;                                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChunkPartData) == 0x000004, "Wrong alignment on FChunkPartData");
static_assert(sizeof(FChunkPartData) == 0x000018, "Wrong size on FChunkPartData");
static_assert(offsetof(FChunkPartData, Guid) == 0x000000, "Member 'FChunkPartData::Guid' has a wrong offset!");
static_assert(offsetof(FChunkPartData, Offset) == 0x000010, "Member 'FChunkPartData::Offset' has a wrong offset!");
static_assert(offsetof(FChunkPartData, Size) == 0x000014, "Member 'FChunkPartData::Size' has a wrong offset!");

// ScriptStruct BuildPatchServices.FileManifestData
// 0x0068 (0x0068 - 0x0000)
struct FFileManifestData final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSHAHashData                           FileHash;                                          // 0x0010(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_CF[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FChunkPartData>                 FileChunkParts;                                    // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         InstallTags;                                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsUnixExecutable;                                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D0[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SymlinkTarget;                                     // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsReadOnly;                                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCompressed;                                     // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D1[0x6];                                       // 0x0062(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFileManifestData) == 0x000008, "Wrong alignment on FFileManifestData");
static_assert(sizeof(FFileManifestData) == 0x000068, "Wrong size on FFileManifestData");
static_assert(offsetof(FFileManifestData, Filename) == 0x000000, "Member 'FFileManifestData::Filename' has a wrong offset!");
static_assert(offsetof(FFileManifestData, FileHash) == 0x000010, "Member 'FFileManifestData::FileHash' has a wrong offset!");
static_assert(offsetof(FFileManifestData, FileChunkParts) == 0x000028, "Member 'FFileManifestData::FileChunkParts' has a wrong offset!");
static_assert(offsetof(FFileManifestData, InstallTags) == 0x000038, "Member 'FFileManifestData::InstallTags' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsUnixExecutable) == 0x000048, "Member 'FFileManifestData::bIsUnixExecutable' has a wrong offset!");
static_assert(offsetof(FFileManifestData, SymlinkTarget) == 0x000050, "Member 'FFileManifestData::SymlinkTarget' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsReadOnly) == 0x000060, "Member 'FFileManifestData::bIsReadOnly' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsCompressed) == 0x000061, "Member 'FFileManifestData::bIsCompressed' has a wrong offset!");

}

