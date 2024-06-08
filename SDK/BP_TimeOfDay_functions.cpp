#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeOfDay

#include "Basic.hpp"

#include "BP_TimeOfDay_classes.hpp"
#include "BP_TimeOfDay_parameters.hpp"


namespace SDK
{

// Function BP_TimeOfDay.BP_TimeOfDay_C.Capture Float MPCValues at Current Time
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, double>               MPCFloats                                              (Parm, OutParm)

void ABP_TimeOfDay_C::Capture_Float_MPCValues_at_Current_Time(TMap<class FName, double>* MPCFloats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Capture Float MPCValues at Current Time");

	Params::BP_TimeOfDay_C_Capture_Float_MPCValues_at_Current_Time Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MPCFloats != nullptr)
		*MPCFloats = std::move(Parms.MPCFloats);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.CaptureActorsAsDefault
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::CaptureActorsAsDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "CaptureActorsAsDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.CaptureSettingsAsCurrentTime
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::CaptureSettingsAsCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "CaptureSettingsAsCurrentTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.CaptureVectorMPCValues at Current Time
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FLinearColor>  MPCVectorMap                                           (Parm, OutParm)

void ABP_TimeOfDay_C::CaptureVectorMPCValues_at_Current_Time(TMap<class FName, struct FLinearColor>* MPCVectorMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "CaptureVectorMPCValues at Current Time");

	Params::BP_TimeOfDay_C_CaptureVectorMPCValues_at_Current_Time Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MPCVectorMap != nullptr)
		*MPCVectorMap = std::move(Parms.MPCVectorMap);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.CurrentTimeAsMinutes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Param_Time                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::CurrentTimeAsMinutes(double* Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "CurrentTimeAsMinutes");

	Params::BP_TimeOfDay_C_CurrentTimeAsMinutes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Time != nullptr)
		*Param_Time = Parms.Param_Time;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Dusk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::Dusk__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Dusk__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ExecuteUbergraph_BP_TimeOfDay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::ExecuteUbergraph_BP_TimeOfDay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ExecuteUbergraph_BP_TimeOfDay");

	Params::BP_TimeOfDay_C_ExecuteUbergraph_BP_TimeOfDay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.GetAllFloatMPCNamesInUse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FName>                       FloatNames                                             (Parm, OutParm)

void ABP_TimeOfDay_C::GetAllFloatMPCNamesInUse(TSet<class FName>* FloatNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "GetAllFloatMPCNamesInUse");

	Params::BP_TimeOfDay_C_GetAllFloatMPCNamesInUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FloatNames != nullptr)
		*FloatNames = std::move(Parms.FloatNames);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.GetAllVectorMPCNamesInUse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class FName>                       FloatNames                                             (Parm, OutParm)

void ABP_TimeOfDay_C::GetAllVectorMPCNamesInUse(TSet<class FName>* FloatNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "GetAllVectorMPCNamesInUse");

	Params::BP_TimeOfDay_C_GetAllVectorMPCNamesInUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FloatNames != nullptr)
		*FloatNames = std::move(Parms.FloatNames);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.GetCurrentKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CurrentKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::GetCurrentKey(int32* CurrentKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "GetCurrentKey");

	Params::BP_TimeOfDay_C_GetCurrentKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentKey != nullptr)
		*CurrentKey = Parms.CurrentKey;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.GetNextKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextKey                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::GetNextKey(int32* NextKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "GetNextKey");

	Params::BP_TimeOfDay_C_GetNextKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NextKey != nullptr)
		*NextKey = Parms.NextKey;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.GetPreviousKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreviousKey                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::GetPreviousKey(int32* PreviousKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "GetPreviousKey");

	Params::BP_TimeOfDay_C_GetPreviousKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PreviousKey != nullptr)
		*PreviousKey = Parms.PreviousKey;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.LerpFloatMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class FName, double>               One                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FName, double>               Two                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, double>               LerpedMap                                              (Parm, OutParm)

void ABP_TimeOfDay_C::LerpFloatMap(const TMap<class FName, double>& One, const TMap<class FName, double>& Two, double Alpha, TMap<class FName, double>* LerpedMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "LerpFloatMap");

	Params::BP_TimeOfDay_C_LerpFloatMap Parms{};

	Parms.One = std::move(One);
	Parms.Two = std::move(Two);
	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LerpedMap != nullptr)
		*LerpedMap = std::move(Parms.LerpedMap);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.LerpVectorMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class FName, struct FLinearColor>  One                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FName, struct FLinearColor>  Two                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FLinearColor>  LerpedMap                                              (Parm, OutParm)

void ABP_TimeOfDay_C::LerpVectorMap(const TMap<class FName, struct FLinearColor>& One, const TMap<class FName, struct FLinearColor>& Two, double Alpha, TMap<class FName, struct FLinearColor>* LerpedMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "LerpVectorMap");

	Params::BP_TimeOfDay_C_LerpVectorMap Parms{};

	Parms.One = std::move(One);
	Parms.Two = std::move(Two);
	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (LerpedMap != nullptr)
		*LerpedMap = std::move(Parms.LerpedMap);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.MakeTimeOfDayAtCurrentTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimeOfDayModifierStructure      CurrentTOD                                             (Parm, OutParm, HasGetValueTypeHash)
// double                                  Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::MakeTimeOfDayAtCurrentTime(struct FTimeOfDayModifierStructure* CurrentTOD, double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "MakeTimeOfDayAtCurrentTime");

	Params::BP_TimeOfDay_C_MakeTimeOfDayAtCurrentTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTOD != nullptr)
		*CurrentTOD = std::move(Parms.CurrentTOD);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Morning__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::Morning__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Morning__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.PropagateMPCValues
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::PropagateMPCValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "PropagateMPCValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeOfDay_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ReceiveTick");

	Params::BP_TimeOfDay_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ResetTOD
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::ResetTOD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ResetTOD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.SetCurrentTimeSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::SetCurrentTimeSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "SetCurrentTimeSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.SetNewDesiredTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewDesiredTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  AdjustTimeScale                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAdjustTimeScale                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::SetNewDesiredTime(double NewDesiredTime, double AdjustTimeScale, bool ShouldAdjustTimeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "SetNewDesiredTime");

	Params::BP_TimeOfDay_C_SetNewDesiredTime Parms{};

	Parms.NewDesiredTime = NewDesiredTime;
	Parms.AdjustTimeScale = AdjustTimeScale;
	Parms.ShouldAdjustTimeScale = ShouldAdjustTimeScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.SetNewTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::SetNewTime(double NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "SetNewTime");

	Params::BP_TimeOfDay_C_SetNewTime Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.SkipToNextKey
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::SkipToNextKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "SkipToNextKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.SkipToPreviousKey
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::SkipToPreviousKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "SkipToPreviousKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.TimeHasChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::TimeHasChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "TimeHasChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.UpdateSunDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::UpdateSunDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "UpdateSunDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeOfDay_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
