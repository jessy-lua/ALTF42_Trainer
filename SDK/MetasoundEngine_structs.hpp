#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundEngine

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MetasoundFrontend_structs.hpp"


namespace SDK
{

// Enum MetasoundEngine.EMetaSoundMessageLevel
// NumValues: 0x0004
enum class EMetaSoundMessageLevel : uint8
{
	Error                                    = 0,
	Warning                                  = 1,
	Info                                     = 2,
	EMetaSoundMessageLevel_MAX               = 3,
};

// Enum MetasoundEngine.EMetaSoundOutputAudioFormat
// NumValues: 0x0007
enum class EMetaSoundOutputAudioFormat : uint8
{
	Mono                                     = 0,
	Stereo                                   = 1,
	Quad                                     = 2,
	FiveDotOne                               = 3,
	SevenDotOne                              = 4,
	COUNT                                    = 5,
	EMetaSoundOutputAudioFormat_MAX          = 6,
};

// Enum MetasoundEngine.EMetaSoundBuilderResult
// NumValues: 0x0003
enum class EMetaSoundBuilderResult : uint8
{
	Succeeded                                = 0,
	Failed                                   = 1,
	EMetaSoundBuilderResult_MAX              = 2,
};

// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
// 0x0030 (0x0030 - 0x0000)
struct FMetaSoundAsyncAssetDependencies final
{
public:
	uint8                                         Pad_2BEC[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Metasound;                                         // 0x0008(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2BED[0x20];                                    // 0x0010(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMetaSoundAsyncAssetDependencies) == 0x000008, "Wrong alignment on FMetaSoundAsyncAssetDependencies");
static_assert(sizeof(FMetaSoundAsyncAssetDependencies) == 0x000030, "Wrong size on FMetaSoundAsyncAssetDependencies");
static_assert(offsetof(FMetaSoundAsyncAssetDependencies, Metasound) == 0x000008, "Member 'FMetaSoundAsyncAssetDependencies::Metasound' has a wrong offset!");

// ScriptStruct MetasoundEngine.MetaSoundOutput
// 0x0008 (0x0010 - 0x0008)
struct alignas(0x08) FMetaSoundOutput final : public FSoundGeneratorOutput
{
public:
	uint8                                         Pad_2BEE[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMetaSoundOutput) == 0x000008, "Wrong alignment on FMetaSoundOutput");
static_assert(sizeof(FMetaSoundOutput) == 0x000010, "Wrong size on FMetaSoundOutput");

// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// 0x0020 (0x0020 - 0x0000)
struct FDefaultMetaSoundAssetAutoUpdateSettings final
{
public:
	struct FSoftObjectPath                        Metasound;                                         // 0x0000(0x0020)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x000008, "Wrong alignment on FDefaultMetaSoundAssetAutoUpdateSettings");
static_assert(sizeof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x000020, "Wrong size on FDefaultMetaSoundAssetAutoUpdateSettings");
static_assert(offsetof(FDefaultMetaSoundAssetAutoUpdateSettings, Metasound) == 0x000000, "Member 'FDefaultMetaSoundAssetAutoUpdateSettings::Metasound' has a wrong offset!");

// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
// 0x0010 (0x0010 - 0x0000)
struct FMetaSoundAssetDirectory final
{
public:
	struct FDirectoryPath                         Directory;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMetaSoundAssetDirectory) == 0x000008, "Wrong alignment on FMetaSoundAssetDirectory");
static_assert(sizeof(FMetaSoundAssetDirectory) == 0x000010, "Wrong size on FMetaSoundAssetDirectory");
static_assert(offsetof(FMetaSoundAssetDirectory, Directory) == 0x000000, "Member 'FMetaSoundAssetDirectory::Directory' has a wrong offset!");

// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeInputHandle
// 0x0000 (0x0020 - 0x0020)
struct FMetaSoundBuilderNodeInputHandle final : public FMetasoundFrontendVertexHandle
{
};
static_assert(alignof(FMetaSoundBuilderNodeInputHandle) == 0x000004, "Wrong alignment on FMetaSoundBuilderNodeInputHandle");
static_assert(sizeof(FMetaSoundBuilderNodeInputHandle) == 0x000020, "Wrong size on FMetaSoundBuilderNodeInputHandle");

// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeOutputHandle
// 0x0000 (0x0020 - 0x0020)
struct FMetaSoundBuilderNodeOutputHandle final : public FMetasoundFrontendVertexHandle
{
};
static_assert(alignof(FMetaSoundBuilderNodeOutputHandle) == 0x000004, "Wrong alignment on FMetaSoundBuilderNodeOutputHandle");
static_assert(sizeof(FMetaSoundBuilderNodeOutputHandle) == 0x000020, "Wrong size on FMetaSoundBuilderNodeOutputHandle");

// ScriptStruct MetasoundEngine.MetaSoundNodeHandle
// 0x0010 (0x0010 - 0x0000)
struct FMetaSoundNodeHandle final
{
public:
	struct FGuid                                  NodeId;                                            // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMetaSoundNodeHandle) == 0x000004, "Wrong alignment on FMetaSoundNodeHandle");
static_assert(sizeof(FMetaSoundNodeHandle) == 0x000010, "Wrong size on FMetaSoundNodeHandle");
static_assert(offsetof(FMetaSoundNodeHandle, NodeId) == 0x000000, "Member 'FMetaSoundNodeHandle::NodeId' has a wrong offset!");

// ScriptStruct MetasoundEngine.MetaSoundBuilderOptions
// 0x0020 (0x0020 - 0x0000)
struct FMetaSoundBuilderOptions final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceUniqueClassName;                             // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddToRegistry;                                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2BEF[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMetaSoundDocumentInterface> ExistingMetaSound;                                 // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMetaSoundBuilderOptions) == 0x000008, "Wrong alignment on FMetaSoundBuilderOptions");
static_assert(sizeof(FMetaSoundBuilderOptions) == 0x000020, "Wrong size on FMetaSoundBuilderOptions");
static_assert(offsetof(FMetaSoundBuilderOptions, Name) == 0x000000, "Member 'FMetaSoundBuilderOptions::Name' has a wrong offset!");
static_assert(offsetof(FMetaSoundBuilderOptions, bForceUniqueClassName) == 0x000008, "Member 'FMetaSoundBuilderOptions::bForceUniqueClassName' has a wrong offset!");
static_assert(offsetof(FMetaSoundBuilderOptions, bAddToRegistry) == 0x000009, "Member 'FMetaSoundBuilderOptions::bAddToRegistry' has a wrong offset!");
static_assert(offsetof(FMetaSoundBuilderOptions, ExistingMetaSound) == 0x000010, "Member 'FMetaSoundBuilderOptions::ExistingMetaSound' has a wrong offset!");

}

