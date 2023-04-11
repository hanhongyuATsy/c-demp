#ifndef __ARA_COM_VSOMEIP__VALARMHISTORY_H__
#define __ARA_COM_VSOMEIP__VALARMHISTORY_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vAlarmHistory:std::uint8_t
{
	No_record=0U,
	Hood_Intruded=1U,
	Trunk_Intruded=2U,
	FLDoor_ntruded=3U,
	FRDoor_Intruded=4U,
	RLDoor_Intruded=5U,
	RRDoor_Intruded=6U,
	Auth_Failed=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VALARMHISTORY_H__
