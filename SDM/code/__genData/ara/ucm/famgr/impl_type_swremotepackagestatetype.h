#ifndef __ARA_UCM_FAMGR__SWREMOTEPACKAGESTATETYPE_H__
#define __ARA_UCM_FAMGR__SWREMOTEPACKAGESTATETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{


enum class SwRemotePackageStateType:std::uint8_t
{
	kUnTransfer=0U,
	kTransferring=1U,
	kTransferred=2U
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__SWREMOTEPACKAGESTATETYPE_H__
