#ifndef __ARA_COM_VSOMEIP__LIGHTSHOWMODETYPE_H__
#define __ARA_COM_VSOMEIP__LIGHTSHOWMODETYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class LightShowModeType:std::uint8_t
{
	Nocommand_x000D_=0U,
	OFF_x000D_=1U,
	Mode1_x000D_=2U,
	Mode2_x000D_=3U,
	Mode3_x000D_=4U,
	Mode4=5U,
	Mode5=6U,
	Mode6=7U,
	Mode7=8U,
	Mode8=9U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LIGHTSHOWMODETYPE_H__
