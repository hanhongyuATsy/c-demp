#ifndef __ARA_UCM_PKGMGR__TRANSFERIDTYPE_H__
#define __ARA_UCM_PKGMGR__TRANSFERIDTYPE_H__


#include "ara/core/array.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

using TransferIdType = ::ara::core::Array<std::uint8_t, 16>;
}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__TRANSFERIDTYPE_H__
