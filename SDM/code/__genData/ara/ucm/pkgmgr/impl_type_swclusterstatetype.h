#ifndef __ARA_UCM_PKGMGR__SWCLUSTERSTATETYPE_H__
#define __ARA_UCM_PKGMGR__SWCLUSTERSTATETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class SwClusterStateType:std::uint8_t
{
	kPresent=0U,
	kAdded=1U,
	kUpdated=2U,
	kRemoved=3U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SWCLUSTERSTATETYPE_H__
