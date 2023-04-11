#ifndef __ARA_UCM_PKGMGR__GETHISTORYTYPE_H__
#define __ARA_UCM_PKGMGR__GETHISTORYTYPE_H__


#include "cstdint"
#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"
#include "ara/ucm/pkgmgr/impl_type_actiontype.h"
#include "ara/ucm/pkgmgr/impl_type_resulttype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct GetHistoryType {
public:
	std::uint64_t Time;
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
	ara::ucm::pkgmgr::ActionType Action;
	ara::ucm::pkgmgr::ResultType Resolution;
/*
	GetHistoryType() {}
	~GetHistoryType() {}
	GetHistoryType(const std::uint64_t _Time,const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version,const ara::ucm::pkgmgr::ActionType _Action,const ara::ucm::pkgmgr::ResultType _Resolution):Time(_Time),Name(_Name),Version(_Version),Action(_Action),Resolution(_Resolution) {}
	GetHistoryType(const GetHistoryType &_x){
		Time = _x.Time;
		Name = _x.Name;
		Version = _x.Version;
		Action = _x.Action;
		Resolution = _x.Resolution;
	}
	GetHistoryType(GetHistoryType &&_x){
		Time = std::move(_x.Time);
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		Action = std::move(_x.Action);
		Resolution = std::move(_x.Resolution);
	}
	GetHistoryType& operator=(const GetHistoryType &_x){
		Time = _x.Time;
		Name = _x.Name;
		Version = _x.Version;
		Action = _x.Action;
		Resolution = _x.Resolution;
		return *this;
	}
	GetHistoryType& operator=(GetHistoryType &&_x){
		Time = std::move(_x.Time);
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		Action = std::move(_x.Action);
		Resolution = std::move(_x.Resolution);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Time);
		fun(Name);
		fun(Version);
		fun(Action);
		fun(Resolution);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Time);
		fun(Name);
		fun(Version);
		fun(Action);
		fun(Resolution);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Time);
		fun << (Name);
		fun << (Version);
		fun << (Action);
		fun << (Resolution);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Time);
		fun >> (Name);
		fun >> (Version);
		fun >> (Action);
		fun >> (Resolution);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__GETHISTORYTYPE_H__
