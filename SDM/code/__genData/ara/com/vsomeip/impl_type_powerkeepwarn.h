#ifndef __ARA_COM_VSOMEIP__POWERKEEPWARN_H__
#define __ARA_COM_VSOMEIP__POWERKEEPWARN_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class PowerKeepWarn:std::uint8_t
{
	Lv0=0U,
	Lv1=1U,
	Lv2=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POWERKEEPWARN_H__
