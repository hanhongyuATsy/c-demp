#ifndef __ARA_UCM_PKGMGR__SWCLUSTERINFOTYPE_H__
#define __ARA_UCM_PKGMGR__SWCLUSTERINFOTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"
#include "ara/ucm/pkgmgr/impl_type_swclusterstatetype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct SwClusterInfoType {
public:
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
	ara::ucm::pkgmgr::SwClusterStateType State;
/*
	SwClusterInfoType() {}
	~SwClusterInfoType() {}
	SwClusterInfoType(const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version,const ara::ucm::pkgmgr::SwClusterStateType _State):Name(_Name),Version(_Version),State(_State) {}
	SwClusterInfoType(const SwClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
	}
	SwClusterInfoType(SwClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
	}
	SwClusterInfoType& operator=(const SwClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
		return *this;
	}
	SwClusterInfoType& operator=(SwClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Name);
		fun(Version);
		fun(State);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Name);
		fun(Version);
		fun(State);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Name);
		fun << (Version);
		fun << (State);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Name);
		fun >> (Version);
		fun >> (State);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SWCLUSTERINFOTYPE_H__
