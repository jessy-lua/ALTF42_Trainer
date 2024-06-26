#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyBinderButtonBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EWidgetStyleState_structs.hpp"
#include "Slate_structs.hpp"
#include "InputCore_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.SetWidgetState
// 0x0002 (0x0002 - 0x0000)
struct WBP_KeyBinderButtonBase_C_SetWidgetState final
{
public:
	EWidgetStyleState                             WidgetState;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_SetWidgetState) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_SetWidgetState");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_SetWidgetState) == 0x000002, "Wrong size on WBP_KeyBinderButtonBase_C_SetWidgetState");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetWidgetState, WidgetState) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_SetWidgetState::WidgetState' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetWidgetState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_KeyBinderButtonBase_C_SetWidgetState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.SetKeyTextOrIcon
// 0x0020 (0x0020 - 0x0000)
struct WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon final
{
public:
	bool                                          bIsWaitingForInput;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F29[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKeyOrButtonFromInputSubsystem_Key;     // 0x0008(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon) == 0x000020, "Wrong size on WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, bIsWaitingForInput) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::bIsWaitingForInput' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000004, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_IsValid_ReturnValue_2) == 0x000005, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon, CallFunc_GetKeyOrButtonFromInputSubsystem_Key) == 0x000008, "Member 'WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon::CallFunc_GetKeyOrButtonFromInputSubsystem_Key' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.RebindKeyOrButton
// 0x0058 (0x0058 - 0x0000)
struct WBP_KeyBinderButtonBase_C_RebindKeyOrButton final
{
public:
	struct FInputChord                            NewKey;                                            // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          bClearKey;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2A[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue; // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsValid_ReturnValue;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue_1;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2B[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_RebindKeyOrButton");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton) == 0x000058, "Wrong size on WBP_KeyBinderButtonBase_C_RebindKeyOrButton");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, NewKey) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::NewKey' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, bClearKey) == 0x000020, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::bClearKey' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000022, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess) == 0x000038, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue) == 0x000039, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_Key_IsValid_ReturnValue) == 0x00003B, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_Key_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_BooleanOR_ReturnValue) == 0x00003C, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_Key_IsGamepadKey_ReturnValue) == 0x00003D, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_Key_IsGamepadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_Not_PreBool_ReturnValue) == 0x00003E, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x00003F, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_Key_IsGamepadKey_ReturnValue_1) == 0x000040, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_Key_IsGamepadKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_BooleanOR_ReturnValue_1) == 0x000041, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, K2Node_SwitchEnum_CmpSuccess) == 0x000042, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000048, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_RebindKeyOrButton, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000050, "Member 'WBP_KeyBinderButtonBase_C_RebindKeyOrButton::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_KeyBinderButtonBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_PreConstruct");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_PreConstruct) == 0x000001, "Wrong size on WBP_KeyBinderButtonBase_C_PreConstruct");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OverrideWidgetStyleFromConfig
// 0x0044 (0x0044 - 0x0000)
struct WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetColorByName_Color;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByName_Color_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByName_Color_2;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByName_Color_3;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig) == 0x000004, "Wrong alignment on WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig) == 0x000044, "Wrong size on WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color) == 0x000004, "Member 'WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_1) == 0x000014, "Member 'WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_2) == 0x000024, "Member 'WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_2' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig, CallFunc_GetColorByName_Color_3) == 0x000034, "Member 'WBP_KeyBinderButtonBase_C_OverrideWidgetStyleFromConfig::CallFunc_GetColorByName_Color_3' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonUnhighlighted__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature final
{
public:
	class UWBP_KeyBinderButtonBase_C*             KeyBinderButtonBase;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature) == 0x000008, "Wrong size on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature, KeyBinderButtonBase) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature::KeyBinderButtonBase' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature final
{
public:
	class UWBP_KeyBinderButtonBase_C*             KeyBinderButton;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature) == 0x000008, "Wrong size on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature, KeyBinderButton) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature::KeyBinderButton' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonHighlighted__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature final
{
public:
	class UWBP_KeyBinderButtonBase_C*             KeyBinderButtonBase;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature) == 0x000008, "Wrong size on WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature, KeyBinderButtonBase) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature::KeyBinderButtonBase' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.GetKeyOrButtonFromInputSubsystem
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	struct FKey                                   CurrentKey;                                        // 0x0018(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetKeyFromKeyBinderButtonData_bSuccess;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerKeyMapping                      CallFunc_GetKeyFromKeyBinderButtonData_PlayerKeyMapping; // 0x0048(0x0090)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem) == 0x0000D8, "Wrong size on WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, Key) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::Key' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, CurrentKey) == 0x000018, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::CurrentKey' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, CallFunc_GetKeyFromKeyBinderButtonData_bSuccess) == 0x000040, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::CallFunc_GetKeyFromKeyBinderButtonData_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem, CallFunc_GetKeyFromKeyBinderButtonData_PlayerKeyMapping) == 0x000048, "Member 'WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem::CallFunc_GetKeyFromKeyBinderButtonData_PlayerKeyMapping' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ExecuteUbergraph_WBP_KeyBinderButtonBase
// 0x0038 (0x0038 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2F[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue; // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess_1; // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue_1; // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase) == 0x000038, "Wrong size on WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, EntryPoint) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000020, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess) == 0x000030, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue) == 0x000031, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess_1) == 0x000032, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_IsKeyFromKeyBinderButtonBindable_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue_1) == 0x000033, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_IsKeyFromKeyBinderButtonBindable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase, CallFunc_BooleanAND_ReturnValue_1) == 0x000035, "Member 'WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ClearBindingOnButton
// 0x0020 (0x0020 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ClearBindingOnButton final
{
public:
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0000(0x0020)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ClearBindingOnButton) == 0x000008, "Wrong alignment on WBP_KeyBinderButtonBase_C_ClearBindingOnButton");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ClearBindingOnButton) == 0x000020, "Wrong size on WBP_KeyBinderButtonBase_C_ClearBindingOnButton");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ClearBindingOnButton, K2Node_MakeStruct_InputChord) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ClearBindingOnButton::K2Node_MakeStruct_InputChord' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleNormal
// 0x0001 (0x0001 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal) == 0x000001, "Wrong size on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ApplyWidgetStyleNormal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleHighlighted
// 0x0001 (0x0001 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted) == 0x000001, "Wrong size on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ApplyWidgetStyleHighlighted::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleDisabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled) == 0x000001, "Wrong size on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ApplyWidgetStyleDisabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive) == 0x000001, "Wrong alignment on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive");
static_assert(sizeof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive) == 0x000001, "Wrong size on WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive");
static_assert(offsetof(WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_KeyBinderButtonBase_C_ApplyWidgetStyleActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

