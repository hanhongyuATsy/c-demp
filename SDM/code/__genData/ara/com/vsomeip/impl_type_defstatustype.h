#ifndef __ARA_COM_VSOMEIP__DEFSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__DEFSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class DefStatusType:std::uint8_t
{
	defrostoff=0U,
	defroston=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DEFSTATUSTYPE_H__
