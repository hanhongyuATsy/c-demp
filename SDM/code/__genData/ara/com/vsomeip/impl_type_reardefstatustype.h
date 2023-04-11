#ifndef __ARA_COM_VSOMEIP__REARDEFSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__REARDEFSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class RearDefStatusType:std::uint8_t
{
	reardefrostoff=0U,
	reardefroston=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__REARDEFSTATUSTYPE_H__
