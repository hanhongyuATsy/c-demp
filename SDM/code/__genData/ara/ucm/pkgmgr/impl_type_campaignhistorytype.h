#ifndef __ARA_UCM_PKGMGR__CAMPAIGNHISTORYTYPE_H__
#define __ARA_UCM_PKGMGR__CAMPAIGNHISTORYTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_campaignerrortype.h"
#include "ara/ucm/pkgmgr/impl_type_historyvectortype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct CampaignHistoryType {
public:
	ara::ucm::pkgmgr::CampaignErrorType CampaignError;
	ara::ucm::pkgmgr::HistoryVectorType HistoryVector;
/*
	CampaignHistoryType() {}
	~CampaignHistoryType() {}
	CampaignHistoryType(const ara::ucm::pkgmgr::CampaignErrorType _CampaignError,const ara::ucm::pkgmgr::HistoryVectorType _HistoryVector):CampaignError(_CampaignError),HistoryVector(_HistoryVector) {}
	CampaignHistoryType(const CampaignHistoryType &_x){
		CampaignError = _x.CampaignError;
		HistoryVector = _x.HistoryVector;
	}
	CampaignHistoryType(CampaignHistoryType &&_x){
		CampaignError = std::move(_x.CampaignError);
		HistoryVector = std::move(_x.HistoryVector);
	}
	CampaignHistoryType& operator=(const CampaignHistoryType &_x){
		CampaignError = _x.CampaignError;
		HistoryVector = _x.HistoryVector;
		return *this;
	}
	CampaignHistoryType& operator=(CampaignHistoryType &&_x){
		CampaignError = std::move(_x.CampaignError);
		HistoryVector = std::move(_x.HistoryVector);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CampaignError);
		fun(HistoryVector);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CampaignError);
		fun(HistoryVector);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CampaignError);
		fun << (HistoryVector);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CampaignError);
		fun >> (HistoryVector);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__CAMPAIGNHISTORYTYPE_H__
