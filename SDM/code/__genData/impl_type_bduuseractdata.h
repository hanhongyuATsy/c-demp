#ifndef ____BDUUSERACTDATA_H__
#define ____BDUUSERACTDATA_H__


#include "cstdint"






struct BDUUserActData {
public:
	std::uint8_t VCU_WarmTimeCfgResp;
	std::uint8_t VCU_DischgSocResp;
	std::uint8_t VCU_ChgPlugRelSt;
	std::uint8_t VCU_EcoPlusMod;
	std::uint8_t VCU_RecpLevelstRespL;
	std::uint8_t VCU_AccPdlLvlResp;
	std::uint8_t VCU_AccurRngCmd;
	std::uint8_t VCU_AccurHMIModeCmd;
	std::uint8_t BMS_ChgmodeSt;
	std::uint8_t VCU_ErrNotice;
	std::uint8_t BMS_ErrNotice;
	std::uint8_t DCU_ErrNotice;
	std::uint8_t VCU_PGearErrNotice;
	std::uint16_t VCU_DspDischgCurr;
	std::uint16_t VCU_DspDischgVolt;
	std::uint16_t VCU_VehElcConspAvg;
/*
	BDUUserActData() {}
	~BDUUserActData() {}
	BDUUserActData(const std::uint8_t _VCU_WarmTimeCfgResp,const std::uint8_t _VCU_DischgSocResp,const std::uint8_t _VCU_ChgPlugRelSt,const std::uint8_t _VCU_EcoPlusMod,const std::uint8_t _VCU_RecpLevelstRespL,const std::uint8_t _VCU_AccPdlLvlResp,const std::uint8_t _VCU_AccurRngCmd,const std::uint8_t _VCU_AccurHMIModeCmd,const std::uint8_t _BMS_ChgmodeSt,const std::uint8_t _VCU_ErrNotice,const std::uint8_t _BMS_ErrNotice,const std::uint8_t _DCU_ErrNotice,const std::uint8_t _VCU_PGearErrNotice,const std::uint16_t _VCU_DspDischgCurr,const std::uint16_t _VCU_DspDischgVolt,const std::uint16_t _VCU_VehElcConspAvg):VCU_WarmTimeCfgResp(_VCU_WarmTimeCfgResp),VCU_DischgSocResp(_VCU_DischgSocResp),VCU_ChgPlugRelSt(_VCU_ChgPlugRelSt),VCU_EcoPlusMod(_VCU_EcoPlusMod),VCU_RecpLevelstRespL(_VCU_RecpLevelstRespL),VCU_AccPdlLvlResp(_VCU_AccPdlLvlResp),VCU_AccurRngCmd(_VCU_AccurRngCmd),VCU_AccurHMIModeCmd(_VCU_AccurHMIModeCmd),BMS_ChgmodeSt(_BMS_ChgmodeSt),VCU_ErrNotice(_VCU_ErrNotice),BMS_ErrNotice(_BMS_ErrNotice),DCU_ErrNotice(_DCU_ErrNotice),VCU_PGearErrNotice(_VCU_PGearErrNotice),VCU_DspDischgCurr(_VCU_DspDischgCurr),VCU_DspDischgVolt(_VCU_DspDischgVolt),VCU_VehElcConspAvg(_VCU_VehElcConspAvg) {}
	BDUUserActData(const BDUUserActData &_x){
		VCU_WarmTimeCfgResp = _x.VCU_WarmTimeCfgResp;
		VCU_DischgSocResp = _x.VCU_DischgSocResp;
		VCU_ChgPlugRelSt = _x.VCU_ChgPlugRelSt;
		VCU_EcoPlusMod = _x.VCU_EcoPlusMod;
		VCU_RecpLevelstRespL = _x.VCU_RecpLevelstRespL;
		VCU_AccPdlLvlResp = _x.VCU_AccPdlLvlResp;
		VCU_AccurRngCmd = _x.VCU_AccurRngCmd;
		VCU_AccurHMIModeCmd = _x.VCU_AccurHMIModeCmd;
		BMS_ChgmodeSt = _x.BMS_ChgmodeSt;
		VCU_ErrNotice = _x.VCU_ErrNotice;
		BMS_ErrNotice = _x.BMS_ErrNotice;
		DCU_ErrNotice = _x.DCU_ErrNotice;
		VCU_PGearErrNotice = _x.VCU_PGearErrNotice;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
	}
	BDUUserActData(BDUUserActData &&_x){
		VCU_WarmTimeCfgResp = std::move(_x.VCU_WarmTimeCfgResp);
		VCU_DischgSocResp = std::move(_x.VCU_DischgSocResp);
		VCU_ChgPlugRelSt = std::move(_x.VCU_ChgPlugRelSt);
		VCU_EcoPlusMod = std::move(_x.VCU_EcoPlusMod);
		VCU_RecpLevelstRespL = std::move(_x.VCU_RecpLevelstRespL);
		VCU_AccPdlLvlResp = std::move(_x.VCU_AccPdlLvlResp);
		VCU_AccurRngCmd = std::move(_x.VCU_AccurRngCmd);
		VCU_AccurHMIModeCmd = std::move(_x.VCU_AccurHMIModeCmd);
		BMS_ChgmodeSt = std::move(_x.BMS_ChgmodeSt);
		VCU_ErrNotice = std::move(_x.VCU_ErrNotice);
		BMS_ErrNotice = std::move(_x.BMS_ErrNotice);
		DCU_ErrNotice = std::move(_x.DCU_ErrNotice);
		VCU_PGearErrNotice = std::move(_x.VCU_PGearErrNotice);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
	}
	BDUUserActData& operator=(const BDUUserActData &_x){
		VCU_WarmTimeCfgResp = _x.VCU_WarmTimeCfgResp;
		VCU_DischgSocResp = _x.VCU_DischgSocResp;
		VCU_ChgPlugRelSt = _x.VCU_ChgPlugRelSt;
		VCU_EcoPlusMod = _x.VCU_EcoPlusMod;
		VCU_RecpLevelstRespL = _x.VCU_RecpLevelstRespL;
		VCU_AccPdlLvlResp = _x.VCU_AccPdlLvlResp;
		VCU_AccurRngCmd = _x.VCU_AccurRngCmd;
		VCU_AccurHMIModeCmd = _x.VCU_AccurHMIModeCmd;
		BMS_ChgmodeSt = _x.BMS_ChgmodeSt;
		VCU_ErrNotice = _x.VCU_ErrNotice;
		BMS_ErrNotice = _x.BMS_ErrNotice;
		DCU_ErrNotice = _x.DCU_ErrNotice;
		VCU_PGearErrNotice = _x.VCU_PGearErrNotice;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		return *this;
	}
	BDUUserActData& operator=(BDUUserActData &&_x){
		VCU_WarmTimeCfgResp = std::move(_x.VCU_WarmTimeCfgResp);
		VCU_DischgSocResp = std::move(_x.VCU_DischgSocResp);
		VCU_ChgPlugRelSt = std::move(_x.VCU_ChgPlugRelSt);
		VCU_EcoPlusMod = std::move(_x.VCU_EcoPlusMod);
		VCU_RecpLevelstRespL = std::move(_x.VCU_RecpLevelstRespL);
		VCU_AccPdlLvlResp = std::move(_x.VCU_AccPdlLvlResp);
		VCU_AccurRngCmd = std::move(_x.VCU_AccurRngCmd);
		VCU_AccurHMIModeCmd = std::move(_x.VCU_AccurHMIModeCmd);
		BMS_ChgmodeSt = std::move(_x.BMS_ChgmodeSt);
		VCU_ErrNotice = std::move(_x.VCU_ErrNotice);
		BMS_ErrNotice = std::move(_x.BMS_ErrNotice);
		DCU_ErrNotice = std::move(_x.DCU_ErrNotice);
		VCU_PGearErrNotice = std::move(_x.VCU_PGearErrNotice);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_WarmTimeCfgResp);
		fun(VCU_DischgSocResp);
		fun(VCU_ChgPlugRelSt);
		fun(VCU_EcoPlusMod);
		fun(VCU_RecpLevelstRespL);
		fun(VCU_AccPdlLvlResp);
		fun(VCU_AccurRngCmd);
		fun(VCU_AccurHMIModeCmd);
		fun(BMS_ChgmodeSt);
		fun(VCU_ErrNotice);
		fun(BMS_ErrNotice);
		fun(DCU_ErrNotice);
		fun(VCU_PGearErrNotice);
		fun(VCU_DspDischgCurr);
		fun(VCU_DspDischgVolt);
		fun(VCU_VehElcConspAvg);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_WarmTimeCfgResp);
		fun(VCU_DischgSocResp);
		fun(VCU_ChgPlugRelSt);
		fun(VCU_EcoPlusMod);
		fun(VCU_RecpLevelstRespL);
		fun(VCU_AccPdlLvlResp);
		fun(VCU_AccurRngCmd);
		fun(VCU_AccurHMIModeCmd);
		fun(BMS_ChgmodeSt);
		fun(VCU_ErrNotice);
		fun(BMS_ErrNotice);
		fun(DCU_ErrNotice);
		fun(VCU_PGearErrNotice);
		fun(VCU_DspDischgCurr);
		fun(VCU_DspDischgVolt);
		fun(VCU_VehElcConspAvg);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_WarmTimeCfgResp);
		fun << (VCU_DischgSocResp);
		fun << (VCU_ChgPlugRelSt);
		fun << (VCU_EcoPlusMod);
		fun << (VCU_RecpLevelstRespL);
		fun << (VCU_AccPdlLvlResp);
		fun << (VCU_AccurRngCmd);
		fun << (VCU_AccurHMIModeCmd);
		fun << (BMS_ChgmodeSt);
		fun << (VCU_ErrNotice);
		fun << (BMS_ErrNotice);
		fun << (DCU_ErrNotice);
		fun << (VCU_PGearErrNotice);
		fun << (VCU_DspDischgCurr);
		fun << (VCU_DspDischgVolt);
		fun << (VCU_VehElcConspAvg);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_WarmTimeCfgResp);
		fun >> (VCU_DischgSocResp);
		fun >> (VCU_ChgPlugRelSt);
		fun >> (VCU_EcoPlusMod);
		fun >> (VCU_RecpLevelstRespL);
		fun >> (VCU_AccPdlLvlResp);
		fun >> (VCU_AccurRngCmd);
		fun >> (VCU_AccurHMIModeCmd);
		fun >> (BMS_ChgmodeSt);
		fun >> (VCU_ErrNotice);
		fun >> (BMS_ErrNotice);
		fun >> (DCU_ErrNotice);
		fun >> (VCU_PGearErrNotice);
		fun >> (VCU_DspDischgCurr);
		fun >> (VCU_DspDischgVolt);
		fun >> (VCU_VehElcConspAvg);
	}
};

#endif //____BDUUSERACTDATA_H__
