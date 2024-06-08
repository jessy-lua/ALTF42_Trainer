#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Constraints

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum Constraints.EHandleEvent
// NumValues: 0x0004
enum class EHandleEvent : uint8
{
	LocalTransformUpdated                    = 0,
	GlobalTransformUpdated                   = 1,
	ComponentUpdated                         = 2,
	Max                                      = 3,
};

// ScriptStruct Constraints.MovieSceneConstraintChannel
// 0x0000 (0x0100 - 0x0100)
struct FMovieSceneConstraintChannel final : public FMovieSceneBoolChannel
{
};
static_assert(alignof(FMovieSceneConstraintChannel) == 0x000008, "Wrong alignment on FMovieSceneConstraintChannel");
static_assert(sizeof(FMovieSceneConstraintChannel) == 0x000100, "Wrong size on FMovieSceneConstraintChannel");

// ScriptStruct Constraints.ConstraintAndActiveChannel
// 0x0130 (0x0130 - 0x0000)
struct FConstraintAndActiveChannel final
{
public:
	TSoftObjectPtr<class UTickableConstraint>     Constraint;                                        // 0x0000(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneConstraintChannel           ActiveChannel;                                     // 0x0028(0x0100)(NativeAccessSpecifierPublic)
	class UTickableConstraint*                    ConstraintCopyToSpawn;                             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConstraintAndActiveChannel) == 0x000008, "Wrong alignment on FConstraintAndActiveChannel");
static_assert(sizeof(FConstraintAndActiveChannel) == 0x000130, "Wrong size on FConstraintAndActiveChannel");
static_assert(offsetof(FConstraintAndActiveChannel, Constraint) == 0x000000, "Member 'FConstraintAndActiveChannel::Constraint' has a wrong offset!");
static_assert(offsetof(FConstraintAndActiveChannel, ActiveChannel) == 0x000028, "Member 'FConstraintAndActiveChannel::ActiveChannel' has a wrong offset!");
static_assert(offsetof(FConstraintAndActiveChannel, ConstraintCopyToSpawn) == 0x000128, "Member 'FConstraintAndActiveChannel::ConstraintCopyToSpawn' has a wrong offset!");

// ScriptStruct Constraints.ConstraintTickFunction
// 0x0018 (0x0040 - 0x0028)
struct FConstraintTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_136D[0x18];                                    // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstraintTickFunction) == 0x000008, "Wrong alignment on FConstraintTickFunction");
static_assert(sizeof(FConstraintTickFunction) == 0x000040, "Wrong size on FConstraintTickFunction");

}

