#ifndef ____BDCIPS_H__
#define ____BDCIPS_H__


#include "cstdint"






struct BDCIPS {
public:
	std::uint16_t IPS_DCDCCurrHvAct;
	std::uint16_t IPS_DCDCCurrLvAct;
	std::uint16_t IPS_DCDCVoltHvAct;
	std::uint16_t IPS_DCDCVoltLvAct;
	std::uint8_t IPS_DCDCModeSt;
	std::uint8_t IPS_OBCCpFreqSt;
	std::uint8_t IPS_OBCCC_Cap;
	std::uint8_t IPS_OBCCC_St;
	std::uint16_t IPS_SwVersion;
	std::uint8_t VCU_IPS_OBCModeReq;
	std::uint8_t VCU_IPS_DCDCModeReq;
/*
	BDCIPS() {}
	~BDCIPS() {}
	BDCIPS(const std::uint16_t _IPS_DCDCCurrHvAct,const std::uint16_t _IPS_DCDCCurrLvAct,const std::uint16_t _IPS_DCDCVoltHvAct,const std::uint16_t _IPS_DCDCVoltLvAct,const std::uint8_t _IPS_DCDCModeSt,const std::uint8_t _IPS_OBCCpFreqSt,const std::uint8_t _IPS_OBCCC_Cap,const std::uint8_t _IPS_OBCCC_St,const std::uint16_t _IPS_SwVersion,const std::uint8_t _VCU_IPS_OBCModeReq,const std::uint8_t _VCU_IPS_DCDCModeReq):IPS_DCDCCurrHvAct(_IPS_DCDCCurrHvAct),IPS_DCDCCurrLvAct(_IPS_DCDCCurrLvAct),IPS_DCDCVoltHvAct(_IPS_DCDCVoltHvAct),IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct),IPS_DCDCModeSt(_IPS_DCDCModeSt),IPS_OBCCpFreqSt(_IPS_OBCCpFreqSt),IPS_OBCCC_Cap(_IPS_OBCCC_Cap),IPS_OBCCC_St(_IPS_OBCCC_St),IPS_SwVersion(_IPS_SwVersion),VCU_IPS_OBCModeReq(_VCU_IPS_OBCModeReq),VCU_IPS_DCDCModeReq(_VCU_IPS_DCDCModeReq) {}
	BDCIPS(const BDCIPS &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_OBCCpFreqSt = _x.IPS_OBCCpFreqSt;
		IPS_OBCCC_Cap = _x.IPS_OBCCC_Cap;
		IPS_OBCCC_St = _x.IPS_OBCCC_St;
		IPS_SwVersion = _x.IPS_SwVersion;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
	}
	BDCIPS(BDCIPS &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_OBCCpFreqSt = std::move(_x.IPS_OBCCpFreqSt);
		IPS_OBCCC_Cap = std::move(_x.IPS_OBCCC_Cap);
		IPS_OBCCC_St = std::move(_x.IPS_OBCCC_St);
		IPS_SwVersion = std::move(_x.IPS_SwVersion);
		VCU_IPS_OBCModeReq = std::move(_x.VCU_IPS_OBCModeReq);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
	}
	BDCIPS& operator=(const BDCIPS &_x){
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		IPS_OBCCpFreqSt = _x.IPS_OBCCpFreqSt;
		IPS_OBCCC_Cap = _x.IPS_OBCCC_Cap;
		IPS_OBCCC_St = _x.IPS_OBCCC_St;
		IPS_SwVersion = _x.IPS_SwVersion;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		return *this;
	}
	BDCIPS& operator=(BDCIPS &&_x){
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		IPS_OBCCpFreqSt = std::move(_x.IPS_OBCCpFreqSt);
		IPS_OBCCC_Cap = std::move(_x.IPS_OBCCC_Cap);
		IPS_OBCCC_St = std::move(_x.IPS_OBCCC_St);
		IPS_SwVersion = std::move(_x.IPS_SwVersion);
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
		fun(IPS_OBCCpFreqSt);
		fun(IPS_OBCCC_Cap);
		fun(IPS_OBCCC_St);
		fun(IPS_SwVersion);
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
		fun(IPS_OBCCpFreqSt);
		fun(IPS_OBCCC_Cap);
		fun(IPS_OBCCC_St);
		fun(IPS_SwVersion);
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
		fun << (IPS_OBCCpFreqSt);
		fun << (IPS_OBCCC_Cap);
		fun << (IPS_OBCCC_St);
		fun << (IPS_SwVersion);
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
		fun >> (IPS_OBCCpFreqSt);
		fun >> (IPS_OBCCC_Cap);
		fun >> (IPS_OBCCC_St);
		fun >> (IPS_SwVersion);
		fun >> (VCU_IPS_OBCModeReq);
		fun >> (VCU_IPS_DCDCModeReq);
	}
};

#endif //____BDCIPS_H__
