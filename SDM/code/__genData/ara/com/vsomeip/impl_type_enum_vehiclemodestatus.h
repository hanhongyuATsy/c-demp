#ifndef __ARA_COM_VSOMEIP__ENUM_VEHICLEMODESTATUS_H__
#define __ARA_COM_VSOMEIP__ENUM_VEHICLEMODESTATUS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class Enum_VehicleModeStatus:std::uint8_t
{
	NormalMode=0U,
	ManufactureMode=1U,
	TransportMode=2U,
	ShowMode=3U,
	PostCrashMode=4U,
	MaintenanceMode=5U,
	InvalidValue=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ENUM_VEHICLEMODESTATUS_H__
