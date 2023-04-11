#ifndef __ARA_COM_VSOMEIP__VERSIONCHANGESTTYPE_H__
#define __ARA_COM_VSOMEIP__VERSIONCHANGESTTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class VersionChangeStType:std::uint8_t
{
	NoActive=0U,
	Active=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VERSIONCHANGESTTYPE_H__
