#ifndef __ARA_COM_VSOMEIP__ROADSLOPEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADSLOPEINFO_TYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_def_slopedis_type.h"
#include "ara/com/vsomeip/impl_type_def_slopevalue_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RoadSlopeInfo_Type {
public:
	std::uint8_t DEF_SlopeSt;
	ara::com::vsomeip::DEF_SlopeDis_Type DEF_SlopeDis;
	ara::com::vsomeip::DEF_SlopeValue_Type DEF_SlopeValue;
/*
	RoadSlopeInfo_Type() {}
	~RoadSlopeInfo_Type() {}
	RoadSlopeInfo_Type(const std::uint8_t _DEF_SlopeSt,const ara::com::vsomeip::DEF_SlopeDis_Type _DEF_SlopeDis,const ara::com::vsomeip::DEF_SlopeValue_Type _DEF_SlopeValue):DEF_SlopeSt(_DEF_SlopeSt),DEF_SlopeDis(_DEF_SlopeDis),DEF_SlopeValue(_DEF_SlopeValue) {}
	RoadSlopeInfo_Type(const RoadSlopeInfo_Type &_x){
		DEF_SlopeSt = _x.DEF_SlopeSt;
		DEF_SlopeDis = _x.DEF_SlopeDis;
		DEF_SlopeValue = _x.DEF_SlopeValue;
	}
	RoadSlopeInfo_Type(RoadSlopeInfo_Type &&_x){
		DEF_SlopeSt = std::move(_x.DEF_SlopeSt);
		DEF_SlopeDis = std::move(_x.DEF_SlopeDis);
		DEF_SlopeValue = std::move(_x.DEF_SlopeValue);
	}
	RoadSlopeInfo_Type& operator=(const RoadSlopeInfo_Type &_x){
		DEF_SlopeSt = _x.DEF_SlopeSt;
		DEF_SlopeDis = _x.DEF_SlopeDis;
		DEF_SlopeValue = _x.DEF_SlopeValue;
		return *this;
	}
	RoadSlopeInfo_Type& operator=(RoadSlopeInfo_Type &&_x){
		DEF_SlopeSt = std::move(_x.DEF_SlopeSt);
		DEF_SlopeDis = std::move(_x.DEF_SlopeDis);
		DEF_SlopeValue = std::move(_x.DEF_SlopeValue);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_SlopeSt);
		fun(DEF_SlopeDis);
		fun(DEF_SlopeValue);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_SlopeSt);
		fun(DEF_SlopeDis);
		fun(DEF_SlopeValue);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_SlopeSt);
		fun << (DEF_SlopeDis);
		fun << (DEF_SlopeValue);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_SlopeSt);
		fun >> (DEF_SlopeDis);
		fun >> (DEF_SlopeValue);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADSLOPEINFO_TYPE_H__
