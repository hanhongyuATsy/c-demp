#ifndef __ARA_COM_VSOMEIP__VQUERYLIST_H__
#define __ARA_COM_VSOMEIP__VQUERYLIST_H__


#include "ara/core/array.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

using vQueryList = ::ara::core::Array<std::uint16_t, 127>;
}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VQUERYLIST_H__
