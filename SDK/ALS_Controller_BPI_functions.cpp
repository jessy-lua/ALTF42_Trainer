#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_Controller_BPI

#include "Basic.hpp"

#include "ALS_Controller_BPI_classes.hpp"
#include "ALS_Controller_BPI_parameters.hpp"


namespace SDK
{

// Function ALS_Controller_BPI.ALS_Controller_BPI_C.BPI_Get_DebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       DebugFocusCharacter                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    DebugView                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowHUD                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowTraces                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowDebugShapes                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowLayerColors                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Slomo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowCharacterInfo                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Controller_BPI_C::BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Controller_BPI_C", "BPI_Get_DebugInfo");

	Params::ALS_Controller_BPI_C_BPI_Get_DebugInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DebugFocusCharacter != nullptr)
		*DebugFocusCharacter = Parms.DebugFocusCharacter;

	if (DebugView != nullptr)
		*DebugView = Parms.DebugView;

	if (ShowHUD != nullptr)
		*ShowHUD = Parms.ShowHUD;

	if (ShowTraces != nullptr)
		*ShowTraces = Parms.ShowTraces;

	if (ShowDebugShapes != nullptr)
		*ShowDebugShapes = Parms.ShowDebugShapes;

	if (ShowLayerColors != nullptr)
		*ShowLayerColors = Parms.ShowLayerColors;

	if (Slomo != nullptr)
		*Slomo = Parms.Slomo;

	if (ShowCharacterInfo != nullptr)
		*ShowCharacterInfo = Parms.ShowCharacterInfo;
}

}

