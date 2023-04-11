#ifndef ____SETPAYMENTINFORETURNCODETYPE_H__
#define ____SETPAYMENTINFORETURNCODETYPE_H__


#include "cstdint"







enum class SetPaymentInfoReturnCodeType:std::uint8_t
{
	Excutalbe=0U,
	OtherReqWork=1U,
	Error_Timeout=2U,
	Error_ServiceUnavailable=3U,
	Error_CurrentAbnormal=4U,
	Error_VoltageAbnormal=5U,
	Error_DeviceAbnormal=6U,
	Reserve=7U,
	OutOfRange=10U
};

#endif //____SETPAYMENTINFORETURNCODETYPE_H__
