#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SettingsManager

#include "Basic.hpp"

#include "BP_SettingsManager_classes.hpp"
#include "BP_SettingsManager_parameters.hpp"


namespace SDK
{

// Function BP_SettingsManager.BP_SettingsManager_C.ApplyConsoleCommand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Command_Value                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FFConsoleCommandParameters       FConsoleCommandParameters                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UBP_SettingsManager_C::ApplyConsoleCommand(const class FString& Command_Value, const struct FFConsoleCommandParameters& FConsoleCommandParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ApplyConsoleCommand");

	Params::BP_SettingsManager_C_ApplyConsoleCommand Parms{};

	Parms.Command_Value = std::move(Command_Value);
	Parms.FConsoleCommandParameters = std::move(FConsoleCommandParameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ApplyCustomSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::ApplyCustomSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ApplyCustomSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ApplyGameUserSettingsToFile
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::ApplyGameUserSettingsToFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ApplyGameUserSettingsToFile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertDataValueToUIValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  DataValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value_Min                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value_Max                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertDataValueToUIValue(const class UPDA_SettingsData_C*& SettingsData, double DataValue, double UI_Value_Min, double UI_Value_Max, double* UI_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertDataValueToUIValue");

	Params::BP_SettingsManager_C_ConvertDataValueToUIValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.DataValue = DataValue;
	Parms.UI_Value_Min = UI_Value_Min;
	Parms.UI_Value_Max = UI_Value_Max;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_Value != nullptr)
		*UI_Value = Parms.UI_Value;
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertMappedBooleanToUI Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    StringValue                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertMappedBooleanToUI_Index(class UPDA_SettingsData_C* SettingsData, const bool& StringValue, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertMappedBooleanToUI Index");

	Params::BP_SettingsManager_C_ConvertMappedBooleanToUI_Index Parms{};

	Parms.SettingsData = SettingsData;
	Parms.StringValue = StringValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertMappedFloatToUI Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  FloatValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertMappedFloatToUI_Index(class UPDA_SettingsData_C* SettingsData, const double& FloatValue, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertMappedFloatToUI Index");

	Params::BP_SettingsManager_C_ConvertMappedFloatToUI_Index Parms{};

	Parms.SettingsData = SettingsData;
	Parms.FloatValue = FloatValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertMappedIntegerToUI Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   IntegerValue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseIntegerValueIfRawValue                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertMappedIntegerToUI_Index(class UPDA_SettingsData_C* SettingsData, const int32& IntegerValue, bool bUseIntegerValueIfRawValue, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertMappedIntegerToUI Index");

	Params::BP_SettingsManager_C_ConvertMappedIntegerToUI_Index Parms{};

	Parms.SettingsData = SettingsData;
	Parms.IntegerValue = IntegerValue;
	Parms.bUseIntegerValueIfRawValue = bUseIntegerValueIfRawValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertMappedStringToUI Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           StringValue                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertMappedStringToUI_Index(class UPDA_SettingsData_C* SettingsData, const class FString& StringValue, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertMappedStringToUI Index");

	Params::BP_SettingsManager_C_ConvertMappedStringToUI_Index Parms{};

	Parms.SettingsData = SettingsData;
	Parms.StringValue = std::move(StringValue);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertUI IndexToDataValueWithMapping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFValueTypes                     Value                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ConvertUI_IndexToDataValueWithMapping(class UPDA_SettingsData_C* SettingsData, int32 Param_Index, struct FFValueTypes* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertUI IndexToDataValueWithMapping");

	Params::BP_SettingsManager_C_ConvertUI_IndexToDataValueWithMapping Parms{};

	Parms.SettingsData = SettingsData;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ConvertUIValueToDataValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value_RangeMin                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UI_Value_RangeMax                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_SettingsManager_C::ConvertUIValueToDataValue(const class UPDA_SettingsData_C*& SettingsData, double UI_Value, double UI_Value_RangeMin, double UI_Value_RangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ConvertUIValueToDataValue");

	Params::BP_SettingsManager_C_ConvertUIValueToDataValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.UI_Value = UI_Value;
	Parms.UI_Value_RangeMin = UI_Value_RangeMin;
	Parms.UI_Value_RangeMax = UI_Value_RangeMax;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SettingsManager.BP_SettingsManager_C.DisplayResolution_GI_Save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        New_Display_Resolution                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::DisplayResolution_GI_Save(const struct FIntPoint& New_Display_Resolution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "DisplayResolution_GI_Save");

	Params::BP_SettingsManager_C_DisplayResolution_GI_Save Parms{};

	Parms.New_Display_Resolution = std::move(New_Display_Resolution);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ExecuteUbergraph_BP_SettingsManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ExecuteUbergraph_BP_SettingsManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ExecuteUbergraph_BP_SettingsManager");

	Params::BP_SettingsManager_C_ExecuteUbergraph_BP_SettingsManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetBooleanValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetBooleanValue(class UPDA_SettingsData_C* SettingsData, bool* Success, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetBooleanValue");

	Params::BP_SettingsManager_C_GetBooleanValue Parms{};

	Parms.SettingsData = SettingsData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetFloatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetFloatValue(class UPDA_SettingsData_C* SettingsData, bool* Success, double* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetFloatValue");

	Params::BP_SettingsManager_C_GetFloatValue Parms{};

	Parms.SettingsData = SettingsData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetGameUserSettingsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           StringValue                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetGameUserSettingsValue(const class UPDA_SettingsData_C*& SettingsData, int32* Param_Index, double* Value, class FString* StringValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetGameUserSettingsValue");

	Params::BP_SettingsManager_C_GetGameUserSettingsValue Parms{};

	Parms.SettingsData = SettingsData;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (StringValue != nullptr)
		*StringValue = std::move(Parms.StringValue);
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetIntegerValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetIntegerValue(class UPDA_SettingsData_C* SettingsData, bool* Success, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetIntegerValue");

	Params::BP_SettingsManager_C_GetIntegerValue Parms{};

	Parms.SettingsData = SettingsData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetJsonConfigFilePath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFilePath                        FilePath                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetJsonConfigFilePath(struct FFilePath* FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetJsonConfigFilePath");

	Params::BP_SettingsManager_C_GetJsonConfigFilePath Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilePath != nullptr)
		*FilePath = std::move(Parms.FilePath);
}


// Function BP_SettingsManager.BP_SettingsManager_C.GetStringValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Value                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::GetStringValue(class UPDA_SettingsData_C* SettingsData, bool* Success, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "GetStringValue");

	Params::BP_SettingsManager_C_GetStringValue Parms{};

	Parms.SettingsData = SettingsData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function BP_SettingsManager.BP_SettingsManager_C.InitialApplySoundClasses
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::InitialApplySoundClasses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "InitialApplySoundClasses");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.LoadCustomSettingsFromFile
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::LoadCustomSettingsFromFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "LoadCustomSettingsFromFile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.OnFirstTimeSetup
// (BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::OnFirstTimeSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "OnFirstTimeSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.OnInitSoundClasses
// (BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::OnInitSoundClasses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "OnInitSoundClasses");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.OnSaveToSettings
// (BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::OnSaveToSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "OnSaveToSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.PreApplyCustomSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SettingsManager_C::PreApplyCustomSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "PreApplyCustomSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ResolutionToAspectRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                        Resolution                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AspectRatio                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ResolutionToAspectRatio(const struct FIntPoint& Resolution, class FString* AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ResolutionToAspectRatio");

	Params::BP_SettingsManager_C_ResolutionToAspectRatio Parms{};

	Parms.Resolution = std::move(Resolution);

	UObject::ProcessEvent(Func, &Parms);

	if (AspectRatio != nullptr)
		*AspectRatio = std::move(Parms.AspectRatio);
}


// Function BP_SettingsManager.BP_SettingsManager_C.ResolutionToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                        Resolution                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::ResolutionToString(const struct FIntPoint& Resolution, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "ResolutionToString");

	Params::BP_SettingsManager_C_ResolutionToString Parms{};

	Parms.Resolution = std::move(Resolution);

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);
}


// Function BP_SettingsManager.BP_SettingsManager_C.SaveCustomSettingsToFile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SaveCustomSettingsToFile(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SaveCustomSettingsToFile");

	Params::BP_SettingsManager_C_SaveCustomSettingsToFile Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetAudioSettingsParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  CurrentValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetAudioSettingsParameter(class UPDA_SettingsData_C* SettingsData, double CurrentValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetAudioSettingsParameter");

	Params::BP_SettingsManager_C_SetAudioSettingsParameter Parms{};

	Parms.SettingsData = SettingsData;
	Parms.CurrentValue = CurrentValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetBooleanValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetBooleanValue(class UPDA_SettingsData_C* SettingsData, bool NewValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetBooleanValue");

	Params::BP_SettingsManager_C_SetBooleanValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetFloatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetFloatValue(class UPDA_SettingsData_C* SettingsData, double NewValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetFloatValue");

	Params::BP_SettingsManager_C_SetFloatValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetGameUserSettingsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FFValueTypes                     Value                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetGameUserSettingsValue(const class UPDA_SettingsData_C*& SettingsData, const struct FFValueTypes& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetGameUserSettingsValue");

	Params::BP_SettingsManager_C_SetGameUserSettingsValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetIntegerValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetIntegerValue(class UPDA_SettingsData_C* SettingsData, int32 NewValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetIntegerValue");

	Params::BP_SettingsManager_C_SetIntegerValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_SettingsManager.BP_SettingsManager_C.SetStringValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::SetStringValue(class UPDA_SettingsData_C* SettingsData, const class FString& NewValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "SetStringValue");

	Params::BP_SettingsManager_C_SetStringValue Parms{};

	Parms.SettingsData = SettingsData;
	Parms.NewValue = std::move(NewValue);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_SettingsManager.BP_SettingsManager_C.StringToResolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ResolutionString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                        Resolution                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsManager_C::StringToResolution(const class FString& ResolutionString, struct FIntPoint* Resolution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettingsManager_C", "StringToResolution");

	Params::BP_SettingsManager_C_StringToResolution Parms{};

	Parms.ResolutionString = std::move(ResolutionString);

	UObject::ProcessEvent(Func, &Parms);

	if (Resolution != nullptr)
		*Resolution = std::move(Parms.Resolution);
}

}

