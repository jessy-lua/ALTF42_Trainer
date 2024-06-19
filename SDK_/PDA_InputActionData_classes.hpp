#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_InputActionData

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FInputActionDataElement_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_InputActionData.PDA_InputActionData_C
// 0x0098 (0x00C8 - 0x0030)
class UPDA_InputActionData_C final : public UPrimaryDataAsset
{
public:
	class FText                                   Name_PDA_InputActionData_C;                        // 0x0030(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Category;                                          // 0x0048(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Platform;                                          // 0x0060(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FKey, struct FFInputActionDataElement> InputActionDataElementMap;                         // 0x0078(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_InputActionData_C">();
	}
	static class UPDA_InputActionData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_InputActionData_C>();
	}
};
static_assert(alignof(UPDA_InputActionData_C) == 0x000008, "Wrong alignment on UPDA_InputActionData_C");
static_assert(sizeof(UPDA_InputActionData_C) == 0x0000C8, "Wrong size on UPDA_InputActionData_C");
static_assert(offsetof(UPDA_InputActionData_C, Name_PDA_InputActionData_C) == 0x000030, "Member 'UPDA_InputActionData_C::Name_PDA_InputActionData_C' has a wrong offset!");
static_assert(offsetof(UPDA_InputActionData_C, Category) == 0x000048, "Member 'UPDA_InputActionData_C::Category' has a wrong offset!");
static_assert(offsetof(UPDA_InputActionData_C, Platform) == 0x000060, "Member 'UPDA_InputActionData_C::Platform' has a wrong offset!");
static_assert(offsetof(UPDA_InputActionData_C, InputActionDataElementMap) == 0x000078, "Member 'UPDA_InputActionData_C::InputActionDataElementMap' has a wrong offset!");

}

