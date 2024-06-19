#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsPickerSubButtonBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EWidgetStyleState_structs.hpp"


namespace SDK::Params
{

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetSubButtonStyle
// 0x0002 (0x0002 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle final
{
public:
	EWidgetStyleState                             Param_WidgetStyleState;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle) == 0x000001, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle) == 0x000002, "Wrong size on WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle, Param_WidgetStyleState) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle::Param_WidgetStyleState' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetMenuContainerReference
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference final
{
public:
	class UWBP_MenuContainer_C*                   MenuContainer;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference) == 0x000008, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference) == 0x000008, "Wrong size on WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference, MenuContainer) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference::MenuContainer' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetIndex
// 0x0004 (0x0004 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_SetIndex final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_SetIndex) == 0x000004, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_SetIndex");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_SetIndex) == 0x000004, "Wrong size on WBP_OptionsPickerSubButtonBase_C_SetIndex");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_SetIndex, InIndex) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_SetIndex::InIndex' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_PreConstruct");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_PreConstruct) == 0x000001, "Wrong size on WBP_OptionsPickerSubButtonBase_C_PreConstruct");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OverrideWidgetStyleFromConfig
// 0x004C (0x004C - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig final
{
public:
	struct FLinearColor                           CallFunc_GetColorByName_Color;                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByName_Color_1;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3032[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetColorByName_Color_2;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByName_Color_3;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig) == 0x000004, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig) == 0x00004C, "Wrong size on WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_1) == 0x000010, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_2) == 0x000024, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_3) == 0x000034, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000044, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000048, "Member 'WBP_OptionsPickerSubButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OnClickSubButton__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature) == 0x000004, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature) == 0x000004, "Wrong size on WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature, InIndex) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature::InIndex' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.GetIndex
// 0x0004 (0x0004 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_GetIndex final
{
public:
	int32                                         OutIndex;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_GetIndex) == 0x000004, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_GetIndex");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_GetIndex) == 0x000004, "Wrong size on WBP_OptionsPickerSubButtonBase_C_GetIndex");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_GetIndex, OutIndex) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_GetIndex::OutIndex' has a wrong offset!");

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.ExecuteUbergraph_WBP_OptionsPickerSubButtonBase
// 0x0010 (0x0010 - 0x0000)
struct WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3033[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_OutIndex;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase) == 0x000004, "Wrong alignment on WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase");
static_assert(sizeof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase) == 0x000010, "Wrong size on WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase, EntryPoint) == 0x000000, "Member 'WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase, CallFunc_GetIndex_OutIndex) == 0x000008, "Member 'WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase::CallFunc_GetIndex_OutIndex' has a wrong offset!");
static_assert(offsetof(WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000C, "Member 'WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

}

