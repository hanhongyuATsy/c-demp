#ifndef __ARA_COM_VSOMEIP__TRAFIICFLOWINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__TRAFIICFLOWINFO_TYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_def_trafiicflowdis_type.h"
#include "ara/com/vsomeip/impl_type_def_trafiicflowspd_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TrafiicFlowInfo_Type {
public:
	std::uint8_t DEF_TrafiicFlowSt;
	ara::com::vsomeip::DEF_TrafiicFlowDis_Type DEF_TrafiicFlowDis;
	ara::com::vsomeip::DEF_TrafiicFlowSpd_Type DEF_TrafiicFlowSpd;
/*
	TrafiicFlowInfo_Type() {}
	~TrafiicFlowInfo_Type() {}
	TrafiicFlowInfo_Type(const std::uint8_t _DEF_TrafiicFlowSt,const ara::com::vsomeip::DEF_TrafiicFlowDis_Type _DEF_TrafiicFlowDis,const ara::com::vsomeip::DEF_TrafiicFlowSpd_Type _DEF_TrafiicFlowSpd):DEF_TrafiicFlowSt(_DEF_TrafiicFlowSt),DEF_TrafiicFlowDis(_DEF_TrafiicFlowDis),DEF_TrafiicFlowSpd(_DEF_TrafiicFlowSpd) {}
	TrafiicFlowInfo_Type(const TrafiicFlowInfo_Type &_x){
		DEF_TrafiicFlowSt = _x.DEF_TrafiicFlowSt;
		DEF_TrafiicFlowDis = _x.DEF_TrafiicFlowDis;
		DEF_TrafiicFlowSpd = _x.DEF_TrafiicFlowSpd;
	}
	TrafiicFlowInfo_Type(TrafiicFlowInfo_Type &&_x){
		DEF_TrafiicFlowSt = std::move(_x.DEF_TrafiicFlowSt);
		DEF_TrafiicFlowDis = std::move(_x.DEF_TrafiicFlowDis);
		DEF_TrafiicFlowSpd = std::move(_x.DEF_TrafiicFlowSpd);
	}
	TrafiicFlowInfo_Type& operator=(const TrafiicFlowInfo_Type &_x){
		DEF_TrafiicFlowSt = _x.DEF_TrafiicFlowSt;
		DEF_TrafiicFlowDis = _x.DEF_TrafiicFlowDis;
		DEF_TrafiicFlowSpd = _x.DEF_TrafiicFlowSpd;
		return *this;
	}
	TrafiicFlowInfo_Type& operator=(TrafiicFlowInfo_Type &&_x){
		DEF_TrafiicFlowSt = std::move(_x.DEF_TrafiicFlowSt);
		DEF_TrafiicFlowDis = std::move(_x.DEF_TrafiicFlowDis);
		DEF_TrafiicFlowSpd = std::move(_x.DEF_TrafiicFlowSpd);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_TrafiicFlowSt);
		fun(DEF_TrafiicFlowDis);
		fun(DEF_TrafiicFlowSpd);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_TrafiicFlowSt);
		fun(DEF_TrafiicFlowDis);
		fun(DEF_TrafiicFlowSpd);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_TrafiicFlowSt);
		fun << (DEF_TrafiicFlowDis);
		fun << (DEF_TrafiicFlowSpd);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_TrafiicFlowSt);
		fun >> (DEF_TrafiicFlowDis);
		fun >> (DEF_TrafiicFlowSpd);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TRAFIICFLOWINFO_TYPE_H__
