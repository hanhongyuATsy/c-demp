#ifndef __ARA_COM_VSOMEIP__CURVATUREINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CURVATUREINFO_TYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_def_curvcvalue_type.h"
#include "ara/com/vsomeip/impl_type_def_curvcdis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CurvatureInfo_Type {
public:
	std::uint8_t DEF_CurvSt;
	ara::com::vsomeip::DEF_CurvCvalue_Type DEF_CurvCvalue;
	ara::com::vsomeip::DEF_CurvCDis_Type DEF_CurvCDis;
/*
	CurvatureInfo_Type() {}
	~CurvatureInfo_Type() {}
	CurvatureInfo_Type(const std::uint8_t _DEF_CurvSt,const ara::com::vsomeip::DEF_CurvCvalue_Type _DEF_CurvCvalue,const ara::com::vsomeip::DEF_CurvCDis_Type _DEF_CurvCDis):DEF_CurvSt(_DEF_CurvSt),DEF_CurvCvalue(_DEF_CurvCvalue),DEF_CurvCDis(_DEF_CurvCDis) {}
	CurvatureInfo_Type(const CurvatureInfo_Type &_x){
		DEF_CurvSt = _x.DEF_CurvSt;
		DEF_CurvCvalue = _x.DEF_CurvCvalue;
		DEF_CurvCDis = _x.DEF_CurvCDis;
	}
	CurvatureInfo_Type(CurvatureInfo_Type &&_x){
		DEF_CurvSt = std::move(_x.DEF_CurvSt);
		DEF_CurvCvalue = std::move(_x.DEF_CurvCvalue);
		DEF_CurvCDis = std::move(_x.DEF_CurvCDis);
	}
	CurvatureInfo_Type& operator=(const CurvatureInfo_Type &_x){
		DEF_CurvSt = _x.DEF_CurvSt;
		DEF_CurvCvalue = _x.DEF_CurvCvalue;
		DEF_CurvCDis = _x.DEF_CurvCDis;
		return *this;
	}
	CurvatureInfo_Type& operator=(CurvatureInfo_Type &&_x){
		DEF_CurvSt = std::move(_x.DEF_CurvSt);
		DEF_CurvCvalue = std::move(_x.DEF_CurvCvalue);
		DEF_CurvCDis = std::move(_x.DEF_CurvCDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_CurvSt);
		fun(DEF_CurvCvalue);
		fun(DEF_CurvCDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_CurvSt);
		fun(DEF_CurvCvalue);
		fun(DEF_CurvCDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_CurvSt);
		fun << (DEF_CurvCvalue);
		fun << (DEF_CurvCDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_CurvSt);
		fun >> (DEF_CurvCvalue);
		fun >> (DEF_CurvCDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CURVATUREINFO_TYPE_H__
