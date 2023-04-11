#ifndef __ARA_COM_VSOMEIP__SENTINELMODEEXITREMINDTYPE_H__
#define __ARA_COM_VSOMEIP__SENTINELMODEEXITREMINDTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class SentinelModeExitRemindType:std::uint8_t
{
	NoCommand=0U,
	PercentageTwentySOCRemind=1U,
	PercentageThirtySOCRemind=2U,
	Reserved=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENTINELMODEEXITREMINDTYPE_H__
