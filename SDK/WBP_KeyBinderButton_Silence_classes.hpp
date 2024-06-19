#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyBinderButton_Silence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_KeyBinderButtonBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_KeyBinderButton_Silence.WBP_KeyBinderButton_Silence_C
// 0x0028 (0x03A8 - 0x0380)
class UWBP_KeyBinderButton_Silence_C final : public UWBP_KeyBinderButtonBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_KeyBinderButton_Silence_C;      // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputIcon_C*                       InputIcon;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                KeyBinderButton;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OuterBorder;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              WaitingForInputThrobber;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_KeyBinderButton_Silence(int32 EntryPoint);
	void BndEvt__WBP_KeyBinderButton_Silence_KeyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_KeyBinderButton_Silence_KeyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_KeyBinderButton_Silence_KeyButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_KeyBinderButton_Silence_C">();
	}
	static class UWBP_KeyBinderButton_Silence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_KeyBinderButton_Silence_C>();
	}
};
static_assert(alignof(UWBP_KeyBinderButton_Silence_C) == 0x000008, "Wrong alignment on UWBP_KeyBinderButton_Silence_C");
static_assert(sizeof(UWBP_KeyBinderButton_Silence_C) == 0x0003A8, "Wrong size on UWBP_KeyBinderButton_Silence_C");
static_assert(offsetof(UWBP_KeyBinderButton_Silence_C, UberGraphFrame_WBP_KeyBinderButton_Silence_C) == 0x000380, "Member 'UWBP_KeyBinderButton_Silence_C::UberGraphFrame_WBP_KeyBinderButton_Silence_C' has a wrong offset!");
static_assert(offsetof(UWBP_KeyBinderButton_Silence_C, InputIcon) == 0x000388, "Member 'UWBP_KeyBinderButton_Silence_C::InputIcon' has a wrong offset!");
static_assert(offsetof(UWBP_KeyBinderButton_Silence_C, KeyBinderButton) == 0x000390, "Member 'UWBP_KeyBinderButton_Silence_C::KeyBinderButton' has a wrong offset!");
static_assert(offsetof(UWBP_KeyBinderButton_Silence_C, OuterBorder) == 0x000398, "Member 'UWBP_KeyBinderButton_Silence_C::OuterBorder' has a wrong offset!");
static_assert(offsetof(UWBP_KeyBinderButton_Silence_C, WaitingForInputThrobber) == 0x0003A0, "Member 'UWBP_KeyBinderButton_Silence_C::WaitingForInputThrobber' has a wrong offset!");

}

