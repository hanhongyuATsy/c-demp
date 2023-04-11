#ifndef __ARA_UCM_CSM__INSTALLERRORCODEDATATYPE_H__
#define __ARA_UCM_CSM__INSTALLERRORCODEDATATYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace csm
{


enum class InstallErrorCodeDataType:std::uint8_t
{
	kNoError=0U,
	kUpHighBatteryFail=1U,
	kGlobalNetworkFail=2U,
	kStandbyModeFail=3U,
	kThermalRunaway=4U,
	kOTAModeError=5U,
	kVehicleModeError=6U,
	kVersionVerifyError=7U
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__INSTALLERRORCODEDATATYPE_H__
