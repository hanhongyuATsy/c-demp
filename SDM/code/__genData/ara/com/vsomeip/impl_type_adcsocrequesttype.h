#ifndef __ARA_COM_VSOMEIP__ADCSOCREQUESTTYPE_H__
#define __ARA_COM_VSOMEIP__ADCSOCREQUESTTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class ADCSoCRequestType:std::uint8_t
{
	No_Request=0U,
	Request=1U,
	Reserved1=2U,
	Reserved2=3U,
	Reserved3=4U,
	Reserved4=5U,
	Reserved5=6U,
	Reserved6=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ADCSOCREQUESTTYPE_H__
