#ifndef __ARA_COM_VSOMEIP__VENABLEDISABLE_H__
#define __ARA_COM_VSOMEIP__VENABLEDISABLE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vEnableDisable:std::uint8_t
{
	Disable=0U,
	Enable=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VENABLEDISABLE_H__
