#ifndef __ARA_COM_VSOMEIP__APUUNLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__APUUNLOCKREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class APUUnlockReqType:std::uint8_t
{
	Norequest_x000D_=0U,
	Request=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__APUUNLOCKREQTYPE_H__
