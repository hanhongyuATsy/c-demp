#ifndef ____LIGHTSHOWMODECTRLTYPE_H__
#define ____LIGHTSHOWMODECTRLTYPE_H__


#include "cstdint"







enum class LightShowModeCtrlType:std::uint8_t
{
	No_command=0U,
	Prepare_start=1U,
	Start=2U,
	End=3U
};

#endif //____LIGHTSHOWMODECTRLTYPE_H__
