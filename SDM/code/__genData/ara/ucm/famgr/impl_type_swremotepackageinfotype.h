#ifndef __ARA_UCM_FAMGR__SWREMOTEPACKAGEINFOTYPE_H__
#define __ARA_UCM_FAMGR__SWREMOTEPACKAGEINFOTYPE_H__


#include "ara/ucm/famgr/impl_type_swremotepackagestatetype.h"
#include "ara/ucm/famgr/impl_type_swremotepackagersttype.h"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct SwRemotePackageInfoType {
public:
	ara::ucm::famgr::SwRemotePackageStateType State;
	ara::ucm::famgr::SwRemotePackageRstType Rst;
/*
	SwRemotePackageInfoType() {}
	~SwRemotePackageInfoType() {}
	SwRemotePackageInfoType(const ara::ucm::famgr::SwRemotePackageStateType _State,const ara::ucm::famgr::SwRemotePackageRstType _Rst):State(_State),Rst(_Rst) {}
	SwRemotePackageInfoType(const SwRemotePackageInfoType &_x){
		State = _x.State;
		Rst = _x.Rst;
	}
	SwRemotePackageInfoType(SwRemotePackageInfoType &&_x){
		State = std::move(_x.State);
		Rst = std::move(_x.Rst);
	}
	SwRemotePackageInfoType& operator=(const SwRemotePackageInfoType &_x){
		State = _x.State;
		Rst = _x.Rst;
		return *this;
	}
	SwRemotePackageInfoType& operator=(SwRemotePackageInfoType &&_x){
		State = std::move(_x.State);
		Rst = std::move(_x.Rst);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(State);
		fun(Rst);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(State);
		fun(Rst);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (State);
		fun << (Rst);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (State);
		fun >> (Rst);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__SWREMOTEPACKAGEINFOTYPE_H__
