#ifndef __ARA_COM_VSOMEIP__LIGHTSHOWMODEELSTTYPE_H__
#define __ARA_COM_VSOMEIP__LIGHTSHOWMODEELSTTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class LightShowModeELStType:std::uint8_t
{
	OFF=0U,
	Mode1=1U,
	Mode2=2U,
	Mode3=3U,
	Reserved4=4U,
	Reserved5=5U,
	Reserved6=6U,
	Reserved7=7U,
	Reserved8=8U,
	Reserved9=9U,
	ReservedA=10U,
	ReservedB=11U,
	ReservedC=12U,
	ReservedD=13U,
	Conditionsnotmet=14U,
	Error=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LIGHTSHOWMODEELSTTYPE_H__
