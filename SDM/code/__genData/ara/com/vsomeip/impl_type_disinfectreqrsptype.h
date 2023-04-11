#ifndef __ARA_COM_VSOMEIP__DISINFECTREQRSPTYPE_H__
#define __ARA_COM_VSOMEIP__DISINFECTREQRSPTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class DisinfectReqRspType:std::uint8_t
{
	Disinfectent_off=0U,
	Disinfectent_on=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DISINFECTREQRSPTYPE_H__
