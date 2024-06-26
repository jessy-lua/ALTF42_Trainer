#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_BTTask_SetFocus

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ALS_BTTask_SetFocus.ALS_BTTask_SetFocus_C
// 0x0008 (0x00B0 - 0x00A8)
class UALS_BTTask_SetFocus_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ALS_BTTask_SetFocus(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALS_BTTask_SetFocus_C">();
	}
	static class UALS_BTTask_SetFocus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UALS_BTTask_SetFocus_C>();
	}
};
static_assert(alignof(UALS_BTTask_SetFocus_C) == 0x000008, "Wrong alignment on UALS_BTTask_SetFocus_C");
static_assert(sizeof(UALS_BTTask_SetFocus_C) == 0x0000B0, "Wrong size on UALS_BTTask_SetFocus_C");
static_assert(offsetof(UALS_BTTask_SetFocus_C, UberGraphFrame) == 0x0000A8, "Member 'UALS_BTTask_SetFocus_C::UberGraphFrame' has a wrong offset!");

}

