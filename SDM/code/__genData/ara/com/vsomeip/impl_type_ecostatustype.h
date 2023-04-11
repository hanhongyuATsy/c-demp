#ifndef __ARA_COM_VSOMEIP__ECOSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__ECOSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class EcoStatusType:std::uint8_t
{
	Normal=0U,
	Eco=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ECOSTATUSTYPE_H__
