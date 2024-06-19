#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptimusSettings

#include "Basic.hpp"

#include "OptimusSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class OptimusSettings.OptimusSettings
// 0x0058 (0x0090 - 0x0038)
class UOptimusSettings final : public UDeveloperSettings
{
public:
	EOptimusDefaultDeformerMode                   DefaultMode;                                       // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A51[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMeshDeformer>           DefaultDeformer;                                   // 0x0040(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMeshDeformer>           DefaultRecomputeTangentDeformer;                   // 0x0068(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OptimusSettings">();
	}
	static class UOptimusSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptimusSettings>();
	}
};
static_assert(alignof(UOptimusSettings) == 0x000008, "Wrong alignment on UOptimusSettings");
static_assert(sizeof(UOptimusSettings) == 0x000090, "Wrong size on UOptimusSettings");
static_assert(offsetof(UOptimusSettings, DefaultMode) == 0x000038, "Member 'UOptimusSettings::DefaultMode' has a wrong offset!");
static_assert(offsetof(UOptimusSettings, DefaultDeformer) == 0x000040, "Member 'UOptimusSettings::DefaultDeformer' has a wrong offset!");
static_assert(offsetof(UOptimusSettings, DefaultRecomputeTangentDeformer) == 0x000068, "Member 'UOptimusSettings::DefaultRecomputeTangentDeformer' has a wrong offset!");

}

