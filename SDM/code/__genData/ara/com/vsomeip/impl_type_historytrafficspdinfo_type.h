#ifndef __ARA_COM_VSOMEIP__HISTORYTRAFFICSPDINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__HISTORYTRAFFICSPDINFO_TYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_def_historyspddis_type.h"
#include "ara/com/vsomeip/impl_type_def_historyspd_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct HistoryTrafficSpdInfo_Type {
public:
	std::uint8_t DEF_HistorySpdSt;
	ara::com::vsomeip::DEF_HistorySpdDis_Type DEF_HistorySpdDis;
	ara::com::vsomeip::DEF_HistorySpd_Type DEF_HistorySpd;
/*
	HistoryTrafficSpdInfo_Type() {}
	~HistoryTrafficSpdInfo_Type() {}
	HistoryTrafficSpdInfo_Type(const std::uint8_t _DEF_HistorySpdSt,const ara::com::vsomeip::DEF_HistorySpdDis_Type _DEF_HistorySpdDis,const ara::com::vsomeip::DEF_HistorySpd_Type _DEF_HistorySpd):DEF_HistorySpdSt(_DEF_HistorySpdSt),DEF_HistorySpdDis(_DEF_HistorySpdDis),DEF_HistorySpd(_DEF_HistorySpd) {}
	HistoryTrafficSpdInfo_Type(const HistoryTrafficSpdInfo_Type &_x){
		DEF_HistorySpdSt = _x.DEF_HistorySpdSt;
		DEF_HistorySpdDis = _x.DEF_HistorySpdDis;
		DEF_HistorySpd = _x.DEF_HistorySpd;
	}
	HistoryTrafficSpdInfo_Type(HistoryTrafficSpdInfo_Type &&_x){
		DEF_HistorySpdSt = std::move(_x.DEF_HistorySpdSt);
		DEF_HistorySpdDis = std::move(_x.DEF_HistorySpdDis);
		DEF_HistorySpd = std::move(_x.DEF_HistorySpd);
	}
	HistoryTrafficSpdInfo_Type& operator=(const HistoryTrafficSpdInfo_Type &_x){
		DEF_HistorySpdSt = _x.DEF_HistorySpdSt;
		DEF_HistorySpdDis = _x.DEF_HistorySpdDis;
		DEF_HistorySpd = _x.DEF_HistorySpd;
		return *this;
	}
	HistoryTrafficSpdInfo_Type& operator=(HistoryTrafficSpdInfo_Type &&_x){
		DEF_HistorySpdSt = std::move(_x.DEF_HistorySpdSt);
		DEF_HistorySpdDis = std::move(_x.DEF_HistorySpdDis);
		DEF_HistorySpd = std::move(_x.DEF_HistorySpd);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_HistorySpdSt);
		fun(DEF_HistorySpdDis);
		fun(DEF_HistorySpd);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_HistorySpdSt);
		fun(DEF_HistorySpdDis);
		fun(DEF_HistorySpd);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_HistorySpdSt);
		fun << (DEF_HistorySpdDis);
		fun << (DEF_HistorySpd);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_HistorySpdSt);
		fun >> (DEF_HistorySpdDis);
		fun >> (DEF_HistorySpd);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__HISTORYTRAFFICSPDINFO_TYPE_H__
