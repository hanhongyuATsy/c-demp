#ifndef __ARA_COM_VSOMEIP__C2VRESPONSECODE_H__
#define __ARA_COM_VSOMEIP__C2VRESPONSECODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class c2vResponseCode:std::uint8_t
{
	Success=0U,
	Fail_UsageModeNotSupport=16U,
	Fail_VehModeNotSupport=17U,
	Fail_FunctionCantBeUsed=18U,
	Fail_InputOutOfRange=19U,
	Fail_ForcedState=20U,
	Fail_Authention=21U,
	Fail_LowVolt=22U,
	Fail_LowBatt=23U,
	Fail_vehicleSpeed=24U,
	Fail_HighVoltfailed=25U,
	Fail_Powerlimited=26U,
	Fail_Timeout=27U,
	Fail_KL15=28U,
	Fail_Security_State=29U,
	Fail_Alldoors_And_Cabin_Cap=30U,
	Fail_Engine_State=31U,
	Fail_OTA_MODE=32U,
	Fail_PARing=33U,
	Fail_Window_State=34U,
	Fail_Endurance_Limite=35U,
	Fail_Others=36U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__C2VRESPONSECODE_H__
