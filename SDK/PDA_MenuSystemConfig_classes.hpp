#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_MenuSystemConfig

#include "Basic.hpp"

#include "EDeviceInputSwitchBehavior_structs.hpp"
#include "ETransitionAnimation_structs.hpp"
#include "FFontStyle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EColorPalette_structs.hpp"
#include "EPauseBehavior_structs.hpp"
#include "EFontPalette_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_MenuSystemConfig.PDA_MenuSystemConfig_C
// 0x0720 (0x0750 - 0x0030)
class UPDA_MenuSystemConfig_C final : public UPrimaryDataAsset
{
public:
	TSoftObjectPtr<class USoundCue>               HighlightSound;                                    // 0x0030(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               AcceptSound;                                       // 0x0058(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               DeclineSound;                                      // 0x0080(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               ButtonPressSound;                                  // 0x00A8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               ForwardSound;                                      // 0x00D0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               BackSound;                                         // 0x00F8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               ValueChangeSound;                                  // 0x0120(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               SliderSound;                                       // 0x0148(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               DecisionDialogPopupSound;                          // 0x0170(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               IngameMenuOpenSound;                               // 0x0198(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               IngameMenuCloseSound;                              // 0x01C0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               ClearInputBindingSound;                            // 0x01E8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               CameraSwitchSound;                                 // 0x0210(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               SearchGameSound;                                   // 0x0238(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               IntroMusic;                                        // 0x0260(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               BackgroundMusic;                                   // 0x0288(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               CreditsMusic;                                      // 0x02B0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   DisplayedGameTitle;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DisplayedGameVersion;                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                  MenuLevel;                                         // 0x02E8(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                  CreateNewGameLevel;                                // 0x0310(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bIntroLogosSkippable;                              // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIntroEnabled;                                     // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDB[0x6];                                     // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   MenuContainerClass;                                // 0x0340(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   IngameMenuClass;                                   // 0x0368(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   InventoryMenuClass;                                // 0x0390(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   DocumentsMenuClass;                                // 0x03B8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   DecisionDialogMenuClass;                           // 0x03E0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   FooterBarMenuClass;                                // 0x0408(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   LoadingScreenMenuClass;                            // 0x0430(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   MenuBackgroundClass;                               // 0x0458(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SoundManager;                                      // 0x0480(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          bShowLoadingScreen;                                // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowMouseCursor;                                  // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMouseLockMode                                MouseLockMode;                                     // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDeviceInputSwitchBehavior                    InputDeviceSwitchBehavior;                         // 0x04AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDC[0x4];                                     // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MouseCursorDefaultPosition;                        // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EColorPalette, struct FLinearColor>      ColorPalette;                                      // 0x04C0(0x0050)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UWorld>                  LocalMultiplayerLevel;                             // 0x0510(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	EPauseBehavior                                SinglePlayerPauseBehavior;                         // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseSplitscreenIngame;                             // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFullscreenSplitscreenIngameMenu;                  // 0x053A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPauseBehavior                                LocalMultiplayerPauseBehavior;                     // 0x053B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDD[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   InputMappingContextMenu;                           // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPDA_InputActionData_C*                 KeyboardAndMouseActionData;                        // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class UPDA_InputActionData_C*> GamepadActionDataList;                             // 0x0550(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UInputMappingContext*>           RegisteredInputMappingContexts;                    // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UInputMappingContext*, int32>      InitiallyAddedInputMappingContexts;                // 0x05B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UClass>                   SettingsManagerClass;                              // 0x0600(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UPDA_SettingsData_C*>            SettingsData;                                      // 0x0628(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, class UPDA_LevelMetaData_C*> LevelMetaData;                                     // 0x0638(0x0050)(Edit, BlueprintVisible)
	TMap<EFontPalette, struct FFFontStyle>        FontPalette;                                       // 0x0688(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ETransitionAnimation                          MenuTransitionAnimation;                           // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDE[0x7];                                     // 0x06D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MenuTransitionAnimationSpeed;                      // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_ScrollBarStyle_C*                  ScrollBarStyle;                                    // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SaveGameManagerClass;                              // 0x06F0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   DeveloperNote;                                     // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_MenuStyle_C*                       MenuStyle;                                         // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                  OnlineMultiplayerLevel;                            // 0x0728(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_MenuSystemConfig_C">();
	}
	static class UPDA_MenuSystemConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_MenuSystemConfig_C>();
	}
};
static_assert(alignof(UPDA_MenuSystemConfig_C) == 0x000008, "Wrong alignment on UPDA_MenuSystemConfig_C");
static_assert(sizeof(UPDA_MenuSystemConfig_C) == 0x000750, "Wrong size on UPDA_MenuSystemConfig_C");
static_assert(offsetof(UPDA_MenuSystemConfig_C, HighlightSound) == 0x000030, "Member 'UPDA_MenuSystemConfig_C::HighlightSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, AcceptSound) == 0x000058, "Member 'UPDA_MenuSystemConfig_C::AcceptSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DeclineSound) == 0x000080, "Member 'UPDA_MenuSystemConfig_C::DeclineSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ButtonPressSound) == 0x0000A8, "Member 'UPDA_MenuSystemConfig_C::ButtonPressSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ForwardSound) == 0x0000D0, "Member 'UPDA_MenuSystemConfig_C::ForwardSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, BackSound) == 0x0000F8, "Member 'UPDA_MenuSystemConfig_C::BackSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ValueChangeSound) == 0x000120, "Member 'UPDA_MenuSystemConfig_C::ValueChangeSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SliderSound) == 0x000148, "Member 'UPDA_MenuSystemConfig_C::SliderSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DecisionDialogPopupSound) == 0x000170, "Member 'UPDA_MenuSystemConfig_C::DecisionDialogPopupSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, IngameMenuOpenSound) == 0x000198, "Member 'UPDA_MenuSystemConfig_C::IngameMenuOpenSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, IngameMenuCloseSound) == 0x0001C0, "Member 'UPDA_MenuSystemConfig_C::IngameMenuCloseSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ClearInputBindingSound) == 0x0001E8, "Member 'UPDA_MenuSystemConfig_C::ClearInputBindingSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, CameraSwitchSound) == 0x000210, "Member 'UPDA_MenuSystemConfig_C::CameraSwitchSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SearchGameSound) == 0x000238, "Member 'UPDA_MenuSystemConfig_C::SearchGameSound' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, IntroMusic) == 0x000260, "Member 'UPDA_MenuSystemConfig_C::IntroMusic' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, BackgroundMusic) == 0x000288, "Member 'UPDA_MenuSystemConfig_C::BackgroundMusic' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, CreditsMusic) == 0x0002B0, "Member 'UPDA_MenuSystemConfig_C::CreditsMusic' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DisplayedGameTitle) == 0x0002D8, "Member 'UPDA_MenuSystemConfig_C::DisplayedGameTitle' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DisplayedGameVersion) == 0x0002E0, "Member 'UPDA_MenuSystemConfig_C::DisplayedGameVersion' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuLevel) == 0x0002E8, "Member 'UPDA_MenuSystemConfig_C::MenuLevel' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, CreateNewGameLevel) == 0x000310, "Member 'UPDA_MenuSystemConfig_C::CreateNewGameLevel' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bIntroLogosSkippable) == 0x000338, "Member 'UPDA_MenuSystemConfig_C::bIntroLogosSkippable' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bIntroEnabled) == 0x000339, "Member 'UPDA_MenuSystemConfig_C::bIntroEnabled' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuContainerClass) == 0x000340, "Member 'UPDA_MenuSystemConfig_C::MenuContainerClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, IngameMenuClass) == 0x000368, "Member 'UPDA_MenuSystemConfig_C::IngameMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, InventoryMenuClass) == 0x000390, "Member 'UPDA_MenuSystemConfig_C::InventoryMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DocumentsMenuClass) == 0x0003B8, "Member 'UPDA_MenuSystemConfig_C::DocumentsMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DecisionDialogMenuClass) == 0x0003E0, "Member 'UPDA_MenuSystemConfig_C::DecisionDialogMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, FooterBarMenuClass) == 0x000408, "Member 'UPDA_MenuSystemConfig_C::FooterBarMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, LoadingScreenMenuClass) == 0x000430, "Member 'UPDA_MenuSystemConfig_C::LoadingScreenMenuClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuBackgroundClass) == 0x000458, "Member 'UPDA_MenuSystemConfig_C::MenuBackgroundClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SoundManager) == 0x000480, "Member 'UPDA_MenuSystemConfig_C::SoundManager' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bShowLoadingScreen) == 0x0004A8, "Member 'UPDA_MenuSystemConfig_C::bShowLoadingScreen' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bShowMouseCursor) == 0x0004A9, "Member 'UPDA_MenuSystemConfig_C::bShowMouseCursor' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MouseLockMode) == 0x0004AA, "Member 'UPDA_MenuSystemConfig_C::MouseLockMode' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, InputDeviceSwitchBehavior) == 0x0004AB, "Member 'UPDA_MenuSystemConfig_C::InputDeviceSwitchBehavior' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MouseCursorDefaultPosition) == 0x0004B0, "Member 'UPDA_MenuSystemConfig_C::MouseCursorDefaultPosition' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ColorPalette) == 0x0004C0, "Member 'UPDA_MenuSystemConfig_C::ColorPalette' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, LocalMultiplayerLevel) == 0x000510, "Member 'UPDA_MenuSystemConfig_C::LocalMultiplayerLevel' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SinglePlayerPauseBehavior) == 0x000538, "Member 'UPDA_MenuSystemConfig_C::SinglePlayerPauseBehavior' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bUseSplitscreenIngame) == 0x000539, "Member 'UPDA_MenuSystemConfig_C::bUseSplitscreenIngame' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, bFullscreenSplitscreenIngameMenu) == 0x00053A, "Member 'UPDA_MenuSystemConfig_C::bFullscreenSplitscreenIngameMenu' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, LocalMultiplayerPauseBehavior) == 0x00053B, "Member 'UPDA_MenuSystemConfig_C::LocalMultiplayerPauseBehavior' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, InputMappingContextMenu) == 0x000540, "Member 'UPDA_MenuSystemConfig_C::InputMappingContextMenu' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, KeyboardAndMouseActionData) == 0x000548, "Member 'UPDA_MenuSystemConfig_C::KeyboardAndMouseActionData' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, GamepadActionDataList) == 0x000550, "Member 'UPDA_MenuSystemConfig_C::GamepadActionDataList' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, RegisteredInputMappingContexts) == 0x0005A0, "Member 'UPDA_MenuSystemConfig_C::RegisteredInputMappingContexts' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, InitiallyAddedInputMappingContexts) == 0x0005B0, "Member 'UPDA_MenuSystemConfig_C::InitiallyAddedInputMappingContexts' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SettingsManagerClass) == 0x000600, "Member 'UPDA_MenuSystemConfig_C::SettingsManagerClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SettingsData) == 0x000628, "Member 'UPDA_MenuSystemConfig_C::SettingsData' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, LevelMetaData) == 0x000638, "Member 'UPDA_MenuSystemConfig_C::LevelMetaData' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, FontPalette) == 0x000688, "Member 'UPDA_MenuSystemConfig_C::FontPalette' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuTransitionAnimation) == 0x0006D8, "Member 'UPDA_MenuSystemConfig_C::MenuTransitionAnimation' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuTransitionAnimationSpeed) == 0x0006E0, "Member 'UPDA_MenuSystemConfig_C::MenuTransitionAnimationSpeed' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, ScrollBarStyle) == 0x0006E8, "Member 'UPDA_MenuSystemConfig_C::ScrollBarStyle' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, SaveGameManagerClass) == 0x0006F0, "Member 'UPDA_MenuSystemConfig_C::SaveGameManagerClass' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, DeveloperNote) == 0x000718, "Member 'UPDA_MenuSystemConfig_C::DeveloperNote' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, MenuStyle) == 0x000720, "Member 'UPDA_MenuSystemConfig_C::MenuStyle' has a wrong offset!");
static_assert(offsetof(UPDA_MenuSystemConfig_C, OnlineMultiplayerLevel) == 0x000728, "Member 'UPDA_MenuSystemConfig_C::OnlineMultiplayerLevel' has a wrong offset!");

}

