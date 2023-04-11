#ifndef __ARA_COM_VSOMEIP__USAGEMODEST_H__
#define __ARA_COM_VSOMEIP__USAGEMODEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class UsageModeSt:std::uint8_t
{
	Standby=0U,
	Comfort=1U,
	ToBeDRV=2U,
	DRV=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__USAGEMODEST_H__
