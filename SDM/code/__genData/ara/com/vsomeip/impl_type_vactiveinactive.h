#ifndef __ARA_COM_VSOMEIP__VACTIVEINACTIVE_H__
#define __ARA_COM_VSOMEIP__VACTIVEINACTIVE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vActiveInactive:std::uint8_t
{
	Inactive=0U,
	Active=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VACTIVEINACTIVE_H__
