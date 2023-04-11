#ifndef __ARA_COM_VSOMEIP__COMFORCFGTYPE_H__
#define __ARA_COM_VSOMEIP__COMFORCFGTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class ComforCfgType:std::uint8_t
{
	softmode=1U,
	normalmode=2U,
	fastmode=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__COMFORCFGTYPE_H__
