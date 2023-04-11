#ifndef __ARA_UCM_PKGMGR__HISTORYTYPE_H__
#define __ARA_UCM_PKGMGR__HISTORYTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_ucmidentifiertype.h"
#include "ara/ucm/pkgmgr/impl_type_gethistoryvectortype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct HistoryType {
public:
	ara::ucm::pkgmgr::UCMIdentifierType id;
	ara::ucm::pkgmgr::GetHistoryVectorType HistoryVector;
/*
	HistoryType() {}
	~HistoryType() {}
	HistoryType(const ara::ucm::pkgmgr::UCMIdentifierType _id,const ara::ucm::pkgmgr::GetHistoryVectorType _HistoryVector):id(_id),HistoryVector(_HistoryVector) {}
	HistoryType(const HistoryType &_x){
		id = _x.id;
		HistoryVector = _x.HistoryVector;
	}
	HistoryType(HistoryType &&_x){
		id = std::move(_x.id);
		HistoryVector = std::move(_x.HistoryVector);
	}
	HistoryType& operator=(const HistoryType &_x){
		id = _x.id;
		HistoryVector = _x.HistoryVector;
		return *this;
	}
	HistoryType& operator=(HistoryType &&_x){
		id = std::move(_x.id);
		HistoryVector = std::move(_x.HistoryVector);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(id);
		fun(HistoryVector);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(id);
		fun(HistoryVector);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (id);
		fun << (HistoryVector);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (id);
		fun >> (HistoryVector);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__HISTORYTYPE_H__
