#ifndef ____LIGHTSHOWMODECTRLRETURNCODETYPE_H__
#define ____LIGHTSHOWMODECTRLRETURNCODETYPE_H__


#include "cstdint"







enum class LightShowModeCtrlReturnCodeType:std::uint8_t
{
	Excutalbe=0U,
	OtherReqWork=1U,
	Error_Timeout=2U,
	Error_ServiceUnavailable=3U,
	Error_CurrentAbnormal=4U,
	Error_VoltageAbnormal=5U,
	Error_DeviceAbnormal=6U,
	Reserve=7U,
	OutOfRange=10U,
	ModeNotActive=11U
};

#endif //____LIGHTSHOWMODECTRLRETURNCODETYPE_H__
