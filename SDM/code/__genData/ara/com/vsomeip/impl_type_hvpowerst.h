#ifndef __ARA_COM_VSOMEIP__HVPOWERST_H__
#define __ARA_COM_VSOMEIP__HVPOWERST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class HVPowerSt:std::uint8_t
{
	Invalid=0U,
	Already_power_up=1U,
	Not_power_up=2U,
	Reserved=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__HVPOWERST_H__
