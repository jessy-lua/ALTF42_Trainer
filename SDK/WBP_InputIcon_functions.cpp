#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputIcon

#include "Basic.hpp"

#include "WBP_InputIcon_classes.hpp"
#include "WBP_InputIcon_parameters.hpp"


namespace SDK
{

// Function WBP_InputIcon.WBP_InputIcon_C.ActiveInputDeviceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::ActiveInputDeviceChanged(EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "ActiveInputDeviceChanged");

	Params::WBP_InputIcon_C_ActiveInputDeviceChanged Parms{};

	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.ChangeMappedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             NewKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InputIcon_C::ChangeMappedKey(const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "ChangeMappedKey");

	Params::WBP_InputIcon_C_ChangeMappedKey Parms{};

	Parms.NewKey = std::move(NewKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InputIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InputIcon.WBP_InputIcon_C.DisplayKeyBackgroundAndInnerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Brush                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputIcon_C::DisplayKeyBackgroundAndInnerIcon(const struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "DisplayKeyBackgroundAndInnerIcon");

	Params::WBP_InputIcon_C_DisplayKeyBackgroundAndInnerIcon Parms{};

	Parms.Brush = std::move(Brush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.DisplayKeyBackgroundAndText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::DisplayKeyBackgroundAndText(class FName InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "DisplayKeyBackgroundAndText");

	Params::WBP_InputIcon_C_DisplayKeyBackgroundAndText Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.DisplayOuterIconOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Brush                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputIcon_C::DisplayOuterIconOnly(const struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "DisplayOuterIconOnly");

	Params::WBP_InputIcon_C_DisplayOuterIconOnly Parms{};

	Parms.Brush = std::move(Brush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.ExecuteUbergraph_WBP_InputIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::ExecuteUbergraph_WBP_InputIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "ExecuteUbergraph_WBP_InputIcon");

	Params::WBP_InputIcon_C_ExecuteUbergraph_WBP_InputIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.OnControllerPlatformChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ControllerPlatformName                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::OnControllerPlatformChange(const class FString& ControllerPlatformName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "OnControllerPlatformChange");

	Params::WBP_InputIcon_C_OnControllerPlatformChange Parms{};

	Parms.ControllerPlatformName = std::move(ControllerPlatformName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.OnHoveredKeyboardKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InputIcon_C::OnHoveredKeyboardKey__DelegateSignature(const struct FKey& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "OnHoveredKeyboardKey__DelegateSignature");

	Params::WBP_InputIcon_C_OnHoveredKeyboardKey__DelegateSignature Parms{};

	Parms.InKey = std::move(InKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.OnSwitchBetweenKeyboardAndGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::OnSwitchBetweenKeyboardAndGamepad(EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "OnSwitchBetweenKeyboardAndGamepad");

	Params::WBP_InputIcon_C_OnSwitchBetweenKeyboardAndGamepad Parms{};

	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "PreConstruct");

	Params::WBP_InputIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputIcon.WBP_InputIcon_C.RemoveNumpadPrefix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InputName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ConvertedName                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputIcon_C::RemoveNumpadPrefix(class FName InputName, class FName* ConvertedName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "RemoveNumpadPrefix");

	Params::WBP_InputIcon_C_RemoveNumpadPrefix Parms{};

	Parms.InputName = InputName;

	UObject::ProcessEvent(Func, &Parms);

	if (ConvertedName != nullptr)
		*ConvertedName = Parms.ConvertedName;
}


// Function WBP_InputIcon.WBP_InputIcon_C.ResetToDefaultSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InputIcon_C::ResetToDefaultSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "ResetToDefaultSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InputIcon.WBP_InputIcon_C.SetIconFromMappedKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InputIcon_C::SetIconFromMappedKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputIcon_C", "SetIconFromMappedKey");

	UObject::ProcessEvent(Func, nullptr);
}

}

