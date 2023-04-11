#ifndef __ARA_COM_VSOMEIP__VEHMODEST_H__
#define __ARA_COM_VSOMEIP__VEHMODEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class VehModeSt:std::uint8_t
{
	Normal_Mode=0U,
	Manufacture_Mode=1U,
	Transport_Mode=2U,
	Show_Mode=3U,
	PostCrash_Mode=4U,
	Maintenance_Mode=5U,
	Invalid_Value=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VEHMODEST_H__
