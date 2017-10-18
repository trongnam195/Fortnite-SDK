#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0000 (0x0378 - 0x0378)
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1cc3ec8f);
		return ptr;
	}


	void GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
