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

// BlueprintGeneratedClass BP_ZT_TheOutpost_PvE_03.BP_ZT_TheOutpost_PvE_03_C
// 0x0000 (0x0270 - 0x0270)
class UBP_ZT_TheOutpost_PvE_03_C : public UBP_ZT_PVE_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x41226d79);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
