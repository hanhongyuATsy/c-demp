#ifndef __ASF_NM_VSOMEIP__NMSTATUSTYPE_H__
#define __ASF_NM_VSOMEIP__NMSTATUSTYPE_H__


#include "cstdint"





namespace asf
{
namespace nm
{
namespace vsomeip
{


enum class NmStatusType:std::uint8_t
{
	NoCom=0U,
	FullCom=1U
};

}//asf
}//nm
}//vsomeip
#endif //__ASF_NM_VSOMEIP__NMSTATUSTYPE_H__
