#ifndef __ARA_COM_VSOMEIP__CO2RECREQTYPE_H__
#define __ARA_COM_VSOMEIP__CO2RECREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class CO2RecReqType:std::uint8_t
{
	no_require=0U,
	require=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CO2RECREQTYPE_H__
