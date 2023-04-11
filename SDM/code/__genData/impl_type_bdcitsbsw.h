#ifndef ____BDCITSBSW_H__
#define ____BDCITSBSW_H__


#include "cstdint"






struct BDCITSBsw {
public:
	std::uint8_t ITS_ValvePositionAct;
	std::uint8_t ITS_ECVPosnAct;
	std::uint8_t ITS_HeaterPumpSpdAct;
	std::uint16_t ITS_MotorInletTemp;
	std::uint16_t ITS_BatteryInletTemp;
	std::uint16_t ITS_ChillerInletTemp;
	std::uint8_t ITS_BatteryPumpSpdAct;
	std::uint8_t ITS_MotorPumpSpdAct;
	std::uint8_t bsw_nFanActspdU16;
	std::uint8_t bsw_iFanCurrF32;
	std::uint8_t bsw_uFanVoltF32;
	std::uint8_t stm_bFanRelayEnB;
	std::uint8_t bsw_iMotPmpBusCurrF32;
	std::uint8_t bsw_iBatPmpBusCurrF32;
	std::uint8_t bsw_iHeatrPmpBusCurrF32;
	std::uint8_t bsw_uItsVoltF32;
	std::uint16_t bsw_cEmvHallctrU16;
	std::uint16_t bsw_cEsvHallCtrU16;
	std::uint16_t ITS_MotorPumpErrCode;
	std::uint16_t ITS_BatteryPumpErrCode;
	std::uint16_t ITS_HeaterPumpErrCode;
	std::uint8_t ITS_EmvErrCode;
	std::uint8_t ITS_EcvErrCode;
	std::uint8_t ITS_FanErrCode;
	std::uint8_t ITS_SolenoidValveErrCode;
	std::uint8_t ITS_MotTempSnsrErrCode;
	std::uint8_t ITS_BatTempSnsrErrCode;
	std::uint8_t ITS_ChiTempSnsrErrCode;
	std::uint8_t ITS_LIN_CommunicateErrCode;
	std::uint8_t ITS_FanRelayEnableErrCode;
	std::uint8_t ITS_PwrSupplyErrCode;
/*
	BDCITSBsw() {}
	~BDCITSBsw() {}
	BDCITSBsw(const std::uint8_t _ITS_ValvePositionAct,const std::uint8_t _ITS_ECVPosnAct,const std::uint8_t _ITS_HeaterPumpSpdAct,const std::uint16_t _ITS_MotorInletTemp,const std::uint16_t _ITS_BatteryInletTemp,const std::uint16_t _ITS_ChillerInletTemp,const std::uint8_t _ITS_BatteryPumpSpdAct,const std::uint8_t _ITS_MotorPumpSpdAct,const std::uint8_t _bsw_nFanActspdU16,const std::uint8_t _bsw_iFanCurrF32,const std::uint8_t _bsw_uFanVoltF32,const std::uint8_t _stm_bFanRelayEnB,const std::uint8_t _bsw_iMotPmpBusCurrF32,const std::uint8_t _bsw_iBatPmpBusCurrF32,const std::uint8_t _bsw_iHeatrPmpBusCurrF32,const std::uint8_t _bsw_uItsVoltF32,const std::uint16_t _bsw_cEmvHallctrU16,const std::uint16_t _bsw_cEsvHallCtrU16,const std::uint16_t _ITS_MotorPumpErrCode,const std::uint16_t _ITS_BatteryPumpErrCode,const std::uint16_t _ITS_HeaterPumpErrCode,const std::uint8_t _ITS_EmvErrCode,const std::uint8_t _ITS_EcvErrCode,const std::uint8_t _ITS_FanErrCode,const std::uint8_t _ITS_SolenoidValveErrCode,const std::uint8_t _ITS_MotTempSnsrErrCode,const std::uint8_t _ITS_BatTempSnsrErrCode,const std::uint8_t _ITS_ChiTempSnsrErrCode,const std::uint8_t _ITS_LIN_CommunicateErrCode,const std::uint8_t _ITS_FanRelayEnableErrCode,const std::uint8_t _ITS_PwrSupplyErrCode):ITS_ValvePositionAct(_ITS_ValvePositionAct),ITS_ECVPosnAct(_ITS_ECVPosnAct),ITS_HeaterPumpSpdAct(_ITS_HeaterPumpSpdAct),ITS_MotorInletTemp(_ITS_MotorInletTemp),ITS_BatteryInletTemp(_ITS_BatteryInletTemp),ITS_ChillerInletTemp(_ITS_ChillerInletTemp),ITS_BatteryPumpSpdAct(_ITS_BatteryPumpSpdAct),ITS_MotorPumpSpdAct(_ITS_MotorPumpSpdAct),bsw_nFanActspdU16(_bsw_nFanActspdU16),bsw_iFanCurrF32(_bsw_iFanCurrF32),bsw_uFanVoltF32(_bsw_uFanVoltF32),stm_bFanRelayEnB(_stm_bFanRelayEnB),bsw_iMotPmpBusCurrF32(_bsw_iMotPmpBusCurrF32),bsw_iBatPmpBusCurrF32(_bsw_iBatPmpBusCurrF32),bsw_iHeatrPmpBusCurrF32(_bsw_iHeatrPmpBusCurrF32),bsw_uItsVoltF32(_bsw_uItsVoltF32),bsw_cEmvHallctrU16(_bsw_cEmvHallctrU16),bsw_cEsvHallCtrU16(_bsw_cEsvHallCtrU16),ITS_MotorPumpErrCode(_ITS_MotorPumpErrCode),ITS_BatteryPumpErrCode(_ITS_BatteryPumpErrCode),ITS_HeaterPumpErrCode(_ITS_HeaterPumpErrCode),ITS_EmvErrCode(_ITS_EmvErrCode),ITS_EcvErrCode(_ITS_EcvErrCode),ITS_FanErrCode(_ITS_FanErrCode),ITS_SolenoidValveErrCode(_ITS_SolenoidValveErrCode),ITS_MotTempSnsrErrCode(_ITS_MotTempSnsrErrCode),ITS_BatTempSnsrErrCode(_ITS_BatTempSnsrErrCode),ITS_ChiTempSnsrErrCode(_ITS_ChiTempSnsrErrCode),ITS_LIN_CommunicateErrCode(_ITS_LIN_CommunicateErrCode),ITS_FanRelayEnableErrCode(_ITS_FanRelayEnableErrCode),ITS_PwrSupplyErrCode(_ITS_PwrSupplyErrCode) {}
	BDCITSBsw(const BDCITSBsw &_x){
		ITS_ValvePositionAct = _x.ITS_ValvePositionAct;
		ITS_ECVPosnAct = _x.ITS_ECVPosnAct;
		ITS_HeaterPumpSpdAct = _x.ITS_HeaterPumpSpdAct;
		ITS_MotorInletTemp = _x.ITS_MotorInletTemp;
		ITS_BatteryInletTemp = _x.ITS_BatteryInletTemp;
		ITS_ChillerInletTemp = _x.ITS_ChillerInletTemp;
		ITS_BatteryPumpSpdAct = _x.ITS_BatteryPumpSpdAct;
		ITS_MotorPumpSpdAct = _x.ITS_MotorPumpSpdAct;
		bsw_nFanActspdU16 = _x.bsw_nFanActspdU16;
		bsw_iFanCurrF32 = _x.bsw_iFanCurrF32;
		bsw_uFanVoltF32 = _x.bsw_uFanVoltF32;
		stm_bFanRelayEnB = _x.stm_bFanRelayEnB;
		bsw_iMotPmpBusCurrF32 = _x.bsw_iMotPmpBusCurrF32;
		bsw_iBatPmpBusCurrF32 = _x.bsw_iBatPmpBusCurrF32;
		bsw_iHeatrPmpBusCurrF32 = _x.bsw_iHeatrPmpBusCurrF32;
		bsw_uItsVoltF32 = _x.bsw_uItsVoltF32;
		bsw_cEmvHallctrU16 = _x.bsw_cEmvHallctrU16;
		bsw_cEsvHallCtrU16 = _x.bsw_cEsvHallCtrU16;
		ITS_MotorPumpErrCode = _x.ITS_MotorPumpErrCode;
		ITS_BatteryPumpErrCode = _x.ITS_BatteryPumpErrCode;
		ITS_HeaterPumpErrCode = _x.ITS_HeaterPumpErrCode;
		ITS_EmvErrCode = _x.ITS_EmvErrCode;
		ITS_EcvErrCode = _x.ITS_EcvErrCode;
		ITS_FanErrCode = _x.ITS_FanErrCode;
		ITS_SolenoidValveErrCode = _x.ITS_SolenoidValveErrCode;
		ITS_MotTempSnsrErrCode = _x.ITS_MotTempSnsrErrCode;
		ITS_BatTempSnsrErrCode = _x.ITS_BatTempSnsrErrCode;
		ITS_ChiTempSnsrErrCode = _x.ITS_ChiTempSnsrErrCode;
		ITS_LIN_CommunicateErrCode = _x.ITS_LIN_CommunicateErrCode;
		ITS_FanRelayEnableErrCode = _x.ITS_FanRelayEnableErrCode;
		ITS_PwrSupplyErrCode = _x.ITS_PwrSupplyErrCode;
	}
	BDCITSBsw(BDCITSBsw &&_x){
		ITS_ValvePositionAct = std::move(_x.ITS_ValvePositionAct);
		ITS_ECVPosnAct = std::move(_x.ITS_ECVPosnAct);
		ITS_HeaterPumpSpdAct = std::move(_x.ITS_HeaterPumpSpdAct);
		ITS_MotorInletTemp = std::move(_x.ITS_MotorInletTemp);
		ITS_BatteryInletTemp = std::move(_x.ITS_BatteryInletTemp);
		ITS_ChillerInletTemp = std::move(_x.ITS_ChillerInletTemp);
		ITS_BatteryPumpSpdAct = std::move(_x.ITS_BatteryPumpSpdAct);
		ITS_MotorPumpSpdAct = std::move(_x.ITS_MotorPumpSpdAct);
		bsw_nFanActspdU16 = std::move(_x.bsw_nFanActspdU16);
		bsw_iFanCurrF32 = std::move(_x.bsw_iFanCurrF32);
		bsw_uFanVoltF32 = std::move(_x.bsw_uFanVoltF32);
		stm_bFanRelayEnB = std::move(_x.stm_bFanRelayEnB);
		bsw_iMotPmpBusCurrF32 = std::move(_x.bsw_iMotPmpBusCurrF32);
		bsw_iBatPmpBusCurrF32 = std::move(_x.bsw_iBatPmpBusCurrF32);
		bsw_iHeatrPmpBusCurrF32 = std::move(_x.bsw_iHeatrPmpBusCurrF32);
		bsw_uItsVoltF32 = std::move(_x.bsw_uItsVoltF32);
		bsw_cEmvHallctrU16 = std::move(_x.bsw_cEmvHallctrU16);
		bsw_cEsvHallCtrU16 = std::move(_x.bsw_cEsvHallCtrU16);
		ITS_MotorPumpErrCode = std::move(_x.ITS_MotorPumpErrCode);
		ITS_BatteryPumpErrCode = std::move(_x.ITS_BatteryPumpErrCode);
		ITS_HeaterPumpErrCode = std::move(_x.ITS_HeaterPumpErrCode);
		ITS_EmvErrCode = std::move(_x.ITS_EmvErrCode);
		ITS_EcvErrCode = std::move(_x.ITS_EcvErrCode);
		ITS_FanErrCode = std::move(_x.ITS_FanErrCode);
		ITS_SolenoidValveErrCode = std::move(_x.ITS_SolenoidValveErrCode);
		ITS_MotTempSnsrErrCode = std::move(_x.ITS_MotTempSnsrErrCode);
		ITS_BatTempSnsrErrCode = std::move(_x.ITS_BatTempSnsrErrCode);
		ITS_ChiTempSnsrErrCode = std::move(_x.ITS_ChiTempSnsrErrCode);
		ITS_LIN_CommunicateErrCode = std::move(_x.ITS_LIN_CommunicateErrCode);
		ITS_FanRelayEnableErrCode = std::move(_x.ITS_FanRelayEnableErrCode);
		ITS_PwrSupplyErrCode = std::move(_x.ITS_PwrSupplyErrCode);
	}
	BDCITSBsw& operator=(const BDCITSBsw &_x){
		ITS_ValvePositionAct = _x.ITS_ValvePositionAct;
		ITS_ECVPosnAct = _x.ITS_ECVPosnAct;
		ITS_HeaterPumpSpdAct = _x.ITS_HeaterPumpSpdAct;
		ITS_MotorInletTemp = _x.ITS_MotorInletTemp;
		ITS_BatteryInletTemp = _x.ITS_BatteryInletTemp;
		ITS_ChillerInletTemp = _x.ITS_ChillerInletTemp;
		ITS_BatteryPumpSpdAct = _x.ITS_BatteryPumpSpdAct;
		ITS_MotorPumpSpdAct = _x.ITS_MotorPumpSpdAct;
		bsw_nFanActspdU16 = _x.bsw_nFanActspdU16;
		bsw_iFanCurrF32 = _x.bsw_iFanCurrF32;
		bsw_uFanVoltF32 = _x.bsw_uFanVoltF32;
		stm_bFanRelayEnB = _x.stm_bFanRelayEnB;
		bsw_iMotPmpBusCurrF32 = _x.bsw_iMotPmpBusCurrF32;
		bsw_iBatPmpBusCurrF32 = _x.bsw_iBatPmpBusCurrF32;
		bsw_iHeatrPmpBusCurrF32 = _x.bsw_iHeatrPmpBusCurrF32;
		bsw_uItsVoltF32 = _x.bsw_uItsVoltF32;
		bsw_cEmvHallctrU16 = _x.bsw_cEmvHallctrU16;
		bsw_cEsvHallCtrU16 = _x.bsw_cEsvHallCtrU16;
		ITS_MotorPumpErrCode = _x.ITS_MotorPumpErrCode;
		ITS_BatteryPumpErrCode = _x.ITS_BatteryPumpErrCode;
		ITS_HeaterPumpErrCode = _x.ITS_HeaterPumpErrCode;
		ITS_EmvErrCode = _x.ITS_EmvErrCode;
		ITS_EcvErrCode = _x.ITS_EcvErrCode;
		ITS_FanErrCode = _x.ITS_FanErrCode;
		ITS_SolenoidValveErrCode = _x.ITS_SolenoidValveErrCode;
		ITS_MotTempSnsrErrCode = _x.ITS_MotTempSnsrErrCode;
		ITS_BatTempSnsrErrCode = _x.ITS_BatTempSnsrErrCode;
		ITS_ChiTempSnsrErrCode = _x.ITS_ChiTempSnsrErrCode;
		ITS_LIN_CommunicateErrCode = _x.ITS_LIN_CommunicateErrCode;
		ITS_FanRelayEnableErrCode = _x.ITS_FanRelayEnableErrCode;
		ITS_PwrSupplyErrCode = _x.ITS_PwrSupplyErrCode;
		return *this;
	}
	BDCITSBsw& operator=(BDCITSBsw &&_x){
		ITS_ValvePositionAct = std::move(_x.ITS_ValvePositionAct);
		ITS_ECVPosnAct = std::move(_x.ITS_ECVPosnAct);
		ITS_HeaterPumpSpdAct = std::move(_x.ITS_HeaterPumpSpdAct);
		ITS_MotorInletTemp = std::move(_x.ITS_MotorInletTemp);
		ITS_BatteryInletTemp = std::move(_x.ITS_BatteryInletTemp);
		ITS_ChillerInletTemp = std::move(_x.ITS_ChillerInletTemp);
		ITS_BatteryPumpSpdAct = std::move(_x.ITS_BatteryPumpSpdAct);
		ITS_MotorPumpSpdAct = std::move(_x.ITS_MotorPumpSpdAct);
		bsw_nFanActspdU16 = std::move(_x.bsw_nFanActspdU16);
		bsw_iFanCurrF32 = std::move(_x.bsw_iFanCurrF32);
		bsw_uFanVoltF32 = std::move(_x.bsw_uFanVoltF32);
		stm_bFanRelayEnB = std::move(_x.stm_bFanRelayEnB);
		bsw_iMotPmpBusCurrF32 = std::move(_x.bsw_iMotPmpBusCurrF32);
		bsw_iBatPmpBusCurrF32 = std::move(_x.bsw_iBatPmpBusCurrF32);
		bsw_iHeatrPmpBusCurrF32 = std::move(_x.bsw_iHeatrPmpBusCurrF32);
		bsw_uItsVoltF32 = std::move(_x.bsw_uItsVoltF32);
		bsw_cEmvHallctrU16 = std::move(_x.bsw_cEmvHallctrU16);
		bsw_cEsvHallCtrU16 = std::move(_x.bsw_cEsvHallCtrU16);
		ITS_MotorPumpErrCode = std::move(_x.ITS_MotorPumpErrCode);
		ITS_BatteryPumpErrCode = std::move(_x.ITS_BatteryPumpErrCode);
		ITS_HeaterPumpErrCode = std::move(_x.ITS_HeaterPumpErrCode);
		ITS_EmvErrCode = std::move(_x.ITS_EmvErrCode);
		ITS_EcvErrCode = std::move(_x.ITS_EcvErrCode);
		ITS_FanErrCode = std::move(_x.ITS_FanErrCode);
		ITS_SolenoidValveErrCode = std::move(_x.ITS_SolenoidValveErrCode);
		ITS_MotTempSnsrErrCode = std::move(_x.ITS_MotTempSnsrErrCode);
		ITS_BatTempSnsrErrCode = std::move(_x.ITS_BatTempSnsrErrCode);
		ITS_ChiTempSnsrErrCode = std::move(_x.ITS_ChiTempSnsrErrCode);
		ITS_LIN_CommunicateErrCode = std::move(_x.ITS_LIN_CommunicateErrCode);
		ITS_FanRelayEnableErrCode = std::move(_x.ITS_FanRelayEnableErrCode);
		ITS_PwrSupplyErrCode = std::move(_x.ITS_PwrSupplyErrCode);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ITS_ValvePositionAct);
		fun(ITS_ECVPosnAct);
		fun(ITS_HeaterPumpSpdAct);
		fun(ITS_MotorInletTemp);
		fun(ITS_BatteryInletTemp);
		fun(ITS_ChillerInletTemp);
		fun(ITS_BatteryPumpSpdAct);
		fun(ITS_MotorPumpSpdAct);
		fun(bsw_nFanActspdU16);
		fun(bsw_iFanCurrF32);
		fun(bsw_uFanVoltF32);
		fun(stm_bFanRelayEnB);
		fun(bsw_iMotPmpBusCurrF32);
		fun(bsw_iBatPmpBusCurrF32);
		fun(bsw_iHeatrPmpBusCurrF32);
		fun(bsw_uItsVoltF32);
		fun(bsw_cEmvHallctrU16);
		fun(bsw_cEsvHallCtrU16);
		fun(ITS_MotorPumpErrCode);
		fun(ITS_BatteryPumpErrCode);
		fun(ITS_HeaterPumpErrCode);
		fun(ITS_EmvErrCode);
		fun(ITS_EcvErrCode);
		fun(ITS_FanErrCode);
		fun(ITS_SolenoidValveErrCode);
		fun(ITS_MotTempSnsrErrCode);
		fun(ITS_BatTempSnsrErrCode);
		fun(ITS_ChiTempSnsrErrCode);
		fun(ITS_LIN_CommunicateErrCode);
		fun(ITS_FanRelayEnableErrCode);
		fun(ITS_PwrSupplyErrCode);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ITS_ValvePositionAct);
		fun(ITS_ECVPosnAct);
		fun(ITS_HeaterPumpSpdAct);
		fun(ITS_MotorInletTemp);
		fun(ITS_BatteryInletTemp);
		fun(ITS_ChillerInletTemp);
		fun(ITS_BatteryPumpSpdAct);
		fun(ITS_MotorPumpSpdAct);
		fun(bsw_nFanActspdU16);
		fun(bsw_iFanCurrF32);
		fun(bsw_uFanVoltF32);
		fun(stm_bFanRelayEnB);
		fun(bsw_iMotPmpBusCurrF32);
		fun(bsw_iBatPmpBusCurrF32);
		fun(bsw_iHeatrPmpBusCurrF32);
		fun(bsw_uItsVoltF32);
		fun(bsw_cEmvHallctrU16);
		fun(bsw_cEsvHallCtrU16);
		fun(ITS_MotorPumpErrCode);
		fun(ITS_BatteryPumpErrCode);
		fun(ITS_HeaterPumpErrCode);
		fun(ITS_EmvErrCode);
		fun(ITS_EcvErrCode);
		fun(ITS_FanErrCode);
		fun(ITS_SolenoidValveErrCode);
		fun(ITS_MotTempSnsrErrCode);
		fun(ITS_BatTempSnsrErrCode);
		fun(ITS_ChiTempSnsrErrCode);
		fun(ITS_LIN_CommunicateErrCode);
		fun(ITS_FanRelayEnableErrCode);
		fun(ITS_PwrSupplyErrCode);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ITS_ValvePositionAct);
		fun << (ITS_ECVPosnAct);
		fun << (ITS_HeaterPumpSpdAct);
		fun << (ITS_MotorInletTemp);
		fun << (ITS_BatteryInletTemp);
		fun << (ITS_ChillerInletTemp);
		fun << (ITS_BatteryPumpSpdAct);
		fun << (ITS_MotorPumpSpdAct);
		fun << (bsw_nFanActspdU16);
		fun << (bsw_iFanCurrF32);
		fun << (bsw_uFanVoltF32);
		fun << (stm_bFanRelayEnB);
		fun << (bsw_iMotPmpBusCurrF32);
		fun << (bsw_iBatPmpBusCurrF32);
		fun << (bsw_iHeatrPmpBusCurrF32);
		fun << (bsw_uItsVoltF32);
		fun << (bsw_cEmvHallctrU16);
		fun << (bsw_cEsvHallCtrU16);
		fun << (ITS_MotorPumpErrCode);
		fun << (ITS_BatteryPumpErrCode);
		fun << (ITS_HeaterPumpErrCode);
		fun << (ITS_EmvErrCode);
		fun << (ITS_EcvErrCode);
		fun << (ITS_FanErrCode);
		fun << (ITS_SolenoidValveErrCode);
		fun << (ITS_MotTempSnsrErrCode);
		fun << (ITS_BatTempSnsrErrCode);
		fun << (ITS_ChiTempSnsrErrCode);
		fun << (ITS_LIN_CommunicateErrCode);
		fun << (ITS_FanRelayEnableErrCode);
		fun << (ITS_PwrSupplyErrCode);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ITS_ValvePositionAct);
		fun >> (ITS_ECVPosnAct);
		fun >> (ITS_HeaterPumpSpdAct);
		fun >> (ITS_MotorInletTemp);
		fun >> (ITS_BatteryInletTemp);
		fun >> (ITS_ChillerInletTemp);
		fun >> (ITS_BatteryPumpSpdAct);
		fun >> (ITS_MotorPumpSpdAct);
		fun >> (bsw_nFanActspdU16);
		fun >> (bsw_iFanCurrF32);
		fun >> (bsw_uFanVoltF32);
		fun >> (stm_bFanRelayEnB);
		fun >> (bsw_iMotPmpBusCurrF32);
		fun >> (bsw_iBatPmpBusCurrF32);
		fun >> (bsw_iHeatrPmpBusCurrF32);
		fun >> (bsw_uItsVoltF32);
		fun >> (bsw_cEmvHallctrU16);
		fun >> (bsw_cEsvHallCtrU16);
		fun >> (ITS_MotorPumpErrCode);
		fun >> (ITS_BatteryPumpErrCode);
		fun >> (ITS_HeaterPumpErrCode);
		fun >> (ITS_EmvErrCode);
		fun >> (ITS_EcvErrCode);
		fun >> (ITS_FanErrCode);
		fun >> (ITS_SolenoidValveErrCode);
		fun >> (ITS_MotTempSnsrErrCode);
		fun >> (ITS_BatTempSnsrErrCode);
		fun >> (ITS_ChiTempSnsrErrCode);
		fun >> (ITS_LIN_CommunicateErrCode);
		fun >> (ITS_FanRelayEnableErrCode);
		fun >> (ITS_PwrSupplyErrCode);
	}
};

#endif //____BDCITSBSW_H__
