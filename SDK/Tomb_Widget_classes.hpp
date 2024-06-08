#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tomb_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Tomb_Widget.Tomb_Widget_C
// 0x0028 (0x02E8 - 0x02C0)
class UTomb_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_34;                                      // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   NewVar;                                            // 0x02D0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText GetText();
	void ExecuteUbergraph_Tomb_Widget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tomb_Widget_C">();
	}
	static class UTomb_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTomb_Widget_C>();
	}
};
static_assert(alignof(UTomb_Widget_C) == 0x000008, "Wrong alignment on UTomb_Widget_C");
static_assert(sizeof(UTomb_Widget_C) == 0x0002E8, "Wrong size on UTomb_Widget_C");
static_assert(offsetof(UTomb_Widget_C, UberGraphFrame) == 0x0002C0, "Member 'UTomb_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTomb_Widget_C, TextBlock_34) == 0x0002C8, "Member 'UTomb_Widget_C::TextBlock_34' has a wrong offset!");
static_assert(offsetof(UTomb_Widget_C, NewVar) == 0x0002D0, "Member 'UTomb_Widget_C::NewVar' has a wrong offset!");

}
