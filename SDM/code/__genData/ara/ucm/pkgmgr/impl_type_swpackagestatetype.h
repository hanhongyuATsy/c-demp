#ifndef __ARA_UCM_PKGMGR__SWPACKAGESTATETYPE_H__
#define __ARA_UCM_PKGMGR__SWPACKAGESTATETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class SwPackageStateType:std::uint8_t
{
	kTransferring=0U,
	kTransferred=1U,
	kProcessing=2U,
	kProcessed=3U,
	kProcessingStream=4U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SWPACKAGESTATETYPE_H__
