#ifndef __ARA_COM_VSOMEIP__SPEEDLIMITINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__SPEEDLIMITINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_def_spdlimit_type.h"
#include "ara/com/vsomeip/impl_type_def_spdlimitdis_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_def_spdlimittype_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SpeedLimitInfo_Type {
public:
	ara::com::vsomeip::DEF_SpdLimit_Type DEF_SpdLimit;
	ara::com::vsomeip::DEF_SpdLimitDis_Type DEF_SpdLimitDis;
	std::uint8_t DEF_SpdLimitSt;
	ara::com::vsomeip::DEF_SpdLimitType_Type DEF_SpdLimitType;
/*
	SpeedLimitInfo_Type() {}
	~SpeedLimitInfo_Type() {}
	SpeedLimitInfo_Type(const ara::com::vsomeip::DEF_SpdLimit_Type _DEF_SpdLimit,const ara::com::vsomeip::DEF_SpdLimitDis_Type _DEF_SpdLimitDis,const std::uint8_t _DEF_SpdLimitSt,const ara::com::vsomeip::DEF_SpdLimitType_Type _DEF_SpdLimitType):DEF_SpdLimit(_DEF_SpdLimit),DEF_SpdLimitDis(_DEF_SpdLimitDis),DEF_SpdLimitSt(_DEF_SpdLimitSt),DEF_SpdLimitType(_DEF_SpdLimitType) {}
	SpeedLimitInfo_Type(const SpeedLimitInfo_Type &_x){
		DEF_SpdLimit = _x.DEF_SpdLimit;
		DEF_SpdLimitDis = _x.DEF_SpdLimitDis;
		DEF_SpdLimitSt = _x.DEF_SpdLimitSt;
		DEF_SpdLimitType = _x.DEF_SpdLimitType;
	}
	SpeedLimitInfo_Type(SpeedLimitInfo_Type &&_x){
		DEF_SpdLimit = std::move(_x.DEF_SpdLimit);
		DEF_SpdLimitDis = std::move(_x.DEF_SpdLimitDis);
		DEF_SpdLimitSt = std::move(_x.DEF_SpdLimitSt);
		DEF_SpdLimitType = std::move(_x.DEF_SpdLimitType);
	}
	SpeedLimitInfo_Type& operator=(const SpeedLimitInfo_Type &_x){
		DEF_SpdLimit = _x.DEF_SpdLimit;
		DEF_SpdLimitDis = _x.DEF_SpdLimitDis;
		DEF_SpdLimitSt = _x.DEF_SpdLimitSt;
		DEF_SpdLimitType = _x.DEF_SpdLimitType;
		return *this;
	}
	SpeedLimitInfo_Type& operator=(SpeedLimitInfo_Type &&_x){
		DEF_SpdLimit = std::move(_x.DEF_SpdLimit);
		DEF_SpdLimitDis = std::move(_x.DEF_SpdLimitDis);
		DEF_SpdLimitSt = std::move(_x.DEF_SpdLimitSt);
		DEF_SpdLimitType = std::move(_x.DEF_SpdLimitType);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_SpdLimit);
		fun(DEF_SpdLimitDis);
		fun(DEF_SpdLimitSt);
		fun(DEF_SpdLimitType);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_SpdLimit);
		fun(DEF_SpdLimitDis);
		fun(DEF_SpdLimitSt);
		fun(DEF_SpdLimitType);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_SpdLimit);
		fun << (DEF_SpdLimitDis);
		fun << (DEF_SpdLimitSt);
		fun << (DEF_SpdLimitType);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_SpdLimit);
		fun >> (DEF_SpdLimitDis);
		fun >> (DEF_SpdLimitSt);
		fun >> (DEF_SpdLimitType);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SPEEDLIMITINFO_TYPE_H__
