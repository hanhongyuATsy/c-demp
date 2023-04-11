#ifndef __ARA_COM_VSOMEIP__VWIPERPOSITION_H__
#define __ARA_COM_VSOMEIP__VWIPERPOSITION_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vWiperPosition:std::uint8_t
{
	currentPosition=0U,
	ServicePosition=1U,
	InitPositon=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VWIPERPOSITION_H__
