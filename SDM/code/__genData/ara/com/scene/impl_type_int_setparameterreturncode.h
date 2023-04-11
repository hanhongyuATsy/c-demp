#ifndef __ARA_COM_SCENE__INT_SETPARAMETERRETURNCODE_H__
#define __ARA_COM_SCENE__INT_SETPARAMETERRETURNCODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace scene
{


enum class Int_SetParameterReturnCode:std::uint8_t
{
	Excutalbe=0U,
	OtherReqWork=1U,
	Error_Timeout=2U,
	Error_ServiceUnavailable=3U,
	Error_CurrentAbnormal=5U,
	Error_DeviceAbnormal=7U,
	Error_VoltageAbnormal=6U
};

}//ara
}//com
}//scene
#endif //__ARA_COM_SCENE__INT_SETPARAMETERRETURNCODE_H__
