#ifndef __ARA_COM_VSOMEIP__HVACRESPONSETYPE_H__
#define __ARA_COM_VSOMEIP__HVACRESPONSETYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class HVACResponseType:std::uint8_t
{
	Success=0U,
	Fail_UsageModeNotSupport=1U,
	Fail_VehModeNotSupport=2U,
	Fail_FunctionCantBeUsed=3U,
	Fail_InputOutOfRange=4U,
	Fail_ForcedState=5U,
	Fail_authention=6U,
	Fail_LowVolt=7U,
	Fail_LowBatt=8U,
	Fail_vehicleSpeed=9U,
	Fail_highVoltfailed=10U,
	Fail_Powerlimited=11U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__HVACRESPONSETYPE_H__
