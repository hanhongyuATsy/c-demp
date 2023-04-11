#ifndef __ARA_COM_VSOMEIP__VPRESENTABSENT_H__
#define __ARA_COM_VSOMEIP__VPRESENTABSENT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vPresentAbsent:std::uint8_t
{
	Absent=0U,
	Present=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VPRESENTABSENT_H__
