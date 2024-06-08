#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkAnimationCore

#include "Basic.hpp"

#include "LiveLinkAnimationCore_classes.hpp"
#include "LiveLinkAnimationCore_parameters.hpp"


namespace SDK
{

// Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULiveLinkRetargetAsset>RetargetAsset                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkInstance", "SetRetargetAsset");

	Params::LiveLinkInstance_SetRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName             SubjectName                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkInstance", "SetSubject");

	Params::LiveLinkInstance_SetSubject Parms{};

	Parms.SubjectName = std::move(SubjectName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::LiveLinkRemapAsset_GetRemappedBoneName Parms{};

	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                             CurveName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName CurveName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::LiveLinkRemapAsset_GetRemappedCurveName Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, float>                CurveItems                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>& CurveItems) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::LiveLinkRemapAsset_RemapCurveElements Parms{};

	Parms.CurveItems = std::move(CurveItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	CurveItems = std::move(Parms.CurveItems);
}

}

