#ifndef __ARA_COM_VSOMEIP__ACORESERVICERUN_TYPE_H__
#define __ARA_COM_VSOMEIP__ACORESERVICERUN_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct AcoreServiceRun_Type {
public:
	std::uint16_t AcoreServiceRunProcess;
/*
	AcoreServiceRun_Type() {}
	~AcoreServiceRun_Type() {}
	AcoreServiceRun_Type(const std::uint16_t _AcoreServiceRunProcess):AcoreServiceRunProcess(_AcoreServiceRunProcess) {}
	AcoreServiceRun_Type(const AcoreServiceRun_Type &_x){
		AcoreServiceRunProcess = _x.AcoreServiceRunProcess;
	}
	AcoreServiceRun_Type(AcoreServiceRun_Type &&_x){
		AcoreServiceRunProcess = std::move(_x.AcoreServiceRunProcess);
	}
	AcoreServiceRun_Type& operator=(const AcoreServiceRun_Type &_x){
		AcoreServiceRunProcess = _x.AcoreServiceRunProcess;
		return *this;
	}
	AcoreServiceRun_Type& operator=(AcoreServiceRun_Type &&_x){
		AcoreServiceRunProcess = std::move(_x.AcoreServiceRunProcess);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(AcoreServiceRunProcess);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(AcoreServiceRunProcess);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (AcoreServiceRunProcess);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (AcoreServiceRunProcess);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ACORESERVICERUN_TYPE_H__
