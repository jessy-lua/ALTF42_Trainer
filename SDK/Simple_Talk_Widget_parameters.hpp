#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Simple_Talk_Widget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.ExecuteUbergraph_Simple_Talk_Widget
// 0x0048 (0x0048 - 0x0000)
struct Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_NPC_NAme;                       // 0x0008(0x0018)()
	class UObject*                                K2Node_CustomEvent_NPC_Image;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Talk_Text;                      // 0x0028(0x0018)()
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget) == 0x000008, "Wrong alignment on Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget");
static_assert(sizeof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget) == 0x000048, "Wrong size on Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget");
static_assert(offsetof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget, EntryPoint) == 0x000000, "Member 'Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget, K2Node_CustomEvent_NPC_NAme) == 0x000008, "Member 'Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget::K2Node_CustomEvent_NPC_NAme' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget, K2Node_CustomEvent_NPC_Image) == 0x000020, "Member 'Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget::K2Node_CustomEvent_NPC_Image' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget, K2Node_CustomEvent_Talk_Text) == 0x000028, "Member 'Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget::K2Node_CustomEvent_Talk_Text' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget, K2Node_CustomEvent_InVisibility) == 0x000040, "Member 'Simple_Talk_Widget_C_ExecuteUbergraph_Simple_Talk_Widget::K2Node_CustomEvent_InVisibility' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.Get_DialogueText_Text_0
// 0x0018 (0x0018 - 0x0000)
struct Simple_Talk_Widget_C_Get_DialogueText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Simple_Talk_Widget_C_Get_DialogueText_Text_0) == 0x000008, "Wrong alignment on Simple_Talk_Widget_C_Get_DialogueText_Text_0");
static_assert(sizeof(Simple_Talk_Widget_C_Get_DialogueText_Text_0) == 0x000018, "Wrong size on Simple_Talk_Widget_C_Get_DialogueText_Text_0");
static_assert(offsetof(Simple_Talk_Widget_C_Get_DialogueText_Text_0, ReturnValue) == 0x000000, "Member 'Simple_Talk_Widget_C_Get_DialogueText_Text_0::ReturnValue' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.Get_Icon_Image_Brush
// 0x01E0 (0x01E0 - 0x0000)
struct Simple_Talk_Widget_C_Get_Icon_Image_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	class UObject*                                KeyImage_;                                         // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector2D                              Image_Size;                                        // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALTF42_InGame_PC_Loco_C*               K2Node_DynamicCast_AsALTF42_in_Game_PC_Loco;       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345C[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0100(0x00D0)()
	struct FDeprecateSlateVector2D                K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0x01D0(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Simple_Talk_Widget_C_Get_Icon_Image_Brush) == 0x000010, "Wrong alignment on Simple_Talk_Widget_C_Get_Icon_Image_Brush");
static_assert(sizeof(Simple_Talk_Widget_C_Get_Icon_Image_Brush) == 0x0001E0, "Wrong size on Simple_Talk_Widget_C_Get_Icon_Image_Brush");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, ReturnValue) == 0x000000, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::ReturnValue' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, KeyImage_) == 0x0000D0, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::KeyImage_' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, Image_Size) == 0x0000D8, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::Image_Size' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, CallFunc_GetPlayerController_ReturnValue) == 0x0000E8, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, K2Node_DynamicCast_AsALTF42_in_Game_PC_Loco) == 0x0000F0, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::K2Node_DynamicCast_AsALTF42_in_Game_PC_Loco' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, K2Node_MakeStruct_SlateBrush) == 0x000100, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_Icon_Image_Brush, K2Node_MakeStruct_ImageSize_ImplicitCast) == 0x0001D0, "Member 'Simple_Talk_Widget_C_Get_Icon_Image_Brush::K2Node_MakeStruct_ImageSize_ImplicitCast' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.Get_NPCImage
// 0x01C0 (0x01C0 - 0x0000)
struct Simple_Talk_Widget_C_Get_NPCImage final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D0(0x0014)()
	uint8                                         Pad_345D[0xC];                                     // 0x00E4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00F0(0x00D0)()
};
static_assert(alignof(Simple_Talk_Widget_C_Get_NPCImage) == 0x000010, "Wrong alignment on Simple_Talk_Widget_C_Get_NPCImage");
static_assert(sizeof(Simple_Talk_Widget_C_Get_NPCImage) == 0x0001C0, "Wrong size on Simple_Talk_Widget_C_Get_NPCImage");
static_assert(offsetof(Simple_Talk_Widget_C_Get_NPCImage, ReturnValue) == 0x000000, "Member 'Simple_Talk_Widget_C_Get_NPCImage::ReturnValue' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_NPCImage, K2Node_MakeStruct_SlateColor) == 0x0000D0, "Member 'Simple_Talk_Widget_C_Get_NPCImage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_Get_NPCImage, K2Node_MakeStruct_SlateBrush) == 0x0000F0, "Member 'Simple_Talk_Widget_C_Get_NPCImage::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.Get_NPCNameText
// 0x0018 (0x0018 - 0x0000)
struct Simple_Talk_Widget_C_Get_NPCNameText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Simple_Talk_Widget_C_Get_NPCNameText) == 0x000008, "Wrong alignment on Simple_Talk_Widget_C_Get_NPCNameText");
static_assert(sizeof(Simple_Talk_Widget_C_Get_NPCNameText) == 0x000018, "Wrong size on Simple_Talk_Widget_C_Get_NPCNameText");
static_assert(offsetof(Simple_Talk_Widget_C_Get_NPCNameText, ReturnValue) == 0x000000, "Member 'Simple_Talk_Widget_C_Get_NPCNameText::ReturnValue' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.Push_Visible
// 0x0001 (0x0001 - 0x0000)
struct Simple_Talk_Widget_C_Push_Visible final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Simple_Talk_Widget_C_Push_Visible) == 0x000001, "Wrong alignment on Simple_Talk_Widget_C_Push_Visible");
static_assert(sizeof(Simple_Talk_Widget_C_Push_Visible) == 0x000001, "Wrong size on Simple_Talk_Widget_C_Push_Visible");
static_assert(offsetof(Simple_Talk_Widget_C_Push_Visible, InVisibility) == 0x000000, "Member 'Simple_Talk_Widget_C_Push_Visible::InVisibility' has a wrong offset!");

// Function Simple_Talk_Widget.Simple_Talk_Widget_C.TalkStart
// 0x0038 (0x0038 - 0x0000)
struct Simple_Talk_Widget_C_TalkStart final
{
public:
	class FText                                   Param_NPC_NAme;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                Param_NPC_Image;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   Param_Talk_Text;                                   // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Simple_Talk_Widget_C_TalkStart) == 0x000008, "Wrong alignment on Simple_Talk_Widget_C_TalkStart");
static_assert(sizeof(Simple_Talk_Widget_C_TalkStart) == 0x000038, "Wrong size on Simple_Talk_Widget_C_TalkStart");
static_assert(offsetof(Simple_Talk_Widget_C_TalkStart, Param_NPC_NAme) == 0x000000, "Member 'Simple_Talk_Widget_C_TalkStart::Param_NPC_NAme' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_TalkStart, Param_NPC_Image) == 0x000018, "Member 'Simple_Talk_Widget_C_TalkStart::Param_NPC_Image' has a wrong offset!");
static_assert(offsetof(Simple_Talk_Widget_C_TalkStart, Param_Talk_Text) == 0x000020, "Member 'Simple_Talk_Widget_C_TalkStart::Param_Talk_Text' has a wrong offset!");

}

