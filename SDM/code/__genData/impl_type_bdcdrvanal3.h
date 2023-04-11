#ifndef ____BDCDRVANAL3_H__
#define ____BDCDRVANAL3_H__


#include "cstdint"






struct BDCDRVANAL3 {
public:
	std::uint8_t EMS_GasPedalActPstforMRR_E;
	std::uint8_t EMS_GasPedalActPstforMRRVD;
	std::uint8_t VCU_EMS_AccPedalActPst;
	std::uint8_t VCU_BrkPedPst;
	std::uint8_t VCU_BrkPedPstVD;
	std::uint8_t AccPedalPstForMRR;
	std::uint8_t AccPedalPstForMRRVD;
/*
	BDCDRVANAL3() {}
	~BDCDRVANAL3() {}
	BDCDRVANAL3(const std::uint8_t _EMS_GasPedalActPstforMRR_E,const std::uint8_t _EMS_GasPedalActPstforMRRVD,const std::uint8_t _VCU_EMS_AccPedalActPst,const std::uint8_t _VCU_BrkPedPst,const std::uint8_t _VCU_BrkPedPstVD,const std::uint8_t _AccPedalPstForMRR,const std::uint8_t _AccPedalPstForMRRVD):EMS_GasPedalActPstforMRR_E(_EMS_GasPedalActPstforMRR_E),EMS_GasPedalActPstforMRRVD(_EMS_GasPedalActPstforMRRVD),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst),VCU_BrkPedPst(_VCU_BrkPedPst),VCU_BrkPedPstVD(_VCU_BrkPedPstVD),AccPedalPstForMRR(_AccPedalPstForMRR),AccPedalPstForMRRVD(_AccPedalPstForMRRVD) {}
	BDCDRVANAL3(const BDCDRVANAL3 &_x){
		EMS_GasPedalActPstforMRR_E = _x.EMS_GasPedalActPstforMRR_E;
		EMS_GasPedalActPstforMRRVD = _x.EMS_GasPedalActPstforMRRVD;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_BrkPedPstVD = _x.VCU_BrkPedPstVD;
		AccPedalPstForMRR = _x.AccPedalPstForMRR;
		AccPedalPstForMRRVD = _x.AccPedalPstForMRRVD;
	}
	BDCDRVANAL3(BDCDRVANAL3 &&_x){
		EMS_GasPedalActPstforMRR_E = std::move(_x.EMS_GasPedalActPstforMRR_E);
		EMS_GasPedalActPstforMRRVD = std::move(_x.EMS_GasPedalActPstforMRRVD);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_BrkPedPstVD = std::move(_x.VCU_BrkPedPstVD);
		AccPedalPstForMRR = std::move(_x.AccPedalPstForMRR);
		AccPedalPstForMRRVD = std::move(_x.AccPedalPstForMRRVD);
	}
	BDCDRVANAL3& operator=(const BDCDRVANAL3 &_x){
		EMS_GasPedalActPstforMRR_E = _x.EMS_GasPedalActPstforMRR_E;
		EMS_GasPedalActPstforMRRVD = _x.EMS_GasPedalActPstforMRRVD;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_BrkPedPstVD = _x.VCU_BrkPedPstVD;
		AccPedalPstForMRR = _x.AccPedalPstForMRR;
		AccPedalPstForMRRVD = _x.AccPedalPstForMRRVD;
		return *this;
	}
	BDCDRVANAL3& operator=(BDCDRVANAL3 &&_x){
		EMS_GasPedalActPstforMRR_E = std::move(_x.EMS_GasPedalActPstforMRR_E);
		EMS_GasPedalActPstforMRRVD = std::move(_x.EMS_GasPedalActPstforMRRVD);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_BrkPedPstVD = std::move(_x.VCU_BrkPedPstVD);
		AccPedalPstForMRR = std::move(_x.AccPedalPstForMRR);
		AccPedalPstForMRRVD = std::move(_x.AccPedalPstForMRRVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EMS_GasPedalActPstforMRR_E);
		fun(EMS_GasPedalActPstforMRRVD);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_BrkPedPst);
		fun(VCU_BrkPedPstVD);
		fun(AccPedalPstForMRR);
		fun(AccPedalPstForMRRVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EMS_GasPedalActPstforMRR_E);
		fun(EMS_GasPedalActPstforMRRVD);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_BrkPedPst);
		fun(VCU_BrkPedPstVD);
		fun(AccPedalPstForMRR);
		fun(AccPedalPstForMRRVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EMS_GasPedalActPstforMRR_E);
		fun << (EMS_GasPedalActPstforMRRVD);
		fun << (VCU_EMS_AccPedalActPst);
		fun << (VCU_BrkPedPst);
		fun << (VCU_BrkPedPstVD);
		fun << (AccPedalPstForMRR);
		fun << (AccPedalPstForMRRVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EMS_GasPedalActPstforMRR_E);
		fun >> (EMS_GasPedalActPstforMRRVD);
		fun >> (VCU_EMS_AccPedalActPst);
		fun >> (VCU_BrkPedPst);
		fun >> (VCU_BrkPedPstVD);
		fun >> (AccPedalPstForMRR);
		fun >> (AccPedalPstForMRRVD);
	}
};

#endif //____BDCDRVANAL3_H__
