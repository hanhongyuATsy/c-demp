#ifndef __ARA_COM_VSOMEIP__ROADSEGMENT_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADSEGMENT_TYPE_H__


#include "ara/core/array.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

using RoadSegment_Type = ::ara::core::Array<std::uint8_t, 300>;
}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADSEGMENT_TYPE_H__
