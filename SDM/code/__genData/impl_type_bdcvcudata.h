#ifndef ____BDCVCUDATA_H__
#define ____BDCVCUDATA_H__


#include "cstdint"






struct BDCVCUData {
public:
	std::uint8_t VCU_RecpLevelstResp;
	std::uint8_t VCU_VehChgDischgSt;
	std::uint8_t VCU_IpedalCreepCfgResp;
	std::uint8_t VCU_BDataUploadReq;
	std::uint8_t VCU_HvilSt;
	std::uint8_t VCU_BMS_BatModeReq;
	std::uint8_t VCU_BMS_SepaHeatEn;
	std::uint16_t VCU_IPS_OBCChgVoltReq;
	std::uint16_t VCU_IPS_OBCChgCurrReq;
	std::uint16_t VCU_DcChgCurrOutReq;
	std::uint16_t VCU_DcChgVoltOutReq;
	std::uint32_t VCU_ReplaceBattSubtotal;
	std::uint16_t BMS_CounReplaceBattTimes;
	std::uint8_t VCU_NewBattRemainEnergy;
	std::uint8_t VCU_DischgSt;
	std::uint8_t VCU_DischgAvai;
	std::uint8_t VCU_WarmSt;
	std::uint8_t VCU_ElcSysFault;
	std::uint8_t VCU_FaultLampInd;
	std::uint8_t VCU_VehRdySt;
	std::uint8_t VCU_ThermalMsgWarn;
	std::uint8_t VCU_PlgConnSt;
	std::uint8_t VCU_IDC_VehSwapModIntf;
	std::uint8_t VCU_ACChPlgSt;
	std::uint8_t VCU_SwapHvBattRdySt;
	std::uint8_t VCU_SwapHvBattCompSt;
	std::uint8_t VCU_SwapHvBattModeSt;
	std::uint8_t VCU_SwapHvBattModeStVD;
	std::uint16_t VCU_VehRng;
	std::uint8_t VCU_BattSocUndrWarn;
/*
	BDCVCUData() {}
	~BDCVCUData() {}
	BDCVCUData(const std::uint8_t _VCU_RecpLevelstResp,const std::uint8_t _VCU_VehChgDischgSt,const std::uint8_t _VCU_IpedalCreepCfgResp,const std::uint8_t _VCU_BDataUploadReq,const std::uint8_t _VCU_HvilSt,const std::uint8_t _VCU_BMS_BatModeReq,const std::uint8_t _VCU_BMS_SepaHeatEn,const std::uint16_t _VCU_IPS_OBCChgVoltReq,const std::uint16_t _VCU_IPS_OBCChgCurrReq,const std::uint16_t _VCU_DcChgCurrOutReq,const std::uint16_t _VCU_DcChgVoltOutReq,const std::uint32_t _VCU_ReplaceBattSubtotal,const std::uint16_t _BMS_CounReplaceBattTimes,const std::uint8_t _VCU_NewBattRemainEnergy,const std::uint8_t _VCU_DischgSt,const std::uint8_t _VCU_DischgAvai,const std::uint8_t _VCU_WarmSt,const std::uint8_t _VCU_ElcSysFault,const std::uint8_t _VCU_FaultLampInd,const std::uint8_t _VCU_VehRdySt,const std::uint8_t _VCU_ThermalMsgWarn,const std::uint8_t _VCU_PlgConnSt,const std::uint8_t _VCU_IDC_VehSwapModIntf,const std::uint8_t _VCU_ACChPlgSt,const std::uint8_t _VCU_SwapHvBattRdySt,const std::uint8_t _VCU_SwapHvBattCompSt,const std::uint8_t _VCU_SwapHvBattModeSt,const std::uint8_t _VCU_SwapHvBattModeStVD,const std::uint16_t _VCU_VehRng,const std::uint8_t _VCU_BattSocUndrWarn):VCU_RecpLevelstResp(_VCU_RecpLevelstResp),VCU_VehChgDischgSt(_VCU_VehChgDischgSt),VCU_IpedalCreepCfgResp(_VCU_IpedalCreepCfgResp),VCU_BDataUploadReq(_VCU_BDataUploadReq),VCU_HvilSt(_VCU_HvilSt),VCU_BMS_BatModeReq(_VCU_BMS_BatModeReq),VCU_BMS_SepaHeatEn(_VCU_BMS_SepaHeatEn),VCU_IPS_OBCChgVoltReq(_VCU_IPS_OBCChgVoltReq),VCU_IPS_OBCChgCurrReq(_VCU_IPS_OBCChgCurrReq),VCU_DcChgCurrOutReq(_VCU_DcChgCurrOutReq),VCU_DcChgVoltOutReq(_VCU_DcChgVoltOutReq),VCU_ReplaceBattSubtotal(_VCU_ReplaceBattSubtotal),BMS_CounReplaceBattTimes(_BMS_CounReplaceBattTimes),VCU_NewBattRemainEnergy(_VCU_NewBattRemainEnergy),VCU_DischgSt(_VCU_DischgSt),VCU_DischgAvai(_VCU_DischgAvai),VCU_WarmSt(_VCU_WarmSt),VCU_ElcSysFault(_VCU_ElcSysFault),VCU_FaultLampInd(_VCU_FaultLampInd),VCU_VehRdySt(_VCU_VehRdySt),VCU_ThermalMsgWarn(_VCU_ThermalMsgWarn),VCU_PlgConnSt(_VCU_PlgConnSt),VCU_IDC_VehSwapModIntf(_VCU_IDC_VehSwapModIntf),VCU_ACChPlgSt(_VCU_ACChPlgSt),VCU_SwapHvBattRdySt(_VCU_SwapHvBattRdySt),VCU_SwapHvBattCompSt(_VCU_SwapHvBattCompSt),VCU_SwapHvBattModeSt(_VCU_SwapHvBattModeSt),VCU_SwapHvBattModeStVD(_VCU_SwapHvBattModeStVD),VCU_VehRng(_VCU_VehRng),VCU_BattSocUndrWarn(_VCU_BattSocUndrWarn) {}
	BDCVCUData(const BDCVCUData &_x){
		VCU_RecpLevelstResp = _x.VCU_RecpLevelstResp;
		VCU_VehChgDischgSt = _x.VCU_VehChgDischgSt;
		VCU_IpedalCreepCfgResp = _x.VCU_IpedalCreepCfgResp;
		VCU_BDataUploadReq = _x.VCU_BDataUploadReq;
		VCU_HvilSt = _x.VCU_HvilSt;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
		VCU_BMS_SepaHeatEn = _x.VCU_BMS_SepaHeatEn;
		VCU_IPS_OBCChgVoltReq = _x.VCU_IPS_OBCChgVoltReq;
		VCU_IPS_OBCChgCurrReq = _x.VCU_IPS_OBCChgCurrReq;
		VCU_DcChgCurrOutReq = _x.VCU_DcChgCurrOutReq;
		VCU_DcChgVoltOutReq = _x.VCU_DcChgVoltOutReq;
		VCU_ReplaceBattSubtotal = _x.VCU_ReplaceBattSubtotal;
		BMS_CounReplaceBattTimes = _x.BMS_CounReplaceBattTimes;
		VCU_NewBattRemainEnergy = _x.VCU_NewBattRemainEnergy;
		VCU_DischgSt = _x.VCU_DischgSt;
		VCU_DischgAvai = _x.VCU_DischgAvai;
		VCU_WarmSt = _x.VCU_WarmSt;
		VCU_ElcSysFault = _x.VCU_ElcSysFault;
		VCU_FaultLampInd = _x.VCU_FaultLampInd;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		VCU_ThermalMsgWarn = _x.VCU_ThermalMsgWarn;
		VCU_PlgConnSt = _x.VCU_PlgConnSt;
		VCU_IDC_VehSwapModIntf = _x.VCU_IDC_VehSwapModIntf;
		VCU_ACChPlgSt = _x.VCU_ACChPlgSt;
		VCU_SwapHvBattRdySt = _x.VCU_SwapHvBattRdySt;
		VCU_SwapHvBattCompSt = _x.VCU_SwapHvBattCompSt;
		VCU_SwapHvBattModeSt = _x.VCU_SwapHvBattModeSt;
		VCU_SwapHvBattModeStVD = _x.VCU_SwapHvBattModeStVD;
		VCU_VehRng = _x.VCU_VehRng;
		VCU_BattSocUndrWarn = _x.VCU_BattSocUndrWarn;
	}
	BDCVCUData(BDCVCUData &&_x){
		VCU_RecpLevelstResp = std::move(_x.VCU_RecpLevelstResp);
		VCU_VehChgDischgSt = std::move(_x.VCU_VehChgDischgSt);
		VCU_IpedalCreepCfgResp = std::move(_x.VCU_IpedalCreepCfgResp);
		VCU_BDataUploadReq = std::move(_x.VCU_BDataUploadReq);
		VCU_HvilSt = std::move(_x.VCU_HvilSt);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
		VCU_BMS_SepaHeatEn = std::move(_x.VCU_BMS_SepaHeatEn);
		VCU_IPS_OBCChgVoltReq = std::move(_x.VCU_IPS_OBCChgVoltReq);
		VCU_IPS_OBCChgCurrReq = std::move(_x.VCU_IPS_OBCChgCurrReq);
		VCU_DcChgCurrOutReq = std::move(_x.VCU_DcChgCurrOutReq);
		VCU_DcChgVoltOutReq = std::move(_x.VCU_DcChgVoltOutReq);
		VCU_ReplaceBattSubtotal = std::move(_x.VCU_ReplaceBattSubtotal);
		BMS_CounReplaceBattTimes = std::move(_x.BMS_CounReplaceBattTimes);
		VCU_NewBattRemainEnergy = std::move(_x.VCU_NewBattRemainEnergy);
		VCU_DischgSt = std::move(_x.VCU_DischgSt);
		VCU_DischgAvai = std::move(_x.VCU_DischgAvai);
		VCU_WarmSt = std::move(_x.VCU_WarmSt);
		VCU_ElcSysFault = std::move(_x.VCU_ElcSysFault);
		VCU_FaultLampInd = std::move(_x.VCU_FaultLampInd);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		VCU_ThermalMsgWarn = std::move(_x.VCU_ThermalMsgWarn);
		VCU_PlgConnSt = std::move(_x.VCU_PlgConnSt);
		VCU_IDC_VehSwapModIntf = std::move(_x.VCU_IDC_VehSwapModIntf);
		VCU_ACChPlgSt = std::move(_x.VCU_ACChPlgSt);
		VCU_SwapHvBattRdySt = std::move(_x.VCU_SwapHvBattRdySt);
		VCU_SwapHvBattCompSt = std::move(_x.VCU_SwapHvBattCompSt);
		VCU_SwapHvBattModeSt = std::move(_x.VCU_SwapHvBattModeSt);
		VCU_SwapHvBattModeStVD = std::move(_x.VCU_SwapHvBattModeStVD);
		VCU_VehRng = std::move(_x.VCU_VehRng);
		VCU_BattSocUndrWarn = std::move(_x.VCU_BattSocUndrWarn);
	}
	BDCVCUData& operator=(const BDCVCUData &_x){
		VCU_RecpLevelstResp = _x.VCU_RecpLevelstResp;
		VCU_VehChgDischgSt = _x.VCU_VehChgDischgSt;
		VCU_IpedalCreepCfgResp = _x.VCU_IpedalCreepCfgResp;
		VCU_BDataUploadReq = _x.VCU_BDataUploadReq;
		VCU_HvilSt = _x.VCU_HvilSt;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
		VCU_BMS_SepaHeatEn = _x.VCU_BMS_SepaHeatEn;
		VCU_IPS_OBCChgVoltReq = _x.VCU_IPS_OBCChgVoltReq;
		VCU_IPS_OBCChgCurrReq = _x.VCU_IPS_OBCChgCurrReq;
		VCU_DcChgCurrOutReq = _x.VCU_DcChgCurrOutReq;
		VCU_DcChgVoltOutReq = _x.VCU_DcChgVoltOutReq;
		VCU_ReplaceBattSubtotal = _x.VCU_ReplaceBattSubtotal;
		BMS_CounReplaceBattTimes = _x.BMS_CounReplaceBattTimes;
		VCU_NewBattRemainEnergy = _x.VCU_NewBattRemainEnergy;
		VCU_DischgSt = _x.VCU_DischgSt;
		VCU_DischgAvai = _x.VCU_DischgAvai;
		VCU_WarmSt = _x.VCU_WarmSt;
		VCU_ElcSysFault = _x.VCU_ElcSysFault;
		VCU_FaultLampInd = _x.VCU_FaultLampInd;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		VCU_ThermalMsgWarn = _x.VCU_ThermalMsgWarn;
		VCU_PlgConnSt = _x.VCU_PlgConnSt;
		VCU_IDC_VehSwapModIntf = _x.VCU_IDC_VehSwapModIntf;
		VCU_ACChPlgSt = _x.VCU_ACChPlgSt;
		VCU_SwapHvBattRdySt = _x.VCU_SwapHvBattRdySt;
		VCU_SwapHvBattCompSt = _x.VCU_SwapHvBattCompSt;
		VCU_SwapHvBattModeSt = _x.VCU_SwapHvBattModeSt;
		VCU_SwapHvBattModeStVD = _x.VCU_SwapHvBattModeStVD;
		VCU_VehRng = _x.VCU_VehRng;
		VCU_BattSocUndrWarn = _x.VCU_BattSocUndrWarn;
		return *this;
	}
	BDCVCUData& operator=(BDCVCUData &&_x){
		VCU_RecpLevelstResp = std::move(_x.VCU_RecpLevelstResp);
		VCU_VehChgDischgSt = std::move(_x.VCU_VehChgDischgSt);
		VCU_IpedalCreepCfgResp = std::move(_x.VCU_IpedalCreepCfgResp);
		VCU_BDataUploadReq = std::move(_x.VCU_BDataUploadReq);
		VCU_HvilSt = std::move(_x.VCU_HvilSt);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
		VCU_BMS_SepaHeatEn = std::move(_x.VCU_BMS_SepaHeatEn);
		VCU_IPS_OBCChgVoltReq = std::move(_x.VCU_IPS_OBCChgVoltReq);
		VCU_IPS_OBCChgCurrReq = std::move(_x.VCU_IPS_OBCChgCurrReq);
		VCU_DcChgCurrOutReq = std::move(_x.VCU_DcChgCurrOutReq);
		VCU_DcChgVoltOutReq = std::move(_x.VCU_DcChgVoltOutReq);
		VCU_ReplaceBattSubtotal = std::move(_x.VCU_ReplaceBattSubtotal);
		BMS_CounReplaceBattTimes = std::move(_x.BMS_CounReplaceBattTimes);
		VCU_NewBattRemainEnergy = std::move(_x.VCU_NewBattRemainEnergy);
		VCU_DischgSt = std::move(_x.VCU_DischgSt);
		VCU_DischgAvai = std::move(_x.VCU_DischgAvai);
		VCU_WarmSt = std::move(_x.VCU_WarmSt);
		VCU_ElcSysFault = std::move(_x.VCU_ElcSysFault);
		VCU_FaultLampInd = std::move(_x.VCU_FaultLampInd);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		VCU_ThermalMsgWarn = std::move(_x.VCU_ThermalMsgWarn);
		VCU_PlgConnSt = std::move(_x.VCU_PlgConnSt);
		VCU_IDC_VehSwapModIntf = std::move(_x.VCU_IDC_VehSwapModIntf);
		VCU_ACChPlgSt = std::move(_x.VCU_ACChPlgSt);
		VCU_SwapHvBattRdySt = std::move(_x.VCU_SwapHvBattRdySt);
		VCU_SwapHvBattCompSt = std::move(_x.VCU_SwapHvBattCompSt);
		VCU_SwapHvBattModeSt = std::move(_x.VCU_SwapHvBattModeSt);
		VCU_SwapHvBattModeStVD = std::move(_x.VCU_SwapHvBattModeStVD);
		VCU_VehRng = std::move(_x.VCU_VehRng);
		VCU_BattSocUndrWarn = std::move(_x.VCU_BattSocUndrWarn);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_RecpLevelstResp);
		fun(VCU_VehChgDischgSt);
		fun(VCU_IpedalCreepCfgResp);
		fun(VCU_BDataUploadReq);
		fun(VCU_HvilSt);
		fun(VCU_BMS_BatModeReq);
		fun(VCU_BMS_SepaHeatEn);
		fun(VCU_IPS_OBCChgVoltReq);
		fun(VCU_IPS_OBCChgCurrReq);
		fun(VCU_DcChgCurrOutReq);
		fun(VCU_DcChgVoltOutReq);
		fun(VCU_ReplaceBattSubtotal);
		fun(BMS_CounReplaceBattTimes);
		fun(VCU_NewBattRemainEnergy);
		fun(VCU_DischgSt);
		fun(VCU_DischgAvai);
		fun(VCU_WarmSt);
		fun(VCU_ElcSysFault);
		fun(VCU_FaultLampInd);
		fun(VCU_VehRdySt);
		fun(VCU_ThermalMsgWarn);
		fun(VCU_PlgConnSt);
		fun(VCU_IDC_VehSwapModIntf);
		fun(VCU_ACChPlgSt);
		fun(VCU_SwapHvBattRdySt);
		fun(VCU_SwapHvBattCompSt);
		fun(VCU_SwapHvBattModeSt);
		fun(VCU_SwapHvBattModeStVD);
		fun(VCU_VehRng);
		fun(VCU_BattSocUndrWarn);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_RecpLevelstResp);
		fun(VCU_VehChgDischgSt);
		fun(VCU_IpedalCreepCfgResp);
		fun(VCU_BDataUploadReq);
		fun(VCU_HvilSt);
		fun(VCU_BMS_BatModeReq);
		fun(VCU_BMS_SepaHeatEn);
		fun(VCU_IPS_OBCChgVoltReq);
		fun(VCU_IPS_OBCChgCurrReq);
		fun(VCU_DcChgCurrOutReq);
		fun(VCU_DcChgVoltOutReq);
		fun(VCU_ReplaceBattSubtotal);
		fun(BMS_CounReplaceBattTimes);
		fun(VCU_NewBattRemainEnergy);
		fun(VCU_DischgSt);
		fun(VCU_DischgAvai);
		fun(VCU_WarmSt);
		fun(VCU_ElcSysFault);
		fun(VCU_FaultLampInd);
		fun(VCU_VehRdySt);
		fun(VCU_ThermalMsgWarn);
		fun(VCU_PlgConnSt);
		fun(VCU_IDC_VehSwapModIntf);
		fun(VCU_ACChPlgSt);
		fun(VCU_SwapHvBattRdySt);
		fun(VCU_SwapHvBattCompSt);
		fun(VCU_SwapHvBattModeSt);
		fun(VCU_SwapHvBattModeStVD);
		fun(VCU_VehRng);
		fun(VCU_BattSocUndrWarn);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_RecpLevelstResp);
		fun << (VCU_VehChgDischgSt);
		fun << (VCU_IpedalCreepCfgResp);
		fun << (VCU_BDataUploadReq);
		fun << (VCU_HvilSt);
		fun << (VCU_BMS_BatModeReq);
		fun << (VCU_BMS_SepaHeatEn);
		fun << (VCU_IPS_OBCChgVoltReq);
		fun << (VCU_IPS_OBCChgCurrReq);
		fun << (VCU_DcChgCurrOutReq);
		fun << (VCU_DcChgVoltOutReq);
		fun << (VCU_ReplaceBattSubtotal);
		fun << (BMS_CounReplaceBattTimes);
		fun << (VCU_NewBattRemainEnergy);
		fun << (VCU_DischgSt);
		fun << (VCU_DischgAvai);
		fun << (VCU_WarmSt);
		fun << (VCU_ElcSysFault);
		fun << (VCU_FaultLampInd);
		fun << (VCU_VehRdySt);
		fun << (VCU_ThermalMsgWarn);
		fun << (VCU_PlgConnSt);
		fun << (VCU_IDC_VehSwapModIntf);
		fun << (VCU_ACChPlgSt);
		fun << (VCU_SwapHvBattRdySt);
		fun << (VCU_SwapHvBattCompSt);
		fun << (VCU_SwapHvBattModeSt);
		fun << (VCU_SwapHvBattModeStVD);
		fun << (VCU_VehRng);
		fun << (VCU_BattSocUndrWarn);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_RecpLevelstResp);
		fun >> (VCU_VehChgDischgSt);
		fun >> (VCU_IpedalCreepCfgResp);
		fun >> (VCU_BDataUploadReq);
		fun >> (VCU_HvilSt);
		fun >> (VCU_BMS_BatModeReq);
		fun >> (VCU_BMS_SepaHeatEn);
		fun >> (VCU_IPS_OBCChgVoltReq);
		fun >> (VCU_IPS_OBCChgCurrReq);
		fun >> (VCU_DcChgCurrOutReq);
		fun >> (VCU_DcChgVoltOutReq);
		fun >> (VCU_ReplaceBattSubtotal);
		fun >> (BMS_CounReplaceBattTimes);
		fun >> (VCU_NewBattRemainEnergy);
		fun >> (VCU_DischgSt);
		fun >> (VCU_DischgAvai);
		fun >> (VCU_WarmSt);
		fun >> (VCU_ElcSysFault);
		fun >> (VCU_FaultLampInd);
		fun >> (VCU_VehRdySt);
		fun >> (VCU_ThermalMsgWarn);
		fun >> (VCU_PlgConnSt);
		fun >> (VCU_IDC_VehSwapModIntf);
		fun >> (VCU_ACChPlgSt);
		fun >> (VCU_SwapHvBattRdySt);
		fun >> (VCU_SwapHvBattCompSt);
		fun >> (VCU_SwapHvBattModeSt);
		fun >> (VCU_SwapHvBattModeStVD);
		fun >> (VCU_VehRng);
		fun >> (VCU_BattSocUndrWarn);
	}
};

#endif //____BDCVCUDATA_H__
