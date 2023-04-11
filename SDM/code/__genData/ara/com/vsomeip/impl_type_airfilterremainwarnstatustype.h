#ifndef __ARA_COM_VSOMEIP__AIRFILTERREMAINWARNSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__AIRFILTERREMAINWARNSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class AirFilterRemainWarnStatusType:std::uint8_t
{
	not_warn=0U,
	warn=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__AIRFILTERREMAINWARNSTATUSTYPE_H__
