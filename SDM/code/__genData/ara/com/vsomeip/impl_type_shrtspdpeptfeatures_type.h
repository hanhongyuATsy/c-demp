#ifndef __ARA_COM_VSOMEIP__SHRTSPDPEPTFEATURES_TYPE_H__
#define __ARA_COM_VSOMEIP__SHRTSPDPEPTFEATURES_TYPE_H__


#include "ara/com/vsomeip/impl_type_spv_shortvelprefeatures1_type.h"
#include "ara/com/vsomeip/impl_type_spv_shortvelprefeatures2_type.h"
#include "ara/com/vsomeip/impl_type_spv_shortvelprefeatures3_type.h"
#include "ara/com/vsomeip/impl_type_spv_shortvelprefeatures4_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ShrtSpdPeptFeatures_Type {
public:
	ara::com::vsomeip::SPV_ShortVelPreFeatures1_Type SPV_ShortVelPreFeatures1;
	ara::com::vsomeip::SPV_ShortVelPreFeatures2_Type SPV_ShortVelPreFeatures2;
	ara::com::vsomeip::SPV_ShortVelPreFeatures3_Type SPV_ShortVelPreFeatures3;
	ara::com::vsomeip::SPV_ShortVelPreFeatures4_Type SPV_ShortVelPreFeatures4;
/*
	ShrtSpdPeptFeatures_Type() {}
	~ShrtSpdPeptFeatures_Type() {}
	ShrtSpdPeptFeatures_Type(const ara::com::vsomeip::SPV_ShortVelPreFeatures1_Type _SPV_ShortVelPreFeatures1,const ara::com::vsomeip::SPV_ShortVelPreFeatures2_Type _SPV_ShortVelPreFeatures2,const ara::com::vsomeip::SPV_ShortVelPreFeatures3_Type _SPV_ShortVelPreFeatures3,const ara::com::vsomeip::SPV_ShortVelPreFeatures4_Type _SPV_ShortVelPreFeatures4):SPV_ShortVelPreFeatures1(_SPV_ShortVelPreFeatures1),SPV_ShortVelPreFeatures2(_SPV_ShortVelPreFeatures2),SPV_ShortVelPreFeatures3(_SPV_ShortVelPreFeatures3),SPV_ShortVelPreFeatures4(_SPV_ShortVelPreFeatures4) {}
	ShrtSpdPeptFeatures_Type(const ShrtSpdPeptFeatures_Type &_x){
		SPV_ShortVelPreFeatures1 = _x.SPV_ShortVelPreFeatures1;
		SPV_ShortVelPreFeatures2 = _x.SPV_ShortVelPreFeatures2;
		SPV_ShortVelPreFeatures3 = _x.SPV_ShortVelPreFeatures3;
		SPV_ShortVelPreFeatures4 = _x.SPV_ShortVelPreFeatures4;
	}
	ShrtSpdPeptFeatures_Type(ShrtSpdPeptFeatures_Type &&_x){
		SPV_ShortVelPreFeatures1 = std::move(_x.SPV_ShortVelPreFeatures1);
		SPV_ShortVelPreFeatures2 = std::move(_x.SPV_ShortVelPreFeatures2);
		SPV_ShortVelPreFeatures3 = std::move(_x.SPV_ShortVelPreFeatures3);
		SPV_ShortVelPreFeatures4 = std::move(_x.SPV_ShortVelPreFeatures4);
	}
	ShrtSpdPeptFeatures_Type& operator=(const ShrtSpdPeptFeatures_Type &_x){
		SPV_ShortVelPreFeatures1 = _x.SPV_ShortVelPreFeatures1;
		SPV_ShortVelPreFeatures2 = _x.SPV_ShortVelPreFeatures2;
		SPV_ShortVelPreFeatures3 = _x.SPV_ShortVelPreFeatures3;
		SPV_ShortVelPreFeatures4 = _x.SPV_ShortVelPreFeatures4;
		return *this;
	}
	ShrtSpdPeptFeatures_Type& operator=(ShrtSpdPeptFeatures_Type &&_x){
		SPV_ShortVelPreFeatures1 = std::move(_x.SPV_ShortVelPreFeatures1);
		SPV_ShortVelPreFeatures2 = std::move(_x.SPV_ShortVelPreFeatures2);
		SPV_ShortVelPreFeatures3 = std::move(_x.SPV_ShortVelPreFeatures3);
		SPV_ShortVelPreFeatures4 = std::move(_x.SPV_ShortVelPreFeatures4);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SPV_ShortVelPreFeatures1);
		fun(SPV_ShortVelPreFeatures2);
		fun(SPV_ShortVelPreFeatures3);
		fun(SPV_ShortVelPreFeatures4);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SPV_ShortVelPreFeatures1);
		fun(SPV_ShortVelPreFeatures2);
		fun(SPV_ShortVelPreFeatures3);
		fun(SPV_ShortVelPreFeatures4);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SPV_ShortVelPreFeatures1);
		fun << (SPV_ShortVelPreFeatures2);
		fun << (SPV_ShortVelPreFeatures3);
		fun << (SPV_ShortVelPreFeatures4);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SPV_ShortVelPreFeatures1);
		fun >> (SPV_ShortVelPreFeatures2);
		fun >> (SPV_ShortVelPreFeatures3);
		fun >> (SPV_ShortVelPreFeatures4);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SHRTSPDPEPTFEATURES_TYPE_H__
