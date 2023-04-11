#ifndef __ARA_COM_VSOMEIP__PASSUNLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__PASSUNLOCKREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class PassUnlockReqType:std::uint8_t
{
	Nocommand_x000D_=0U,
	Unlock=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__PASSUNLOCKREQTYPE_H__
