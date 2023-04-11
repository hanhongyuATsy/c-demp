#ifndef __ARA_UCM_PKGMGR__CAMPAIGNFAILURETYPE_H__
#define __ARA_UCM_PKGMGR__CAMPAIGNFAILURETYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class CampaignFailureType:std::uint8_t
{
	kUCMError=1U,
	kInvalidVehiclePackageManifest=2U,
	kSubordinateNotAvailableOnTheNetwork=3U,
	kVehicleStateManagerCommunicationError=4U,
	kVehicleDriverInterfaceCommunicationErro=5U,
	kCampaignCancelled=6U,
	kSuccess=0U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__CAMPAIGNFAILURETYPE_H__
