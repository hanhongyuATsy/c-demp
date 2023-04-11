#ifndef __ARA_UCM_PKGMGR__TRANSFERSTATETYPE_H__
#define __ARA_UCM_PKGMGR__TRANSFERSTATETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class TransferStateType:std::uint8_t
{
	kIdle=0U,
	kTransferring=1U,
	kUpdating=2U,
	kCancelling=3U,
	kSyncing=4U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__TRANSFERSTATETYPE_H__
