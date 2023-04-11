#ifndef __ARA_COM_VSOMEIP__PASSLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__PASSLOCKREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class PassLockReqType:std::uint8_t
{
	Nocommand=0U,
	Lock=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__PASSLOCKREQTYPE_H__
