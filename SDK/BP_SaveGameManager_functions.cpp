#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveGameManager

#include "Basic.hpp"

#include "BP_SaveGameManager_classes.hpp"
#include "BP_SaveGameManager_parameters.hpp"


namespace SDK
{

// Function BP_SaveGameManager.BP_SaveGameManager_C.AnySaveGameExists
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SlotPrefix                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSaveGameExists                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::AnySaveGameExists(const class FString& SlotPrefix, int32 Amount, int32 UserIndex, bool* bSaveGameExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "AnySaveGameExists");

	Params::BP_SaveGameManager_C_AnySaveGameExists Parms{};

	Parms.SlotPrefix = std::move(SlotPrefix);
	Parms.Amount = Amount;
	Parms.UserIndex = UserIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bSaveGameExists != nullptr)
		*bSaveGameExists = Parms.bSaveGameExists;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.CreateNewGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::CreateNewGame(const class FString& SlotName, int32 UserIndex, class FName LevelName, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "CreateNewGame");

	Params::BP_SaveGameManager_C_CreateNewGame Parms{};

	Parms.SlotName = std::move(SlotName);
	Parms.UserIndex = UserIndex;
	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.GetLatestSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SlotPrefix                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           SlotName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::GetLatestSaveGame(const class FString& SlotPrefix, int32 UserIndex, int32 Amount, bool* Success, class FString* SlotName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "GetLatestSaveGame");

	Params::BP_SaveGameManager_C_GetLatestSaveGame Parms{};

	Parms.SlotPrefix = std::move(SlotPrefix);
	Parms.UserIndex = UserIndex;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SlotName != nullptr)
		*SlotName = std::move(Parms.SlotName);
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.GetLevelFromCustomSaveGameObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             LevelName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::GetLevelFromCustomSaveGameObject(class FName* LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "GetLevelFromCustomSaveGameObject");

	Params::BP_SaveGameManager_C_GetLevelFromCustomSaveGameObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = Parms.LevelName;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SaveGameManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.LoadGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                        Param_SaveGameObject                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::LoadGame(const class FString& SlotName, int32 UserIndex, class USaveGame** Param_SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "LoadGame");

	Params::BP_SaveGameManager_C_LoadGame Parms{};

	Parms.SlotName = std::move(SlotName);
	Parms.UserIndex = UserIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SaveGameObject != nullptr)
		*Param_SaveGameObject = Parms.Param_SaveGameObject;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.LoadSaveMetaData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                        Param_SaveGameObject                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::LoadSaveMetaData(const class FString& SlotName, const int32 UserIndex, class USaveGame** Param_SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "LoadSaveMetaData");

	Params::BP_SaveGameManager_C_LoadSaveMetaData Parms{};

	Parms.SlotName = std::move(SlotName);
	Parms.UserIndex = UserIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SaveGameObject != nullptr)
		*Param_SaveGameObject = Parms.Param_SaveGameObject;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.SaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   UserIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::SaveGame(const class FString& SlotName, int32 UserIndex, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "SaveGame");

	Params::BP_SaveGameManager_C_SaveGame Parms{};

	Parms.SlotName = std::move(SlotName);
	Parms.UserIndex = UserIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.SetCustomSaveGameObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        Param_SaveGameObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::SetCustomSaveGameObject(class USaveGame* Param_SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "SetCustomSaveGameObject");

	Params::BP_SaveGameManager_C_SetCustomSaveGameObject Parms{};

	Parms.Param_SaveGameObject = Param_SaveGameObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.SetCustomSaveGameObjectData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SaveGameManager_C::SetCustomSaveGameObjectData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "SetCustomSaveGameObjectData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SaveGameManager.BP_SaveGameManager_C.SetInitialCustomSaveGameObjectData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AreaName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameManager_C::SetInitialCustomSaveGameObjectData(class FName AreaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameManager_C", "SetInitialCustomSaveGameObjectData");

	Params::BP_SaveGameManager_C_SetInitialCustomSaveGameObjectData Parms{};

	Parms.AreaName = AreaName;

	UObject::ProcessEvent(Func, &Parms);
}

}

