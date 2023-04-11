#ifndef __ARA_COM_VSOMEIP__APPUNLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__APPUNLOCKREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class APPUnlockReqType:std::uint8_t
{
	Norequest_x000D_=0U,
	Unlock=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__APPUNLOCKREQTYPE_H__
