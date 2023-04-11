#ifndef ____BDCTESTGCU_H__
#define ____BDCTESTGCU_H__


#include "cstdint"






struct BDCTestGCU {
public:
	std::uint16_t GCU_IdcAct;
	std::uint16_t GCU_UdcAct;
	std::uint16_t GCU_TorqAct;
	std::uint16_t GCU_stTrqEmLim;
	std::uint8_t GCU_DiagErrCode;
	std::uint8_t GCU_InvtTemp;
	std::uint16_t GCU_StatTemp;
	std::uint8_t GCU_FaultLampInd;
	std::uint8_t GCU_ModeSt;
	std::uint8_t GCU_EngMilLampReq;
	std::uint16_t GCU_VCU_TorqMax;
	std::uint16_t GCU_VCU_TorqMin;
	std::uint8_t GCU_SysTempOvrInd;
	std::uint16_t GCU_OffsetCalVal;
	std::uint8_t GCU_ZeroTorqCompensateSt;
/*
	BDCTestGCU() {}
	~BDCTestGCU() {}
	BDCTestGCU(const std::uint16_t _GCU_IdcAct,const std::uint16_t _GCU_UdcAct,const std::uint16_t _GCU_TorqAct,const std::uint16_t _GCU_stTrqEmLim,const std::uint8_t _GCU_DiagErrCode,const std::uint8_t _GCU_InvtTemp,const std::uint16_t _GCU_StatTemp,const std::uint8_t _GCU_FaultLampInd,const std::uint8_t _GCU_ModeSt,const std::uint8_t _GCU_EngMilLampReq,const std::uint16_t _GCU_VCU_TorqMax,const std::uint16_t _GCU_VCU_TorqMin,const std::uint8_t _GCU_SysTempOvrInd,const std::uint16_t _GCU_OffsetCalVal,const std::uint8_t _GCU_ZeroTorqCompensateSt):GCU_IdcAct(_GCU_IdcAct),GCU_UdcAct(_GCU_UdcAct),GCU_TorqAct(_GCU_TorqAct),GCU_stTrqEmLim(_GCU_stTrqEmLim),GCU_DiagErrCode(_GCU_DiagErrCode),GCU_InvtTemp(_GCU_InvtTemp),GCU_StatTemp(_GCU_StatTemp),GCU_FaultLampInd(_GCU_FaultLampInd),GCU_ModeSt(_GCU_ModeSt),GCU_EngMilLampReq(_GCU_EngMilLampReq),GCU_VCU_TorqMax(_GCU_VCU_TorqMax),GCU_VCU_TorqMin(_GCU_VCU_TorqMin),GCU_SysTempOvrInd(_GCU_SysTempOvrInd),GCU_OffsetCalVal(_GCU_OffsetCalVal),GCU_ZeroTorqCompensateSt(_GCU_ZeroTorqCompensateSt) {}
	BDCTestGCU(const BDCTestGCU &_x){
		GCU_IdcAct = _x.GCU_IdcAct;
		GCU_UdcAct = _x.GCU_UdcAct;
		GCU_TorqAct = _x.GCU_TorqAct;
		GCU_stTrqEmLim = _x.GCU_stTrqEmLim;
		GCU_DiagErrCode = _x.GCU_DiagErrCode;
		GCU_InvtTemp = _x.GCU_InvtTemp;
		GCU_StatTemp = _x.GCU_StatTemp;
		GCU_FaultLampInd = _x.GCU_FaultLampInd;
		GCU_ModeSt = _x.GCU_ModeSt;
		GCU_EngMilLampReq = _x.GCU_EngMilLampReq;
		GCU_VCU_TorqMax = _x.GCU_VCU_TorqMax;
		GCU_VCU_TorqMin = _x.GCU_VCU_TorqMin;
		GCU_SysTempOvrInd = _x.GCU_SysTempOvrInd;
		GCU_OffsetCalVal = _x.GCU_OffsetCalVal;
		GCU_ZeroTorqCompensateSt = _x.GCU_ZeroTorqCompensateSt;
	}
	BDCTestGCU(BDCTestGCU &&_x){
		GCU_IdcAct = std::move(_x.GCU_IdcAct);
		GCU_UdcAct = std::move(_x.GCU_UdcAct);
		GCU_TorqAct = std::move(_x.GCU_TorqAct);
		GCU_stTrqEmLim = std::move(_x.GCU_stTrqEmLim);
		GCU_DiagErrCode = std::move(_x.GCU_DiagErrCode);
		GCU_InvtTemp = std::move(_x.GCU_InvtTemp);
		GCU_StatTemp = std::move(_x.GCU_StatTemp);
		GCU_FaultLampInd = std::move(_x.GCU_FaultLampInd);
		GCU_ModeSt = std::move(_x.GCU_ModeSt);
		GCU_EngMilLampReq = std::move(_x.GCU_EngMilLampReq);
		GCU_VCU_TorqMax = std::move(_x.GCU_VCU_TorqMax);
		GCU_VCU_TorqMin = std::move(_x.GCU_VCU_TorqMin);
		GCU_SysTempOvrInd = std::move(_x.GCU_SysTempOvrInd);
		GCU_OffsetCalVal = std::move(_x.GCU_OffsetCalVal);
		GCU_ZeroTorqCompensateSt = std::move(_x.GCU_ZeroTorqCompensateSt);
	}
	BDCTestGCU& operator=(const BDCTestGCU &_x){
		GCU_IdcAct = _x.GCU_IdcAct;
		GCU_UdcAct = _x.GCU_UdcAct;
		GCU_TorqAct = _x.GCU_TorqAct;
		GCU_stTrqEmLim = _x.GCU_stTrqEmLim;
		GCU_DiagErrCode = _x.GCU_DiagErrCode;
		GCU_InvtTemp = _x.GCU_InvtTemp;
		GCU_StatTemp = _x.GCU_StatTemp;
		GCU_FaultLampInd = _x.GCU_FaultLampInd;
		GCU_ModeSt = _x.GCU_ModeSt;
		GCU_EngMilLampReq = _x.GCU_EngMilLampReq;
		GCU_VCU_TorqMax = _x.GCU_VCU_TorqMax;
		GCU_VCU_TorqMin = _x.GCU_VCU_TorqMin;
		GCU_SysTempOvrInd = _x.GCU_SysTempOvrInd;
		GCU_OffsetCalVal = _x.GCU_OffsetCalVal;
		GCU_ZeroTorqCompensateSt = _x.GCU_ZeroTorqCompensateSt;
		return *this;
	}
	BDCTestGCU& operator=(BDCTestGCU &&_x){
		GCU_IdcAct = std::move(_x.GCU_IdcAct);
		GCU_UdcAct = std::move(_x.GCU_UdcAct);
		GCU_TorqAct = std::move(_x.GCU_TorqAct);
		GCU_stTrqEmLim = std::move(_x.GCU_stTrqEmLim);
		GCU_DiagErrCode = std::move(_x.GCU_DiagErrCode);
		GCU_InvtTemp = std::move(_x.GCU_InvtTemp);
		GCU_StatTemp = std::move(_x.GCU_StatTemp);
		GCU_FaultLampInd = std::move(_x.GCU_FaultLampInd);
		GCU_ModeSt = std::move(_x.GCU_ModeSt);
		GCU_EngMilLampReq = std::move(_x.GCU_EngMilLampReq);
		GCU_VCU_TorqMax = std::move(_x.GCU_VCU_TorqMax);
		GCU_VCU_TorqMin = std::move(_x.GCU_VCU_TorqMin);
		GCU_SysTempOvrInd = std::move(_x.GCU_SysTempOvrInd);
		GCU_OffsetCalVal = std::move(_x.GCU_OffsetCalVal);
		GCU_ZeroTorqCompensateSt = std::move(_x.GCU_ZeroTorqCompensateSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(GCU_IdcAct);
		fun(GCU_UdcAct);
		fun(GCU_TorqAct);
		fun(GCU_stTrqEmLim);
		fun(GCU_DiagErrCode);
		fun(GCU_InvtTemp);
		fun(GCU_StatTemp);
		fun(GCU_FaultLampInd);
		fun(GCU_ModeSt);
		fun(GCU_EngMilLampReq);
		fun(GCU_VCU_TorqMax);
		fun(GCU_VCU_TorqMin);
		fun(GCU_SysTempOvrInd);
		fun(GCU_OffsetCalVal);
		fun(GCU_ZeroTorqCompensateSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(GCU_IdcAct);
		fun(GCU_UdcAct);
		fun(GCU_TorqAct);
		fun(GCU_stTrqEmLim);
		fun(GCU_DiagErrCode);
		fun(GCU_InvtTemp);
		fun(GCU_StatTemp);
		fun(GCU_FaultLampInd);
		fun(GCU_ModeSt);
		fun(GCU_EngMilLampReq);
		fun(GCU_VCU_TorqMax);
		fun(GCU_VCU_TorqMin);
		fun(GCU_SysTempOvrInd);
		fun(GCU_OffsetCalVal);
		fun(GCU_ZeroTorqCompensateSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (GCU_IdcAct);
		fun << (GCU_UdcAct);
		fun << (GCU_TorqAct);
		fun << (GCU_stTrqEmLim);
		fun << (GCU_DiagErrCode);
		fun << (GCU_InvtTemp);
		fun << (GCU_StatTemp);
		fun << (GCU_FaultLampInd);
		fun << (GCU_ModeSt);
		fun << (GCU_EngMilLampReq);
		fun << (GCU_VCU_TorqMax);
		fun << (GCU_VCU_TorqMin);
		fun << (GCU_SysTempOvrInd);
		fun << (GCU_OffsetCalVal);
		fun << (GCU_ZeroTorqCompensateSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (GCU_IdcAct);
		fun >> (GCU_UdcAct);
		fun >> (GCU_TorqAct);
		fun >> (GCU_stTrqEmLim);
		fun >> (GCU_DiagErrCode);
		fun >> (GCU_InvtTemp);
		fun >> (GCU_StatTemp);
		fun >> (GCU_FaultLampInd);
		fun >> (GCU_ModeSt);
		fun >> (GCU_EngMilLampReq);
		fun >> (GCU_VCU_TorqMax);
		fun >> (GCU_VCU_TorqMin);
		fun >> (GCU_SysTempOvrInd);
		fun >> (GCU_OffsetCalVal);
		fun >> (GCU_ZeroTorqCompensateSt);
	}
};

#endif //____BDCTESTGCU_H__
