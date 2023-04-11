#ifndef __ARA_UCM_PKGMGR__MASTERCLUSTERINFOTYPE_H__
#define __ARA_UCM_PKGMGR__MASTERCLUSTERINFOTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"
#include "ara/ucm/pkgmgr/impl_type_swclusterstatetype.h"
#include "impl_type_string.h"
#include "ara/ucm/pkgmgr/impl_type_ucmidentifiertype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct MasterClusterInfoType {
public:
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
	ara::ucm::pkgmgr::SwClusterStateType State;
	String Address;
	ara::ucm::pkgmgr::UCMIdentifierType UcmIdentifier;
/*
	MasterClusterInfoType() {}
	~MasterClusterInfoType() {}
	MasterClusterInfoType(const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version,const ara::ucm::pkgmgr::SwClusterStateType _State,const String _Address,const ara::ucm::pkgmgr::UCMIdentifierType _UcmIdentifier):Name(_Name),Version(_Version),State(_State),Address(_Address),UcmIdentifier(_UcmIdentifier) {}
	MasterClusterInfoType(const MasterClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
		Address = _x.Address;
		UcmIdentifier = _x.UcmIdentifier;
	}
	MasterClusterInfoType(MasterClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
		Address = std::move(_x.Address);
		UcmIdentifier = std::move(_x.UcmIdentifier);
	}
	MasterClusterInfoType& operator=(const MasterClusterInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		State = _x.State;
		Address = _x.Address;
		UcmIdentifier = _x.UcmIdentifier;
		return *this;
	}
	MasterClusterInfoType& operator=(MasterClusterInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		State = std::move(_x.State);
		Address = std::move(_x.Address);
		UcmIdentifier = std::move(_x.UcmIdentifier);
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
		fun(UcmIdentifier);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Name);
		fun(Version);
		fun(State);
		fun(Address);
		fun(UcmIdentifier);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Name);
		fun << (Version);
		fun << (State);
		fun << (Address);
		fun << (UcmIdentifier);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Name);
		fun >> (Version);
		fun >> (State);
		fun >> (Address);
		fun >> (UcmIdentifier);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__MASTERCLUSTERINFOTYPE_H__
