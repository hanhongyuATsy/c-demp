#ifndef ____BDCIPSDCDCTRI_H__
#define ____BDCIPSDCDCTRI_H__


#include "cstdint"






struct BDCIPSDCDCTri {
public:
	std::uint16_t IPS_DCDCCurrHvAct;
	std::uint16_t IPS_DCDCCurrLvAct;
	std::uint16_t IPS_DCDCVoltHvAct;
	std::uint16_t IPS_DCDCVoltLvAct;
	std::uint8_t IPS_DCDCModeSt;
	std::uint16_t IPS_DCDCKL30Volt;
/*
	BDCIPSDCDCTri() {}
	~BDCIPSDCDCTri() {}
	BDCIPSDCDCTri(const std::uint16_t _IPS_DCDCCurrHvAct,const std::uint16_t _IPS_DCDCCurrLvAct,const std::uint16_t _IPS_DCDCVoltHvAct,const std::uint16_t _IPS_DCDCVoltLvAct,const std::uint8_t _IPS_DCDCModeSt,const std::uint16_t _IPS_DCDCKL30Volt):IPS_DCDCCurrHvAct(_IPS_DCDCCurrHvAct),IPS_DCDCCurrLvAct(_IPS_DCDCCurrLvAct),IPS_DCDCVoltHvAct(_IPS_DCDCVoltHvAct),IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct),IPS_DCDCModeSt(_IPS_DCDCModeSt),IPS_DCDCKL30Volt(_IPS_DCDCKL30Volt) {}
	BDCIPSDCDCTri(const BDCIPSDCDCTri &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_DCDCKL30Volt = _x.IPS_DCDCKL30Volt;
	}
	BDCIPSDCDCTri(BDCIPSDCDCTri &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_DCDCKL30Volt = std::move(_x.IPS_DCDCKL30Volt);
	}
	BDCIPSDCDCTri& operator=(const BDCIPSDCDCTri &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_DCDCKL30Volt = _x.IPS_DCDCKL30Volt;
		return *this;
	}
	BDCIPSDCDCTri& operator=(BDCIPSDCDCTri &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_DCDCKL30Volt = std::move(_x.IPS_DCDCKL30Volt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCModeSt);
		fun(IPS_DCDCKL30Volt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCModeSt);
		fun(IPS_DCDCKL30Volt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCCurrHvAct);
		fun << (IPS_DCDCCurrLvAct);
		fun << (IPS_DCDCVoltHvAct);
		fun << (IPS_DCDCVoltLvAct);
		fun << (IPS_DCDCModeSt);
		fun << (IPS_DCDCKL30Volt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCCurrHvAct);
		fun >> (IPS_DCDCCurrLvAct);
		fun >> (IPS_DCDCVoltHvAct);
		fun >> (IPS_DCDCVoltLvAct);
		fun >> (IPS_DCDCModeSt);
		fun >> (IPS_DCDCKL30Volt);
	}
};

#endif //____BDCIPSDCDCTRI_H__
