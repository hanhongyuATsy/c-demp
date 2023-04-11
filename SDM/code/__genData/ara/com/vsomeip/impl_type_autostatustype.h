#ifndef __ARA_COM_VSOMEIP__AUTOSTATUSTYPE_H__
#define __ARA_COM_VSOMEIP__AUTOSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class AutoStatusType:std::uint8_t
{
	manual=0U,
	AUTO=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__AUTOSTATUSTYPE_H__
