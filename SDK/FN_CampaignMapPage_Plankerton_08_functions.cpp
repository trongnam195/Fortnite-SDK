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

// Function CampaignMapPage_Plankerton_08.CampaignMapPage_Plankerton_08_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCampaignMapPage_Plankerton_08_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd6671e6);

	UCampaignMapPage_Plankerton_08_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapPage_Plankerton_08.CampaignMapPage_Plankerton_08_C.ExecuteUbergraph_CampaignMapPage_Plankerton_08
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCampaignMapPage_Plankerton_08_C::ExecuteUbergraph_CampaignMapPage_Plankerton_08(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7f9ae00a);

	UCampaignMapPage_Plankerton_08_C_ExecuteUbergraph_CampaignMapPage_Plankerton_08_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
