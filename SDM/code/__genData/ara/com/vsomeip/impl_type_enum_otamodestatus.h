#ifndef __ARA_COM_VSOMEIP__ENUM_OTAMODESTATUS_H__
#define __ARA_COM_VSOMEIP__ENUM_OTAMODESTATUS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class Enum_OTAModeStatus:std::uint8_t
{
	NonOTAMode=0U,
	OTAMode=1U,
	InvalidValue=2U,
	Reserved=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ENUM_OTAMODESTATUS_H__
