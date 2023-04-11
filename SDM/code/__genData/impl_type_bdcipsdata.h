#ifndef ____BDCIPSDATA_H__
#define ____BDCIPSDATA_H__


#include "cstdint"






struct BDCIPSData {
public:
	std::uint8_t IPS_KL15State;
	std::uint8_t IPS_DchgOverload;
	std::uint16_t IPS_OBCChgPwrMax;
	std::uint8_t IPS_NMWakeupOrigin;
	std::uint8_t IPS_PNCInformation0;
	std::uint8_t HVAC_RawExterTempFault;
	std::uint16_t HVAC_RawExterTemp;
	std::uint8_t DCchgpileA1voltVD;
	std::uint16_t DCchgpileA1volt;
	std::uint8_t DCchgpileCC2volt;
	std::uint8_t DCchgpileCC1volt;
	std::uint8_t DCchgpileCC2voltVD;
	std::uint8_t DCchgpileCC1voltVD;
	std::uint16_t ACChgL1Temp;
	std::uint8_t ACChgL1TempVD;
	std::uint16_t ACChgNTemp;
	std::uint8_t ACChgNTempVD;
	std::uint16_t DCChgDC2Temp;
	std::uint16_t DCChgDC1Temp;
	std::uint8_t DCChgDC2TempVD;
	std::uint8_t DCChgDC1TempVD;
	std::uint8_t ACEleclocksSt1;
	std::uint8_t ACEleclocksSt2;
	std::uint8_t ACEleclocksSt;
	std::uint8_t Elecunlockdrvst;
	std::uint8_t ElecunlockM2diagnosisoupt;
	std::uint8_t ElecunlockM1diagnosisoupt;
	std::uint8_t ElecunlockProSt;
	std::uint8_t EPB_SwitchSt;
	std::uint8_t EPB_SwitchStVD;
	std::uint8_t EPB_SysSt;
	std::uint8_t EPB_FailSt;
	std::uint8_t BCS_AVHSt;
	std::uint8_t BCS_AVHAvailable;
	std::uint8_t BCS_VehSpdVD;
/*
	BDCIPSData() {}
	~BDCIPSData() {}
	BDCIPSData(const std::uint8_t _IPS_KL15State,const std::uint8_t _IPS_DchgOverload,const std::uint16_t _IPS_OBCChgPwrMax,const std::uint8_t _IPS_NMWakeupOrigin,const std::uint8_t _IPS_PNCInformation0,const std::uint8_t _HVAC_RawExterTempFault,const std::uint16_t _HVAC_RawExterTemp,const std::uint8_t _DCchgpileA1voltVD,const std::uint16_t _DCchgpileA1volt,const std::uint8_t _DCchgpileCC2volt,const std::uint8_t _DCchgpileCC1volt,const std::uint8_t _DCchgpileCC2voltVD,const std::uint8_t _DCchgpileCC1voltVD,const std::uint16_t _ACChgL1Temp,const std::uint8_t _ACChgL1TempVD,const std::uint16_t _ACChgNTemp,const std::uint8_t _ACChgNTempVD,const std::uint16_t _DCChgDC2Temp,const std::uint16_t _DCChgDC1Temp,const std::uint8_t _DCChgDC2TempVD,const std::uint8_t _DCChgDC1TempVD,const std::uint8_t _ACEleclocksSt1,const std::uint8_t _ACEleclocksSt2,const std::uint8_t _ACEleclocksSt,const std::uint8_t _Elecunlockdrvst,const std::uint8_t _ElecunlockM2diagnosisoupt,const std::uint8_t _ElecunlockM1diagnosisoupt,const std::uint8_t _ElecunlockProSt,const std::uint8_t _EPB_SwitchSt,const std::uint8_t _EPB_SwitchStVD,const std::uint8_t _EPB_SysSt,const std::uint8_t _EPB_FailSt,const std::uint8_t _BCS_AVHSt,const std::uint8_t _BCS_AVHAvailable,const std::uint8_t _BCS_VehSpdVD):IPS_KL15State(_IPS_KL15State),IPS_DchgOverload(_IPS_DchgOverload),IPS_OBCChgPwrMax(_IPS_OBCChgPwrMax),IPS_NMWakeupOrigin(_IPS_NMWakeupOrigin),IPS_PNCInformation0(_IPS_PNCInformation0),HVAC_RawExterTempFault(_HVAC_RawExterTempFault),HVAC_RawExterTemp(_HVAC_RawExterTemp),DCchgpileA1voltVD(_DCchgpileA1voltVD),DCchgpileA1volt(_DCchgpileA1volt),DCchgpileCC2volt(_DCchgpileCC2volt),DCchgpileCC1volt(_DCchgpileCC1volt),DCchgpileCC2voltVD(_DCchgpileCC2voltVD),DCchgpileCC1voltVD(_DCchgpileCC1voltVD),ACChgL1Temp(_ACChgL1Temp),ACChgL1TempVD(_ACChgL1TempVD),ACChgNTemp(_ACChgNTemp),ACChgNTempVD(_ACChgNTempVD),DCChgDC2Temp(_DCChgDC2Temp),DCChgDC1Temp(_DCChgDC1Temp),DCChgDC2TempVD(_DCChgDC2TempVD),DCChgDC1TempVD(_DCChgDC1TempVD),ACEleclocksSt1(_ACEleclocksSt1),ACEleclocksSt2(_ACEleclocksSt2),ACEleclocksSt(_ACEleclocksSt),Elecunlockdrvst(_Elecunlockdrvst),ElecunlockM2diagnosisoupt(_ElecunlockM2diagnosisoupt),ElecunlockM1diagnosisoupt(_ElecunlockM1diagnosisoupt),ElecunlockProSt(_ElecunlockProSt),EPB_SwitchSt(_EPB_SwitchSt),EPB_SwitchStVD(_EPB_SwitchStVD),EPB_SysSt(_EPB_SysSt),EPB_FailSt(_EPB_FailSt),BCS_AVHSt(_BCS_AVHSt),BCS_AVHAvailable(_BCS_AVHAvailable),BCS_VehSpdVD(_BCS_VehSpdVD) {}
	BDCIPSData(const BDCIPSData &_x){
		IPS_KL15State = _x.IPS_KL15State;
		IPS_DchgOverload = _x.IPS_DchgOverload;
		IPS_OBCChgPwrMax = _x.IPS_OBCChgPwrMax;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		HVAC_RawExterTempFault = _x.HVAC_RawExterTempFault;
		HVAC_RawExterTemp = _x.HVAC_RawExterTemp;
		DCchgpileA1voltVD = _x.DCchgpileA1voltVD;
		DCchgpileA1volt = _x.DCchgpileA1volt;
		DCchgpileCC2volt = _x.DCchgpileCC2volt;
		DCchgpileCC1volt = _x.DCchgpileCC1volt;
		DCchgpileCC2voltVD = _x.DCchgpileCC2voltVD;
		DCchgpileCC1voltVD = _x.DCchgpileCC1voltVD;
		ACChgL1Temp = _x.ACChgL1Temp;
		ACChgL1TempVD = _x.ACChgL1TempVD;
		ACChgNTemp = _x.ACChgNTemp;
		ACChgNTempVD = _x.ACChgNTempVD;
		DCChgDC2Temp = _x.DCChgDC2Temp;
		DCChgDC1Temp = _x.DCChgDC1Temp;
		DCChgDC2TempVD = _x.DCChgDC2TempVD;
		DCChgDC1TempVD = _x.DCChgDC1TempVD;
		ACEleclocksSt1 = _x.ACEleclocksSt1;
		ACEleclocksSt2 = _x.ACEleclocksSt2;
		ACEleclocksSt = _x.ACEleclocksSt;
		Elecunlockdrvst = _x.Elecunlockdrvst;
		ElecunlockM2diagnosisoupt = _x.ElecunlockM2diagnosisoupt;
		ElecunlockM1diagnosisoupt = _x.ElecunlockM1diagnosisoupt;
		ElecunlockProSt = _x.ElecunlockProSt;
		EPB_SwitchSt = _x.EPB_SwitchSt;
		EPB_SwitchStVD = _x.EPB_SwitchStVD;
		EPB_SysSt = _x.EPB_SysSt;
		EPB_FailSt = _x.EPB_FailSt;
		BCS_AVHSt = _x.BCS_AVHSt;
		BCS_AVHAvailable = _x.BCS_AVHAvailable;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
	}
	BDCIPSData(BDCIPSData &&_x){
		IPS_KL15State = std::move(_x.IPS_KL15State);
		IPS_DchgOverload = std::move(_x.IPS_DchgOverload);
		IPS_OBCChgPwrMax = std::move(_x.IPS_OBCChgPwrMax);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		HVAC_RawExterTempFault = std::move(_x.HVAC_RawExterTempFault);
		HVAC_RawExterTemp = std::move(_x.HVAC_RawExterTemp);
		DCchgpileA1voltVD = std::move(_x.DCchgpileA1voltVD);
		DCchgpileA1volt = std::move(_x.DCchgpileA1volt);
		DCchgpileCC2volt = std::move(_x.DCchgpileCC2volt);
		DCchgpileCC1volt = std::move(_x.DCchgpileCC1volt);
		DCchgpileCC2voltVD = std::move(_x.DCchgpileCC2voltVD);
		DCchgpileCC1voltVD = std::move(_x.DCchgpileCC1voltVD);
		ACChgL1Temp = std::move(_x.ACChgL1Temp);
		ACChgL1TempVD = std::move(_x.ACChgL1TempVD);
		ACChgNTemp = std::move(_x.ACChgNTemp);
		ACChgNTempVD = std::move(_x.ACChgNTempVD);
		DCChgDC2Temp = std::move(_x.DCChgDC2Temp);
		DCChgDC1Temp = std::move(_x.DCChgDC1Temp);
		DCChgDC2TempVD = std::move(_x.DCChgDC2TempVD);
		DCChgDC1TempVD = std::move(_x.DCChgDC1TempVD);
		ACEleclocksSt1 = std::move(_x.ACEleclocksSt1);
		ACEleclocksSt2 = std::move(_x.ACEleclocksSt2);
		ACEleclocksSt = std::move(_x.ACEleclocksSt);
		Elecunlockdrvst = std::move(_x.Elecunlockdrvst);
		ElecunlockM2diagnosisoupt = std::move(_x.ElecunlockM2diagnosisoupt);
		ElecunlockM1diagnosisoupt = std::move(_x.ElecunlockM1diagnosisoupt);
		ElecunlockProSt = std::move(_x.ElecunlockProSt);
		EPB_SwitchSt = std::move(_x.EPB_SwitchSt);
		EPB_SwitchStVD = std::move(_x.EPB_SwitchStVD);
		EPB_SysSt = std::move(_x.EPB_SysSt);
		EPB_FailSt = std::move(_x.EPB_FailSt);
		BCS_AVHSt = std::move(_x.BCS_AVHSt);
		BCS_AVHAvailable = std::move(_x.BCS_AVHAvailable);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
	}
	BDCIPSData& operator=(const BDCIPSData &_x){
		IPS_KL15State = _x.IPS_KL15State;
		IPS_DchgOverload = _x.IPS_DchgOverload;
		IPS_OBCChgPwrMax = _x.IPS_OBCChgPwrMax;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		HVAC_RawExterTempFault = _x.HVAC_RawExterTempFault;
		HVAC_RawExterTemp = _x.HVAC_RawExterTemp;
		DCchgpileA1voltVD = _x.DCchgpileA1voltVD;
		DCchgpileA1volt = _x.DCchgpileA1volt;
		DCchgpileCC2volt = _x.DCchgpileCC2volt;
		DCchgpileCC1volt = _x.DCchgpileCC1volt;
		DCchgpileCC2voltVD = _x.DCchgpileCC2voltVD;
		DCchgpileCC1voltVD = _x.DCchgpileCC1voltVD;
		ACChgL1Temp = _x.ACChgL1Temp;
		ACChgL1TempVD = _x.ACChgL1TempVD;
		ACChgNTemp = _x.ACChgNTemp;
		ACChgNTempVD = _x.ACChgNTempVD;
		DCChgDC2Temp = _x.DCChgDC2Temp;
		DCChgDC1Temp = _x.DCChgDC1Temp;
		DCChgDC2TempVD = _x.DCChgDC2TempVD;
		DCChgDC1TempVD = _x.DCChgDC1TempVD;
		ACEleclocksSt1 = _x.ACEleclocksSt1;
		ACEleclocksSt2 = _x.ACEleclocksSt2;
		ACEleclocksSt = _x.ACEleclocksSt;
		Elecunlockdrvst = _x.Elecunlockdrvst;
		ElecunlockM2diagnosisoupt = _x.ElecunlockM2diagnosisoupt;
		ElecunlockM1diagnosisoupt = _x.ElecunlockM1diagnosisoupt;
		ElecunlockProSt = _x.ElecunlockProSt;
		EPB_SwitchSt = _x.EPB_SwitchSt;
		EPB_SwitchStVD = _x.EPB_SwitchStVD;
		EPB_SysSt = _x.EPB_SysSt;
		EPB_FailSt = _x.EPB_FailSt;
		BCS_AVHSt = _x.BCS_AVHSt;
		BCS_AVHAvailable = _x.BCS_AVHAvailable;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		return *this;
	}
	BDCIPSData& operator=(BDCIPSData &&_x){
		IPS_KL15State = std::move(_x.IPS_KL15State);
		IPS_DchgOverload = std::move(_x.IPS_DchgOverload);
		IPS_OBCChgPwrMax = std::move(_x.IPS_OBCChgPwrMax);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		HVAC_RawExterTempFault = std::move(_x.HVAC_RawExterTempFault);
		HVAC_RawExterTemp = std::move(_x.HVAC_RawExterTemp);
		DCchgpileA1voltVD = std::move(_x.DCchgpileA1voltVD);
		DCchgpileA1volt = std::move(_x.DCchgpileA1volt);
		DCchgpileCC2volt = std::move(_x.DCchgpileCC2volt);
		DCchgpileCC1volt = std::move(_x.DCchgpileCC1volt);
		DCchgpileCC2voltVD = std::move(_x.DCchgpileCC2voltVD);
		DCchgpileCC1voltVD = std::move(_x.DCchgpileCC1voltVD);
		ACChgL1Temp = std::move(_x.ACChgL1Temp);
		ACChgL1TempVD = std::move(_x.ACChgL1TempVD);
		ACChgNTemp = std::move(_x.ACChgNTemp);
		ACChgNTempVD = std::move(_x.ACChgNTempVD);
		DCChgDC2Temp = std::move(_x.DCChgDC2Temp);
		DCChgDC1Temp = std::move(_x.DCChgDC1Temp);
		DCChgDC2TempVD = std::move(_x.DCChgDC2TempVD);
		DCChgDC1TempVD = std::move(_x.DCChgDC1TempVD);
		ACEleclocksSt1 = std::move(_x.ACEleclocksSt1);
		ACEleclocksSt2 = std::move(_x.ACEleclocksSt2);
		ACEleclocksSt = std::move(_x.ACEleclocksSt);
		Elecunlockdrvst = std::move(_x.Elecunlockdrvst);
		ElecunlockM2diagnosisoupt = std::move(_x.ElecunlockM2diagnosisoupt);
		ElecunlockM1diagnosisoupt = std::move(_x.ElecunlockM1diagnosisoupt);
		ElecunlockProSt = std::move(_x.ElecunlockProSt);
		EPB_SwitchSt = std::move(_x.EPB_SwitchSt);
		EPB_SwitchStVD = std::move(_x.EPB_SwitchStVD);
		EPB_SysSt = std::move(_x.EPB_SysSt);
		EPB_FailSt = std::move(_x.EPB_FailSt);
		BCS_AVHSt = std::move(_x.BCS_AVHSt);
		BCS_AVHAvailable = std::move(_x.BCS_AVHAvailable);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_KL15State);
		fun(IPS_DchgOverload);
		fun(IPS_OBCChgPwrMax);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(HVAC_RawExterTempFault);
		fun(HVAC_RawExterTemp);
		fun(DCchgpileA1voltVD);
		fun(DCchgpileA1volt);
		fun(DCchgpileCC2volt);
		fun(DCchgpileCC1volt);
		fun(DCchgpileCC2voltVD);
		fun(DCchgpileCC1voltVD);
		fun(ACChgL1Temp);
		fun(ACChgL1TempVD);
		fun(ACChgNTemp);
		fun(ACChgNTempVD);
		fun(DCChgDC2Temp);
		fun(DCChgDC1Temp);
		fun(DCChgDC2TempVD);
		fun(DCChgDC1TempVD);
		fun(ACEleclocksSt1);
		fun(ACEleclocksSt2);
		fun(ACEleclocksSt);
		fun(Elecunlockdrvst);
		fun(ElecunlockM2diagnosisoupt);
		fun(ElecunlockM1diagnosisoupt);
		fun(ElecunlockProSt);
		fun(EPB_SwitchSt);
		fun(EPB_SwitchStVD);
		fun(EPB_SysSt);
		fun(EPB_FailSt);
		fun(BCS_AVHSt);
		fun(BCS_AVHAvailable);
		fun(BCS_VehSpdVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_KL15State);
		fun(IPS_DchgOverload);
		fun(IPS_OBCChgPwrMax);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(HVAC_RawExterTempFault);
		fun(HVAC_RawExterTemp);
		fun(DCchgpileA1voltVD);
		fun(DCchgpileA1volt);
		fun(DCchgpileCC2volt);
		fun(DCchgpileCC1volt);
		fun(DCchgpileCC2voltVD);
		fun(DCchgpileCC1voltVD);
		fun(ACChgL1Temp);
		fun(ACChgL1TempVD);
		fun(ACChgNTemp);
		fun(ACChgNTempVD);
		fun(DCChgDC2Temp);
		fun(DCChgDC1Temp);
		fun(DCChgDC2TempVD);
		fun(DCChgDC1TempVD);
		fun(ACEleclocksSt1);
		fun(ACEleclocksSt2);
		fun(ACEleclocksSt);
		fun(Elecunlockdrvst);
		fun(ElecunlockM2diagnosisoupt);
		fun(ElecunlockM1diagnosisoupt);
		fun(ElecunlockProSt);
		fun(EPB_SwitchSt);
		fun(EPB_SwitchStVD);
		fun(EPB_SysSt);
		fun(EPB_FailSt);
		fun(BCS_AVHSt);
		fun(BCS_AVHAvailable);
		fun(BCS_VehSpdVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_KL15State);
		fun << (IPS_DchgOverload);
		fun << (IPS_OBCChgPwrMax);
		fun << (IPS_NMWakeupOrigin);
		fun << (IPS_PNCInformation0);
		fun << (HVAC_RawExterTempFault);
		fun << (HVAC_RawExterTemp);
		fun << (DCchgpileA1voltVD);
		fun << (DCchgpileA1volt);
		fun << (DCchgpileCC2volt);
		fun << (DCchgpileCC1volt);
		fun << (DCchgpileCC2voltVD);
		fun << (DCchgpileCC1voltVD);
		fun << (ACChgL1Temp);
		fun << (ACChgL1TempVD);
		fun << (ACChgNTemp);
		fun << (ACChgNTempVD);
		fun << (DCChgDC2Temp);
		fun << (DCChgDC1Temp);
		fun << (DCChgDC2TempVD);
		fun << (DCChgDC1TempVD);
		fun << (ACEleclocksSt1);
		fun << (ACEleclocksSt2);
		fun << (ACEleclocksSt);
		fun << (Elecunlockdrvst);
		fun << (ElecunlockM2diagnosisoupt);
		fun << (ElecunlockM1diagnosisoupt);
		fun << (ElecunlockProSt);
		fun << (EPB_SwitchSt);
		fun << (EPB_SwitchStVD);
		fun << (EPB_SysSt);
		fun << (EPB_FailSt);
		fun << (BCS_AVHSt);
		fun << (BCS_AVHAvailable);
		fun << (BCS_VehSpdVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_KL15State);
		fun >> (IPS_DchgOverload);
		fun >> (IPS_OBCChgPwrMax);
		fun >> (IPS_NMWakeupOrigin);
		fun >> (IPS_PNCInformation0);
		fun >> (HVAC_RawExterTempFault);
		fun >> (HVAC_RawExterTemp);
		fun >> (DCchgpileA1voltVD);
		fun >> (DCchgpileA1volt);
		fun >> (DCchgpileCC2volt);
		fun >> (DCchgpileCC1volt);
		fun >> (DCchgpileCC2voltVD);
		fun >> (DCchgpileCC1voltVD);
		fun >> (ACChgL1Temp);
		fun >> (ACChgL1TempVD);
		fun >> (ACChgNTemp);
		fun >> (ACChgNTempVD);
		fun >> (DCChgDC2Temp);
		fun >> (DCChgDC1Temp);
		fun >> (DCChgDC2TempVD);
		fun >> (DCChgDC1TempVD);
		fun >> (ACEleclocksSt1);
		fun >> (ACEleclocksSt2);
		fun >> (ACEleclocksSt);
		fun >> (Elecunlockdrvst);
		fun >> (ElecunlockM2diagnosisoupt);
		fun >> (ElecunlockM1diagnosisoupt);
		fun >> (ElecunlockProSt);
		fun >> (EPB_SwitchSt);
		fun >> (EPB_SwitchStVD);
		fun >> (EPB_SysSt);
		fun >> (EPB_FailSt);
		fun >> (BCS_AVHSt);
		fun >> (BCS_AVHAvailable);
		fun >> (BCS_VehSpdVD);
	}
};

#endif //____BDCIPSDATA_H__
