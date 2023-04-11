#ifndef __ARA_COM_VSOMEIP__SENTINELMODESTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__SENTINELMODESTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class SentinelModeStatusType:std::uint8_t
{
	Notactive=0U,
	ArmedStatus=1U,
	AlertStatus=2U,
	AlarmStatus=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENTINELMODESTATUSTYPE_H__
