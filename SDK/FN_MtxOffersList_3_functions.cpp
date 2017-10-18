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

// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseLeave()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67a8444c);

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseEnter()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x966f9ea3);

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c72ceb7);

	UMtxOffersList_2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnPackagesListed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FMtxPackage>     Offers                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMtxOffersList_2_C::OnPackagesListed(TArray<struct FMtxPackage> Offers)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x160707f7);

	UMtxOffersList_2_C_OnPackagesListed_Params params;
	params.Offers = Offers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnBuyItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OfferId                        (CPF_Parm, CPF_ZeroConstructor)

void UMtxOffersList_2_C::OnBuyItem(const struct FString& OfferId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaf33b8f0);

	UMtxOffersList_2_C_OnBuyItem_Params params;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.OnPurchaseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::OnPurchaseComplete(bool bSuccess)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x81b89a9f);

	UMtxOffersList_2_C_OnPurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd26be6f3);

	UMtxOffersList_2_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_0_Copy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_0_Copy()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8ce71cbe);

	UMtxOffersList_2_C_CustomEvent_0_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_3
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::ExecuteUbergraph_MtxOffersList_3(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef8274dc);

	UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffersList_2_C::PurchaseComplete__DelegateSignature(bool bSuccess)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9bfbb99b);

	UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
