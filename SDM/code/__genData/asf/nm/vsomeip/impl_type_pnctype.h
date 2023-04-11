#ifndef __ASF_NM_VSOMEIP__PNCTYPE_H__
#define __ASF_NM_VSOMEIP__PNCTYPE_H__


#include "cstdint"





namespace asf
{
namespace nm
{
namespace vsomeip
{


enum class PncType:std::uint8_t
{
	PncGlobal=0U,
	PncDownload=1U,
	PncDomain=2U
};

}//asf
}//nm
}//vsomeip
#endif //__ASF_NM_VSOMEIP__PNCTYPE_H__
