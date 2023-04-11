#ifndef __ARA_UCM_PKGMGR__CAMPAIGNSTATETYPE_H__
#define __ARA_UCM_PKGMGR__CAMPAIGNSTATETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class CampaignStateType:std::uint8_t
{
	kIdle=0U,
	kSyncing=1U,
	kVehiclePackageTransferring=2U,
	kSoftwarePackageTransferring=3U,
	kProcessing=4U,
	kActivating=5U,
	kVehicleChecking=6U,
	kCancelling=7U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__CAMPAIGNSTATETYPE_H__
