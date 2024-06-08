#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FuncLib

#include "Basic.hpp"

#include "BP_FuncLib_classes.hpp"
#include "BP_FuncLib_parameters.hpp"


namespace SDK
{

// Function BP_FuncLib.BP_FuncLib_C.CombineTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Out                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::CombineTransform(const struct FTransform& A, const struct FTransform& B, class UObject* __WorldContext, struct FTransform* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "CombineTransform");

	Params::BP_FuncLib_C_CombineTransform Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BP_FuncLib.BP_FuncLib_C.GetHitBaseInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::GetHitBaseInfo(const struct FHitResult& Hit, class UObject* __WorldContext, struct FVector* Location, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "GetHitBaseInfo");

	Params::BP_FuncLib_C_GetHitBaseInfo Parms{};

	Parms.Hit = std::move(Hit);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);
}


// Function BP_FuncLib.BP_FuncLib_C.GetTransformLoc
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Loc                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::GetTransformLoc(const struct FTransform& Transform, class UObject* __WorldContext, struct FVector* Loc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "GetTransformLoc");

	Params::BP_FuncLib_C_GetTransformLoc Parms{};

	Parms.Transform = std::move(Transform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Loc != nullptr)
		*Loc = std::move(Parms.Loc);
}


// Function BP_FuncLib.BP_FuncLib_C.GetTransformRot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void BP_FuncLib::UBP_FuncLib_C::GetTransformRot(const struct FTransform& Transform, class UObject* __WorldContext, struct FRotator* Rot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "GetTransformRot");

	Params::BP_FuncLib_C_GetTransformRot Parms{};

	Parms.Transform = std::move(Transform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Rot != nullptr)
		*Rot = std::move(Parms.Rot);
}


// Function BP_FuncLib.BP_FuncLib_C.GetTransformScale
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::GetTransformScale(const struct FTransform& Transform, class UObject* __WorldContext, struct FVector* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "GetTransformScale");

	Params::BP_FuncLib_C_GetTransformScale Parms{};

	Parms.Transform = std::move(Transform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);
}


// Function BP_FuncLib.BP_FuncLib_C.RandomRot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void BP_FuncLib::UBP_FuncLib_C::RandomRot(const struct FRotator& Min, const struct FRotator& Max, class UObject* __WorldContext, struct FRotator* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RandomRot");

	Params::BP_FuncLib_C_RandomRot Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BP_FuncLib.BP_FuncLib_C.RandomRotSeeded
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomStream                    Seed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void BP_FuncLib::UBP_FuncLib_C::RandomRotSeeded(const struct FRotator& Min, const struct FRotator& Max, struct FRandomStream& Seed, class UObject* __WorldContext, struct FRotator* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RandomRotSeeded");

	Params::BP_FuncLib_C_RandomRotSeeded Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.Seed = std::move(Seed);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Seed = std::move(Parms.Seed);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BP_FuncLib.BP_FuncLib_C.RandomVector
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::RandomVector(const struct FVector& Min, const struct FVector& Max, class UObject* __WorldContext, struct FVector* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RandomVector");

	Params::BP_FuncLib_C_RandomVector Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BP_FuncLib.BP_FuncLib_C.RandomVectorSeeded
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream                    Seed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::RandomVectorSeeded(const struct FVector& Min, const struct FVector& Max, const struct FRandomStream& Seed, class UObject* __WorldContext, struct FVector* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RandomVectorSeeded");

	Params::BP_FuncLib_C_RandomVectorSeeded Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.Seed = std::move(Seed);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BP_FuncLib.BP_FuncLib_C.RelativeLocToWorld
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Relative                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       World                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::RelativeLocToWorld(const struct FVector& Relative, const struct FTransform& World, class UObject* __WorldContext, struct FVector* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RelativeLocToWorld");

	Params::BP_FuncLib_C_RelativeLocToWorld Parms{};

	Parms.Relative = std::move(Relative);
	Parms.World = std::move(World);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function BP_FuncLib.BP_FuncLib_C.RotatorMirror
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Mirror                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void BP_FuncLib::UBP_FuncLib_C::RotatorMirror(const struct FRotator& Rotator, const struct FVector& Mirror, class UObject* __WorldContext, struct FRotator* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "RotatorMirror");

	Params::BP_FuncLib_C_RotatorMirror Parms{};

	Parms.Rotator = std::move(Rotator);
	Parms.Mirror = std::move(Mirror);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function BP_FuncLib.BP_FuncLib_C.SetTransformLoc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Loc                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::SetTransformLoc(struct FTransform& Transform, const struct FVector& Loc, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "SetTransformLoc");

	Params::BP_FuncLib_C_SetTransformLoc Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Loc = std::move(Loc);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Transform = std::move(Parms.Transform);
}


// Function BP_FuncLib.BP_FuncLib_C.SetTransformRot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::SetTransformRot(struct FTransform& Transform, const struct FRotator& Rot, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "SetTransformRot");

	Params::BP_FuncLib_C_SetTransformRot Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Rot = std::move(Rot);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Transform = std::move(Parms.Transform);
}


// Function BP_FuncLib.BP_FuncLib_C.SetTransformScale
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::SetTransformScale(struct FTransform& Transform, const struct FVector& Scale, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "SetTransformScale");

	Params::BP_FuncLib_C_SetTransformScale Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Scale = std::move(Scale);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Transform = std::move(Parms.Transform);
}


// Function BP_FuncLib.BP_FuncLib_C.TraceDown
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Original                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

bool BP_FuncLib::UBP_FuncLib_C::TraceDown(const struct FVector& Original, double Distance, class UObject* __WorldContext, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "TraceDown");

	Params::BP_FuncLib_C_TraceDown Parms{};

	Parms.Original = std::move(Original);
	Parms.Distance = Distance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;
}


// Function BP_FuncLib.BP_FuncLib_C.WorldLocToRelative
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          World                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Relative                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_FuncLib::UBP_FuncLib_C::WorldLocToRelative(const struct FVector& World, const struct FTransform& Relative, class UObject* __WorldContext, struct FVector* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FuncLib_C", "WorldLocToRelative");

	Params::BP_FuncLib_C_WorldLocToRelative Parms{};

	Parms.World = std::move(World);
	Parms.Relative = std::move(Relative);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}

}
