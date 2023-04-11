#ifndef ____BDCVCUDATA2_H__
#define ____BDCVCUDATA2_H__


#include "cstdint"






struct BDCVCUDATA2 {
public:
	std::uint8_t VCU_EVRngUndrWarn;
	std::uint8_t VCU_DspChgSt;
	std::uint8_t VCU_ChgTimeDspType;
	std::uint8_t VCU_BookChgLampInd;
	std::uint8_t VCU_AppWarmErr;
	std::uint8_t VCU_AppChgErr;
	std::uint8_t VCU_DriverNoticeDisp;
	std::uint8_t VCU_VehAvailDriveStMsgWarn;
	std::uint8_t VCU_OperatingMode;
	std::uint8_t VCU_VehPwr;
	std::uint8_t VCU_DerateFault;
	std::uint8_t VCU_CCUFaultLampInd;
	std::uint8_t VCU_SysFault;
	std::uint8_t VCU_ARBWarnNotice;
	std::uint8_t VCU_EVPRepair;
	std::uint8_t VCU_ElcVcuuPumpErr;
	std::uint8_t VCU_PrecResHotMsg;
	std::uint8_t VCU_OilPresUndrWarn;
	std::uint8_t VCU_EngSelfMaintDiap;
	std::uint8_t VCU_DischgSocCfgResp;
	std::uint8_t VCU_DischgActiveSt;
	std::uint8_t VCU_DischgEngStartPermit;
	std::uint8_t VCU_DischgEndVehRng;
	std::uint16_t VCU_DischgTimeCount;
	std::uint8_t VCU_ChgActiveSt;
	std::uint8_t VCU_ChgCurrCfgResp;
	std::uint8_t VCU_PlugAutoUnlockCfgResp;
	std::uint8_t VCU_DrvTargetSOEResp;
	std::uint64_t BCM_KeySt;
	std::uint64_t VCU_CreepActiveSt;
	std::uint64_t HVACF_ECPFault;
/*
	BDCVCUDATA2() {}
	~BDCVCUDATA2() {}
	BDCVCUDATA2(const std::uint8_t _VCU_EVRngUndrWarn,const std::uint8_t _VCU_DspChgSt,const std::uint8_t _VCU_ChgTimeDspType,const std::uint8_t _VCU_BookChgLampInd,const std::uint8_t _VCU_AppWarmErr,const std::uint8_t _VCU_AppChgErr,const std::uint8_t _VCU_DriverNoticeDisp,const std::uint8_t _VCU_VehAvailDriveStMsgWarn,const std::uint8_t _VCU_OperatingMode,const std::uint8_t _VCU_VehPwr,const std::uint8_t _VCU_DerateFault,const std::uint8_t _VCU_CCUFaultLampInd,const std::uint8_t _VCU_SysFault,const std::uint8_t _VCU_ARBWarnNotice,const std::uint8_t _VCU_EVPRepair,const std::uint8_t _VCU_ElcVcuuPumpErr,const std::uint8_t _VCU_PrecResHotMsg,const std::uint8_t _VCU_OilPresUndrWarn,const std::uint8_t _VCU_EngSelfMaintDiap,const std::uint8_t _VCU_DischgSocCfgResp,const std::uint8_t _VCU_DischgActiveSt,const std::uint8_t _VCU_DischgEngStartPermit,const std::uint8_t _VCU_DischgEndVehRng,const std::uint16_t _VCU_DischgTimeCount,const std::uint8_t _VCU_ChgActiveSt,const std::uint8_t _VCU_ChgCurrCfgResp,const std::uint8_t _VCU_PlugAutoUnlockCfgResp,const std::uint8_t _VCU_DrvTargetSOEResp,const std::uint64_t _BCM_KeySt,const std::uint64_t _VCU_CreepActiveSt,const std::uint64_t _HVACF_ECPFault):VCU_EVRngUndrWarn(_VCU_EVRngUndrWarn),VCU_DspChgSt(_VCU_DspChgSt),VCU_ChgTimeDspType(_VCU_ChgTimeDspType),VCU_BookChgLampInd(_VCU_BookChgLampInd),VCU_AppWarmErr(_VCU_AppWarmErr),VCU_AppChgErr(_VCU_AppChgErr),VCU_DriverNoticeDisp(_VCU_DriverNoticeDisp),VCU_VehAvailDriveStMsgWarn(_VCU_VehAvailDriveStMsgWarn),VCU_OperatingMode(_VCU_OperatingMode),VCU_VehPwr(_VCU_VehPwr),VCU_DerateFault(_VCU_DerateFault),VCU_CCUFaultLampInd(_VCU_CCUFaultLampInd),VCU_SysFault(_VCU_SysFault),VCU_ARBWarnNotice(_VCU_ARBWarnNotice),VCU_EVPRepair(_VCU_EVPRepair),VCU_ElcVcuuPumpErr(_VCU_ElcVcuuPumpErr),VCU_PrecResHotMsg(_VCU_PrecResHotMsg),VCU_OilPresUndrWarn(_VCU_OilPresUndrWarn),VCU_EngSelfMaintDiap(_VCU_EngSelfMaintDiap),VCU_DischgSocCfgResp(_VCU_DischgSocCfgResp),VCU_DischgActiveSt(_VCU_DischgActiveSt),VCU_DischgEngStartPermit(_VCU_DischgEngStartPermit),VCU_DischgEndVehRng(_VCU_DischgEndVehRng),VCU_DischgTimeCount(_VCU_DischgTimeCount),VCU_ChgActiveSt(_VCU_ChgActiveSt),VCU_ChgCurrCfgResp(_VCU_ChgCurrCfgResp),VCU_PlugAutoUnlockCfgResp(_VCU_PlugAutoUnlockCfgResp),VCU_DrvTargetSOEResp(_VCU_DrvTargetSOEResp),BCM_KeySt(_BCM_KeySt),VCU_CreepActiveSt(_VCU_CreepActiveSt),HVACF_ECPFault(_HVACF_ECPFault) {}
	BDCVCUDATA2(const BDCVCUDATA2 &_x){
		VCU_EVRngUndrWarn = _x.VCU_EVRngUndrWarn;
		VCU_DspChgSt = _x.VCU_DspChgSt;
		VCU_ChgTimeDspType = _x.VCU_ChgTimeDspType;
		VCU_BookChgLampInd = _x.VCU_BookChgLampInd;
		VCU_AppWarmErr = _x.VCU_AppWarmErr;
		VCU_AppChgErr = _x.VCU_AppChgErr;
		VCU_DriverNoticeDisp = _x.VCU_DriverNoticeDisp;
		VCU_VehAvailDriveStMsgWarn = _x.VCU_VehAvailDriveStMsgWarn;
		VCU_OperatingMode = _x.VCU_OperatingMode;
		VCU_VehPwr = _x.VCU_VehPwr;
		VCU_DerateFault = _x.VCU_DerateFault;
		VCU_CCUFaultLampInd = _x.VCU_CCUFaultLampInd;
		VCU_SysFault = _x.VCU_SysFault;
		VCU_ARBWarnNotice = _x.VCU_ARBWarnNotice;
		VCU_EVPRepair = _x.VCU_EVPRepair;
		VCU_ElcVcuuPumpErr = _x.VCU_ElcVcuuPumpErr;
		VCU_PrecResHotMsg = _x.VCU_PrecResHotMsg;
		VCU_OilPresUndrWarn = _x.VCU_OilPresUndrWarn;
		VCU_EngSelfMaintDiap = _x.VCU_EngSelfMaintDiap;
		VCU_DischgSocCfgResp = _x.VCU_DischgSocCfgResp;
		VCU_DischgActiveSt = _x.VCU_DischgActiveSt;
		VCU_DischgEngStartPermit = _x.VCU_DischgEngStartPermit;
		VCU_DischgEndVehRng = _x.VCU_DischgEndVehRng;
		VCU_DischgTimeCount = _x.VCU_DischgTimeCount;
		VCU_ChgActiveSt = _x.VCU_ChgActiveSt;
		VCU_ChgCurrCfgResp = _x.VCU_ChgCurrCfgResp;
		VCU_PlugAutoUnlockCfgResp = _x.VCU_PlugAutoUnlockCfgResp;
		VCU_DrvTargetSOEResp = _x.VCU_DrvTargetSOEResp;
		BCM_KeySt = _x.BCM_KeySt;
		VCU_CreepActiveSt = _x.VCU_CreepActiveSt;
		HVACF_ECPFault = _x.HVACF_ECPFault;
	}
	BDCVCUDATA2(BDCVCUDATA2 &&_x){
		VCU_EVRngUndrWarn = std::move(_x.VCU_EVRngUndrWarn);
		VCU_DspChgSt = std::move(_x.VCU_DspChgSt);
		VCU_ChgTimeDspType = std::move(_x.VCU_ChgTimeDspType);
		VCU_BookChgLampInd = std::move(_x.VCU_BookChgLampInd);
		VCU_AppWarmErr = std::move(_x.VCU_AppWarmErr);
		VCU_AppChgErr = std::move(_x.VCU_AppChgErr);
		VCU_DriverNoticeDisp = std::move(_x.VCU_DriverNoticeDisp);
		VCU_VehAvailDriveStMsgWarn = std::move(_x.VCU_VehAvailDriveStMsgWarn);
		VCU_OperatingMode = std::move(_x.VCU_OperatingMode);
		VCU_VehPwr = std::move(_x.VCU_VehPwr);
		VCU_DerateFault = std::move(_x.VCU_DerateFault);
		VCU_CCUFaultLampInd = std::move(_x.VCU_CCUFaultLampInd);
		VCU_SysFault = std::move(_x.VCU_SysFault);
		VCU_ARBWarnNotice = std::move(_x.VCU_ARBWarnNotice);
		VCU_EVPRepair = std::move(_x.VCU_EVPRepair);
		VCU_ElcVcuuPumpErr = std::move(_x.VCU_ElcVcuuPumpErr);
		VCU_PrecResHotMsg = std::move(_x.VCU_PrecResHotMsg);
		VCU_OilPresUndrWarn = std::move(_x.VCU_OilPresUndrWarn);
		VCU_EngSelfMaintDiap = std::move(_x.VCU_EngSelfMaintDiap);
		VCU_DischgSocCfgResp = std::move(_x.VCU_DischgSocCfgResp);
		VCU_DischgActiveSt = std::move(_x.VCU_DischgActiveSt);
		VCU_DischgEngStartPermit = std::move(_x.VCU_DischgEngStartPermit);
		VCU_DischgEndVehRng = std::move(_x.VCU_DischgEndVehRng);
		VCU_DischgTimeCount = std::move(_x.VCU_DischgTimeCount);
		VCU_ChgActiveSt = std::move(_x.VCU_ChgActiveSt);
		VCU_ChgCurrCfgResp = std::move(_x.VCU_ChgCurrCfgResp);
		VCU_PlugAutoUnlockCfgResp = std::move(_x.VCU_PlugAutoUnlockCfgResp);
		VCU_DrvTargetSOEResp = std::move(_x.VCU_DrvTargetSOEResp);
		BCM_KeySt = std::move(_x.BCM_KeySt);
		VCU_CreepActiveSt = std::move(_x.VCU_CreepActiveSt);
		HVACF_ECPFault = std::move(_x.HVACF_ECPFault);
	}
	BDCVCUDATA2& operator=(const BDCVCUDATA2 &_x){
		VCU_EVRngUndrWarn = _x.VCU_EVRngUndrWarn;
		VCU_DspChgSt = _x.VCU_DspChgSt;
		VCU_ChgTimeDspType = _x.VCU_ChgTimeDspType;
		VCU_BookChgLampInd = _x.VCU_BookChgLampInd;
		VCU_AppWarmErr = _x.VCU_AppWarmErr;
		VCU_AppChgErr = _x.VCU_AppChgErr;
		VCU_DriverNoticeDisp = _x.VCU_DriverNoticeDisp;
		VCU_VehAvailDriveStMsgWarn = _x.VCU_VehAvailDriveStMsgWarn;
		VCU_OperatingMode = _x.VCU_OperatingMode;
		VCU_VehPwr = _x.VCU_VehPwr;
		VCU_DerateFault = _x.VCU_DerateFault;
		VCU_CCUFaultLampInd = _x.VCU_CCUFaultLampInd;
		VCU_SysFault = _x.VCU_SysFault;
		VCU_ARBWarnNotice = _x.VCU_ARBWarnNotice;
		VCU_EVPRepair = _x.VCU_EVPRepair;
		VCU_ElcVcuuPumpErr = _x.VCU_ElcVcuuPumpErr;
		VCU_PrecResHotMsg = _x.VCU_PrecResHotMsg;
		VCU_OilPresUndrWarn = _x.VCU_OilPresUndrWarn;
		VCU_EngSelfMaintDiap = _x.VCU_EngSelfMaintDiap;
		VCU_DischgSocCfgResp = _x.VCU_DischgSocCfgResp;
		VCU_DischgActiveSt = _x.VCU_DischgActiveSt;
		VCU_DischgEngStartPermit = _x.VCU_DischgEngStartPermit;
		VCU_DischgEndVehRng = _x.VCU_DischgEndVehRng;
		VCU_DischgTimeCount = _x.VCU_DischgTimeCount;
		VCU_ChgActiveSt = _x.VCU_ChgActiveSt;
		VCU_ChgCurrCfgResp = _x.VCU_ChgCurrCfgResp;
		VCU_PlugAutoUnlockCfgResp = _x.VCU_PlugAutoUnlockCfgResp;
		VCU_DrvTargetSOEResp = _x.VCU_DrvTargetSOEResp;
		BCM_KeySt = _x.BCM_KeySt;
		VCU_CreepActiveSt = _x.VCU_CreepActiveSt;
		HVACF_ECPFault = _x.HVACF_ECPFault;
		return *this;
	}
	BDCVCUDATA2& operator=(BDCVCUDATA2 &&_x){
		VCU_EVRngUndrWarn = std::move(_x.VCU_EVRngUndrWarn);
		VCU_DspChgSt = std::move(_x.VCU_DspChgSt);
		VCU_ChgTimeDspType = std::move(_x.VCU_ChgTimeDspType);
		VCU_BookChgLampInd = std::move(_x.VCU_BookChgLampInd);
		VCU_AppWarmErr = std::move(_x.VCU_AppWarmErr);
		VCU_AppChgErr = std::move(_x.VCU_AppChgErr);
		VCU_DriverNoticeDisp = std::move(_x.VCU_DriverNoticeDisp);
		VCU_VehAvailDriveStMsgWarn = std::move(_x.VCU_VehAvailDriveStMsgWarn);
		VCU_OperatingMode = std::move(_x.VCU_OperatingMode);
		VCU_VehPwr = std::move(_x.VCU_VehPwr);
		VCU_DerateFault = std::move(_x.VCU_DerateFault);
		VCU_CCUFaultLampInd = std::move(_x.VCU_CCUFaultLampInd);
		VCU_SysFault = std::move(_x.VCU_SysFault);
		VCU_ARBWarnNotice = std::move(_x.VCU_ARBWarnNotice);
		VCU_EVPRepair = std::move(_x.VCU_EVPRepair);
		VCU_ElcVcuuPumpErr = std::move(_x.VCU_ElcVcuuPumpErr);
		VCU_PrecResHotMsg = std::move(_x.VCU_PrecResHotMsg);
		VCU_OilPresUndrWarn = std::move(_x.VCU_OilPresUndrWarn);
		VCU_EngSelfMaintDiap = std::move(_x.VCU_EngSelfMaintDiap);
		VCU_DischgSocCfgResp = std::move(_x.VCU_DischgSocCfgResp);
		VCU_DischgActiveSt = std::move(_x.VCU_DischgActiveSt);
		VCU_DischgEngStartPermit = std::move(_x.VCU_DischgEngStartPermit);
		VCU_DischgEndVehRng = std::move(_x.VCU_DischgEndVehRng);
		VCU_DischgTimeCount = std::move(_x.VCU_DischgTimeCount);
		VCU_ChgActiveSt = std::move(_x.VCU_ChgActiveSt);
		VCU_ChgCurrCfgResp = std::move(_x.VCU_ChgCurrCfgResp);
		VCU_PlugAutoUnlockCfgResp = std::move(_x.VCU_PlugAutoUnlockCfgResp);
		VCU_DrvTargetSOEResp = std::move(_x.VCU_DrvTargetSOEResp);
		BCM_KeySt = std::move(_x.BCM_KeySt);
		VCU_CreepActiveSt = std::move(_x.VCU_CreepActiveSt);
		HVACF_ECPFault = std::move(_x.HVACF_ECPFault);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_EVRngUndrWarn);
		fun(VCU_DspChgSt);
		fun(VCU_ChgTimeDspType);
		fun(VCU_BookChgLampInd);
		fun(VCU_AppWarmErr);
		fun(VCU_AppChgErr);
		fun(VCU_DriverNoticeDisp);
		fun(VCU_VehAvailDriveStMsgWarn);
		fun(VCU_OperatingMode);
		fun(VCU_VehPwr);
		fun(VCU_DerateFault);
		fun(VCU_CCUFaultLampInd);
		fun(VCU_SysFault);
		fun(VCU_ARBWarnNotice);
		fun(VCU_EVPRepair);
		fun(VCU_ElcVcuuPumpErr);
		fun(VCU_PrecResHotMsg);
		fun(VCU_OilPresUndrWarn);
		fun(VCU_EngSelfMaintDiap);
		fun(VCU_DischgSocCfgResp);
		fun(VCU_DischgActiveSt);
		fun(VCU_DischgEngStartPermit);
		fun(VCU_DischgEndVehRng);
		fun(VCU_DischgTimeCount);
		fun(VCU_ChgActiveSt);
		fun(VCU_ChgCurrCfgResp);
		fun(VCU_PlugAutoUnlockCfgResp);
		fun(VCU_DrvTargetSOEResp);
		fun(BCM_KeySt);
		fun(VCU_CreepActiveSt);
		fun(HVACF_ECPFault);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_EVRngUndrWarn);
		fun(VCU_DspChgSt);
		fun(VCU_ChgTimeDspType);
		fun(VCU_BookChgLampInd);
		fun(VCU_AppWarmErr);
		fun(VCU_AppChgErr);
		fun(VCU_DriverNoticeDisp);
		fun(VCU_VehAvailDriveStMsgWarn);
		fun(VCU_OperatingMode);
		fun(VCU_VehPwr);
		fun(VCU_DerateFault);
		fun(VCU_CCUFaultLampInd);
		fun(VCU_SysFault);
		fun(VCU_ARBWarnNotice);
		fun(VCU_EVPRepair);
		fun(VCU_ElcVcuuPumpErr);
		fun(VCU_PrecResHotMsg);
		fun(VCU_OilPresUndrWarn);
		fun(VCU_EngSelfMaintDiap);
		fun(VCU_DischgSocCfgResp);
		fun(VCU_DischgActiveSt);
		fun(VCU_DischgEngStartPermit);
		fun(VCU_DischgEndVehRng);
		fun(VCU_DischgTimeCount);
		fun(VCU_ChgActiveSt);
		fun(VCU_ChgCurrCfgResp);
		fun(VCU_PlugAutoUnlockCfgResp);
		fun(VCU_DrvTargetSOEResp);
		fun(BCM_KeySt);
		fun(VCU_CreepActiveSt);
		fun(HVACF_ECPFault);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_EVRngUndrWarn);
		fun << (VCU_DspChgSt);
		fun << (VCU_ChgTimeDspType);
		fun << (VCU_BookChgLampInd);
		fun << (VCU_AppWarmErr);
		fun << (VCU_AppChgErr);
		fun << (VCU_DriverNoticeDisp);
		fun << (VCU_VehAvailDriveStMsgWarn);
		fun << (VCU_OperatingMode);
		fun << (VCU_VehPwr);
		fun << (VCU_DerateFault);
		fun << (VCU_CCUFaultLampInd);
		fun << (VCU_SysFault);
		fun << (VCU_ARBWarnNotice);
		fun << (VCU_EVPRepair);
		fun << (VCU_ElcVcuuPumpErr);
		fun << (VCU_PrecResHotMsg);
		fun << (VCU_OilPresUndrWarn);
		fun << (VCU_EngSelfMaintDiap);
		fun << (VCU_DischgSocCfgResp);
		fun << (VCU_DischgActiveSt);
		fun << (VCU_DischgEngStartPermit);
		fun << (VCU_DischgEndVehRng);
		fun << (VCU_DischgTimeCount);
		fun << (VCU_ChgActiveSt);
		fun << (VCU_ChgCurrCfgResp);
		fun << (VCU_PlugAutoUnlockCfgResp);
		fun << (VCU_DrvTargetSOEResp);
		fun << (BCM_KeySt);
		fun << (VCU_CreepActiveSt);
		fun << (HVACF_ECPFault);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_EVRngUndrWarn);
		fun >> (VCU_DspChgSt);
		fun >> (VCU_ChgTimeDspType);
		fun >> (VCU_BookChgLampInd);
		fun >> (VCU_AppWarmErr);
		fun >> (VCU_AppChgErr);
		fun >> (VCU_DriverNoticeDisp);
		fun >> (VCU_VehAvailDriveStMsgWarn);
		fun >> (VCU_OperatingMode);
		fun >> (VCU_VehPwr);
		fun >> (VCU_DerateFault);
		fun >> (VCU_CCUFaultLampInd);
		fun >> (VCU_SysFault);
		fun >> (VCU_ARBWarnNotice);
		fun >> (VCU_EVPRepair);
		fun >> (VCU_ElcVcuuPumpErr);
		fun >> (VCU_PrecResHotMsg);
		fun >> (VCU_OilPresUndrWarn);
		fun >> (VCU_EngSelfMaintDiap);
		fun >> (VCU_DischgSocCfgResp);
		fun >> (VCU_DischgActiveSt);
		fun >> (VCU_DischgEngStartPermit);
		fun >> (VCU_DischgEndVehRng);
		fun >> (VCU_DischgTimeCount);
		fun >> (VCU_ChgActiveSt);
		fun >> (VCU_ChgCurrCfgResp);
		fun >> (VCU_PlugAutoUnlockCfgResp);
		fun >> (VCU_DrvTargetSOEResp);
		fun >> (BCM_KeySt);
		fun >> (VCU_CreepActiveSt);
		fun >> (HVACF_ECPFault);
	}
};

#endif //____BDCVCUDATA2_H__
