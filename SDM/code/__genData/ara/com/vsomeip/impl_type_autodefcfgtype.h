#ifndef __ARA_COM_VSOMEIP__AUTODEFCFGTYPE_H__
#define __ARA_COM_VSOMEIP__AUTODEFCFGTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class AutoDefCfgType:std::uint8_t
{
	off=1U,
	highsensitivity=2U,
	middlesensitivity=3U,
	lowsensitivity=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__AUTODEFCFGTYPE_H__
