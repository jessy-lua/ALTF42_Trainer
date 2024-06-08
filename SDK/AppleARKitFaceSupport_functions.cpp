#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleARKitFaceSupport

#include "Basic.hpp"

#include "AppleARKitFaceSupport_classes.hpp"
#include "AppleARKitFaceSupport_parameters.hpp"


namespace SDK
{

// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                           Triangles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>                UV0                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::CreateMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UV0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "CreateMesh");

	Params::AppleARKitFaceMeshComponent_CreateMesh Parms{};

	Parms.Vertices = std::move(Vertices);
	Parms.Triangles = std::move(Triangles);
	Parms.UV0 = std::move(UV0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves
// (Final, Native, Private)

void UAppleARKitFaceMeshComponent::OnRep_RemoteCurves()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "OnRep_RemoteCurves");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             SubjectName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::PublishViaLiveLink(class FName SubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "PublishViaLiveLink");

	Params::AppleARKitFaceMeshComponent_PublishViaLiveLink Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct FNetQuantizeFaceCurve>    ClientCurves                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::ServerUpdateFaceCurves(const TArray<struct FNetQuantizeFaceCurve>& ClientCurves)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "ServerUpdateFaceCurves");

	Params::AppleARKitFaceMeshComponent_ServerUpdateFaceCurves Parms{};

	Parms.ClientCurves = std::move(ClientCurves);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bAutoBind                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::SetAutoBind(bool bAutoBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "SetAutoBind");

	Params::AppleARKitFaceMeshComponent_SetAutoBind Parms{};

	Parms.bAutoBind = bAutoBind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EARFaceBlendShape                       BlendShape                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Amount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::SetBlendShapeAmount(EARFaceBlendShape BlendShape, float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "SetBlendShapeAmount");

	Params::AppleARKitFaceMeshComponent_SetBlendShapeAmount Parms{};

	Parms.BlendShape = BlendShape;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<EARFaceBlendShape, float>          InBlendShapes                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::SetBlendShapes(const TMap<EARFaceBlendShape, float>& InBlendShapes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "SetBlendShapes");

	Params::AppleARKitFaceMeshComponent_SetBlendShapes Parms{};

	Parms.InBlendShapes = std::move(InBlendShapes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>                  Vertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAppleARKitFaceMeshComponent::UpdateMesh(const TArray<struct FVector>& Vertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "UpdateMesh");

	Params::AppleARKitFaceMeshComponent_UpdateMesh Parms{};

	Parms.Vertices = std::move(Vertices);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
// (Final, Native, Public, BlueprintCallable)

void UAppleARKitFaceMeshComponent::UpdateMeshFromBlendShapes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "UpdateMeshFromBlendShapes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceBlendShape                       BlendShape                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAppleARKitFaceMeshComponent::GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "GetFaceBlendShapeAmount");

	Params::AppleARKitFaceMeshComponent_GetFaceBlendShapeAmount Parms{};

	Parms.BlendShape = BlendShape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppleARKitFaceMeshComponent::GetLastUpdateFrameNumber() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "GetLastUpdateFrameNumber");

	Params::AppleARKitFaceMeshComponent_GetLastUpdateFrameNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAppleARKitFaceMeshComponent::GetLastUpdateTimestamp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "GetLastUpdateTimestamp");

	Params::AppleARKitFaceMeshComponent_GetLastUpdateTimestamp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAppleARKitFaceMeshComponent::GetTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppleARKitFaceMeshComponent", "GetTransform");

	Params::AppleARKitFaceMeshComponent_GetTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

