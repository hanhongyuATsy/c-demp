#ifndef __ARA_COM_VSOMEIP__APPLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__APPLOCKREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class APPLockReqType:std::uint8_t
{
	Norequest=0U,
	Lock=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__APPLOCKREQTYPE_H__
