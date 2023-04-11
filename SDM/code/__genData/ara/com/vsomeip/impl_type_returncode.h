#ifndef __ARA_COM_VSOMEIP__RETURNCODE_H__
#define __ARA_COM_VSOMEIP__RETURNCODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class ReturnCode:std::uint8_t
{
	Success=0U,
	Fail_WorkingConditionUnfulfilled=1U,
	Fail_HigherPriorityTaskOngoing=2U,
	Fail_FunctionUnavailable=3U,
	Fail_InvalidSourceID=4U,
	Fail_DeviceAbnormal=5U,
	Fail_PowerShortage=6U,
	Fail_Timeout=7U,
	Fail_OverHeating=8U,
	Fail_OutOfRange=9U,
	Fail_Antiplay=10U,
	Fail_Drag=11U,
	OverCurrent=12U,
	Fail_Others=13U,
	Reserved=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__RETURNCODE_H__
