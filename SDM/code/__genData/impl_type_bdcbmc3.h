#ifndef ____BDCBMC3_H__
#define ____BDCBMC3_H__


#include "cstdint"






struct BDCBMC3 {
public:
	std::uint8_t BMC_DrivePrecRlySts;
	std::uint8_t BMC_DriveNegRlySts;
	std::uint8_t BMC_DrivePosRlySts;
	std::uint8_t BMC_DriveDCRlySts;
	std::uint16_t BMC_NegVolt;
	std::uint16_t BMC_BusVolt;
	std::uint16_t BMC_DCVolt;
	std::uint8_t BMC_StBcu;
	std::uint8_t BMC_StNM;
	std::uint8_t BMC_LvPwrSysMsgWarn;
	std::uint8_t BMC_PowerFailInfo;
	std::uint8_t BMC_ResetReason;
	std::uint8_t BMC_StNvMSocReadState;
	std::uint8_t BMC_DcChgrErrInfo;
	std::uint8_t BMC_OperationModeSt;
	std::uint8_t BMC_Ins_Step;
	std::uint16_t BMC_Ins_PosVolt;
	std::uint16_t BMC_Ins_NegVolt;
/*
	BDCBMC3() {}
	~BDCBMC3() {}
	BDCBMC3(const std::uint8_t _BMC_DrivePrecRlySts,const std::uint8_t _BMC_DriveNegRlySts,const std::uint8_t _BMC_DrivePosRlySts,const std::uint8_t _BMC_DriveDCRlySts,const std::uint16_t _BMC_NegVolt,const std::uint16_t _BMC_BusVolt,const std::uint16_t _BMC_DCVolt,const std::uint8_t _BMC_StBcu,const std::uint8_t _BMC_StNM,const std::uint8_t _BMC_LvPwrSysMsgWarn,const std::uint8_t _BMC_PowerFailInfo,const std::uint8_t _BMC_ResetReason,const std::uint8_t _BMC_StNvMSocReadState,const std::uint8_t _BMC_DcChgrErrInfo,const std::uint8_t _BMC_OperationModeSt,const std::uint8_t _BMC_Ins_Step,const std::uint16_t _BMC_Ins_PosVolt,const std::uint16_t _BMC_Ins_NegVolt):BMC_DrivePrecRlySts(_BMC_DrivePrecRlySts),BMC_DriveNegRlySts(_BMC_DriveNegRlySts),BMC_DrivePosRlySts(_BMC_DrivePosRlySts),BMC_DriveDCRlySts(_BMC_DriveDCRlySts),BMC_NegVolt(_BMC_NegVolt),BMC_BusVolt(_BMC_BusVolt),BMC_DCVolt(_BMC_DCVolt),BMC_StBcu(_BMC_StBcu),BMC_StNM(_BMC_StNM),BMC_LvPwrSysMsgWarn(_BMC_LvPwrSysMsgWarn),BMC_PowerFailInfo(_BMC_PowerFailInfo),BMC_ResetReason(_BMC_ResetReason),BMC_StNvMSocReadState(_BMC_StNvMSocReadState),BMC_DcChgrErrInfo(_BMC_DcChgrErrInfo),BMC_OperationModeSt(_BMC_OperationModeSt),BMC_Ins_Step(_BMC_Ins_Step),BMC_Ins_PosVolt(_BMC_Ins_PosVolt),BMC_Ins_NegVolt(_BMC_Ins_NegVolt) {}
	BDCBMC3(const BDCBMC3 &_x){
		BMC_DrivePrecRlySts = _x.BMC_DrivePrecRlySts;
		BMC_DriveNegRlySts = _x.BMC_DriveNegRlySts;
		BMC_DrivePosRlySts = _x.BMC_DrivePosRlySts;
		BMC_DriveDCRlySts = _x.BMC_DriveDCRlySts;
		BMC_NegVolt = _x.BMC_NegVolt;
		BMC_BusVolt = _x.BMC_BusVolt;
		BMC_DCVolt = _x.BMC_DCVolt;
		BMC_StBcu = _x.BMC_StBcu;
		BMC_StNM = _x.BMC_StNM;
		BMC_LvPwrSysMsgWarn = _x.BMC_LvPwrSysMsgWarn;
		BMC_PowerFailInfo = _x.BMC_PowerFailInfo;
		BMC_ResetReason = _x.BMC_ResetReason;
		BMC_StNvMSocReadState = _x.BMC_StNvMSocReadState;
		BMC_DcChgrErrInfo = _x.BMC_DcChgrErrInfo;
		BMC_OperationModeSt = _x.BMC_OperationModeSt;
		BMC_Ins_Step = _x.BMC_Ins_Step;
		BMC_Ins_PosVolt = _x.BMC_Ins_PosVolt;
		BMC_Ins_NegVolt = _x.BMC_Ins_NegVolt;
	}
	BDCBMC3(BDCBMC3 &&_x){
		BMC_DrivePrecRlySts = std::move(_x.BMC_DrivePrecRlySts);
		BMC_DriveNegRlySts = std::move(_x.BMC_DriveNegRlySts);
		BMC_DrivePosRlySts = std::move(_x.BMC_DrivePosRlySts);
		BMC_DriveDCRlySts = std::move(_x.BMC_DriveDCRlySts);
		BMC_NegVolt = std::move(_x.BMC_NegVolt);
		BMC_BusVolt = std::move(_x.BMC_BusVolt);
		BMC_DCVolt = std::move(_x.BMC_DCVolt);
		BMC_StBcu = std::move(_x.BMC_StBcu);
		BMC_StNM = std::move(_x.BMC_StNM);
		BMC_LvPwrSysMsgWarn = std::move(_x.BMC_LvPwrSysMsgWarn);
		BMC_PowerFailInfo = std::move(_x.BMC_PowerFailInfo);
		BMC_ResetReason = std::move(_x.BMC_ResetReason);
		BMC_StNvMSocReadState = std::move(_x.BMC_StNvMSocReadState);
		BMC_DcChgrErrInfo = std::move(_x.BMC_DcChgrErrInfo);
		BMC_OperationModeSt = std::move(_x.BMC_OperationModeSt);
		BMC_Ins_Step = std::move(_x.BMC_Ins_Step);
		BMC_Ins_PosVolt = std::move(_x.BMC_Ins_PosVolt);
		BMC_Ins_NegVolt = std::move(_x.BMC_Ins_NegVolt);
	}
	BDCBMC3& operator=(const BDCBMC3 &_x){
		BMC_DrivePrecRlySts = _x.BMC_DrivePrecRlySts;
		BMC_DriveNegRlySts = _x.BMC_DriveNegRlySts;
		BMC_DrivePosRlySts = _x.BMC_DrivePosRlySts;
		BMC_DriveDCRlySts = _x.BMC_DriveDCRlySts;
		BMC_NegVolt = _x.BMC_NegVolt;
		BMC_BusVolt = _x.BMC_BusVolt;
		BMC_DCVolt = _x.BMC_DCVolt;
		BMC_StBcu = _x.BMC_StBcu;
		BMC_StNM = _x.BMC_StNM;
		BMC_LvPwrSysMsgWarn = _x.BMC_LvPwrSysMsgWarn;
		BMC_PowerFailInfo = _x.BMC_PowerFailInfo;
		BMC_ResetReason = _x.BMC_ResetReason;
		BMC_StNvMSocReadState = _x.BMC_StNvMSocReadState;
		BMC_DcChgrErrInfo = _x.BMC_DcChgrErrInfo;
		BMC_OperationModeSt = _x.BMC_OperationModeSt;
		BMC_Ins_Step = _x.BMC_Ins_Step;
		BMC_Ins_PosVolt = _x.BMC_Ins_PosVolt;
		BMC_Ins_NegVolt = _x.BMC_Ins_NegVolt;
		return *this;
	}
	BDCBMC3& operator=(BDCBMC3 &&_x){
		BMC_DrivePrecRlySts = std::move(_x.BMC_DrivePrecRlySts);
		BMC_DriveNegRlySts = std::move(_x.BMC_DriveNegRlySts);
		BMC_DrivePosRlySts = std::move(_x.BMC_DrivePosRlySts);
		BMC_DriveDCRlySts = std::move(_x.BMC_DriveDCRlySts);
		BMC_NegVolt = std::move(_x.BMC_NegVolt);
		BMC_BusVolt = std::move(_x.BMC_BusVolt);
		BMC_DCVolt = std::move(_x.BMC_DCVolt);
		BMC_StBcu = std::move(_x.BMC_StBcu);
		BMC_StNM = std::move(_x.BMC_StNM);
		BMC_LvPwrSysMsgWarn = std::move(_x.BMC_LvPwrSysMsgWarn);
		BMC_PowerFailInfo = std::move(_x.BMC_PowerFailInfo);
		BMC_ResetReason = std::move(_x.BMC_ResetReason);
		BMC_StNvMSocReadState = std::move(_x.BMC_StNvMSocReadState);
		BMC_DcChgrErrInfo = std::move(_x.BMC_DcChgrErrInfo);
		BMC_OperationModeSt = std::move(_x.BMC_OperationModeSt);
		BMC_Ins_Step = std::move(_x.BMC_Ins_Step);
		BMC_Ins_PosVolt = std::move(_x.BMC_Ins_PosVolt);
		BMC_Ins_NegVolt = std::move(_x.BMC_Ins_NegVolt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_DrivePrecRlySts);
		fun(BMC_DriveNegRlySts);
		fun(BMC_DrivePosRlySts);
		fun(BMC_DriveDCRlySts);
		fun(BMC_NegVolt);
		fun(BMC_BusVolt);
		fun(BMC_DCVolt);
		fun(BMC_StBcu);
		fun(BMC_StNM);
		fun(BMC_LvPwrSysMsgWarn);
		fun(BMC_PowerFailInfo);
		fun(BMC_ResetReason);
		fun(BMC_StNvMSocReadState);
		fun(BMC_DcChgrErrInfo);
		fun(BMC_OperationModeSt);
		fun(BMC_Ins_Step);
		fun(BMC_Ins_PosVolt);
		fun(BMC_Ins_NegVolt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_DrivePrecRlySts);
		fun(BMC_DriveNegRlySts);
		fun(BMC_DrivePosRlySts);
		fun(BMC_DriveDCRlySts);
		fun(BMC_NegVolt);
		fun(BMC_BusVolt);
		fun(BMC_DCVolt);
		fun(BMC_StBcu);
		fun(BMC_StNM);
		fun(BMC_LvPwrSysMsgWarn);
		fun(BMC_PowerFailInfo);
		fun(BMC_ResetReason);
		fun(BMC_StNvMSocReadState);
		fun(BMC_DcChgrErrInfo);
		fun(BMC_OperationModeSt);
		fun(BMC_Ins_Step);
		fun(BMC_Ins_PosVolt);
		fun(BMC_Ins_NegVolt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_DrivePrecRlySts);
		fun << (BMC_DriveNegRlySts);
		fun << (BMC_DrivePosRlySts);
		fun << (BMC_DriveDCRlySts);
		fun << (BMC_NegVolt);
		fun << (BMC_BusVolt);
		fun << (BMC_DCVolt);
		fun << (BMC_StBcu);
		fun << (BMC_StNM);
		fun << (BMC_LvPwrSysMsgWarn);
		fun << (BMC_PowerFailInfo);
		fun << (BMC_ResetReason);
		fun << (BMC_StNvMSocReadState);
		fun << (BMC_DcChgrErrInfo);
		fun << (BMC_OperationModeSt);
		fun << (BMC_Ins_Step);
		fun << (BMC_Ins_PosVolt);
		fun << (BMC_Ins_NegVolt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_DrivePrecRlySts);
		fun >> (BMC_DriveNegRlySts);
		fun >> (BMC_DrivePosRlySts);
		fun >> (BMC_DriveDCRlySts);
		fun >> (BMC_NegVolt);
		fun >> (BMC_BusVolt);
		fun >> (BMC_DCVolt);
		fun >> (BMC_StBcu);
		fun >> (BMC_StNM);
		fun >> (BMC_LvPwrSysMsgWarn);
		fun >> (BMC_PowerFailInfo);
		fun >> (BMC_ResetReason);
		fun >> (BMC_StNvMSocReadState);
		fun >> (BMC_DcChgrErrInfo);
		fun >> (BMC_OperationModeSt);
		fun >> (BMC_Ins_Step);
		fun >> (BMC_Ins_PosVolt);
		fun >> (BMC_Ins_NegVolt);
	}
};

#endif //____BDCBMC3_H__
