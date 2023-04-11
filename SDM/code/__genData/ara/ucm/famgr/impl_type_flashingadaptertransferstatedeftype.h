#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATEDEFTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATEDEFTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{


enum class FlashingAdapterTransferStateDefType:std::uint8_t
{
	kNormal=0U,
	kDiskSpaceLack=1U,
	kDomainControlTransferred=2U
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATEDEFTYPE_H__
