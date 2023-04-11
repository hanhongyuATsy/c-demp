#ifndef ____BDCTESTVCU2_H__
#define ____BDCTESTVCU2_H__


#include "cstdint"






struct BDCTestVCU2 {
public:
	std::uint8_t VCU_VehCrusSt;
	std::uint8_t VCU_PwrCoolEn;
	std::uint8_t VCU_HVACPwrLimit;
	std::uint8_t VCU_HVACPwrLimitAct;
/*
	BDCTestVCU2() {}
	~BDCTestVCU2() {}
	BDCTestVCU2(const std::uint8_t _VCU_VehCrusSt,const std::uint8_t _VCU_PwrCoolEn,const std::uint8_t _VCU_HVACPwrLimit,const std::uint8_t _VCU_HVACPwrLimitAct):VCU_VehCrusSt(_VCU_VehCrusSt),VCU_PwrCoolEn(_VCU_PwrCoolEn),VCU_HVACPwrLimit(_VCU_HVACPwrLimit),VCU_HVACPwrLimitAct(_VCU_HVACPwrLimitAct) {}
	BDCTestVCU2(const BDCTestVCU2 &_x){
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
	}
	BDCTestVCU2(BDCTestVCU2 &&_x){
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
	}
	BDCTestVCU2& operator=(const BDCTestVCU2 &_x){
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
		return *this;
	}
	BDCTestVCU2& operator=(BDCTestVCU2 &&_x){
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_VehCrusSt);
		fun(VCU_PwrCoolEn);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_VehCrusSt);
		fun(VCU_PwrCoolEn);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_VehCrusSt);
		fun << (VCU_PwrCoolEn);
		fun << (VCU_HVACPwrLimit);
		fun << (VCU_HVACPwrLimitAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_VehCrusSt);
		fun >> (VCU_PwrCoolEn);
		fun >> (VCU_HVACPwrLimit);
		fun >> (VCU_HVACPwrLimitAct);
	}
};

#endif //____BDCTESTVCU2_H__
