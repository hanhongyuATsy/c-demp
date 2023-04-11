#ifndef __ARA_UCM_FAMGR__FWCLUSTERINFOTYPE_H__
#define __ARA_UCM_FAMGR__FWCLUSTERINFOTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"
#include "ara/ucm/pkgmgr/impl_type_swclusterstatetype.h"
#include "impl_type_string.h"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FwClusterInfoType {
public:
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
	ara::ucm::pkgmgr::SwClusterStateType State;
	String Address;
/*
	FwClusterInfoType() {}
	~FwClusterInfoType() {}
	FwClusterInfoType(const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version,const ara::ucm::pkgmgr::SwClusterStateType _State,const String _Address):Name(_Name),Version(_Version),State(_State),Address(_Address) {}
	FwClusterInfoType(const FwClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
		Address = _x.Address;
	}
	FwClusterInfoType(FwClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
		Address = std::move(_x.Address);
	}
	FwClusterInfoType& operator=(const FwClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
		Address = _x.Address;
		return *this;
	}
	FwClusterInfoType& operator=(FwClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
		Address = std::move(_x.Address);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Name);
		fun(Version);
		fun(State);
		fun(Address);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Name);
		fun(Version);
		fun(State);
		fun(Address);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Name);
		fun << (Version);
		fun << (State);
		fun << (Address);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Name);
		fun >> (Version);
		fun >> (State);
		fun >> (Address);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FWCLUSTERINFOTYPE_H__
