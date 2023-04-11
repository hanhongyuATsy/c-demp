#ifndef __ARA_COM_VSOMEIP__EXTLIGHTAUTOADJUSTMOTORST_H__
#define __ARA_COM_VSOMEIP__EXTLIGHTAUTOADJUSTMOTORST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class ExtLightAutoAdjustMotorSt:std::uint8_t
{
	Invalid=0U,
	Referecerun=1U,
	Normalrun=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__EXTLIGHTAUTOADJUSTMOTORST_H__
