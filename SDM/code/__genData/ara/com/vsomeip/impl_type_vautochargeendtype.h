#ifndef __ARA_COM_VSOMEIP__VAUTOCHARGEENDTYPE_H__
#define __ARA_COM_VSOMEIP__VAUTOCHARGEENDTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vAutoChargeEndType:std::uint8_t
{
	TimeLimited=0U,
	SocLimited=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VAUTOCHARGEENDTYPE_H__
