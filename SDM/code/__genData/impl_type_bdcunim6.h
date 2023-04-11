#ifndef ____BDCUNIM6_H__
#define ____BDCUNIM6_H__


#include "cstdint"






struct BDCUNIM6 {
public:
	std::uint16_t UINM_1_CRC;
	std::uint8_t UINM_1_Counter;
	std::uint8_t UINM_FLLumbarSWSt;
	std::uint8_t UINM_SSBFailureWarning;
	std::uint8_t UINM_SSBSW1St;
	std::uint8_t UINM_SSBSW2St;
	std::uint8_t UINM_SSBMismatchSt;
	std::uint8_t UINM_SSBSW1StuckSt;
	std::uint8_t UINM_SSBSW2StuckSt;
	std::uint8_t UINM_FRLumbarSWSt;
/*
	BDCUNIM6() {}
	~BDCUNIM6() {}
	BDCUNIM6(const std::uint16_t _UINM_1_CRC,const std::uint8_t _UINM_1_Counter,const std::uint8_t _UINM_FLLumbarSWSt,const std::uint8_t _UINM_SSBFailureWarning,const std::uint8_t _UINM_SSBSW1St,const std::uint8_t _UINM_SSBSW2St,const std::uint8_t _UINM_SSBMismatchSt,const std::uint8_t _UINM_SSBSW1StuckSt,const std::uint8_t _UINM_SSBSW2StuckSt,const std::uint8_t _UINM_FRLumbarSWSt):UINM_1_CRC(_UINM_1_CRC),UINM_1_Counter(_UINM_1_Counter),UINM_FLLumbarSWSt(_UINM_FLLumbarSWSt),UINM_SSBFailureWarning(_UINM_SSBFailureWarning),UINM_SSBSW1St(_UINM_SSBSW1St),UINM_SSBSW2St(_UINM_SSBSW2St),UINM_SSBMismatchSt(_UINM_SSBMismatchSt),UINM_SSBSW1StuckSt(_UINM_SSBSW1StuckSt),UINM_SSBSW2StuckSt(_UINM_SSBSW2StuckSt),UINM_FRLumbarSWSt(_UINM_FRLumbarSWSt) {}
	BDCUNIM6(const BDCUNIM6 &_x){
		UINM_1_CRC = _x.UINM_1_CRC;
		UINM_1_Counter = _x.UINM_1_Counter;
		UINM_FLLumbarSWSt = _x.UINM_FLLumbarSWSt;
		UINM_SSBFailureWarning = _x.UINM_SSBFailureWarning;
		UINM_SSBSW1St = _x.UINM_SSBSW1St;
		UINM_SSBSW2St = _x.UINM_SSBSW2St;
		UINM_SSBMismatchSt = _x.UINM_SSBMismatchSt;
		UINM_SSBSW1StuckSt = _x.UINM_SSBSW1StuckSt;
		UINM_SSBSW2StuckSt = _x.UINM_SSBSW2StuckSt;
		UINM_FRLumbarSWSt = _x.UINM_FRLumbarSWSt;
	}
	BDCUNIM6(BDCUNIM6 &&_x){
		UINM_1_CRC = std::move(_x.UINM_1_CRC);
		UINM_1_Counter = std::move(_x.UINM_1_Counter);
		UINM_FLLumbarSWSt = std::move(_x.UINM_FLLumbarSWSt);
		UINM_SSBFailureWarning = std::move(_x.UINM_SSBFailureWarning);
		UINM_SSBSW1St = std::move(_x.UINM_SSBSW1St);
		UINM_SSBSW2St = std::move(_x.UINM_SSBSW2St);
		UINM_SSBMismatchSt = std::move(_x.UINM_SSBMismatchSt);
		UINM_SSBSW1StuckSt = std::move(_x.UINM_SSBSW1StuckSt);
		UINM_SSBSW2StuckSt = std::move(_x.UINM_SSBSW2StuckSt);
		UINM_FRLumbarSWSt = std::move(_x.UINM_FRLumbarSWSt);
	}
	BDCUNIM6& operator=(const BDCUNIM6 &_x){
		UINM_1_CRC = _x.UINM_1_CRC;
		UINM_1_Counter = _x.UINM_1_Counter;
		UINM_FLLumbarSWSt = _x.UINM_FLLumbarSWSt;
		UINM_SSBFailureWarning = _x.UINM_SSBFailureWarning;
		UINM_SSBSW1St = _x.UINM_SSBSW1St;
		UINM_SSBSW2St = _x.UINM_SSBSW2St;
		UINM_SSBMismatchSt = _x.UINM_SSBMismatchSt;
		UINM_SSBSW1StuckSt = _x.UINM_SSBSW1StuckSt;
		UINM_SSBSW2StuckSt = _x.UINM_SSBSW2StuckSt;
		UINM_FRLumbarSWSt = _x.UINM_FRLumbarSWSt;
		return *this;
	}
	BDCUNIM6& operator=(BDCUNIM6 &&_x){
		UINM_1_CRC = std::move(_x.UINM_1_CRC);
		UINM_1_Counter = std::move(_x.UINM_1_Counter);
		UINM_FLLumbarSWSt = std::move(_x.UINM_FLLumbarSWSt);
		UINM_SSBFailureWarning = std::move(_x.UINM_SSBFailureWarning);
		UINM_SSBSW1St = std::move(_x.UINM_SSBSW1St);
		UINM_SSBSW2St = std::move(_x.UINM_SSBSW2St);
		UINM_SSBMismatchSt = std::move(_x.UINM_SSBMismatchSt);
		UINM_SSBSW1StuckSt = std::move(_x.UINM_SSBSW1StuckSt);
		UINM_SSBSW2StuckSt = std::move(_x.UINM_SSBSW2StuckSt);
		UINM_FRLumbarSWSt = std::move(_x.UINM_FRLumbarSWSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_1_CRC);
		fun(UINM_1_Counter);
		fun(UINM_FLLumbarSWSt);
		fun(UINM_SSBFailureWarning);
		fun(UINM_SSBSW1St);
		fun(UINM_SSBSW2St);
		fun(UINM_SSBMismatchSt);
		fun(UINM_SSBSW1StuckSt);
		fun(UINM_SSBSW2StuckSt);
		fun(UINM_FRLumbarSWSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_1_CRC);
		fun(UINM_1_Counter);
		fun(UINM_FLLumbarSWSt);
		fun(UINM_SSBFailureWarning);
		fun(UINM_SSBSW1St);
		fun(UINM_SSBSW2St);
		fun(UINM_SSBMismatchSt);
		fun(UINM_SSBSW1StuckSt);
		fun(UINM_SSBSW2StuckSt);
		fun(UINM_FRLumbarSWSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_1_CRC);
		fun << (UINM_1_Counter);
		fun << (UINM_FLLumbarSWSt);
		fun << (UINM_SSBFailureWarning);
		fun << (UINM_SSBSW1St);
		fun << (UINM_SSBSW2St);
		fun << (UINM_SSBMismatchSt);
		fun << (UINM_SSBSW1StuckSt);
		fun << (UINM_SSBSW2StuckSt);
		fun << (UINM_FRLumbarSWSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_1_CRC);
		fun >> (UINM_1_Counter);
		fun >> (UINM_FLLumbarSWSt);
		fun >> (UINM_SSBFailureWarning);
		fun >> (UINM_SSBSW1St);
		fun >> (UINM_SSBSW2St);
		fun >> (UINM_SSBMismatchSt);
		fun >> (UINM_SSBSW1StuckSt);
		fun >> (UINM_SSBSW2StuckSt);
		fun >> (UINM_FRLumbarSWSt);
	}
};

#endif //____BDCUNIM6_H__
