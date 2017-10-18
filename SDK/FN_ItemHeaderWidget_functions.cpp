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

// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Power Block
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemHeaderWidget_C::Show_Power_Block(bool Show)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2d214df0);

	UItemHeaderWidget_C_Show_Power_Block_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Tier and Level
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemHeaderWidget_C::Show_Tier_and_Level(bool Show)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x76faf581);

	UItemHeaderWidget_C_Show_Tier_and_Level_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateCategoryIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::UpdateCategoryIndicators()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x469b91be);

	UItemHeaderWidget_C_UpdateCategoryIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateHeaderColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::UpdateHeaderColor()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe52d7ab4);

	UItemHeaderWidget_C_UpdateHeaderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdatePowerRatingComparison
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::UpdatePowerRatingComparison()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ac52e93);

	UItemHeaderWidget_C_UpdatePowerRatingComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToCompareSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::HandleDifferentItemToCompareSet()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc6cc2159);

	UItemHeaderWidget_C_HandleDifferentItemToCompareSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemHeaderWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c379755);

	UItemHeaderWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::HandleDifferentItemToDetailSet()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x68dc7d1f);

	UItemHeaderWidget_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.ResetDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemHeaderWidget_C::ResetDisplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe741a82);

	UItemHeaderWidget_C_ResetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.ExecuteUbergraph_ItemHeaderWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemHeaderWidget_C::ExecuteUbergraph_ItemHeaderWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55b9e985);

	UItemHeaderWidget_C_ExecuteUbergraph_ItemHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
