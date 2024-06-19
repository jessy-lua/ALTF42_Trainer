#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DecisionDialog_Silence

#include "Basic.hpp"

#include "FFontStyle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_InteractableMenu_classes.hpp"
#include "EInputDeviceType_structs.hpp"
#include "ETransitionAnimation_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DecisionDialog_Silence.WBP_DecisionDialog_Silence_C
// 0x0298 (0x0670 - 0x03D8)
class UWBP_DecisionDialog_Silence_C final : public UWBP_InteractableMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_DecisionDialog_Silence_C;       // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PopupAnimation;                                    // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           AutoRevertProgressBar;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BackgroundBorder;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DecisionButton_Silence_C*          DecisionButton_No;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DecisionButton_Silence_C*          DecisionButton_Yes;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DialogBorder;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeadlineTitleText;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               InputIconSizeBox;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TextBody;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TopBorder;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputIcon_C*                       WBP_InputIcon;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             DecisionAccept;                                    // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   HeaderText;                                        // 0x0450(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   BodyText;                                          // 0x0468(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   AcceptText;                                        // 0x0480(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   DeclineText;                                       // 0x0498(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             DecisionDecline;                                   // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDecisionDialogIsReady;                            // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC8[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SecondsUntilRevert;                                // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             AutoRevert;                                        // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AutoRevertTimerHandle;                             // 0x04E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RevertProgressUpdateTimerHandle;                   // 0x04E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SecondsPerUpdate;                                  // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x04F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TitleTextColor;                                    // 0x0504(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BodyTextColor;                                     // 0x0514(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarFillColor;                                      // 0x0524(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarBackgroundColor;                                // 0x0534(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC9[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InteractableMenu_C*                SourceMenu;                                        // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFFontStyle                            TextTitleFontStyle;                                // 0x0550(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFFontStyle                            TextBodyFontStyle;                                 // 0x05D0(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Cancel;                                            // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPDA_DecisionDialogStyle_C*             StyleData;                                         // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoRevert;                                       // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRevertProgress;                                   // 0x0669(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AutoRevert__DelegateSignature();
	void BndEvt__WBP_DecisionDialog_DecisionButton_No_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature();
	void BndEvt__WBP_DecisionDialog_DecisionButton_Yes_K2Node_ComponentBoundEvent_1_OnWidgetClicked__DelegateSignature();
	void Cancel__DelegateSignature();
	void Construct();
	void DecisionAccept__DelegateSignature();
	void DecisionDecline__DelegateSignature();
	void ExecuteUbergraph_WBP_DecisionDialog_Silence(int32 EntryPoint);
	void HideDeclineButtonIfTextIsEmpty();
	void OnAutoRevertDecisionDialog();
	void OnCancel();
	void OnPopupAnimationFinished();
	void OnStartAutoRevertTimer();
	void OverrideWidgetStyleFromConfig();
	void RevertProgressUpdate();
	void UpdateAllTexts();
	void UpdateInputIcon();
	void NavigateBack();
	void OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType);
	void OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& Param_MenuLayer, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DecisionDialog_Silence_C">();
	}
	static class UWBP_DecisionDialog_Silence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DecisionDialog_Silence_C>();
	}
};
static_assert(alignof(UWBP_DecisionDialog_Silence_C) == 0x000008, "Wrong alignment on UWBP_DecisionDialog_Silence_C");
static_assert(sizeof(UWBP_DecisionDialog_Silence_C) == 0x000670, "Wrong size on UWBP_DecisionDialog_Silence_C");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, UberGraphFrame_WBP_DecisionDialog_Silence_C) == 0x0003D8, "Member 'UWBP_DecisionDialog_Silence_C::UberGraphFrame_WBP_DecisionDialog_Silence_C' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, PopupAnimation) == 0x0003E0, "Member 'UWBP_DecisionDialog_Silence_C::PopupAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, AutoRevertProgressBar) == 0x0003E8, "Member 'UWBP_DecisionDialog_Silence_C::AutoRevertProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BackgroundBorder) == 0x0003F0, "Member 'UWBP_DecisionDialog_Silence_C::BackgroundBorder' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DecisionButton_No) == 0x0003F8, "Member 'UWBP_DecisionDialog_Silence_C::DecisionButton_No' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DecisionButton_Yes) == 0x000400, "Member 'UWBP_DecisionDialog_Silence_C::DecisionButton_Yes' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DialogBorder) == 0x000408, "Member 'UWBP_DecisionDialog_Silence_C::DialogBorder' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, HeadlineTitleText) == 0x000410, "Member 'UWBP_DecisionDialog_Silence_C::HeadlineTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, InputIconSizeBox) == 0x000418, "Member 'UWBP_DecisionDialog_Silence_C::InputIconSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, MenuCanvasPanel) == 0x000420, "Member 'UWBP_DecisionDialog_Silence_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, TextBody) == 0x000428, "Member 'UWBP_DecisionDialog_Silence_C::TextBody' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, TopBorder) == 0x000430, "Member 'UWBP_DecisionDialog_Silence_C::TopBorder' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, WBP_InputIcon) == 0x000438, "Member 'UWBP_DecisionDialog_Silence_C::WBP_InputIcon' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DecisionAccept) == 0x000440, "Member 'UWBP_DecisionDialog_Silence_C::DecisionAccept' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, HeaderText) == 0x000450, "Member 'UWBP_DecisionDialog_Silence_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BodyText) == 0x000468, "Member 'UWBP_DecisionDialog_Silence_C::BodyText' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, AcceptText) == 0x000480, "Member 'UWBP_DecisionDialog_Silence_C::AcceptText' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DeclineText) == 0x000498, "Member 'UWBP_DecisionDialog_Silence_C::DeclineText' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, DecisionDecline) == 0x0004B0, "Member 'UWBP_DecisionDialog_Silence_C::DecisionDecline' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, bDecisionDialogIsReady) == 0x0004C0, "Member 'UWBP_DecisionDialog_Silence_C::bDecisionDialogIsReady' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, SecondsUntilRevert) == 0x0004C8, "Member 'UWBP_DecisionDialog_Silence_C::SecondsUntilRevert' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, AutoRevert) == 0x0004D0, "Member 'UWBP_DecisionDialog_Silence_C::AutoRevert' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, AutoRevertTimerHandle) == 0x0004E0, "Member 'UWBP_DecisionDialog_Silence_C::AutoRevertTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, RevertProgressUpdateTimerHandle) == 0x0004E8, "Member 'UWBP_DecisionDialog_Silence_C::RevertProgressUpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, SecondsPerUpdate) == 0x0004F0, "Member 'UWBP_DecisionDialog_Silence_C::SecondsPerUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BackgroundColor) == 0x0004F4, "Member 'UWBP_DecisionDialog_Silence_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, TitleTextColor) == 0x000504, "Member 'UWBP_DecisionDialog_Silence_C::TitleTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BodyTextColor) == 0x000514, "Member 'UWBP_DecisionDialog_Silence_C::BodyTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BarFillColor) == 0x000524, "Member 'UWBP_DecisionDialog_Silence_C::BarFillColor' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, BarBackgroundColor) == 0x000534, "Member 'UWBP_DecisionDialog_Silence_C::BarBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, SourceMenu) == 0x000548, "Member 'UWBP_DecisionDialog_Silence_C::SourceMenu' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, TextTitleFontStyle) == 0x000550, "Member 'UWBP_DecisionDialog_Silence_C::TextTitleFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, TextBodyFontStyle) == 0x0005D0, "Member 'UWBP_DecisionDialog_Silence_C::TextBodyFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, Cancel) == 0x000650, "Member 'UWBP_DecisionDialog_Silence_C::Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, StyleData) == 0x000660, "Member 'UWBP_DecisionDialog_Silence_C::StyleData' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, bAutoRevert) == 0x000668, "Member 'UWBP_DecisionDialog_Silence_C::bAutoRevert' has a wrong offset!");
static_assert(offsetof(UWBP_DecisionDialog_Silence_C, bRevertProgress) == 0x000669, "Member 'UWBP_DecisionDialog_Silence_C::bRevertProgress' has a wrong offset!");

}

