#ifndef __ARA_COM_VSOMEIP__SOCTARGETINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__SOCTARGETINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_soctargettime_type.h"
#include "ara/com/vsomeip/impl_type_soctargetvalue_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SocTargetInfo_Type {
public:
	ara::com::vsomeip::SocTargetTime_Type SocTargetTime;
	ara::com::vsomeip::SocTargetValue_Type SocTargetValue;
/*
	SocTargetInfo_Type() {}
	~SocTargetInfo_Type() {}
	SocTargetInfo_Type(const ara::com::vsomeip::SocTargetTime_Type _SocTargetTime,const ara::com::vsomeip::SocTargetValue_Type _SocTargetValue):SocTargetTime(_SocTargetTime),SocTargetValue(_SocTargetValue) {}
	SocTargetInfo_Type(const SocTargetInfo_Type &_x){
		SocTargetTime = _x.SocTargetTime;
		SocTargetValue = _x.SocTargetValue;
	}
	SocTargetInfo_Type(SocTargetInfo_Type &&_x){
		SocTargetTime = std::move(_x.SocTargetTime);
		SocTargetValue = std::move(_x.SocTargetValue);
	}
	SocTargetInfo_Type& operator=(const SocTargetInfo_Type &_x){
		SocTargetTime = _x.SocTargetTime;
		SocTargetValue = _x.SocTargetValue;
		return *this;
	}
	SocTargetInfo_Type& operator=(SocTargetInfo_Type &&_x){
		SocTargetTime = std::move(_x.SocTargetTime);
		SocTargetValue = std::move(_x.SocTargetValue);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SocTargetTime);
		fun(SocTargetValue);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SocTargetTime);
		fun(SocTargetValue);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SocTargetTime);
		fun << (SocTargetValue);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SocTargetTime);
		fun >> (SocTargetValue);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SOCTARGETINFO_TYPE_H__
