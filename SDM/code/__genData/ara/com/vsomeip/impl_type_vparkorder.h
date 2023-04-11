#ifndef __ARA_COM_VSOMEIP__VPARKORDER_H__
#define __ARA_COM_VSOMEIP__VPARKORDER_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vParkOrder:std::uint8_t
{
	Nocommand=0U,
	PAVPParkOn=1U,
	HPAParkOn=2U,
	RPAParkOn=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VPARKORDER_H__
