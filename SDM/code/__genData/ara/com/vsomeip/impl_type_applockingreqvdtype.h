#ifndef __ARA_COM_VSOMEIP__APPLOCKINGREQVDTYPE_H__
#define __ARA_COM_VSOMEIP__APPLOCKINGREQVDTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class APPLockingReqVDType:std::uint8_t
{
	Invalid_x000D_=0U,
	Valid=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__APPLOCKINGREQVDTYPE_H__
