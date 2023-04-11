#ifndef __ARA_COM_VSOMEIP__RKELOCKINGREQTYPE_H__
#define __ARA_COM_VSOMEIP__RKELOCKINGREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class RKELockingReqType:std::uint8_t
{
	Nocommand_x000D_=0U,
	Doorunlock_x000D_=1U,
	Doorlock_x000D_=2U,
	Notused=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__RKELOCKINGREQTYPE_H__
