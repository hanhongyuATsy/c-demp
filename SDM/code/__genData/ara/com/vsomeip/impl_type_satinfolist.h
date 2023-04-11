#ifndef __ARA_COM_VSOMEIP__SATINFOLIST_H__
#define __ARA_COM_VSOMEIP__SATINFOLIST_H__


#include "ara/core/array.h"
#include "impl_type_satinfo_t.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

using SatInfoList = ::ara::core::Array<SatInfo_t, 100>;
}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SATINFOLIST_H__
