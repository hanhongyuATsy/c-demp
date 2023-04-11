#ifndef ____BDCUNIM7_H__
#define ____BDCUNIM7_H__


#include "cstdint"






struct BDCUNIM7 {
public:
	std::uint8_t UINM_HVAC_RrOffSWSt;
	std::uint8_t UINM_HVAC_RrOffSWStVD;
	std::uint8_t UINM_HVAC_RrAutoModeSWSt;
	std::uint8_t UINM_HVAC_RrAutoModeSWStVD;
	std::uint8_t UINM_HVAC_RrTempIncSWSt;
	std::uint8_t UINM_HVAC_RrTempIncSWStVD;
	std::uint8_t UINM_HVAC_RrTempDecSWSt;
	std::uint8_t UINM_HVAC_RrTempDecSWStVD;
	std::uint8_t UINM_HVAC_RrFanIncSWSt;
	std::uint8_t UINM_HVAC_RrFanIncSWStVD;
	std::uint8_t UINM_HVAC_RrFanDecSWSt;
	std::uint8_t UINM_HVAC_RrFanDecSWStVD;
	std::uint8_t UINM_HVAC_RrModeSWSt;
	std::uint8_t UINM_HVAC_RrModeSWStVD;
	std::uint8_t UINM_HVAC_RrACMaxBtnSt;
	std::uint8_t UINM_HVAC_RrACMaxBtnStVD;
	std::uint8_t UINM_HVAC_RrTempKnobSt;
	std::uint8_t UINM_HVAC_RrTempKnobRotatedDir;
	std::uint8_t UINM_HVAC_RrWindKnobSt;
	std::uint8_t UINM_HVAC_RrWindKnobRotatedDir;
	std::uint8_t UINM_RRSeatHeatSWSt;
	std::uint8_t UINM_RRSeatHeatSWStVD;
	std::uint8_t UINM_RRSeatVentilationSWSt;
	std::uint8_t UINM_RRSeatVentilationSWStVD;
	std::uint8_t UINM_RLSeatHeatSWSt;
	std::uint8_t UINM_RLSeatHeatSWStVD;
	std::uint8_t UINM_RLSeatVentilationSWSt;
	std::uint8_t UINM_RLSeatVentilationSWStVD;
/*
	BDCUNIM7() {}
	~BDCUNIM7() {}
	BDCUNIM7(const std::uint8_t _UINM_HVAC_RrOffSWSt,const std::uint8_t _UINM_HVAC_RrOffSWStVD,const std::uint8_t _UINM_HVAC_RrAutoModeSWSt,const std::uint8_t _UINM_HVAC_RrAutoModeSWStVD,const std::uint8_t _UINM_HVAC_RrTempIncSWSt,const std::uint8_t _UINM_HVAC_RrTempIncSWStVD,const std::uint8_t _UINM_HVAC_RrTempDecSWSt,const std::uint8_t _UINM_HVAC_RrTempDecSWStVD,const std::uint8_t _UINM_HVAC_RrFanIncSWSt,const std::uint8_t _UINM_HVAC_RrFanIncSWStVD,const std::uint8_t _UINM_HVAC_RrFanDecSWSt,const std::uint8_t _UINM_HVAC_RrFanDecSWStVD,const std::uint8_t _UINM_HVAC_RrModeSWSt,const std::uint8_t _UINM_HVAC_RrModeSWStVD,const std::uint8_t _UINM_HVAC_RrACMaxBtnSt,const std::uint8_t _UINM_HVAC_RrACMaxBtnStVD,const std::uint8_t _UINM_HVAC_RrTempKnobSt,const std::uint8_t _UINM_HVAC_RrTempKnobRotatedDir,const std::uint8_t _UINM_HVAC_RrWindKnobSt,const std::uint8_t _UINM_HVAC_RrWindKnobRotatedDir,const std::uint8_t _UINM_RRSeatHeatSWSt,const std::uint8_t _UINM_RRSeatHeatSWStVD,const std::uint8_t _UINM_RRSeatVentilationSWSt,const std::uint8_t _UINM_RRSeatVentilationSWStVD,const std::uint8_t _UINM_RLSeatHeatSWSt,const std::uint8_t _UINM_RLSeatHeatSWStVD,const std::uint8_t _UINM_RLSeatVentilationSWSt,const std::uint8_t _UINM_RLSeatVentilationSWStVD):UINM_HVAC_RrOffSWSt(_UINM_HVAC_RrOffSWSt),UINM_HVAC_RrOffSWStVD(_UINM_HVAC_RrOffSWStVD),UINM_HVAC_RrAutoModeSWSt(_UINM_HVAC_RrAutoModeSWSt),UINM_HVAC_RrAutoModeSWStVD(_UINM_HVAC_RrAutoModeSWStVD),UINM_HVAC_RrTempIncSWSt(_UINM_HVAC_RrTempIncSWSt),UINM_HVAC_RrTempIncSWStVD(_UINM_HVAC_RrTempIncSWStVD),UINM_HVAC_RrTempDecSWSt(_UINM_HVAC_RrTempDecSWSt),UINM_HVAC_RrTempDecSWStVD(_UINM_HVAC_RrTempDecSWStVD),UINM_HVAC_RrFanIncSWSt(_UINM_HVAC_RrFanIncSWSt),UINM_HVAC_RrFanIncSWStVD(_UINM_HVAC_RrFanIncSWStVD),UINM_HVAC_RrFanDecSWSt(_UINM_HVAC_RrFanDecSWSt),UINM_HVAC_RrFanDecSWStVD(_UINM_HVAC_RrFanDecSWStVD),UINM_HVAC_RrModeSWSt(_UINM_HVAC_RrModeSWSt),UINM_HVAC_RrModeSWStVD(_UINM_HVAC_RrModeSWStVD),UINM_HVAC_RrACMaxBtnSt(_UINM_HVAC_RrACMaxBtnSt),UINM_HVAC_RrACMaxBtnStVD(_UINM_HVAC_RrACMaxBtnStVD),UINM_HVAC_RrTempKnobSt(_UINM_HVAC_RrTempKnobSt),UINM_HVAC_RrTempKnobRotatedDir(_UINM_HVAC_RrTempKnobRotatedDir),UINM_HVAC_RrWindKnobSt(_UINM_HVAC_RrWindKnobSt),UINM_HVAC_RrWindKnobRotatedDir(_UINM_HVAC_RrWindKnobRotatedDir),UINM_RRSeatHeatSWSt(_UINM_RRSeatHeatSWSt),UINM_RRSeatHeatSWStVD(_UINM_RRSeatHeatSWStVD),UINM_RRSeatVentilationSWSt(_UINM_RRSeatVentilationSWSt),UINM_RRSeatVentilationSWStVD(_UINM_RRSeatVentilationSWStVD),UINM_RLSeatHeatSWSt(_UINM_RLSeatHeatSWSt),UINM_RLSeatHeatSWStVD(_UINM_RLSeatHeatSWStVD),UINM_RLSeatVentilationSWSt(_UINM_RLSeatVentilationSWSt),UINM_RLSeatVentilationSWStVD(_UINM_RLSeatVentilationSWStVD) {}
	BDCUNIM7(const BDCUNIM7 &_x){
		UINM_HVAC_RrOffSWSt = _x.UINM_HVAC_RrOffSWSt;
		UINM_HVAC_RrOffSWStVD = _x.UINM_HVAC_RrOffSWStVD;
		UINM_HVAC_RrAutoModeSWSt = _x.UINM_HVAC_RrAutoModeSWSt;
		UINM_HVAC_RrAutoModeSWStVD = _x.UINM_HVAC_RrAutoModeSWStVD;
		UINM_HVAC_RrTempIncSWSt = _x.UINM_HVAC_RrTempIncSWSt;
		UINM_HVAC_RrTempIncSWStVD = _x.UINM_HVAC_RrTempIncSWStVD;
		UINM_HVAC_RrTempDecSWSt = _x.UINM_HVAC_RrTempDecSWSt;
		UINM_HVAC_RrTempDecSWStVD = _x.UINM_HVAC_RrTempDecSWStVD;
		UINM_HVAC_RrFanIncSWSt = _x.UINM_HVAC_RrFanIncSWSt;
		UINM_HVAC_RrFanIncSWStVD = _x.UINM_HVAC_RrFanIncSWStVD;
		UINM_HVAC_RrFanDecSWSt = _x.UINM_HVAC_RrFanDecSWSt;
		UINM_HVAC_RrFanDecSWStVD = _x.UINM_HVAC_RrFanDecSWStVD;
		UINM_HVAC_RrModeSWSt = _x.UINM_HVAC_RrModeSWSt;
		UINM_HVAC_RrModeSWStVD = _x.UINM_HVAC_RrModeSWStVD;
		UINM_HVAC_RrACMaxBtnSt = _x.UINM_HVAC_RrACMaxBtnSt;
		UINM_HVAC_RrACMaxBtnStVD = _x.UINM_HVAC_RrACMaxBtnStVD;
		UINM_HVAC_RrTempKnobSt = _x.UINM_HVAC_RrTempKnobSt;
		UINM_HVAC_RrTempKnobRotatedDir = _x.UINM_HVAC_RrTempKnobRotatedDir;
		UINM_HVAC_RrWindKnobSt = _x.UINM_HVAC_RrWindKnobSt;
		UINM_HVAC_RrWindKnobRotatedDir = _x.UINM_HVAC_RrWindKnobRotatedDir;
		UINM_RRSeatHeatSWSt = _x.UINM_RRSeatHeatSWSt;
		UINM_RRSeatHeatSWStVD = _x.UINM_RRSeatHeatSWStVD;
		UINM_RRSeatVentilationSWSt = _x.UINM_RRSeatVentilationSWSt;
		UINM_RRSeatVentilationSWStVD = _x.UINM_RRSeatVentilationSWStVD;
		UINM_RLSeatHeatSWSt = _x.UINM_RLSeatHeatSWSt;
		UINM_RLSeatHeatSWStVD = _x.UINM_RLSeatHeatSWStVD;
		UINM_RLSeatVentilationSWSt = _x.UINM_RLSeatVentilationSWSt;
		UINM_RLSeatVentilationSWStVD = _x.UINM_RLSeatVentilationSWStVD;
	}
	BDCUNIM7(BDCUNIM7 &&_x){
		UINM_HVAC_RrOffSWSt = std::move(_x.UINM_HVAC_RrOffSWSt);
		UINM_HVAC_RrOffSWStVD = std::move(_x.UINM_HVAC_RrOffSWStVD);
		UINM_HVAC_RrAutoModeSWSt = std::move(_x.UINM_HVAC_RrAutoModeSWSt);
		UINM_HVAC_RrAutoModeSWStVD = std::move(_x.UINM_HVAC_RrAutoModeSWStVD);
		UINM_HVAC_RrTempIncSWSt = std::move(_x.UINM_HVAC_RrTempIncSWSt);
		UINM_HVAC_RrTempIncSWStVD = std::move(_x.UINM_HVAC_RrTempIncSWStVD);
		UINM_HVAC_RrTempDecSWSt = std::move(_x.UINM_HVAC_RrTempDecSWSt);
		UINM_HVAC_RrTempDecSWStVD = std::move(_x.UINM_HVAC_RrTempDecSWStVD);
		UINM_HVAC_RrFanIncSWSt = std::move(_x.UINM_HVAC_RrFanIncSWSt);
		UINM_HVAC_RrFanIncSWStVD = std::move(_x.UINM_HVAC_RrFanIncSWStVD);
		UINM_HVAC_RrFanDecSWSt = std::move(_x.UINM_HVAC_RrFanDecSWSt);
		UINM_HVAC_RrFanDecSWStVD = std::move(_x.UINM_HVAC_RrFanDecSWStVD);
		UINM_HVAC_RrModeSWSt = std::move(_x.UINM_HVAC_RrModeSWSt);
		UINM_HVAC_RrModeSWStVD = std::move(_x.UINM_HVAC_RrModeSWStVD);
		UINM_HVAC_RrACMaxBtnSt = std::move(_x.UINM_HVAC_RrACMaxBtnSt);
		UINM_HVAC_RrACMaxBtnStVD = std::move(_x.UINM_HVAC_RrACMaxBtnStVD);
		UINM_HVAC_RrTempKnobSt = std::move(_x.UINM_HVAC_RrTempKnobSt);
		UINM_HVAC_RrTempKnobRotatedDir = std::move(_x.UINM_HVAC_RrTempKnobRotatedDir);
		UINM_HVAC_RrWindKnobSt = std::move(_x.UINM_HVAC_RrWindKnobSt);
		UINM_HVAC_RrWindKnobRotatedDir = std::move(_x.UINM_HVAC_RrWindKnobRotatedDir);
		UINM_RRSeatHeatSWSt = std::move(_x.UINM_RRSeatHeatSWSt);
		UINM_RRSeatHeatSWStVD = std::move(_x.UINM_RRSeatHeatSWStVD);
		UINM_RRSeatVentilationSWSt = std::move(_x.UINM_RRSeatVentilationSWSt);
		UINM_RRSeatVentilationSWStVD = std::move(_x.UINM_RRSeatVentilationSWStVD);
		UINM_RLSeatHeatSWSt = std::move(_x.UINM_RLSeatHeatSWSt);
		UINM_RLSeatHeatSWStVD = std::move(_x.UINM_RLSeatHeatSWStVD);
		UINM_RLSeatVentilationSWSt = std::move(_x.UINM_RLSeatVentilationSWSt);
		UINM_RLSeatVentilationSWStVD = std::move(_x.UINM_RLSeatVentilationSWStVD);
	}
	BDCUNIM7& operator=(const BDCUNIM7 &_x){
		UINM_HVAC_RrOffSWSt = _x.UINM_HVAC_RrOffSWSt;
		UINM_HVAC_RrOffSWStVD = _x.UINM_HVAC_RrOffSWStVD;
		UINM_HVAC_RrAutoModeSWSt = _x.UINM_HVAC_RrAutoModeSWSt;
		UINM_HVAC_RrAutoModeSWStVD = _x.UINM_HVAC_RrAutoModeSWStVD;
		UINM_HVAC_RrTempIncSWSt = _x.UINM_HVAC_RrTempIncSWSt;
		UINM_HVAC_RrTempIncSWStVD = _x.UINM_HVAC_RrTempIncSWStVD;
		UINM_HVAC_RrTempDecSWSt = _x.UINM_HVAC_RrTempDecSWSt;
		UINM_HVAC_RrTempDecSWStVD = _x.UINM_HVAC_RrTempDecSWStVD;
		UINM_HVAC_RrFanIncSWSt = _x.UINM_HVAC_RrFanIncSWSt;
		UINM_HVAC_RrFanIncSWStVD = _x.UINM_HVAC_RrFanIncSWStVD;
		UINM_HVAC_RrFanDecSWSt = _x.UINM_HVAC_RrFanDecSWSt;
		UINM_HVAC_RrFanDecSWStVD = _x.UINM_HVAC_RrFanDecSWStVD;
		UINM_HVAC_RrModeSWSt = _x.UINM_HVAC_RrModeSWSt;
		UINM_HVAC_RrModeSWStVD = _x.UINM_HVAC_RrModeSWStVD;
		UINM_HVAC_RrACMaxBtnSt = _x.UINM_HVAC_RrACMaxBtnSt;
		UINM_HVAC_RrACMaxBtnStVD = _x.UINM_HVAC_RrACMaxBtnStVD;
		UINM_HVAC_RrTempKnobSt = _x.UINM_HVAC_RrTempKnobSt;
		UINM_HVAC_RrTempKnobRotatedDir = _x.UINM_HVAC_RrTempKnobRotatedDir;
		UINM_HVAC_RrWindKnobSt = _x.UINM_HVAC_RrWindKnobSt;
		UINM_HVAC_RrWindKnobRotatedDir = _x.UINM_HVAC_RrWindKnobRotatedDir;
		UINM_RRSeatHeatSWSt = _x.UINM_RRSeatHeatSWSt;
		UINM_RRSeatHeatSWStVD = _x.UINM_RRSeatHeatSWStVD;
		UINM_RRSeatVentilationSWSt = _x.UINM_RRSeatVentilationSWSt;
		UINM_RRSeatVentilationSWStVD = _x.UINM_RRSeatVentilationSWStVD;
		UINM_RLSeatHeatSWSt = _x.UINM_RLSeatHeatSWSt;
		UINM_RLSeatHeatSWStVD = _x.UINM_RLSeatHeatSWStVD;
		UINM_RLSeatVentilationSWSt = _x.UINM_RLSeatVentilationSWSt;
		UINM_RLSeatVentilationSWStVD = _x.UINM_RLSeatVentilationSWStVD;
		return *this;
	}
	BDCUNIM7& operator=(BDCUNIM7 &&_x){
		UINM_HVAC_RrOffSWSt = std::move(_x.UINM_HVAC_RrOffSWSt);
		UINM_HVAC_RrOffSWStVD = std::move(_x.UINM_HVAC_RrOffSWStVD);
		UINM_HVAC_RrAutoModeSWSt = std::move(_x.UINM_HVAC_RrAutoModeSWSt);
		UINM_HVAC_RrAutoModeSWStVD = std::move(_x.UINM_HVAC_RrAutoModeSWStVD);
		UINM_HVAC_RrTempIncSWSt = std::move(_x.UINM_HVAC_RrTempIncSWSt);
		UINM_HVAC_RrTempIncSWStVD = std::move(_x.UINM_HVAC_RrTempIncSWStVD);
		UINM_HVAC_RrTempDecSWSt = std::move(_x.UINM_HVAC_RrTempDecSWSt);
		UINM_HVAC_RrTempDecSWStVD = std::move(_x.UINM_HVAC_RrTempDecSWStVD);
		UINM_HVAC_RrFanIncSWSt = std::move(_x.UINM_HVAC_RrFanIncSWSt);
		UINM_HVAC_RrFanIncSWStVD = std::move(_x.UINM_HVAC_RrFanIncSWStVD);
		UINM_HVAC_RrFanDecSWSt = std::move(_x.UINM_HVAC_RrFanDecSWSt);
		UINM_HVAC_RrFanDecSWStVD = std::move(_x.UINM_HVAC_RrFanDecSWStVD);
		UINM_HVAC_RrModeSWSt = std::move(_x.UINM_HVAC_RrModeSWSt);
		UINM_HVAC_RrModeSWStVD = std::move(_x.UINM_HVAC_RrModeSWStVD);
		UINM_HVAC_RrACMaxBtnSt = std::move(_x.UINM_HVAC_RrACMaxBtnSt);
		UINM_HVAC_RrACMaxBtnStVD = std::move(_x.UINM_HVAC_RrACMaxBtnStVD);
		UINM_HVAC_RrTempKnobSt = std::move(_x.UINM_HVAC_RrTempKnobSt);
		UINM_HVAC_RrTempKnobRotatedDir = std::move(_x.UINM_HVAC_RrTempKnobRotatedDir);
		UINM_HVAC_RrWindKnobSt = std::move(_x.UINM_HVAC_RrWindKnobSt);
		UINM_HVAC_RrWindKnobRotatedDir = std::move(_x.UINM_HVAC_RrWindKnobRotatedDir);
		UINM_RRSeatHeatSWSt = std::move(_x.UINM_RRSeatHeatSWSt);
		UINM_RRSeatHeatSWStVD = std::move(_x.UINM_RRSeatHeatSWStVD);
		UINM_RRSeatVentilationSWSt = std::move(_x.UINM_RRSeatVentilationSWSt);
		UINM_RRSeatVentilationSWStVD = std::move(_x.UINM_RRSeatVentilationSWStVD);
		UINM_RLSeatHeatSWSt = std::move(_x.UINM_RLSeatHeatSWSt);
		UINM_RLSeatHeatSWStVD = std::move(_x.UINM_RLSeatHeatSWStVD);
		UINM_RLSeatVentilationSWSt = std::move(_x.UINM_RLSeatVentilationSWSt);
		UINM_RLSeatVentilationSWStVD = std::move(_x.UINM_RLSeatVentilationSWStVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_HVAC_RrOffSWSt);
		fun(UINM_HVAC_RrOffSWStVD);
		fun(UINM_HVAC_RrAutoModeSWSt);
		fun(UINM_HVAC_RrAutoModeSWStVD);
		fun(UINM_HVAC_RrTempIncSWSt);
		fun(UINM_HVAC_RrTempIncSWStVD);
		fun(UINM_HVAC_RrTempDecSWSt);
		fun(UINM_HVAC_RrTempDecSWStVD);
		fun(UINM_HVAC_RrFanIncSWSt);
		fun(UINM_HVAC_RrFanIncSWStVD);
		fun(UINM_HVAC_RrFanDecSWSt);
		fun(UINM_HVAC_RrFanDecSWStVD);
		fun(UINM_HVAC_RrModeSWSt);
		fun(UINM_HVAC_RrModeSWStVD);
		fun(UINM_HVAC_RrACMaxBtnSt);
		fun(UINM_HVAC_RrACMaxBtnStVD);
		fun(UINM_HVAC_RrTempKnobSt);
		fun(UINM_HVAC_RrTempKnobRotatedDir);
		fun(UINM_HVAC_RrWindKnobSt);
		fun(UINM_HVAC_RrWindKnobRotatedDir);
		fun(UINM_RRSeatHeatSWSt);
		fun(UINM_RRSeatHeatSWStVD);
		fun(UINM_RRSeatVentilationSWSt);
		fun(UINM_RRSeatVentilationSWStVD);
		fun(UINM_RLSeatHeatSWSt);
		fun(UINM_RLSeatHeatSWStVD);
		fun(UINM_RLSeatVentilationSWSt);
		fun(UINM_RLSeatVentilationSWStVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_HVAC_RrOffSWSt);
		fun(UINM_HVAC_RrOffSWStVD);
		fun(UINM_HVAC_RrAutoModeSWSt);
		fun(UINM_HVAC_RrAutoModeSWStVD);
		fun(UINM_HVAC_RrTempIncSWSt);
		fun(UINM_HVAC_RrTempIncSWStVD);
		fun(UINM_HVAC_RrTempDecSWSt);
		fun(UINM_HVAC_RrTempDecSWStVD);
		fun(UINM_HVAC_RrFanIncSWSt);
		fun(UINM_HVAC_RrFanIncSWStVD);
		fun(UINM_HVAC_RrFanDecSWSt);
		fun(UINM_HVAC_RrFanDecSWStVD);
		fun(UINM_HVAC_RrModeSWSt);
		fun(UINM_HVAC_RrModeSWStVD);
		fun(UINM_HVAC_RrACMaxBtnSt);
		fun(UINM_HVAC_RrACMaxBtnStVD);
		fun(UINM_HVAC_RrTempKnobSt);
		fun(UINM_HVAC_RrTempKnobRotatedDir);
		fun(UINM_HVAC_RrWindKnobSt);
		fun(UINM_HVAC_RrWindKnobRotatedDir);
		fun(UINM_RRSeatHeatSWSt);
		fun(UINM_RRSeatHeatSWStVD);
		fun(UINM_RRSeatVentilationSWSt);
		fun(UINM_RRSeatVentilationSWStVD);
		fun(UINM_RLSeatHeatSWSt);
		fun(UINM_RLSeatHeatSWStVD);
		fun(UINM_RLSeatVentilationSWSt);
		fun(UINM_RLSeatVentilationSWStVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_HVAC_RrOffSWSt);
		fun << (UINM_HVAC_RrOffSWStVD);
		fun << (UINM_HVAC_RrAutoModeSWSt);
		fun << (UINM_HVAC_RrAutoModeSWStVD);
		fun << (UINM_HVAC_RrTempIncSWSt);
		fun << (UINM_HVAC_RrTempIncSWStVD);
		fun << (UINM_HVAC_RrTempDecSWSt);
		fun << (UINM_HVAC_RrTempDecSWStVD);
		fun << (UINM_HVAC_RrFanIncSWSt);
		fun << (UINM_HVAC_RrFanIncSWStVD);
		fun << (UINM_HVAC_RrFanDecSWSt);
		fun << (UINM_HVAC_RrFanDecSWStVD);
		fun << (UINM_HVAC_RrModeSWSt);
		fun << (UINM_HVAC_RrModeSWStVD);
		fun << (UINM_HVAC_RrACMaxBtnSt);
		fun << (UINM_HVAC_RrACMaxBtnStVD);
		fun << (UINM_HVAC_RrTempKnobSt);
		fun << (UINM_HVAC_RrTempKnobRotatedDir);
		fun << (UINM_HVAC_RrWindKnobSt);
		fun << (UINM_HVAC_RrWindKnobRotatedDir);
		fun << (UINM_RRSeatHeatSWSt);
		fun << (UINM_RRSeatHeatSWStVD);
		fun << (UINM_RRSeatVentilationSWSt);
		fun << (UINM_RRSeatVentilationSWStVD);
		fun << (UINM_RLSeatHeatSWSt);
		fun << (UINM_RLSeatHeatSWStVD);
		fun << (UINM_RLSeatVentilationSWSt);
		fun << (UINM_RLSeatVentilationSWStVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_HVAC_RrOffSWSt);
		fun >> (UINM_HVAC_RrOffSWStVD);
		fun >> (UINM_HVAC_RrAutoModeSWSt);
		fun >> (UINM_HVAC_RrAutoModeSWStVD);
		fun >> (UINM_HVAC_RrTempIncSWSt);
		fun >> (UINM_HVAC_RrTempIncSWStVD);
		fun >> (UINM_HVAC_RrTempDecSWSt);
		fun >> (UINM_HVAC_RrTempDecSWStVD);
		fun >> (UINM_HVAC_RrFanIncSWSt);
		fun >> (UINM_HVAC_RrFanIncSWStVD);
		fun >> (UINM_HVAC_RrFanDecSWSt);
		fun >> (UINM_HVAC_RrFanDecSWStVD);
		fun >> (UINM_HVAC_RrModeSWSt);
		fun >> (UINM_HVAC_RrModeSWStVD);
		fun >> (UINM_HVAC_RrACMaxBtnSt);
		fun >> (UINM_HVAC_RrACMaxBtnStVD);
		fun >> (UINM_HVAC_RrTempKnobSt);
		fun >> (UINM_HVAC_RrTempKnobRotatedDir);
		fun >> (UINM_HVAC_RrWindKnobSt);
		fun >> (UINM_HVAC_RrWindKnobRotatedDir);
		fun >> (UINM_RRSeatHeatSWSt);
		fun >> (UINM_RRSeatHeatSWStVD);
		fun >> (UINM_RRSeatVentilationSWSt);
		fun >> (UINM_RRSeatVentilationSWStVD);
		fun >> (UINM_RLSeatHeatSWSt);
		fun >> (UINM_RLSeatHeatSWStVD);
		fun >> (UINM_RLSeatVentilationSWSt);
		fun >> (UINM_RLSeatVentilationSWStVD);
	}
};

#endif //____BDCUNIM7_H__
