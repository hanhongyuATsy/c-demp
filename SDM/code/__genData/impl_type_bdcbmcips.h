#ifndef ____BDCBMCIPS_H__
#define ____BDCBMCIPS_H__


#include "cstdint"






struct BDCBMCIPS {
public:
	std::uint16_t IPS_DCDCCurrHvAct;
	std::uint16_t IPS_DCDCCurrLvAct;
	std::uint16_t IPS_DCDCVoltHvAct;
	std::uint16_t IPS_DCDCVoltLvAct;
	std::uint8_t IPS_DCDCModeSt;
	std::uint8_t IPS_OBCModeSt;
	std::uint16_t IPS_OBCCurrActL1;
	std::uint16_t IPS_OBCHvDcCurrAct;
	std::uint16_t IPS_OBCUacActL1;
	std::uint16_t IPS_OBCHvDcVoltAct;
	std::uint8_t IPS_OBCCPSt;
	std::uint8_t IPS_OBCCpFreqSt;
	std::uint8_t IPS_OBCCpS2St;
	std::uint8_t IPS_OBCCPVolt;
	std::uint8_t IPS_OBCCC_Cap;
	std::uint8_t IPS_OBCCC_St;
	std::uint8_t IPS_DCDCFlowReq;
	std::uint8_t IPS_OBCFlowReq;
	std::uint8_t UMM_UsageModeSt;
	std::uint8_t VMM_VehModeSt;
	std::uint8_t VMM_OTAModeSt;
	std::uint8_t VCU_IPS_OBCModeReq;
	std::uint8_t VCU_IPS_DCDCModeReq;
/*
	BDCBMCIPS() {}
	~BDCBMCIPS() {}
	BDCBMCIPS(const std::uint16_t _IPS_DCDCCurrHvAct,const std::uint16_t _IPS_DCDCCurrLvAct,const std::uint16_t _IPS_DCDCVoltHvAct,const std::uint16_t _IPS_DCDCVoltLvAct,const std::uint8_t _IPS_DCDCModeSt,const std::uint8_t _IPS_OBCModeSt,const std::uint16_t _IPS_OBCCurrActL1,const std::uint16_t _IPS_OBCHvDcCurrAct,const std::uint16_t _IPS_OBCUacActL1,const std::uint16_t _IPS_OBCHvDcVoltAct,const std::uint8_t _IPS_OBCCPSt,const std::uint8_t _IPS_OBCCpFreqSt,const std::uint8_t _IPS_OBCCpS2St,const std::uint8_t _IPS_OBCCPVolt,const std::uint8_t _IPS_OBCCC_Cap,const std::uint8_t _IPS_OBCCC_St,const std::uint8_t _IPS_DCDCFlowReq,const std::uint8_t _IPS_OBCFlowReq,const std::uint8_t _UMM_UsageModeSt,const std::uint8_t _VMM_VehModeSt,const std::uint8_t _VMM_OTAModeSt,const std::uint8_t _VCU_IPS_OBCModeReq,const std::uint8_t _VCU_IPS_DCDCModeReq):IPS_DCDCCurrHvAct(_IPS_DCDCCurrHvAct),IPS_DCDCCurrLvAct(_IPS_DCDCCurrLvAct),IPS_DCDCVoltHvAct(_IPS_DCDCVoltHvAct),IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct),IPS_DCDCModeSt(_IPS_DCDCModeSt),IPS_OBCModeSt(_IPS_OBCModeSt),IPS_OBCCurrActL1(_IPS_OBCCurrActL1),IPS_OBCHvDcCurrAct(_IPS_OBCHvDcCurrAct),IPS_OBCUacActL1(_IPS_OBCUacActL1),IPS_OBCHvDcVoltAct(_IPS_OBCHvDcVoltAct),IPS_OBCCPSt(_IPS_OBCCPSt),IPS_OBCCpFreqSt(_IPS_OBCCpFreqSt),IPS_OBCCpS2St(_IPS_OBCCpS2St),IPS_OBCCPVolt(_IPS_OBCCPVolt),IPS_OBCCC_Cap(_IPS_OBCCC_Cap),IPS_OBCCC_St(_IPS_OBCCC_St),IPS_DCDCFlowReq(_IPS_DCDCFlowReq),IPS_OBCFlowReq(_IPS_OBCFlowReq),UMM_UsageModeSt(_UMM_UsageModeSt),VMM_VehModeSt(_VMM_VehModeSt),VMM_OTAModeSt(_VMM_OTAModeSt),VCU_IPS_OBCModeReq(_VCU_IPS_OBCModeReq),VCU_IPS_DCDCModeReq(_VCU_IPS_DCDCModeReq) {}
	BDCBMCIPS(const BDCBMCIPS &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpFreqSt = _x.IPS_OBCCpFreqSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Cap = _x.IPS_OBCCC_Cap;
		IPS_OBCCC_St = _x.IPS_OBCCC_St;
		IPS_DCDCFlowReq = _x.IPS_DCDCFlowReq;
		IPS_OBCFlowReq = _x.IPS_OBCFlowReq;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
	}
	BDCBMCIPS(BDCBMCIPS &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpFreqSt = std::move(_x.IPS_OBCCpFreqSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Cap = std::move(_x.IPS_OBCCC_Cap);
		IPS_OBCCC_St = std::move(_x.IPS_OBCCC_St);
		IPS_DCDCFlowReq = std::move(_x.IPS_DCDCFlowReq);
		IPS_OBCFlowReq = std::move(_x.IPS_OBCFlowReq);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		VCU_IPS_OBCModeReq = std::move(_x.VCU_IPS_OBCModeReq);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
	}
	BDCBMCIPS& operator=(const BDCBMCIPS &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpFreqSt = _x.IPS_OBCCpFreqSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Cap = _x.IPS_OBCCC_Cap;
		IPS_OBCCC_St = _x.IPS_OBCCC_St;
		IPS_DCDCFlowReq = _x.IPS_DCDCFlowReq;
		IPS_OBCFlowReq = _x.IPS_OBCFlowReq;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		return *this;
	}
	BDCBMCIPS& operator=(BDCBMCIPS &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpFreqSt = std::move(_x.IPS_OBCCpFreqSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Cap = std::move(_x.IPS_OBCCC_Cap);
		IPS_OBCCC_St = std::move(_x.IPS_OBCCC_St);
		IPS_DCDCFlowReq = std::move(_x.IPS_DCDCFlowReq);
		IPS_OBCFlowReq = std::move(_x.IPS_OBCFlowReq);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		VCU_IPS_OBCModeReq = std::move(_x.VCU_IPS_OBCModeReq);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCModeSt);
		fun(IPS_OBCModeSt);
		fun(IPS_OBCCurrActL1);
		fun(IPS_OBCHvDcCurrAct);
		fun(IPS_OBCUacActL1);
		fun(IPS_OBCHvDcVoltAct);
		fun(IPS_OBCCPSt);
		fun(IPS_OBCCpFreqSt);
		fun(IPS_OBCCpS2St);
		fun(IPS_OBCCPVolt);
		fun(IPS_OBCCC_Cap);
		fun(IPS_OBCCC_St);
		fun(IPS_DCDCFlowReq);
		fun(IPS_OBCFlowReq);
		fun(UMM_UsageModeSt);
		fun(VMM_VehModeSt);
		fun(VMM_OTAModeSt);
		fun(VCU_IPS_OBCModeReq);
		fun(VCU_IPS_DCDCModeReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCModeSt);
		fun(IPS_OBCModeSt);
		fun(IPS_OBCCurrActL1);
		fun(IPS_OBCHvDcCurrAct);
		fun(IPS_OBCUacActL1);
		fun(IPS_OBCHvDcVoltAct);
		fun(IPS_OBCCPSt);
		fun(IPS_OBCCpFreqSt);
		fun(IPS_OBCCpS2St);
		fun(IPS_OBCCPVolt);
		fun(IPS_OBCCC_Cap);
		fun(IPS_OBCCC_St);
		fun(IPS_DCDCFlowReq);
		fun(IPS_OBCFlowReq);
		fun(UMM_UsageModeSt);
		fun(VMM_VehModeSt);
		fun(VMM_OTAModeSt);
		fun(VCU_IPS_OBCModeReq);
		fun(VCU_IPS_DCDCModeReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCCurrHvAct);
		fun << (IPS_DCDCCurrLvAct);
		fun << (IPS_DCDCVoltHvAct);
		fun << (IPS_DCDCVoltLvAct);
		fun << (IPS_DCDCModeSt);
		fun << (IPS_OBCModeSt);
		fun << (IPS_OBCCurrActL1);
		fun << (IPS_OBCHvDcCurrAct);
		fun << (IPS_OBCUacActL1);
		fun << (IPS_OBCHvDcVoltAct);
		fun << (IPS_OBCCPSt);
		fun << (IPS_OBCCpFreqSt);
		fun << (IPS_OBCCpS2St);
		fun << (IPS_OBCCPVolt);
		fun << (IPS_OBCCC_Cap);
		fun << (IPS_OBCCC_St);
		fun << (IPS_DCDCFlowReq);
		fun << (IPS_OBCFlowReq);
		fun << (UMM_UsageModeSt);
		fun << (VMM_VehModeSt);
		fun << (VMM_OTAModeSt);
		fun << (VCU_IPS_OBCModeReq);
		fun << (VCU_IPS_DCDCModeReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCCurrHvAct);
		fun >> (IPS_DCDCCurrLvAct);
		fun >> (IPS_DCDCVoltHvAct);
		fun >> (IPS_DCDCVoltLvAct);
		fun >> (IPS_DCDCModeSt);
		fun >> (IPS_OBCModeSt);
		fun >> (IPS_OBCCurrActL1);
		fun >> (IPS_OBCHvDcCurrAct);
		fun >> (IPS_OBCUacActL1);
		fun >> (IPS_OBCHvDcVoltAct);
		fun >> (IPS_OBCCPSt);
		fun >> (IPS_OBCCpFreqSt);
		fun >> (IPS_OBCCpS2St);
		fun >> (IPS_OBCCPVolt);
		fun >> (IPS_OBCCC_Cap);
		fun >> (IPS_OBCCC_St);
		fun >> (IPS_DCDCFlowReq);
		fun >> (IPS_OBCFlowReq);
		fun >> (UMM_UsageModeSt);
		fun >> (VMM_VehModeSt);
		fun >> (VMM_OTAModeSt);
		fun >> (VCU_IPS_OBCModeReq);
		fun >> (VCU_IPS_DCDCModeReq);
	}
};

#endif //____BDCBMCIPS_H__
