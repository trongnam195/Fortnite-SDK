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

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULeaderboardRowWidget_C::OnLeaderboardEntryDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet");

	ULeaderboardRowWidget_C_OnLeaderboardEntryDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaderboardRowWidget_C::ExecuteUbergraph_LeaderboardRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget");

	ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
