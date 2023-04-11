#ifndef __ARA_COM_VSOMEIP__VRAINFALLLEVEL_H__
#define __ARA_COM_VSOMEIP__VRAINFALLLEVEL_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vRainFallLevel:std::uint8_t
{
	NoRain=0U,
	Level1shower=1U,
	Level2moderaterain=2U,
	Level3heavyrain=3U,
	Level4Rainstorm=4U,
	Initvalue=14U,
	Invalidvalue=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VRAINFALLLEVEL_H__
