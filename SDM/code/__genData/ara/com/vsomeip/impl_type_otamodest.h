#ifndef __ARA_COM_VSOMEIP__OTAMODEST_H__
#define __ARA_COM_VSOMEIP__OTAMODEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class OTAModeSt:std::uint8_t
{
	NonOTAMode=0U,
	OTAVehModeStMode=1U,
	Invalid=2U,
	Reserved=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__OTAMODEST_H__
