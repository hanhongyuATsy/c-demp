#ifndef ____BDCGEN_H__
#define ____BDCGEN_H__


#include "cstdint"






struct BDCGen {
public:
	std::uint8_t EEM_Uset;
	std::uint8_t EEM_DCDCSPSt;
	std::uint16_t IPS_DCDCVoltLvAct;
/*
	BDCGen() {}
	~BDCGen() {}
	BDCGen(const std::uint8_t _EEM_Uset,const std::uint8_t _EEM_DCDCSPSt,const std::uint16_t _IPS_DCDCVoltLvAct):EEM_Uset(_EEM_Uset),EEM_DCDCSPSt(_EEM_DCDCSPSt),IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct) {}
	BDCGen(const BDCGen &_x){
		EEM_Uset = _x.EEM_Uset;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
	}
	BDCGen(BDCGen &&_x){
		EEM_Uset = std::move(_x.EEM_Uset);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
	}
	BDCGen& operator=(const BDCGen &_x){
		EEM_Uset = _x.EEM_Uset;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		return *this;
	}
	BDCGen& operator=(BDCGen &&_x){
		EEM_Uset = std::move(_x.EEM_Uset);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EEM_Uset);
		fun(EEM_DCDCSPSt);
		fun(IPS_DCDCVoltLvAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EEM_Uset);
		fun(EEM_DCDCSPSt);
		fun(IPS_DCDCVoltLvAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EEM_Uset);
		fun << (EEM_DCDCSPSt);
		fun << (IPS_DCDCVoltLvAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EEM_Uset);
		fun >> (EEM_DCDCSPSt);
		fun >> (IPS_DCDCVoltLvAct);
	}
};

#endif //____BDCGEN_H__
