#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SettingsManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "JsonUtilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SettingsManager.BP_SettingsManager_C
// 0x0058 (0x0080 - 0x0028)
class UBP_SettingsManager_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPDA_MenuSystemConfig_C*                MenuSystemConfig;                                  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bGameRequiresResolutionApply;                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   WindowModeToApply;                                 // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E10[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              ResolutionToApply;                                 // 0x003C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E11[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ApplyGameUserSettingsTimer;                        // 0x0048(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FJsonObjectWrapper                     CustomSettingsJson;                                // 0x0050(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPDA_SettingsData_C*                    WindowMode;                                        // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DelayedSoundClassApplyTimer;                       // 0x0078(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyConsoleCommand(const class FString& Command_Value, const struct FFConsoleCommandParameters& FConsoleCommandParameters);
	void ApplyCustomSettings();
	void ApplyGameUserSettingsToFile();
	void ConvertDataValueToUIValue(const class UPDA_SettingsData_C*& SettingsData, double DataValue, double UI_Value_Min, double UI_Value_Max, double* UI_Value);
	void ConvertMappedBooleanToUI_Index(class UPDA_SettingsData_C* SettingsData, const bool& StringValue, int32* Param_Index);
	void ConvertMappedFloatToUI_Index(class UPDA_SettingsData_C* SettingsData, const double& FloatValue, int32* Param_Index);
	void ConvertMappedIntegerToUI_Index(class UPDA_SettingsData_C* SettingsData, const int32& IntegerValue, bool bUseIntegerValueIfRawValue, int32* Param_Index);
	void ConvertMappedStringToUI_Index(class UPDA_SettingsData_C* SettingsData, const class FString& StringValue, int32* Param_Index);
	void ConvertUI_IndexToDataValueWithMapping(class UPDA_SettingsData_C* SettingsData, int32 Param_Index, struct FFValueTypes* Value);
	double ConvertUIValueToDataValue(const class UPDA_SettingsData_C*& SettingsData, double UI_Value, double UI_Value_RangeMin, double UI_Value_RangeMax);
	void DisplayResolution_GI_Save(const struct FIntPoint& New_Display_Resolution);
	void ExecuteUbergraph_BP_SettingsManager(int32 EntryPoint);
	void GetBooleanValue(class UPDA_SettingsData_C* SettingsData, bool* Success, bool* Value);
	void GetFloatValue(class UPDA_SettingsData_C* SettingsData, bool* Success, double* Value);
	void GetGameUserSettingsValue(const class UPDA_SettingsData_C*& SettingsData, int32* Param_Index, double* Value, class FString* StringValue);
	void GetIntegerValue(class UPDA_SettingsData_C* SettingsData, bool* Success, int32* Value);
	void GetJsonConfigFilePath(struct FFilePath* FilePath);
	void GetStringValue(class UPDA_SettingsData_C* SettingsData, bool* Success, class FString* Value);
	void InitialApplySoundClasses();
	void Initialize();
	void LoadCustomSettingsFromFile();
	void OnFirstTimeSetup();
	void OnInitSoundClasses();
	void OnSaveToSettings();
	void PreApplyCustomSettings();
	void ResolutionToAspectRatio(const struct FIntPoint& Resolution, class FString* AspectRatio);
	void ResolutionToString(const struct FIntPoint& Resolution, class FString* String);
	void SaveCustomSettingsToFile(bool* Success);
	void SetAudioSettingsParameter(class UPDA_SettingsData_C* SettingsData, double CurrentValue);
	void SetBooleanValue(class UPDA_SettingsData_C* SettingsData, bool NewValue, bool* Success);
	void SetFloatValue(class UPDA_SettingsData_C* SettingsData, double NewValue, bool* Success);
	void SetGameUserSettingsValue(const class UPDA_SettingsData_C*& SettingsData, const struct FFValueTypes& Value);
	void SetIntegerValue(class UPDA_SettingsData_C* SettingsData, int32 NewValue, bool* Success);
	void SetStringValue(class UPDA_SettingsData_C* SettingsData, const class FString& NewValue, bool* Success);
	void StringToResolution(const class FString& ResolutionString, struct FIntPoint* Resolution);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SettingsManager_C">();
	}
	static class UBP_SettingsManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SettingsManager_C>();
	}
};
static_assert(alignof(UBP_SettingsManager_C) == 0x000008, "Wrong alignment on UBP_SettingsManager_C");
static_assert(sizeof(UBP_SettingsManager_C) == 0x000080, "Wrong size on UBP_SettingsManager_C");
static_assert(offsetof(UBP_SettingsManager_C, UberGraphFrame) == 0x000028, "Member 'UBP_SettingsManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, MenuSystemConfig) == 0x000030, "Member 'UBP_SettingsManager_C::MenuSystemConfig' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, bGameRequiresResolutionApply) == 0x000038, "Member 'UBP_SettingsManager_C::bGameRequiresResolutionApply' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, WindowModeToApply) == 0x000039, "Member 'UBP_SettingsManager_C::WindowModeToApply' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, ResolutionToApply) == 0x00003C, "Member 'UBP_SettingsManager_C::ResolutionToApply' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, ApplyGameUserSettingsTimer) == 0x000048, "Member 'UBP_SettingsManager_C::ApplyGameUserSettingsTimer' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, CustomSettingsJson) == 0x000050, "Member 'UBP_SettingsManager_C::CustomSettingsJson' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, WindowMode) == 0x000070, "Member 'UBP_SettingsManager_C::WindowMode' has a wrong offset!");
static_assert(offsetof(UBP_SettingsManager_C, DelayedSoundClassApplyTimer) == 0x000078, "Member 'UBP_SettingsManager_C::DelayedSoundClassApplyTimer' has a wrong offset!");

}

