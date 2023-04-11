#ifndef __ARA_COM_VSOMEIP__BHSSTDATA_H__
#define __ARA_COM_VSOMEIP__BHSSTDATA_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BHSStData {
public:
	std::uint8_t F_SOC;
	std::uint8_t F_SOC_STATE;
	std::uint8_t F_SOH;
	std::uint16_t F_RUL;
	std::uint8_t T_SOC;
	std::uint8_t T_SOC_STATE;
	std::uint8_t T_SOH;
	std::uint16_t T_RUL;
/*
	BHSStData() {}
	~BHSStData() {}
	BHSStData(const std::uint8_t _F_SOC,const std::uint8_t _F_SOC_STATE,const std::uint8_t _F_SOH,const std::uint16_t _F_RUL,const std::uint8_t _T_SOC,const std::uint8_t _T_SOC_STATE,const std::uint8_t _T_SOH,const std::uint16_t _T_RUL):F_SOC(_F_SOC),F_SOC_STATE(_F_SOC_STATE),F_SOH(_F_SOH),F_RUL(_F_RUL),T_SOC(_T_SOC),T_SOC_STATE(_T_SOC_STATE),T_SOH(_T_SOH),T_RUL(_T_RUL) {}
	BHSStData(const BHSStData &_x){
		F_SOC = _x.F_SOC;
		F_SOC_STATE = _x.F_SOC_STATE;
		F_SOH = _x.F_SOH;
		F_RUL = _x.F_RUL;
		T_SOC = _x.T_SOC;
		T_SOC_STATE = _x.T_SOC_STATE;
		T_SOH = _x.T_SOH;
		T_RUL = _x.T_RUL;
	}
	BHSStData(BHSStData &&_x){
		F_SOC = std::move(_x.F_SOC);
		F_SOC_STATE = std::move(_x.F_SOC_STATE);
		F_SOH = std::move(_x.F_SOH);
		F_RUL = std::move(_x.F_RUL);
		T_SOC = std::move(_x.T_SOC);
		T_SOC_STATE = std::move(_x.T_SOC_STATE);
		T_SOH = std::move(_x.T_SOH);
		T_RUL = std::move(_x.T_RUL);
	}
	BHSStData& operator=(const BHSStData &_x){
		F_SOC = _x.F_SOC;
		F_SOC_STATE = _x.F_SOC_STATE;
		F_SOH = _x.F_SOH;
		F_RUL = _x.F_RUL;
		T_SOC = _x.T_SOC;
		T_SOC_STATE = _x.T_SOC_STATE;
		T_SOH = _x.T_SOH;
		T_RUL = _x.T_RUL;
		return *this;
	}
	BHSStData& operator=(BHSStData &&_x){
		F_SOC = std::move(_x.F_SOC);
		F_SOC_STATE = std::move(_x.F_SOC_STATE);
		F_SOH = std::move(_x.F_SOH);
		F_RUL = std::move(_x.F_RUL);
		T_SOC = std::move(_x.T_SOC);
		T_SOC_STATE = std::move(_x.T_SOC_STATE);
		T_SOH = std::move(_x.T_SOH);
		T_RUL = std::move(_x.T_RUL);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(F_SOC);
		fun(F_SOC_STATE);
		fun(F_SOH);
		fun(F_RUL);
		fun(T_SOC);
		fun(T_SOC_STATE);
		fun(T_SOH);
		fun(T_RUL);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(F_SOC);
		fun(F_SOC_STATE);
		fun(F_SOH);
		fun(F_RUL);
		fun(T_SOC);
		fun(T_SOC_STATE);
		fun(T_SOH);
		fun(T_RUL);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (F_SOC);
		fun << (F_SOC_STATE);
		fun << (F_SOH);
		fun << (F_RUL);
		fun << (T_SOC);
		fun << (T_SOC_STATE);
		fun << (T_SOH);
		fun << (T_RUL);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (F_SOC);
		fun >> (F_SOC_STATE);
		fun >> (F_SOH);
		fun >> (F_RUL);
		fun >> (T_SOC);
		fun >> (T_SOC_STATE);
		fun >> (T_SOH);
		fun >> (T_RUL);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BHSSTDATA_H__
