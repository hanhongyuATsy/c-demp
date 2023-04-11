#ifndef __ARA_UCM_FAMGR__SWREMOTEPACKAGERSTTYPE_H__
#define __ARA_UCM_FAMGR__SWREMOTEPACKAGERSTTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{


enum class SwRemotePackageRstType:std::uint8_t
{
	kTransferredSuccess=0U,
	kTransferredFailed=1U
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__SWREMOTEPACKAGERSTTYPE_H__
