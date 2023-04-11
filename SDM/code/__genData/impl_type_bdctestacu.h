#ifndef ____BDCTESTACU_H__
#define ____BDCTESTACU_H__


#include "cstdint"






struct BDCTestACU {
public:
	std::uint8_t ICM_FuelLevelLowSt;
	std::uint8_t ICM_FuelLevelEmpty;
	std::uint8_t ICM_FuelSensor1ShortToGND;
	std::uint8_t ICM_FuelSensor2ShortToBatt;
	std::uint8_t ICM_FuelSensor2ShortToGND;
	std::uint8_t ICM_FuelSensorOutofrange;
	std::uint8_t ICM_FuelSensor2Outofrange;
	std::uint8_t ICM_FuelLevel;
	std::uint8_t ICM_FuelLevelVD;
	std::uint8_t ICM_FuelSensor1ShortToBatt;
	std::uint8_t ACU_HVACFR_FanIncBtnSt;
	std::uint8_t ACU_HVAC_RrFanIncBtnSt;
	std::uint8_t ACU_HVACFR_WindSpeedSetting;
	std::uint8_t ACU_HVAC_RrWindSpeedSetting;
	std::uint8_t ACU_HVACFR_PsnTempSetting;
	std::uint8_t ACU_HVACFR_DrTempSetting;
	std::uint8_t ACU_HVACFR_RrTempSetting;
	std::uint8_t ACU_HVACF_FLTempIncBtnSt;
	std::uint8_t ACU_HVACF_FRTempIncBtnSt;
	std::uint8_t ACU_HVACF_CirBtnSt;
	std::uint8_t ACU_HVACF_DualSyncBtnSt;
	std::uint8_t ACU_HVAC_RearOnOffBtnSt;
	std::uint8_t ACU_HVACF_VR_HVACONOFF;
	std::uint8_t ACU_HVACF_AQSCfg;
	std::uint8_t ACU_HVACF_IonBtnSt;
	std::uint8_t ACU_HVACF_EvapratorSelfCleanCfg;
	std::uint8_t ACU_HVAC_FraganceConcentrationSt;
	std::uint8_t ACU_HVACF_FDefrostBtnSt;
	std::uint8_t ACU_HVACF_ACBtnSt;
	std::uint8_t ACU_HVACF_TimedVentilationCfg;
	std::uint8_t ACU_HVACF_ECOBtnSt;
/*
	BDCTestACU() {}
	~BDCTestACU() {}
	BDCTestACU(const std::uint8_t _ICM_FuelLevelLowSt,const std::uint8_t _ICM_FuelLevelEmpty,const std::uint8_t _ICM_FuelSensor1ShortToGND,const std::uint8_t _ICM_FuelSensor2ShortToBatt,const std::uint8_t _ICM_FuelSensor2ShortToGND,const std::uint8_t _ICM_FuelSensorOutofrange,const std::uint8_t _ICM_FuelSensor2Outofrange,const std::uint8_t _ICM_FuelLevel,const std::uint8_t _ICM_FuelLevelVD,const std::uint8_t _ICM_FuelSensor1ShortToBatt,const std::uint8_t _ACU_HVACFR_FanIncBtnSt,const std::uint8_t _ACU_HVAC_RrFanIncBtnSt,const std::uint8_t _ACU_HVACFR_WindSpeedSetting,const std::uint8_t _ACU_HVAC_RrWindSpeedSetting,const std::uint8_t _ACU_HVACFR_PsnTempSetting,const std::uint8_t _ACU_HVACFR_DrTempSetting,const std::uint8_t _ACU_HVACFR_RrTempSetting,const std::uint8_t _ACU_HVACF_FLTempIncBtnSt,const std::uint8_t _ACU_HVACF_FRTempIncBtnSt,const std::uint8_t _ACU_HVACF_CirBtnSt,const std::uint8_t _ACU_HVACF_DualSyncBtnSt,const std::uint8_t _ACU_HVAC_RearOnOffBtnSt,const std::uint8_t _ACU_HVACF_VR_HVACONOFF,const std::uint8_t _ACU_HVACF_AQSCfg,const std::uint8_t _ACU_HVACF_IonBtnSt,const std::uint8_t _ACU_HVACF_EvapratorSelfCleanCfg,const std::uint8_t _ACU_HVAC_FraganceConcentrationSt,const std::uint8_t _ACU_HVACF_FDefrostBtnSt,const std::uint8_t _ACU_HVACF_ACBtnSt,const std::uint8_t _ACU_HVACF_TimedVentilationCfg,const std::uint8_t _ACU_HVACF_ECOBtnSt):ICM_FuelLevelLowSt(_ICM_FuelLevelLowSt),ICM_FuelLevelEmpty(_ICM_FuelLevelEmpty),ICM_FuelSensor1ShortToGND(_ICM_FuelSensor1ShortToGND),ICM_FuelSensor2ShortToBatt(_ICM_FuelSensor2ShortToBatt),ICM_FuelSensor2ShortToGND(_ICM_FuelSensor2ShortToGND),ICM_FuelSensorOutofrange(_ICM_FuelSensorOutofrange),ICM_FuelSensor2Outofrange(_ICM_FuelSensor2Outofrange),ICM_FuelLevel(_ICM_FuelLevel),ICM_FuelLevelVD(_ICM_FuelLevelVD),ICM_FuelSensor1ShortToBatt(_ICM_FuelSensor1ShortToBatt),ACU_HVACFR_FanIncBtnSt(_ACU_HVACFR_FanIncBtnSt),ACU_HVAC_RrFanIncBtnSt(_ACU_HVAC_RrFanIncBtnSt),ACU_HVACFR_WindSpeedSetting(_ACU_HVACFR_WindSpeedSetting),ACU_HVAC_RrWindSpeedSetting(_ACU_HVAC_RrWindSpeedSetting),ACU_HVACFR_PsnTempSetting(_ACU_HVACFR_PsnTempSetting),ACU_HVACFR_DrTempSetting(_ACU_HVACFR_DrTempSetting),ACU_HVACFR_RrTempSetting(_ACU_HVACFR_RrTempSetting),ACU_HVACF_FLTempIncBtnSt(_ACU_HVACF_FLTempIncBtnSt),ACU_HVACF_FRTempIncBtnSt(_ACU_HVACF_FRTempIncBtnSt),ACU_HVACF_CirBtnSt(_ACU_HVACF_CirBtnSt),ACU_HVACF_DualSyncBtnSt(_ACU_HVACF_DualSyncBtnSt),ACU_HVAC_RearOnOffBtnSt(_ACU_HVAC_RearOnOffBtnSt),ACU_HVACF_VR_HVACONOFF(_ACU_HVACF_VR_HVACONOFF),ACU_HVACF_AQSCfg(_ACU_HVACF_AQSCfg),ACU_HVACF_IonBtnSt(_ACU_HVACF_IonBtnSt),ACU_HVACF_EvapratorSelfCleanCfg(_ACU_HVACF_EvapratorSelfCleanCfg),ACU_HVAC_FraganceConcentrationSt(_ACU_HVAC_FraganceConcentrationSt),ACU_HVACF_FDefrostBtnSt(_ACU_HVACF_FDefrostBtnSt),ACU_HVACF_ACBtnSt(_ACU_HVACF_ACBtnSt),ACU_HVACF_TimedVentilationCfg(_ACU_HVACF_TimedVentilationCfg),ACU_HVACF_ECOBtnSt(_ACU_HVACF_ECOBtnSt) {}
	BDCTestACU(const BDCTestACU &_x){
		ICM_FuelLevelLowSt = _x.ICM_FuelLevelLowSt;
		ICM_FuelLevelEmpty = _x.ICM_FuelLevelEmpty;
		ICM_FuelSensor1ShortToGND = _x.ICM_FuelSensor1ShortToGND;
		ICM_FuelSensor2ShortToBatt = _x.ICM_FuelSensor2ShortToBatt;
		ICM_FuelSensor2ShortToGND = _x.ICM_FuelSensor2ShortToGND;
		ICM_FuelSensorOutofrange = _x.ICM_FuelSensorOutofrange;
		ICM_FuelSensor2Outofrange = _x.ICM_FuelSensor2Outofrange;
		ICM_FuelLevel = _x.ICM_FuelLevel;
		ICM_FuelLevelVD = _x.ICM_FuelLevelVD;
		ICM_FuelSensor1ShortToBatt = _x.ICM_FuelSensor1ShortToBatt;
		ACU_HVACFR_FanIncBtnSt = _x.ACU_HVACFR_FanIncBtnSt;
		ACU_HVAC_RrFanIncBtnSt = _x.ACU_HVAC_RrFanIncBtnSt;
		ACU_HVACFR_WindSpeedSetting = _x.ACU_HVACFR_WindSpeedSetting;
		ACU_HVAC_RrWindSpeedSetting = _x.ACU_HVAC_RrWindSpeedSetting;
		ACU_HVACFR_PsnTempSetting = _x.ACU_HVACFR_PsnTempSetting;
		ACU_HVACFR_DrTempSetting = _x.ACU_HVACFR_DrTempSetting;
		ACU_HVACFR_RrTempSetting = _x.ACU_HVACFR_RrTempSetting;
		ACU_HVACF_FLTempIncBtnSt = _x.ACU_HVACF_FLTempIncBtnSt;
		ACU_HVACF_FRTempIncBtnSt = _x.ACU_HVACF_FRTempIncBtnSt;
		ACU_HVACF_CirBtnSt = _x.ACU_HVACF_CirBtnSt;
		ACU_HVACF_DualSyncBtnSt = _x.ACU_HVACF_DualSyncBtnSt;
		ACU_HVAC_RearOnOffBtnSt = _x.ACU_HVAC_RearOnOffBtnSt;
		ACU_HVACF_VR_HVACONOFF = _x.ACU_HVACF_VR_HVACONOFF;
		ACU_HVACF_AQSCfg = _x.ACU_HVACF_AQSCfg;
		ACU_HVACF_IonBtnSt = _x.ACU_HVACF_IonBtnSt;
		ACU_HVACF_EvapratorSelfCleanCfg = _x.ACU_HVACF_EvapratorSelfCleanCfg;
		ACU_HVAC_FraganceConcentrationSt = _x.ACU_HVAC_FraganceConcentrationSt;
		ACU_HVACF_FDefrostBtnSt = _x.ACU_HVACF_FDefrostBtnSt;
		ACU_HVACF_ACBtnSt = _x.ACU_HVACF_ACBtnSt;
		ACU_HVACF_TimedVentilationCfg = _x.ACU_HVACF_TimedVentilationCfg;
		ACU_HVACF_ECOBtnSt = _x.ACU_HVACF_ECOBtnSt;
	}
	BDCTestACU(BDCTestACU &&_x){
		ICM_FuelLevelLowSt = std::move(_x.ICM_FuelLevelLowSt);
		ICM_FuelLevelEmpty = std::move(_x.ICM_FuelLevelEmpty);
		ICM_FuelSensor1ShortToGND = std::move(_x.ICM_FuelSensor1ShortToGND);
		ICM_FuelSensor2ShortToBatt = std::move(_x.ICM_FuelSensor2ShortToBatt);
		ICM_FuelSensor2ShortToGND = std::move(_x.ICM_FuelSensor2ShortToGND);
		ICM_FuelSensorOutofrange = std::move(_x.ICM_FuelSensorOutofrange);
		ICM_FuelSensor2Outofrange = std::move(_x.ICM_FuelSensor2Outofrange);
		ICM_FuelLevel = std::move(_x.ICM_FuelLevel);
		ICM_FuelLevelVD = std::move(_x.ICM_FuelLevelVD);
		ICM_FuelSensor1ShortToBatt = std::move(_x.ICM_FuelSensor1ShortToBatt);
		ACU_HVACFR_FanIncBtnSt = std::move(_x.ACU_HVACFR_FanIncBtnSt);
		ACU_HVAC_RrFanIncBtnSt = std::move(_x.ACU_HVAC_RrFanIncBtnSt);
		ACU_HVACFR_WindSpeedSetting = std::move(_x.ACU_HVACFR_WindSpeedSetting);
		ACU_HVAC_RrWindSpeedSetting = std::move(_x.ACU_HVAC_RrWindSpeedSetting);
		ACU_HVACFR_PsnTempSetting = std::move(_x.ACU_HVACFR_PsnTempSetting);
		ACU_HVACFR_DrTempSetting = std::move(_x.ACU_HVACFR_DrTempSetting);
		ACU_HVACFR_RrTempSetting = std::move(_x.ACU_HVACFR_RrTempSetting);
		ACU_HVACF_FLTempIncBtnSt = std::move(_x.ACU_HVACF_FLTempIncBtnSt);
		ACU_HVACF_FRTempIncBtnSt = std::move(_x.ACU_HVACF_FRTempIncBtnSt);
		ACU_HVACF_CirBtnSt = std::move(_x.ACU_HVACF_CirBtnSt);
		ACU_HVACF_DualSyncBtnSt = std::move(_x.ACU_HVACF_DualSyncBtnSt);
		ACU_HVAC_RearOnOffBtnSt = std::move(_x.ACU_HVAC_RearOnOffBtnSt);
		ACU_HVACF_VR_HVACONOFF = std::move(_x.ACU_HVACF_VR_HVACONOFF);
		ACU_HVACF_AQSCfg = std::move(_x.ACU_HVACF_AQSCfg);
		ACU_HVACF_IonBtnSt = std::move(_x.ACU_HVACF_IonBtnSt);
		ACU_HVACF_EvapratorSelfCleanCfg = std::move(_x.ACU_HVACF_EvapratorSelfCleanCfg);
		ACU_HVAC_FraganceConcentrationSt = std::move(_x.ACU_HVAC_FraganceConcentrationSt);
		ACU_HVACF_FDefrostBtnSt = std::move(_x.ACU_HVACF_FDefrostBtnSt);
		ACU_HVACF_ACBtnSt = std::move(_x.ACU_HVACF_ACBtnSt);
		ACU_HVACF_TimedVentilationCfg = std::move(_x.ACU_HVACF_TimedVentilationCfg);
		ACU_HVACF_ECOBtnSt = std::move(_x.ACU_HVACF_ECOBtnSt);
	}
	BDCTestACU& operator=(const BDCTestACU &_x){
		ICM_FuelLevelLowSt = _x.ICM_FuelLevelLowSt;
		ICM_FuelLevelEmpty = _x.ICM_FuelLevelEmpty;
		ICM_FuelSensor1ShortToGND = _x.ICM_FuelSensor1ShortToGND;
		ICM_FuelSensor2ShortToBatt = _x.ICM_FuelSensor2ShortToBatt;
		ICM_FuelSensor2ShortToGND = _x.ICM_FuelSensor2ShortToGND;
		ICM_FuelSensorOutofrange = _x.ICM_FuelSensorOutofrange;
		ICM_FuelSensor2Outofrange = _x.ICM_FuelSensor2Outofrange;
		ICM_FuelLevel = _x.ICM_FuelLevel;
		ICM_FuelLevelVD = _x.ICM_FuelLevelVD;
		ICM_FuelSensor1ShortToBatt = _x.ICM_FuelSensor1ShortToBatt;
		ACU_HVACFR_FanIncBtnSt = _x.ACU_HVACFR_FanIncBtnSt;
		ACU_HVAC_RrFanIncBtnSt = _x.ACU_HVAC_RrFanIncBtnSt;
		ACU_HVACFR_WindSpeedSetting = _x.ACU_HVACFR_WindSpeedSetting;
		ACU_HVAC_RrWindSpeedSetting = _x.ACU_HVAC_RrWindSpeedSetting;
		ACU_HVACFR_PsnTempSetting = _x.ACU_HVACFR_PsnTempSetting;
		ACU_HVACFR_DrTempSetting = _x.ACU_HVACFR_DrTempSetting;
		ACU_HVACFR_RrTempSetting = _x.ACU_HVACFR_RrTempSetting;
		ACU_HVACF_FLTempIncBtnSt = _x.ACU_HVACF_FLTempIncBtnSt;
		ACU_HVACF_FRTempIncBtnSt = _x.ACU_HVACF_FRTempIncBtnSt;
		ACU_HVACF_CirBtnSt = _x.ACU_HVACF_CirBtnSt;
		ACU_HVACF_DualSyncBtnSt = _x.ACU_HVACF_DualSyncBtnSt;
		ACU_HVAC_RearOnOffBtnSt = _x.ACU_HVAC_RearOnOffBtnSt;
		ACU_HVACF_VR_HVACONOFF = _x.ACU_HVACF_VR_HVACONOFF;
		ACU_HVACF_AQSCfg = _x.ACU_HVACF_AQSCfg;
		ACU_HVACF_IonBtnSt = _x.ACU_HVACF_IonBtnSt;
		ACU_HVACF_EvapratorSelfCleanCfg = _x.ACU_HVACF_EvapratorSelfCleanCfg;
		ACU_HVAC_FraganceConcentrationSt = _x.ACU_HVAC_FraganceConcentrationSt;
		ACU_HVACF_FDefrostBtnSt = _x.ACU_HVACF_FDefrostBtnSt;
		ACU_HVACF_ACBtnSt = _x.ACU_HVACF_ACBtnSt;
		ACU_HVACF_TimedVentilationCfg = _x.ACU_HVACF_TimedVentilationCfg;
		ACU_HVACF_ECOBtnSt = _x.ACU_HVACF_ECOBtnSt;
		return *this;
	}
	BDCTestACU& operator=(BDCTestACU &&_x){
		ICM_FuelLevelLowSt = std::move(_x.ICM_FuelLevelLowSt);
		ICM_FuelLevelEmpty = std::move(_x.ICM_FuelLevelEmpty);
		ICM_FuelSensor1ShortToGND = std::move(_x.ICM_FuelSensor1ShortToGND);
		ICM_FuelSensor2ShortToBatt = std::move(_x.ICM_FuelSensor2ShortToBatt);
		ICM_FuelSensor2ShortToGND = std::move(_x.ICM_FuelSensor2ShortToGND);
		ICM_FuelSensorOutofrange = std::move(_x.ICM_FuelSensorOutofrange);
		ICM_FuelSensor2Outofrange = std::move(_x.ICM_FuelSensor2Outofrange);
		ICM_FuelLevel = std::move(_x.ICM_FuelLevel);
		ICM_FuelLevelVD = std::move(_x.ICM_FuelLevelVD);
		ICM_FuelSensor1ShortToBatt = std::move(_x.ICM_FuelSensor1ShortToBatt);
		ACU_HVACFR_FanIncBtnSt = std::move(_x.ACU_HVACFR_FanIncBtnSt);
		ACU_HVAC_RrFanIncBtnSt = std::move(_x.ACU_HVAC_RrFanIncBtnSt);
		ACU_HVACFR_WindSpeedSetting = std::move(_x.ACU_HVACFR_WindSpeedSetting);
		ACU_HVAC_RrWindSpeedSetting = std::move(_x.ACU_HVAC_RrWindSpeedSetting);
		ACU_HVACFR_PsnTempSetting = std::move(_x.ACU_HVACFR_PsnTempSetting);
		ACU_HVACFR_DrTempSetting = std::move(_x.ACU_HVACFR_DrTempSetting);
		ACU_HVACFR_RrTempSetting = std::move(_x.ACU_HVACFR_RrTempSetting);
		ACU_HVACF_FLTempIncBtnSt = std::move(_x.ACU_HVACF_FLTempIncBtnSt);
		ACU_HVACF_FRTempIncBtnSt = std::move(_x.ACU_HVACF_FRTempIncBtnSt);
		ACU_HVACF_CirBtnSt = std::move(_x.ACU_HVACF_CirBtnSt);
		ACU_HVACF_DualSyncBtnSt = std::move(_x.ACU_HVACF_DualSyncBtnSt);
		ACU_HVAC_RearOnOffBtnSt = std::move(_x.ACU_HVAC_RearOnOffBtnSt);
		ACU_HVACF_VR_HVACONOFF = std::move(_x.ACU_HVACF_VR_HVACONOFF);
		ACU_HVACF_AQSCfg = std::move(_x.ACU_HVACF_AQSCfg);
		ACU_HVACF_IonBtnSt = std::move(_x.ACU_HVACF_IonBtnSt);
		ACU_HVACF_EvapratorSelfCleanCfg = std::move(_x.ACU_HVACF_EvapratorSelfCleanCfg);
		ACU_HVAC_FraganceConcentrationSt = std::move(_x.ACU_HVAC_FraganceConcentrationSt);
		ACU_HVACF_FDefrostBtnSt = std::move(_x.ACU_HVACF_FDefrostBtnSt);
		ACU_HVACF_ACBtnSt = std::move(_x.ACU_HVACF_ACBtnSt);
		ACU_HVACF_TimedVentilationCfg = std::move(_x.ACU_HVACF_TimedVentilationCfg);
		ACU_HVACF_ECOBtnSt = std::move(_x.ACU_HVACF_ECOBtnSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ICM_FuelLevelLowSt);
		fun(ICM_FuelLevelEmpty);
		fun(ICM_FuelSensor1ShortToGND);
		fun(ICM_FuelSensor2ShortToBatt);
		fun(ICM_FuelSensor2ShortToGND);
		fun(ICM_FuelSensorOutofrange);
		fun(ICM_FuelSensor2Outofrange);
		fun(ICM_FuelLevel);
		fun(ICM_FuelLevelVD);
		fun(ICM_FuelSensor1ShortToBatt);
		fun(ACU_HVACFR_FanIncBtnSt);
		fun(ACU_HVAC_RrFanIncBtnSt);
		fun(ACU_HVACFR_WindSpeedSetting);
		fun(ACU_HVAC_RrWindSpeedSetting);
		fun(ACU_HVACFR_PsnTempSetting);
		fun(ACU_HVACFR_DrTempSetting);
		fun(ACU_HVACFR_RrTempSetting);
		fun(ACU_HVACF_FLTempIncBtnSt);
		fun(ACU_HVACF_FRTempIncBtnSt);
		fun(ACU_HVACF_CirBtnSt);
		fun(ACU_HVACF_DualSyncBtnSt);
		fun(ACU_HVAC_RearOnOffBtnSt);
		fun(ACU_HVACF_VR_HVACONOFF);
		fun(ACU_HVACF_AQSCfg);
		fun(ACU_HVACF_IonBtnSt);
		fun(ACU_HVACF_EvapratorSelfCleanCfg);
		fun(ACU_HVAC_FraganceConcentrationSt);
		fun(ACU_HVACF_FDefrostBtnSt);
		fun(ACU_HVACF_ACBtnSt);
		fun(ACU_HVACF_TimedVentilationCfg);
		fun(ACU_HVACF_ECOBtnSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ICM_FuelLevelLowSt);
		fun(ICM_FuelLevelEmpty);
		fun(ICM_FuelSensor1ShortToGND);
		fun(ICM_FuelSensor2ShortToBatt);
		fun(ICM_FuelSensor2ShortToGND);
		fun(ICM_FuelSensorOutofrange);
		fun(ICM_FuelSensor2Outofrange);
		fun(ICM_FuelLevel);
		fun(ICM_FuelLevelVD);
		fun(ICM_FuelSensor1ShortToBatt);
		fun(ACU_HVACFR_FanIncBtnSt);
		fun(ACU_HVAC_RrFanIncBtnSt);
		fun(ACU_HVACFR_WindSpeedSetting);
		fun(ACU_HVAC_RrWindSpeedSetting);
		fun(ACU_HVACFR_PsnTempSetting);
		fun(ACU_HVACFR_DrTempSetting);
		fun(ACU_HVACFR_RrTempSetting);
		fun(ACU_HVACF_FLTempIncBtnSt);
		fun(ACU_HVACF_FRTempIncBtnSt);
		fun(ACU_HVACF_CirBtnSt);
		fun(ACU_HVACF_DualSyncBtnSt);
		fun(ACU_HVAC_RearOnOffBtnSt);
		fun(ACU_HVACF_VR_HVACONOFF);
		fun(ACU_HVACF_AQSCfg);
		fun(ACU_HVACF_IonBtnSt);
		fun(ACU_HVACF_EvapratorSelfCleanCfg);
		fun(ACU_HVAC_FraganceConcentrationSt);
		fun(ACU_HVACF_FDefrostBtnSt);
		fun(ACU_HVACF_ACBtnSt);
		fun(ACU_HVACF_TimedVentilationCfg);
		fun(ACU_HVACF_ECOBtnSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ICM_FuelLevelLowSt);
		fun << (ICM_FuelLevelEmpty);
		fun << (ICM_FuelSensor1ShortToGND);
		fun << (ICM_FuelSensor2ShortToBatt);
		fun << (ICM_FuelSensor2ShortToGND);
		fun << (ICM_FuelSensorOutofrange);
		fun << (ICM_FuelSensor2Outofrange);
		fun << (ICM_FuelLevel);
		fun << (ICM_FuelLevelVD);
		fun << (ICM_FuelSensor1ShortToBatt);
		fun << (ACU_HVACFR_FanIncBtnSt);
		fun << (ACU_HVAC_RrFanIncBtnSt);
		fun << (ACU_HVACFR_WindSpeedSetting);
		fun << (ACU_HVAC_RrWindSpeedSetting);
		fun << (ACU_HVACFR_PsnTempSetting);
		fun << (ACU_HVACFR_DrTempSetting);
		fun << (ACU_HVACFR_RrTempSetting);
		fun << (ACU_HVACF_FLTempIncBtnSt);
		fun << (ACU_HVACF_FRTempIncBtnSt);
		fun << (ACU_HVACF_CirBtnSt);
		fun << (ACU_HVACF_DualSyncBtnSt);
		fun << (ACU_HVAC_RearOnOffBtnSt);
		fun << (ACU_HVACF_VR_HVACONOFF);
		fun << (ACU_HVACF_AQSCfg);
		fun << (ACU_HVACF_IonBtnSt);
		fun << (ACU_HVACF_EvapratorSelfCleanCfg);
		fun << (ACU_HVAC_FraganceConcentrationSt);
		fun << (ACU_HVACF_FDefrostBtnSt);
		fun << (ACU_HVACF_ACBtnSt);
		fun << (ACU_HVACF_TimedVentilationCfg);
		fun << (ACU_HVACF_ECOBtnSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ICM_FuelLevelLowSt);
		fun >> (ICM_FuelLevelEmpty);
		fun >> (ICM_FuelSensor1ShortToGND);
		fun >> (ICM_FuelSensor2ShortToBatt);
		fun >> (ICM_FuelSensor2ShortToGND);
		fun >> (ICM_FuelSensorOutofrange);
		fun >> (ICM_FuelSensor2Outofrange);
		fun >> (ICM_FuelLevel);
		fun >> (ICM_FuelLevelVD);
		fun >> (ICM_FuelSensor1ShortToBatt);
		fun >> (ACU_HVACFR_FanIncBtnSt);
		fun >> (ACU_HVAC_RrFanIncBtnSt);
		fun >> (ACU_HVACFR_WindSpeedSetting);
		fun >> (ACU_HVAC_RrWindSpeedSetting);
		fun >> (ACU_HVACFR_PsnTempSetting);
		fun >> (ACU_HVACFR_DrTempSetting);
		fun >> (ACU_HVACFR_RrTempSetting);
		fun >> (ACU_HVACF_FLTempIncBtnSt);
		fun >> (ACU_HVACF_FRTempIncBtnSt);
		fun >> (ACU_HVACF_CirBtnSt);
		fun >> (ACU_HVACF_DualSyncBtnSt);
		fun >> (ACU_HVAC_RearOnOffBtnSt);
		fun >> (ACU_HVACF_VR_HVACONOFF);
		fun >> (ACU_HVACF_AQSCfg);
		fun >> (ACU_HVACF_IonBtnSt);
		fun >> (ACU_HVACF_EvapratorSelfCleanCfg);
		fun >> (ACU_HVAC_FraganceConcentrationSt);
		fun >> (ACU_HVACF_FDefrostBtnSt);
		fun >> (ACU_HVACF_ACBtnSt);
		fun >> (ACU_HVACF_TimedVentilationCfg);
		fun >> (ACU_HVACF_ECOBtnSt);
	}
};

#endif //____BDCTESTACU_H__
