#ifndef __ARA_COM_VSOMEIP__VATWSST_H__
#define __ARA_COM_VSOMEIP__VATWSST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vATWSSt:std::uint8_t
{
	DisArm=0U,
	PreArm=1U,
	PartiallyArmed=2U,
	FullyArmed=3U,
	PreDisarm=4U,
	Alarm=5U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VATWSST_H__
