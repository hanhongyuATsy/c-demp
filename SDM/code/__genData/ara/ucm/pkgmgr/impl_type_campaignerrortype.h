#ifndef __ARA_UCM_PKGMGR__CAMPAIGNERRORTYPE_H__
#define __ARA_UCM_PKGMGR__CAMPAIGNERRORTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_ucmsteperrortype.h"
#include "ara/ucm/pkgmgr/impl_type_campaignfailuretype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct CampaignErrorType {
public:
	ara::ucm::pkgmgr::UCMStepErrorType UCMStepError;
	ara::ucm::pkgmgr::CampaignFailureType CampaignFailure;
/*
	CampaignErrorType() {}
	~CampaignErrorType() {}
	CampaignErrorType(const ara::ucm::pkgmgr::UCMStepErrorType _UCMStepError,const ara::ucm::pkgmgr::CampaignFailureType _CampaignFailure):UCMStepError(_UCMStepError),CampaignFailure(_CampaignFailure) {}
	CampaignErrorType(const CampaignErrorType &_x){
		UCMStepError = _x.UCMStepError;
		CampaignFailure = _x.CampaignFailure;
	}
	CampaignErrorType(CampaignErrorType &&_x){
		UCMStepError = std::move(_x.UCMStepError);
		CampaignFailure = std::move(_x.CampaignFailure);
	}
	CampaignErrorType& operator=(const CampaignErrorType &_x){
		UCMStepError = _x.UCMStepError;
		CampaignFailure = _x.CampaignFailure;
		return *this;
	}
	CampaignErrorType& operator=(CampaignErrorType &&_x){
		UCMStepError = std::move(_x.UCMStepError);
		CampaignFailure = std::move(_x.CampaignFailure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UCMStepError);
		fun(CampaignFailure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UCMStepError);
		fun(CampaignFailure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UCMStepError);
		fun << (CampaignFailure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UCMStepError);
		fun >> (CampaignFailure);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__CAMPAIGNERRORTYPE_H__
