#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FooterButtonBase

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "EInputDeviceType_structs.hpp"
#include "EWidgetStyleState_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.ExecuteUbergraph_WBP_FooterButtonBase
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetStyleState                             K2Node_Event_HighlightState;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPlaySound;                           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeyEvent                              K2Node_Event_KeyEvent_1;                           // 0x0008(0x0040)()
	struct FKeyEvent                              K2Node_Event_KeyEvent;                             // 0x0048(0x0040)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E3[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Select_Default;                             // 0x0090(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAllowNavigation_bAllowNavigation;      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAllowNavigation_bAllowNavigation_1;    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAllowNavigation_bAllowNavigation_2;    // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase) == 0x000008, "Wrong alignment on WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase");
static_assert(sizeof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase) == 0x0000B0, "Wrong size on WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, EntryPoint) == 0x000000, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, Temp_byte_Variable) == 0x000004, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Event_IsDesignTime) == 0x000005, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Event_HighlightState) == 0x000006, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Event_HighlightState' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Event_bPlaySound) == 0x000007, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Event_bPlaySound' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Event_KeyEvent_1) == 0x000008, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Event_KeyEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Event_KeyEvent) == 0x000048, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Event_KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, K2Node_Select_Default) == 0x000090, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000A9, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_GetAllowNavigation_bAllowNavigation) == 0x0000AA, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_GetAllowNavigation_bAllowNavigation' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000AB, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_GetAllowNavigation_bAllowNavigation_1) == 0x0000AC, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_GetAllowNavigation_bAllowNavigation_1' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_GetAllowNavigation_bAllowNavigation_2) == 0x0000AD, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_GetAllowNavigation_bAllowNavigation_2' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000AE, "Member 'WBP_FooterButtonBase_C_ExecuteUbergraph_WBP_FooterButtonBase::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.SetupMappedKeys
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_FooterButtonBase_C_SetupMappedKeys final
{
public:
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer_1;     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping              CallFunc_Map_Find_Value;                           // 0x0038(0x0050)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26E4[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnhancedActionKeyMapping              CallFunc_Map_Find_Value_1;                         // 0x0090(0x0050)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_SetupMappedKeys) == 0x000008, "Wrong alignment on WBP_FooterButtonBase_C_SetupMappedKeys");
static_assert(sizeof(WBP_FooterButtonBase_C_SetupMappedKeys) == 0x0000E8, "Wrong size on WBP_FooterButtonBase_C_SetupMappedKeys");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Conv_NameToString_ReturnValue) == 0x000000, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_GetOwningContainer_OwningContainer) == 0x000010, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_GetOwningContainer_OwningContainer' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_GetOwningContainer_OwningContainer_1) == 0x000030, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_GetOwningContainer_OwningContainer_1' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Map_Find_Value_1) == 0x000090, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_SetupMappedKeys, CallFunc_Map_Find_ReturnValue_1) == 0x0000E0, "Member 'WBP_FooterButtonBase_C_SetupMappedKeys::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.UpdateButtonIcon
// 0x0002 (0x0002 - 0x0000)
struct WBP_FooterButtonBase_C_UpdateButtonIcon final
{
public:
	EInputDeviceType                              InputDeviceType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_UpdateButtonIcon) == 0x000001, "Wrong alignment on WBP_FooterButtonBase_C_UpdateButtonIcon");
static_assert(sizeof(WBP_FooterButtonBase_C_UpdateButtonIcon) == 0x000002, "Wrong size on WBP_FooterButtonBase_C_UpdateButtonIcon");
static_assert(offsetof(WBP_FooterButtonBase_C_UpdateButtonIcon, InputDeviceType) == 0x000000, "Member 'WBP_FooterButtonBase_C_UpdateButtonIcon::InputDeviceType' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_UpdateButtonIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_FooterButtonBase_C_UpdateButtonIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.OnSetHighlightEffect
// 0x0002 (0x0002 - 0x0000)
struct WBP_FooterButtonBase_C_OnSetHighlightEffect final
{
public:
	EWidgetStyleState                             Param_HighlightState;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlaySound;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_OnSetHighlightEffect) == 0x000001, "Wrong alignment on WBP_FooterButtonBase_C_OnSetHighlightEffect");
static_assert(sizeof(WBP_FooterButtonBase_C_OnSetHighlightEffect) == 0x000002, "Wrong size on WBP_FooterButtonBase_C_OnSetHighlightEffect");
static_assert(offsetof(WBP_FooterButtonBase_C_OnSetHighlightEffect, Param_HighlightState) == 0x000000, "Member 'WBP_FooterButtonBase_C_OnSetHighlightEffect::Param_HighlightState' has a wrong offset!");
static_assert(offsetof(WBP_FooterButtonBase_C_OnSetHighlightEffect, bPlaySound) == 0x000001, "Member 'WBP_FooterButtonBase_C_OnSetHighlightEffect::bPlaySound' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.RefreshWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_FooterButtonBase_C_RefreshWidget final
{
public:
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_RefreshWidget) == 0x000008, "Wrong alignment on WBP_FooterButtonBase_C_RefreshWidget");
static_assert(sizeof(WBP_FooterButtonBase_C_RefreshWidget) == 0x000008, "Wrong size on WBP_FooterButtonBase_C_RefreshWidget");
static_assert(offsetof(WBP_FooterButtonBase_C_RefreshWidget, CallFunc_GetOwningContainer_OwningContainer) == 0x000000, "Member 'WBP_FooterButtonBase_C_RefreshWidget::CallFunc_GetOwningContainer_OwningContainer' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.OnPressedBack
// 0x0040 (0x0040 - 0x0000)
struct WBP_FooterButtonBase_C_OnPressedBack final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_FooterButtonBase_C_OnPressedBack) == 0x000008, "Wrong alignment on WBP_FooterButtonBase_C_OnPressedBack");
static_assert(sizeof(WBP_FooterButtonBase_C_OnPressedBack) == 0x000040, "Wrong size on WBP_FooterButtonBase_C_OnPressedBack");
static_assert(offsetof(WBP_FooterButtonBase_C_OnPressedBack, KeyEvent) == 0x000000, "Member 'WBP_FooterButtonBase_C_OnPressedBack::KeyEvent' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.OnPressedSelect
// 0x0040 (0x0040 - 0x0000)
struct WBP_FooterButtonBase_C_OnPressedSelect final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_FooterButtonBase_C_OnPressedSelect) == 0x000008, "Wrong alignment on WBP_FooterButtonBase_C_OnPressedSelect");
static_assert(sizeof(WBP_FooterButtonBase_C_OnPressedSelect) == 0x000040, "Wrong size on WBP_FooterButtonBase_C_OnPressedSelect");
static_assert(offsetof(WBP_FooterButtonBase_C_OnPressedSelect, KeyEvent) == 0x000000, "Member 'WBP_FooterButtonBase_C_OnPressedSelect::KeyEvent' has a wrong offset!");

// Function WBP_FooterButtonBase.WBP_FooterButtonBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FooterButtonBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FooterButtonBase_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FooterButtonBase_C_PreConstruct");
static_assert(sizeof(WBP_FooterButtonBase_C_PreConstruct) == 0x000001, "Wrong size on WBP_FooterButtonBase_C_PreConstruct");
static_assert(offsetof(WBP_FooterButtonBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FooterButtonBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

