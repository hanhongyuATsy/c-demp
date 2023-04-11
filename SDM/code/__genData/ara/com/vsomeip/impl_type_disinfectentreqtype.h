#ifndef __ARA_COM_VSOMEIP__DISINFECTENTREQTYPE_H__
#define __ARA_COM_VSOMEIP__DISINFECTENTREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class DisinfectentReqType:std::uint8_t
{
	Disinfectent_off=0U,
	Disinfectent_on=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DISINFECTENTREQTYPE_H__
