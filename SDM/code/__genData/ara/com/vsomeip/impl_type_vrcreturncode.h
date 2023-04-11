#ifndef __ARA_COM_VSOMEIP__VRCRETURNCODE_H__
#define __ARA_COM_VSOMEIP__VRCRETURNCODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vRCReturnCode:std::uint8_t
{
	Success=0U,
	Fail=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VRCRETURNCODE_H__
