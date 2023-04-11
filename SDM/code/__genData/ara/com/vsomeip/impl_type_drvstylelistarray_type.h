#ifndef __ARA_COM_VSOMEIP__DRVSTYLELISTARRAY_TYPE_H__
#define __ARA_COM_VSOMEIP__DRVSTYLELISTARRAY_TYPE_H__


#include "ara/core/array.h"
#include "ara/com/vsomeip/impl_type_drvstylelistmember_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

using DrvStyleListArray_Type = ::ara::core::Array<ara::com::vsomeip::DrvStyleListMember_Type, 100>;
}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRVSTYLELISTARRAY_TYPE_H__
