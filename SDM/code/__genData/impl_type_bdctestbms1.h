#ifndef ____BDCTESTBMS1_H__
#define ____BDCTESTBMS1_H__


#include "cstdint"






struct BDCTestBMS1 {
public:
	std::uint16_t BMS_BattCurr;
	std::uint8_t BMS_HvilSt;
	std::uint8_t BMS_HVBattSt;
	std::uint8_t BMS_InslSt;
	std::uint8_t BMS_PwrDwnReq;
	std::uint8_t BMS_EmgLineSt;
	std::uint16_t BMS_ChgPwrMax10s;
	std::uint16_t BMS_DisPwrMax10s;
	std::uint16_t BMS_ChgPwrMax2s;
	std::uint16_t BMS_DisPwrMax2s;
	std::uint8_t BMS_DiagErrCode;
	std::uint8_t BMS_CellBalSt;
	std::uint16_t BMS_BusVolt;
	std::uint8_t BMS_PreRlySt;
	std::uint8_t BMS_MainPosRlySt;
	std::uint8_t BMS_MainNegRlySt;
	std::uint8_t BMS_DrvPrecRlySt;
	std::uint8_t BMS_DrvNegRlySt;
	std::uint8_t BMS_DrvPosRlySt;
	std::uint8_t BMS_KL15WakeUpSt;
	std::uint8_t BMS_CANWakeUpSt;
	std::uint8_t BMS_RTCWakeUpSt;
	std::uint8_t BMS_AplusWakeUpSt;
	std::uint8_t BMS_CC2WakeUpSt;
	std::uint8_t BMS_DCRlySt;
	std::uint8_t BMS_DrvDCRlySt;
/*
	BDCTestBMS1() {}
	~BDCTestBMS1() {}
	BDCTestBMS1(const std::uint16_t _BMS_BattCurr,const std::uint8_t _BMS_HvilSt,const std::uint8_t _BMS_HVBattSt,const std::uint8_t _BMS_InslSt,const std::uint8_t _BMS_PwrDwnReq,const std::uint8_t _BMS_EmgLineSt,const std::uint16_t _BMS_ChgPwrMax10s,const std::uint16_t _BMS_DisPwrMax10s,const std::uint16_t _BMS_ChgPwrMax2s,const std::uint16_t _BMS_DisPwrMax2s,const std::uint8_t _BMS_DiagErrCode,const std::uint8_t _BMS_CellBalSt,const std::uint16_t _BMS_BusVolt,const std::uint8_t _BMS_PreRlySt,const std::uint8_t _BMS_MainPosRlySt,const std::uint8_t _BMS_MainNegRlySt,const std::uint8_t _BMS_DrvPrecRlySt,const std::uint8_t _BMS_DrvNegRlySt,const std::uint8_t _BMS_DrvPosRlySt,const std::uint8_t _BMS_KL15WakeUpSt,const std::uint8_t _BMS_CANWakeUpSt,const std::uint8_t _BMS_RTCWakeUpSt,const std::uint8_t _BMS_AplusWakeUpSt,const std::uint8_t _BMS_CC2WakeUpSt,const std::uint8_t _BMS_DCRlySt,const std::uint8_t _BMS_DrvDCRlySt):BMS_BattCurr(_BMS_BattCurr),BMS_HvilSt(_BMS_HvilSt),BMS_HVBattSt(_BMS_HVBattSt),BMS_InslSt(_BMS_InslSt),BMS_PwrDwnReq(_BMS_PwrDwnReq),BMS_EmgLineSt(_BMS_EmgLineSt),BMS_ChgPwrMax10s(_BMS_ChgPwrMax10s),BMS_DisPwrMax10s(_BMS_DisPwrMax10s),BMS_ChgPwrMax2s(_BMS_ChgPwrMax2s),BMS_DisPwrMax2s(_BMS_DisPwrMax2s),BMS_DiagErrCode(_BMS_DiagErrCode),BMS_CellBalSt(_BMS_CellBalSt),BMS_BusVolt(_BMS_BusVolt),BMS_PreRlySt(_BMS_PreRlySt),BMS_MainPosRlySt(_BMS_MainPosRlySt),BMS_MainNegRlySt(_BMS_MainNegRlySt),BMS_DrvPrecRlySt(_BMS_DrvPrecRlySt),BMS_DrvNegRlySt(_BMS_DrvNegRlySt),BMS_DrvPosRlySt(_BMS_DrvPosRlySt),BMS_KL15WakeUpSt(_BMS_KL15WakeUpSt),BMS_CANWakeUpSt(_BMS_CANWakeUpSt),BMS_RTCWakeUpSt(_BMS_RTCWakeUpSt),BMS_AplusWakeUpSt(_BMS_AplusWakeUpSt),BMS_CC2WakeUpSt(_BMS_CC2WakeUpSt),BMS_DCRlySt(_BMS_DCRlySt),BMS_DrvDCRlySt(_BMS_DrvDCRlySt) {}
	BDCTestBMS1(const BDCTestBMS1 &_x){
		BMS_BattCurr = _x.BMS_BattCurr;
		BMS_HvilSt = _x.BMS_HvilSt;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		BMS_InslSt = _x.BMS_InslSt;
		BMS_PwrDwnReq = _x.BMS_PwrDwnReq;
		BMS_EmgLineSt = _x.BMS_EmgLineSt;
		BMS_ChgPwrMax10s = _x.BMS_ChgPwrMax10s;
		BMS_DisPwrMax10s = _x.BMS_DisPwrMax10s;
		BMS_ChgPwrMax2s = _x.BMS_ChgPwrMax2s;
		BMS_DisPwrMax2s = _x.BMS_DisPwrMax2s;
		BMS_DiagErrCode = _x.BMS_DiagErrCode;
		BMS_CellBalSt = _x.BMS_CellBalSt;
		BMS_BusVolt = _x.BMS_BusVolt;
		BMS_PreRlySt = _x.BMS_PreRlySt;
		BMS_MainPosRlySt = _x.BMS_MainPosRlySt;
		BMS_MainNegRlySt = _x.BMS_MainNegRlySt;
		BMS_DrvPrecRlySt = _x.BMS_DrvPrecRlySt;
		BMS_DrvNegRlySt = _x.BMS_DrvNegRlySt;
		BMS_DrvPosRlySt = _x.BMS_DrvPosRlySt;
		BMS_KL15WakeUpSt = _x.BMS_KL15WakeUpSt;
		BMS_CANWakeUpSt = _x.BMS_CANWakeUpSt;
		BMS_RTCWakeUpSt = _x.BMS_RTCWakeUpSt;
		BMS_AplusWakeUpSt = _x.BMS_AplusWakeUpSt;
		BMS_CC2WakeUpSt = _x.BMS_CC2WakeUpSt;
		BMS_DCRlySt = _x.BMS_DCRlySt;
		BMS_DrvDCRlySt = _x.BMS_DrvDCRlySt;
	}
	BDCTestBMS1(BDCTestBMS1 &&_x){
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
		BMS_HvilSt = std::move(_x.BMS_HvilSt);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		BMS_InslSt = std::move(_x.BMS_InslSt);
		BMS_PwrDwnReq = std::move(_x.BMS_PwrDwnReq);
		BMS_EmgLineSt = std::move(_x.BMS_EmgLineSt);
		BMS_ChgPwrMax10s = std::move(_x.BMS_ChgPwrMax10s);
		BMS_DisPwrMax10s = std::move(_x.BMS_DisPwrMax10s);
		BMS_ChgPwrMax2s = std::move(_x.BMS_ChgPwrMax2s);
		BMS_DisPwrMax2s = std::move(_x.BMS_DisPwrMax2s);
		BMS_DiagErrCode = std::move(_x.BMS_DiagErrCode);
		BMS_CellBalSt = std::move(_x.BMS_CellBalSt);
		BMS_BusVolt = std::move(_x.BMS_BusVolt);
		BMS_PreRlySt = std::move(_x.BMS_PreRlySt);
		BMS_MainPosRlySt = std::move(_x.BMS_MainPosRlySt);
		BMS_MainNegRlySt = std::move(_x.BMS_MainNegRlySt);
		BMS_DrvPrecRlySt = std::move(_x.BMS_DrvPrecRlySt);
		BMS_DrvNegRlySt = std::move(_x.BMS_DrvNegRlySt);
		BMS_DrvPosRlySt = std::move(_x.BMS_DrvPosRlySt);
		BMS_KL15WakeUpSt = std::move(_x.BMS_KL15WakeUpSt);
		BMS_CANWakeUpSt = std::move(_x.BMS_CANWakeUpSt);
		BMS_RTCWakeUpSt = std::move(_x.BMS_RTCWakeUpSt);
		BMS_AplusWakeUpSt = std::move(_x.BMS_AplusWakeUpSt);
		BMS_CC2WakeUpSt = std::move(_x.BMS_CC2WakeUpSt);
		BMS_DCRlySt = std::move(_x.BMS_DCRlySt);
		BMS_DrvDCRlySt = std::move(_x.BMS_DrvDCRlySt);
	}
	BDCTestBMS1& operator=(const BDCTestBMS1 &_x){
		BMS_BattCurr = _x.BMS_BattCurr;
		BMS_HvilSt = _x.BMS_HvilSt;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		BMS_InslSt = _x.BMS_InslSt;
		BMS_PwrDwnReq = _x.BMS_PwrDwnReq;
		BMS_EmgLineSt = _x.BMS_EmgLineSt;
		BMS_ChgPwrMax10s = _x.BMS_ChgPwrMax10s;
		BMS_DisPwrMax10s = _x.BMS_DisPwrMax10s;
		BMS_ChgPwrMax2s = _x.BMS_ChgPwrMax2s;
		BMS_DisPwrMax2s = _x.BMS_DisPwrMax2s;
		BMS_DiagErrCode = _x.BMS_DiagErrCode;
		BMS_CellBalSt = _x.BMS_CellBalSt;
		BMS_BusVolt = _x.BMS_BusVolt;
		BMS_PreRlySt = _x.BMS_PreRlySt;
		BMS_MainPosRlySt = _x.BMS_MainPosRlySt;
		BMS_MainNegRlySt = _x.BMS_MainNegRlySt;
		BMS_DrvPrecRlySt = _x.BMS_DrvPrecRlySt;
		BMS_DrvNegRlySt = _x.BMS_DrvNegRlySt;
		BMS_DrvPosRlySt = _x.BMS_DrvPosRlySt;
		BMS_KL15WakeUpSt = _x.BMS_KL15WakeUpSt;
		BMS_CANWakeUpSt = _x.BMS_CANWakeUpSt;
		BMS_RTCWakeUpSt = _x.BMS_RTCWakeUpSt;
		BMS_AplusWakeUpSt = _x.BMS_AplusWakeUpSt;
		BMS_CC2WakeUpSt = _x.BMS_CC2WakeUpSt;
		BMS_DCRlySt = _x.BMS_DCRlySt;
		BMS_DrvDCRlySt = _x.BMS_DrvDCRlySt;
		return *this;
	}
	BDCTestBMS1& operator=(BDCTestBMS1 &&_x){
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
		BMS_HvilSt = std::move(_x.BMS_HvilSt);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		BMS_InslSt = std::move(_x.BMS_InslSt);
		BMS_PwrDwnReq = std::move(_x.BMS_PwrDwnReq);
		BMS_EmgLineSt = std::move(_x.BMS_EmgLineSt);
		BMS_ChgPwrMax10s = std::move(_x.BMS_ChgPwrMax10s);
		BMS_DisPwrMax10s = std::move(_x.BMS_DisPwrMax10s);
		BMS_ChgPwrMax2s = std::move(_x.BMS_ChgPwrMax2s);
		BMS_DisPwrMax2s = std::move(_x.BMS_DisPwrMax2s);
		BMS_DiagErrCode = std::move(_x.BMS_DiagErrCode);
		BMS_CellBalSt = std::move(_x.BMS_CellBalSt);
		BMS_BusVolt = std::move(_x.BMS_BusVolt);
		BMS_PreRlySt = std::move(_x.BMS_PreRlySt);
		BMS_MainPosRlySt = std::move(_x.BMS_MainPosRlySt);
		BMS_MainNegRlySt = std::move(_x.BMS_MainNegRlySt);
		BMS_DrvPrecRlySt = std::move(_x.BMS_DrvPrecRlySt);
		BMS_DrvNegRlySt = std::move(_x.BMS_DrvNegRlySt);
		BMS_DrvPosRlySt = std::move(_x.BMS_DrvPosRlySt);
		BMS_KL15WakeUpSt = std::move(_x.BMS_KL15WakeUpSt);
		BMS_CANWakeUpSt = std::move(_x.BMS_CANWakeUpSt);
		BMS_RTCWakeUpSt = std::move(_x.BMS_RTCWakeUpSt);
		BMS_AplusWakeUpSt = std::move(_x.BMS_AplusWakeUpSt);
		BMS_CC2WakeUpSt = std::move(_x.BMS_CC2WakeUpSt);
		BMS_DCRlySt = std::move(_x.BMS_DCRlySt);
		BMS_DrvDCRlySt = std::move(_x.BMS_DrvDCRlySt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_BattCurr);
		fun(BMS_HvilSt);
		fun(BMS_HVBattSt);
		fun(BMS_InslSt);
		fun(BMS_PwrDwnReq);
		fun(BMS_EmgLineSt);
		fun(BMS_ChgPwrMax10s);
		fun(BMS_DisPwrMax10s);
		fun(BMS_ChgPwrMax2s);
		fun(BMS_DisPwrMax2s);
		fun(BMS_DiagErrCode);
		fun(BMS_CellBalSt);
		fun(BMS_BusVolt);
		fun(BMS_PreRlySt);
		fun(BMS_MainPosRlySt);
		fun(BMS_MainNegRlySt);
		fun(BMS_DrvPrecRlySt);
		fun(BMS_DrvNegRlySt);
		fun(BMS_DrvPosRlySt);
		fun(BMS_KL15WakeUpSt);
		fun(BMS_CANWakeUpSt);
		fun(BMS_RTCWakeUpSt);
		fun(BMS_AplusWakeUpSt);
		fun(BMS_CC2WakeUpSt);
		fun(BMS_DCRlySt);
		fun(BMS_DrvDCRlySt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_BattCurr);
		fun(BMS_HvilSt);
		fun(BMS_HVBattSt);
		fun(BMS_InslSt);
		fun(BMS_PwrDwnReq);
		fun(BMS_EmgLineSt);
		fun(BMS_ChgPwrMax10s);
		fun(BMS_DisPwrMax10s);
		fun(BMS_ChgPwrMax2s);
		fun(BMS_DisPwrMax2s);
		fun(BMS_DiagErrCode);
		fun(BMS_CellBalSt);
		fun(BMS_BusVolt);
		fun(BMS_PreRlySt);
		fun(BMS_MainPosRlySt);
		fun(BMS_MainNegRlySt);
		fun(BMS_DrvPrecRlySt);
		fun(BMS_DrvNegRlySt);
		fun(BMS_DrvPosRlySt);
		fun(BMS_KL15WakeUpSt);
		fun(BMS_CANWakeUpSt);
		fun(BMS_RTCWakeUpSt);
		fun(BMS_AplusWakeUpSt);
		fun(BMS_CC2WakeUpSt);
		fun(BMS_DCRlySt);
		fun(BMS_DrvDCRlySt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_BattCurr);
		fun << (BMS_HvilSt);
		fun << (BMS_HVBattSt);
		fun << (BMS_InslSt);
		fun << (BMS_PwrDwnReq);
		fun << (BMS_EmgLineSt);
		fun << (BMS_ChgPwrMax10s);
		fun << (BMS_DisPwrMax10s);
		fun << (BMS_ChgPwrMax2s);
		fun << (BMS_DisPwrMax2s);
		fun << (BMS_DiagErrCode);
		fun << (BMS_CellBalSt);
		fun << (BMS_BusVolt);
		fun << (BMS_PreRlySt);
		fun << (BMS_MainPosRlySt);
		fun << (BMS_MainNegRlySt);
		fun << (BMS_DrvPrecRlySt);
		fun << (BMS_DrvNegRlySt);
		fun << (BMS_DrvPosRlySt);
		fun << (BMS_KL15WakeUpSt);
		fun << (BMS_CANWakeUpSt);
		fun << (BMS_RTCWakeUpSt);
		fun << (BMS_AplusWakeUpSt);
		fun << (BMS_CC2WakeUpSt);
		fun << (BMS_DCRlySt);
		fun << (BMS_DrvDCRlySt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_BattCurr);
		fun >> (BMS_HvilSt);
		fun >> (BMS_HVBattSt);
		fun >> (BMS_InslSt);
		fun >> (BMS_PwrDwnReq);
		fun >> (BMS_EmgLineSt);
		fun >> (BMS_ChgPwrMax10s);
		fun >> (BMS_DisPwrMax10s);
		fun >> (BMS_ChgPwrMax2s);
		fun >> (BMS_DisPwrMax2s);
		fun >> (BMS_DiagErrCode);
		fun >> (BMS_CellBalSt);
		fun >> (BMS_BusVolt);
		fun >> (BMS_PreRlySt);
		fun >> (BMS_MainPosRlySt);
		fun >> (BMS_MainNegRlySt);
		fun >> (BMS_DrvPrecRlySt);
		fun >> (BMS_DrvNegRlySt);
		fun >> (BMS_DrvPosRlySt);
		fun >> (BMS_KL15WakeUpSt);
		fun >> (BMS_CANWakeUpSt);
		fun >> (BMS_RTCWakeUpSt);
		fun >> (BMS_AplusWakeUpSt);
		fun >> (BMS_CC2WakeUpSt);
		fun >> (BMS_DCRlySt);
		fun >> (BMS_DrvDCRlySt);
	}
};

#endif //____BDCTESTBMS1_H__
