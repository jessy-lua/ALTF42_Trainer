#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PathFollow

#include "Basic.hpp"

#include "PathFollow_classes.hpp"
#include "PathFollow_parameters.hpp"


namespace SDK
{

// Function PathFollow.PFPathComponent.GetLocationAtDistanceAlongSplineMirrored
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESplineCoordinateSpace                  CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathComponent::GetLocationAtDistanceAlongSplineMirrored(float Distance, ESplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathComponent", "GetLocationAtDistanceAlongSplineMirrored");

	Params::PFPathComponent_GetLocationAtDistanceAlongSplineMirrored Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathComponent.GetLocationAtSplineInputKeyMirrored
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Key                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESplineCoordinateSpace                  CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathComponent::GetLocationAtSplineInputKeyMirrored(float Key, ESplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathComponent", "GetLocationAtSplineInputKeyMirrored");

	Params::PFPathComponent_GetLocationAtSplineInputKeyMirrored Parms{};

	Parms.Key = Key;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathComponent.GetLocationAtSplinePointMirrored
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   PointIdx                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESplineCoordinateSpace                  CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathComponent::GetLocationAtSplinePointMirrored(int32 PointIdx, ESplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathComponent", "GetLocationAtSplinePointMirrored");

	Params::PFPathComponent_GetLocationAtSplinePointMirrored Parms{};

	Parms.PointIdx = PointIdx;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.AddEventPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Param_Name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              UserData                                               (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EPFEventFireMode                        FireMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   FireCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventPointDelegateHolder*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEventPointDelegateHolder* UPFPathFollowerComponent::AddEventPoint(class FName Param_Name, float Distance, TSubclassOf<class UObject> UserData, EPFEventFireMode FireMode, int32 FireCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "AddEventPoint");

	Params::PFPathFollowerComponent_AddEventPoint Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Distance = Distance;
	Parms.UserData = UserData;
	Parms.FireMode = FireMode;
	Parms.FireCount = FireCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.ComputeAutoRotationPoints
// (Final, Native, Public, BlueprintCallable)

void UPFPathFollowerComponent::ComputeAutoRotationPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "ComputeAutoRotationPoints");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.ComputeLookAtRotation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class USceneComponent*                  TargetComponent                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          FollowerLocation                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UPFPathFollowerComponent::ComputeLookAtRotation(class USceneComponent* TargetComponent, const struct FVector& FollowerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "ComputeLookAtRotation");

	Params::PFPathFollowerComponent_ComputeLookAtRotation Parms{};

	Parms.TargetComponent = TargetComponent;
	Parms.FollowerLocation = std::move(FollowerLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.EventPointExistByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             Param_Name                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPFPathFollowerComponent::EventPointExistByName(const class FName& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "EventPointExistByName");

	Params::PFPathFollowerComponent_EventPointExistByName Parms{};

	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.FollowPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   FollowStep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::FollowPath(float FollowStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "FollowPath");

	Params::PFPathFollowerComponent_FollowPath Parms{};

	Parms.FollowStep = FollowStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.GetEventPointByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             Param_Name                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventPoint                      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FEventPoint UPFPathFollowerComponent::GetEventPointByName(const class FName& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetEventPointByName");

	Params::PFPathFollowerComponent_GetEventPointByName Parms{};

	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEventPointDelegateHolder*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetEventPointDelegateAll");

	Params::PFPathFollowerComponent_GetEventPointDelegateAll Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventPointDelegateHolder*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetEventPointDelegateByIndex");

	Params::PFPathFollowerComponent_GetEventPointDelegateByIndex Parms{};

	Parms.Param_Index = Param_Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             Param_Name                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventPointDelegateHolder*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByName(const class FName& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetEventPointDelegateByName");

	Params::PFPathFollowerComponent_GetEventPointDelegateByName Parms{};

	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetEventPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPFEventPoints                   ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPFEventPoints UPFPathFollowerComponent::GetEventPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetEventPoints");

	Params::PFPathFollowerComponent_GetEventPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetPathOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UPFPathFollowerComponent::GetPathOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetPathOwner");

	Params::PFPathFollowerComponent_GetPathOwner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetPathToFollow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPFPathComponent*                 ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPFPathComponent* UPFPathFollowerComponent::GetPathToFollow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetPathToFollow");

	Params::PFPathFollowerComponent_GetPathToFollow Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.ModifyFinalLocation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                          NewLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathFollowerComponent::ModifyFinalLocation(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "ModifyFinalLocation");

	Params::PFPathFollowerComponent_ModifyFinalLocation Parms{};

	Parms.NewLocation = std::move(NewLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.ModifyFinalRotation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FRotator                         NewRotation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UPFPathFollowerComponent::ModifyFinalRotation(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "ModifyFinalRotation");

	Params::PFPathFollowerComponent_ModifyFinalRotation Parms{};

	Parms.NewRotation = std::move(NewRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.Pause
// (Final, Native, Public, BlueprintCallable)

void UPFPathFollowerComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.RemoveEventPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEventPoint                      EventPoint                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::RemoveEventPoint(const struct FEventPoint& EventPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "RemoveEventPoint");

	Params::PFPathFollowerComponent_RemoveEventPoint Parms{};

	Parms.EventPoint = std::move(EventPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.RemoveEventPointByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   EventPointIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::RemoveEventPointByIndex(int32 EventPointIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "RemoveEventPointByIndex");

	Params::PFPathFollowerComponent_RemoveEventPointByIndex Parms{};

	Parms.EventPointIndex = EventPointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.RemoveEventPointByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             EventPointName                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::RemoveEventPointByName(const class FName& EventPointName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "RemoveEventPointByName");

	Params::PFPathFollowerComponent_RemoveEventPointByName Parms{};

	Parms.EventPointName = EventPointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.Reverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Param_Reverse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::Reverse(bool Param_Reverse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "Reverse");

	Params::PFPathFollowerComponent_Reverse Parms{};

	Parms.Param_Reverse = Param_Reverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.SetCurrentDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::SetCurrentDistance(float NewDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "SetCurrentDistance");

	Params::PFPathFollowerComponent_SetCurrentDistance Parms{};

	Parms.NewDistance = NewDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.SetPathOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Param_PathOwner                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::SetPathOwner(class AActor* Param_PathOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "SetPathOwner");

	Params::PFPathFollowerComponent_SetPathOwner Parms{};

	Parms.Param_PathOwner = Param_PathOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.SetPathToFollow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*                 Spline                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::SetPathToFollow(class USplineComponent* Spline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "SetPathToFollow");

	Params::PFPathFollowerComponent_SetPathToFollow Parms{};

	Parms.Spline = Spline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Param_StartDelay                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPFPathFollowerComponent::Start(float Param_StartDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "Start");

	Params::PFPathFollowerComponent_Start Parms{};

	Parms.Param_StartDelay = Param_StartDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.StartImpl
// (Final, Native, Private)

void UPFPathFollowerComponent::StartImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "StartImpl");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UPFPathFollowerComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.UpdateAutoRotationPoints
// (Final, Native, Public)

void UPFPathFollowerComponent::UpdateAutoRotationPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "UpdateAutoRotationPoints");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PathFollow.PFPathFollowerComponent.GetLocationAtDistance
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESplineCoordinateSpace                  Coord                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathFollowerComponent::GetLocationAtDistance(float Distance, ESplineCoordinateSpace Coord) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetLocationAtDistance");

	Params::PFPathFollowerComponent_GetLocationAtDistance Parms{};

	Parms.Distance = Distance;
	Parms.Coord = Coord;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetMoveDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathFollowerComponent::GetMoveDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetMoveDirection");

	Params::PFPathFollowerComponent_GetMoveDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetRotationAtDistance
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESplineCoordinateSpace                  Coord                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UPFPathFollowerComponent::GetRotationAtDistance(float Distance, ESplineCoordinateSpace Coord) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetRotationAtDistance");

	Params::PFPathFollowerComponent_GetRotationAtDistance Parms{};

	Parms.Distance = Distance;
	Parms.Coord = Coord;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetSpeedAtDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPFPathFollowerComponent::GetSpeedAtDistance(float Distance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetSpeedAtDistance");

	Params::PFPathFollowerComponent_GetSpeedAtDistance Parms{};

	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetSpeedAtSpeedPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   PointIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPFPathFollowerComponent::GetSpeedAtSpeedPoint(int32 PointIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetSpeedAtSpeedPoint");

	Params::PFPathFollowerComponent_GetSpeedAtSpeedPoint Parms{};

	Parms.PointIndex = PointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.GetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPFPathFollowerComponent::GetVelocity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "GetVelocity");

	Params::PFPathFollowerComponent_GetVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PathFollow.PFPathFollowerComponent.HasPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPFPathFollowerComponent::HasPath() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PFPathFollowerComponent", "HasPath");

	Params::PFPathFollowerComponent_HasPath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

