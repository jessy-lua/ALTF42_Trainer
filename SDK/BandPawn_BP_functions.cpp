#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BandPawn_BP

#include "Basic.hpp"

#include "BandPawn_BP_classes.hpp"
#include "BandPawn_BP_parameters.hpp"


namespace SDK
{

// Function BandPawn_BP.BandPawn_BP_C.BandSound_JustStart
// (BlueprintCallable, BlueprintEvent)

void ABandPawn_BP_C::BandSound_JustStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BandSound_JustStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.BandSound_JustStop
// (BlueprintCallable, BlueprintEvent)

void ABandPawn_BP_C::BandSound_JustStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BandSound_JustStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.BandSound_SetPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::BandSound_SetPlay(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BandSound_SetPlay");

	Params::BandPawn_BP_C_BandSound_SetPlay Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.BndEvt__BandPawn_BP_BoyHit_Collision_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABandPawn_BP_C::BndEvt__BandPawn_BP_BoyHit_Collision_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BndEvt__BandPawn_BP_BoyHit_Collision_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature");

	Params::BandPawn_BP_C_BndEvt__BandPawn_BP_BoyHit_Collision_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.BndEvt__BandPawn_BP_GoblinHit_Collision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABandPawn_BP_C::BndEvt__BandPawn_BP_GoblinHit_Collision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BndEvt__BandPawn_BP_GoblinHit_Collision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

	Params::BandPawn_BP_C_BndEvt__BandPawn_BP_GoblinHit_Collision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.BndEvt__BandPawn_BP_ManHit_Collision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABandPawn_BP_C::BndEvt__BandPawn_BP_ManHit_Collision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "BndEvt__BandPawn_BP_ManHit_Collision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");

	Params::BandPawn_BP_C_BndEvt__BandPawn_BP_ManHit_Collision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.ExecuteUbergraph_BandPawn_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::ExecuteUbergraph_BandPawn_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "ExecuteUbergraph_BandPawn_BP");

	Params::BandPawn_BP_C_ExecuteUbergraph_BandPawn_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.HIT_Active__FinishedFunc
// (BlueprintEvent)

void ABandPawn_BP_C::HIT_Active__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "HIT_Active__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.HIT_Active__UpdateFunc
// (BlueprintEvent)

void ABandPawn_BP_C::HIT_Active__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "HIT_Active__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.LevelBGM_Get_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*                    Get_Sound                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   FadeInDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeVolumeLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::LevelBGM_Get_Start(class AAmbientSound* Get_Sound, float FadeInDuration, float FadeVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "LevelBGM_Get_Start");

	Params::BandPawn_BP_C_LevelBGM_Get_Start Parms{};

	Parms.Get_Sound = Get_Sound;
	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.LevelBGM_Get_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FadeOutDuration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeVolumeLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::LevelBGM_Get_Stop(float FadeOutDuration, float FadeVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "LevelBGM_Get_Stop");

	Params::BandPawn_BP_C_LevelBGM_Get_Stop Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.LevelBGM_Spawn_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fade_IN_Time                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxVolume                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EAudioFaderCurve                        FadeCurve                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::LevelBGM_Spawn_Start(float Fade_IN_Time, float MaxVolume, const EAudioFaderCurve FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "LevelBGM_Spawn_Start");

	Params::BandPawn_BP_C_LevelBGM_Spawn_Start Parms{};

	Parms.Fade_IN_Time = Fade_IN_Time;
	Parms.MaxVolume = MaxVolume;
	Parms.FadeCurve = FadeCurve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.LevelBGM_Spawn_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FadeOutTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Fade_Out_Volume                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandPawn_BP_C::LevelBGM_Spawn_Stop(float FadeOutTime, float Fade_Out_Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "LevelBGM_Spawn_Stop");

	Params::BandPawn_BP_C_LevelBGM_Spawn_Stop Parms{};

	Parms.FadeOutTime = FadeOutTime;
	Parms.Fade_Out_Volume = Fade_Out_Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BandPawn_BP.BandPawn_BP_C.MusicChanged
// (BlueprintCallable, BlueprintEvent)

void ABandPawn_BP_C::MusicChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "MusicChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.MusicChangingEnd_Reset
// (BlueprintCallable, BlueprintEvent)

void ABandPawn_BP_C::MusicChangingEnd_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "MusicChangingEnd_Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABandPawn_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABandPawn_BP_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABandPawn_BP_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.��|x_0__FinishedFunc
// (BlueprintEvent)

void ABandPawn_BP_C::___x_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "��|x_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BandPawn_BP.BandPawn_BP_C.��|x_0__UpdateFunc
// (BlueprintEvent)

void ABandPawn_BP_C::___x_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BandPawn_BP_C", "��|x_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
