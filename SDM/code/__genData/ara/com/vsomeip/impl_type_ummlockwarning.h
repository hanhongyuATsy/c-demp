#ifndef __ARA_COM_VSOMEIP__UMMLOCKWARNING_H__
#define __ARA_COM_VSOMEIP__UMMLOCKWARNING_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class UMMLockWarning:std::uint8_t
{
	No_warning=0U,
	Warning=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__UMMLOCKWARNING_H__
