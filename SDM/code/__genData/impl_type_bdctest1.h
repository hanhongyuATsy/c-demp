#ifndef ____BDCTEST1_H__
#define ____BDCTEST1_H__


#include "cstdint"






struct BDCTest1 {
public:
	std::uint8_t IPS_DCDCTempAct;
	std::uint8_t IPS_TEL_DCDCTempOvrErr;
	std::uint16_t IPS_OBCUacActL2;
	std::uint16_t IPS_OBCUacActL3;
	std::uint16_t IPS_OBCCurrActL2;
	std::uint16_t IPS_OBCCurrActL3;
	std::uint8_t IPS_OBCEngMilLampReq;
	std::uint16_t DCU_stTrqEmLim;
	std::uint8_t DCU_EngMilLampReq;
	std::uint16_t DCU_OffsetCalVal;
	std::uint8_t DCU_DstActive;
	std::uint8_t DCU_ZeroTorqCompensateSt;
/*
	BDCTest1() {}
	~BDCTest1() {}
	BDCTest1(const std::uint8_t _IPS_DCDCTempAct,const std::uint8_t _IPS_TEL_DCDCTempOvrErr,const std::uint16_t _IPS_OBCUacActL2,const std::uint16_t _IPS_OBCUacActL3,const std::uint16_t _IPS_OBCCurrActL2,const std::uint16_t _IPS_OBCCurrActL3,const std::uint8_t _IPS_OBCEngMilLampReq,const std::uint16_t _DCU_stTrqEmLim,const std::uint8_t _DCU_EngMilLampReq,const std::uint16_t _DCU_OffsetCalVal,const std::uint8_t _DCU_DstActive,const std::uint8_t _DCU_ZeroTorqCompensateSt):IPS_DCDCTempAct(_IPS_DCDCTempAct),IPS_TEL_DCDCTempOvrErr(_IPS_TEL_DCDCTempOvrErr),IPS_OBCUacActL2(_IPS_OBCUacActL2),IPS_OBCUacActL3(_IPS_OBCUacActL3),IPS_OBCCurrActL2(_IPS_OBCCurrActL2),IPS_OBCCurrActL3(_IPS_OBCCurrActL3),IPS_OBCEngMilLampReq(_IPS_OBCEngMilLampReq),DCU_stTrqEmLim(_DCU_stTrqEmLim),DCU_EngMilLampReq(_DCU_EngMilLampReq),DCU_OffsetCalVal(_DCU_OffsetCalVal),DCU_DstActive(_DCU_DstActive),DCU_ZeroTorqCompensateSt(_DCU_ZeroTorqCompensateSt) {}
	BDCTest1(const BDCTest1 &_x){
		IPS_DCDCTempAct = _x.IPS_DCDCTempAct;
		IPS_TEL_DCDCTempOvrErr = _x.IPS_TEL_DCDCTempOvrErr;
		IPS_OBCUacActL2 = _x.IPS_OBCUacActL2;
		IPS_OBCUacActL3 = _x.IPS_OBCUacActL3;
		IPS_OBCCurrActL2 = _x.IPS_OBCCurrActL2;
		IPS_OBCCurrActL3 = _x.IPS_OBCCurrActL3;
		IPS_OBCEngMilLampReq = _x.IPS_OBCEngMilLampReq;
		DCU_stTrqEmLim = _x.DCU_stTrqEmLim;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		DCU_OffsetCalVal = _x.DCU_OffsetCalVal;
		DCU_DstActive = _x.DCU_DstActive;
		DCU_ZeroTorqCompensateSt = _x.DCU_ZeroTorqCompensateSt;
	}
	BDCTest1(BDCTest1 &&_x){
		IPS_DCDCTempAct = std::move(_x.IPS_DCDCTempAct);
		IPS_TEL_DCDCTempOvrErr = std::move(_x.IPS_TEL_DCDCTempOvrErr);
		IPS_OBCUacActL2 = std::move(_x.IPS_OBCUacActL2);
		IPS_OBCUacActL3 = std::move(_x.IPS_OBCUacActL3);
		IPS_OBCCurrActL2 = std::move(_x.IPS_OBCCurrActL2);
		IPS_OBCCurrActL3 = std::move(_x.IPS_OBCCurrActL3);
		IPS_OBCEngMilLampReq = std::move(_x.IPS_OBCEngMilLampReq);
		DCU_stTrqEmLim = std::move(_x.DCU_stTrqEmLim);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		DCU_OffsetCalVal = std::move(_x.DCU_OffsetCalVal);
		DCU_DstActive = std::move(_x.DCU_DstActive);
		DCU_ZeroTorqCompensateSt = std::move(_x.DCU_ZeroTorqCompensateSt);
	}
	BDCTest1& operator=(const BDCTest1 &_x){
		IPS_DCDCTempAct = _x.IPS_DCDCTempAct;
		IPS_TEL_DCDCTempOvrErr = _x.IPS_TEL_DCDCTempOvrErr;
		IPS_OBCUacActL2 = _x.IPS_OBCUacActL2;
		IPS_OBCUacActL3 = _x.IPS_OBCUacActL3;
		IPS_OBCCurrActL2 = _x.IPS_OBCCurrActL2;
		IPS_OBCCurrActL3 = _x.IPS_OBCCurrActL3;
		IPS_OBCEngMilLampReq = _x.IPS_OBCEngMilLampReq;
		DCU_stTrqEmLim = _x.DCU_stTrqEmLim;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		DCU_OffsetCalVal = _x.DCU_OffsetCalVal;
		DCU_DstActive = _x.DCU_DstActive;
		DCU_ZeroTorqCompensateSt = _x.DCU_ZeroTorqCompensateSt;
		return *this;
	}
	BDCTest1& operator=(BDCTest1 &&_x){
		IPS_DCDCTempAct = std::move(_x.IPS_DCDCTempAct);
		IPS_TEL_DCDCTempOvrErr = std::move(_x.IPS_TEL_DCDCTempOvrErr);
		IPS_OBCUacActL2 = std::move(_x.IPS_OBCUacActL2);
		IPS_OBCUacActL3 = std::move(_x.IPS_OBCUacActL3);
		IPS_OBCCurrActL2 = std::move(_x.IPS_OBCCurrActL2);
		IPS_OBCCurrActL3 = std::move(_x.IPS_OBCCurrActL3);
		IPS_OBCEngMilLampReq = std::move(_x.IPS_OBCEngMilLampReq);
		DCU_stTrqEmLim = std::move(_x.DCU_stTrqEmLim);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		DCU_OffsetCalVal = std::move(_x.DCU_OffsetCalVal);
		DCU_DstActive = std::move(_x.DCU_DstActive);
		DCU_ZeroTorqCompensateSt = std::move(_x.DCU_ZeroTorqCompensateSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCTempAct);
		fun(IPS_TEL_DCDCTempOvrErr);
		fun(IPS_OBCUacActL2);
		fun(IPS_OBCUacActL3);
		fun(IPS_OBCCurrActL2);
		fun(IPS_OBCCurrActL3);
		fun(IPS_OBCEngMilLampReq);
		fun(DCU_stTrqEmLim);
		fun(DCU_EngMilLampReq);
		fun(DCU_OffsetCalVal);
		fun(DCU_DstActive);
		fun(DCU_ZeroTorqCompensateSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCTempAct);
		fun(IPS_TEL_DCDCTempOvrErr);
		fun(IPS_OBCUacActL2);
		fun(IPS_OBCUacActL3);
		fun(IPS_OBCCurrActL2);
		fun(IPS_OBCCurrActL3);
		fun(IPS_OBCEngMilLampReq);
		fun(DCU_stTrqEmLim);
		fun(DCU_EngMilLampReq);
		fun(DCU_OffsetCalVal);
		fun(DCU_DstActive);
		fun(DCU_ZeroTorqCompensateSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCTempAct);
		fun << (IPS_TEL_DCDCTempOvrErr);
		fun << (IPS_OBCUacActL2);
		fun << (IPS_OBCUacActL3);
		fun << (IPS_OBCCurrActL2);
		fun << (IPS_OBCCurrActL3);
		fun << (IPS_OBCEngMilLampReq);
		fun << (DCU_stTrqEmLim);
		fun << (DCU_EngMilLampReq);
		fun << (DCU_OffsetCalVal);
		fun << (DCU_DstActive);
		fun << (DCU_ZeroTorqCompensateSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCTempAct);
		fun >> (IPS_TEL_DCDCTempOvrErr);
		fun >> (IPS_OBCUacActL2);
		fun >> (IPS_OBCUacActL3);
		fun >> (IPS_OBCCurrActL2);
		fun >> (IPS_OBCCurrActL3);
		fun >> (IPS_OBCEngMilLampReq);
		fun >> (DCU_stTrqEmLim);
		fun >> (DCU_EngMilLampReq);
		fun >> (DCU_OffsetCalVal);
		fun >> (DCU_DstActive);
		fun >> (DCU_ZeroTorqCompensateSt);
	}
};

#endif //____BDCTEST1_H__
