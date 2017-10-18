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

// Function MtxOffer_3.MtxOffer_2_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffer_2_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c86cea7);

	UMtxOffer_2_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_516_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMtxOffer_2_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc8058505);

	UMtxOffer_2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On Mouse Hovered Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffer_2_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd427a366);

	UMtxOffer_2_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_3_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffer_2_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x53ab8dca);

	UMtxOffer_2_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.ExecuteUbergraph_MtxOffer_3
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMtxOffer_2_C::ExecuteUbergraph_MtxOffer_3(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3894f9af);

	UMtxOffer_2_C_ExecuteUbergraph_MtxOffer_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.MtxOfferMouseLeave_EventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffer_2_C::MtxOfferMouseLeave_EventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e5ac7b6);

	UMtxOffer_2_C_MtxOfferMouseLeave_EventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.MtxOfferMouseEnter_EventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMtxOffer_2_C::MtxOfferMouseEnter_EventDispatcher__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x374bb6a3);

	UMtxOffer_2_C_MtxOfferMouseEnter_EventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffer_3.MtxOffer_2_C.BuyItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OfferId                        (CPF_Parm, CPF_ZeroConstructor)

void UMtxOffer_2_C::BuyItem__DelegateSignature(const struct FString& OfferId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4b9900e2);

	UMtxOffer_2_C_BuyItem__DelegateSignature_Params params;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
