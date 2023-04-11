#ifndef __ARA_COM_VSOMEIP__AQSCFGTYPE_H__
#define __ARA_COM_VSOMEIP__AQSCFGTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class AqsCfgType:std::uint8_t
{
	high_sensitivity=1U,
	middle_sensitivity=2U,
	low_sensitivity=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__AQSCFGTYPE_H__
