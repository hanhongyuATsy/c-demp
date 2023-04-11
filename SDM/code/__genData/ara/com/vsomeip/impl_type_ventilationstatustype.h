#ifndef __ARA_COM_VSOMEIP__VENTILATIONSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__VENTILATIONSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class VentilationStatusType:std::uint8_t
{
	off=0U,
	on=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VENTILATIONSTATUSTYPE_H__
