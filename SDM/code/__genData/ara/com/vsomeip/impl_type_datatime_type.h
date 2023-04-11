#ifndef __ARA_COM_VSOMEIP__DATATIME_TYPE_H__
#define __ARA_COM_VSOMEIP__DATATIME_TYPE_H__


#include "ara/core/array.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

using DataTime_Type = ::ara::core::Array<std::uint8_t, 6>;
}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DATATIME_TYPE_H__
