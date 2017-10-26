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

// Function LightningLSystem.LightningLsystem_C.GetRandomMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningLsystem_C::GetRandomMesh()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6117d319);

	ALightningLsystem_C_GetRandomMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.CleanupMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningLsystem_C::CleanupMesh()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc00f1724);

	ALightningLsystem_C_CleanupMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningLsystem_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x199ccb76);

	ALightningLsystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.OnLightingCleanup
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ALightningLsystem_C::OnLightingCleanup()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbdb51b5a);

	ALightningLsystem_C_OnLightingCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.SetupLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start_Location                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 End_Location                   (CPF_Parm, CPF_IsPlainOldData)

void ALightningLsystem_C::SetupLightning(const struct FVector& Start_Location, const struct FVector& End_Location)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c92bf0a);

	ALightningLsystem_C_SetupLightning_Params params;
	params.Start_Location = Start_Location;
	params.End_Location = End_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.DebugStrike
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningLsystem_C::DebugStrike()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x226d9c10);

	ALightningLsystem_C_DebugStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.OnLightingInitialized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ALightningLsystem_C::OnLightingInitialized()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x33d30f30);

	ALightningLsystem_C_OnLightingInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.EndLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningLsystem_C::EndLightning()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8d782456);

	ALightningLsystem_C_EndLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALightningLsystem_C::ExecuteUbergraph_LightningLsystem(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2450377c);

	ALightningLsystem_C_ExecuteUbergraph_LightningLsystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
