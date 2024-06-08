#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComputeFramework

#include "Basic.hpp"


namespace SDK::Params
{

// Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
// 0x0010 (0x0010 - 0x0000)
struct ComputeGraphComponent_CreateDataProviders final
{
public:
	int32                                         InBindingIndex;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                InBindingObject;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ComputeGraphComponent_CreateDataProviders) == 0x000008, "Wrong alignment on ComputeGraphComponent_CreateDataProviders");
static_assert(sizeof(ComputeGraphComponent_CreateDataProviders) == 0x000010, "Wrong size on ComputeGraphComponent_CreateDataProviders");
static_assert(offsetof(ComputeGraphComponent_CreateDataProviders, InBindingIndex) == 0x000000, "Member 'ComputeGraphComponent_CreateDataProviders::InBindingIndex' has a wrong offset!");
static_assert(offsetof(ComputeGraphComponent_CreateDataProviders, InBindingObject) == 0x000008, "Member 'ComputeGraphComponent_CreateDataProviders::InBindingObject' has a wrong offset!");

}
