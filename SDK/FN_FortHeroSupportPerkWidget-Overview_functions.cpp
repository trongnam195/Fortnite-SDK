// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnHeroUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_Overview_C::OnHeroUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd7280d45);

	UFortHeroSupportPerkWidget_Overview_C_OnHeroUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnSupportTypeUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_Overview_C::OnSupportTypeUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96bb6ca2);

	UFortHeroSupportPerkWidget_Overview_C_OnSupportTypeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.ExecuteUbergraph_FortHeroSupportPerkWidget-Overview
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortHeroSupportPerkWidget_Overview_C::ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9aee3bb);

	UFortHeroSupportPerkWidget_Overview_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Overview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
