#ifndef __ARA_UCM_PKGMGR__SWNAMEVERSIONTYPE_H__
#define __ARA_UCM_PKGMGR__SWNAMEVERSIONTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct SwNameVersionType {
public:
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
/*
	SwNameVersionType() {}
	~SwNameVersionType() {}
	SwNameVersionType(const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version):Name(_Name),Version(_Version) {}
	SwNameVersionType(const SwNameVersionType &_x){
		Name = _x.Name;
		Version = _x.Version;
	}
	SwNameVersionType(SwNameVersionType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
	}
	SwNameVersionType& operator=(const SwNameVersionType &_x){
		Name = _x.Name;
		Version = _x.Version;
		return *this;
	}
	SwNameVersionType& operator=(SwNameVersionType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Name);
		fun(Version);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Name);
		fun(Version);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Name);
		fun << (Version);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Name);
		fun >> (Version);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SWNAMEVERSIONTYPE_H__
