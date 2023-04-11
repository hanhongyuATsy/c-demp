#ifndef ____BDCSSW7_H__
#define ____BDCSSW7_H__


#include "cstdint"






struct BDCSSW7 {
public:
	std::uint8_t ACU_RLSeatSlideXPosCtlReq;
	std::uint8_t ACU_RLSeatSlideYPosCtlReq;
	std::uint8_t ACU_RLSeatHeightPosCtlReq;
	std::uint8_t ACU_RLSeatBackrestPosCtlReq;
	std::uint8_t ACU_RLSeatTiltPosCtlReq;
	std::uint8_t ACU_RLSeatCushionPosCtlReq;
	std::uint64_t ACU_RLSeatOttomanPosCtlReq;
	std::uint8_t ACU_RLSeatOttomanAnglePosCtlReq;
	std::uint8_t ACU_RLSeatOttomanExtentPosCtlReq;
	std::uint8_t ACU_RLSeatInclinePosCtlReq;
	std::uint8_t ACU_RRSeatSlideXPosCtlReq;
	std::uint8_t ACU_RRSeatSlideYPosCtlReq;
	std::uint8_t ACU_RRSeatHeightPosCtlReq;
	std::uint8_t ACU_RRSeatBackrestPosCtlReq;
	std::uint8_t ACU_RRSeatTiltPosCtlReq;
	std::uint8_t ACU_RRSeatCushionPosCtlReq;
	std::uint64_t ACU_RRSeatOttomanPosCtlReq;
	std::uint8_t ACU_RRSeatOttomanAnglePosCtlReq;
	std::uint8_t ACU_RRSeatOttomanExtentPosCtlReq;
	std::uint8_t ACU_RRSeatInclinePosCtlReq;
	std::uint8_t SSW_RLSeatHeatTempValue;
	std::uint8_t SSW_RLSeatHeatTempVD;
	std::uint8_t SSW_RRSeatHeatTempValue;
	std::uint8_t SSW_RRSeatHeatTempVD;
	std::uint8_t ACU_RLSeatHeatLevelReq;
	std::uint8_t ACU_RLSeatVentLevelReq;
	std::uint8_t ACU_RRSeatHeatLevelReq;
	std::uint8_t ACU_RRSeatVentLevelReq;
	std::uint8_t ACU_RLSeatAutoModeCfgReq;
	std::uint8_t ACU_RRSeatAutoModeCfgReq;
	std::uint8_t SSW_RLSeatAutoModeCfgSt;
	std::uint8_t SSW_RRSeatAutoModeCfgSt;
/*
	BDCSSW7() {}
	~BDCSSW7() {}
	BDCSSW7(const std::uint8_t _ACU_RLSeatSlideXPosCtlReq,const std::uint8_t _ACU_RLSeatSlideYPosCtlReq,const std::uint8_t _ACU_RLSeatHeightPosCtlReq,const std::uint8_t _ACU_RLSeatBackrestPosCtlReq,const std::uint8_t _ACU_RLSeatTiltPosCtlReq,const std::uint8_t _ACU_RLSeatCushionPosCtlReq,const std::uint64_t _ACU_RLSeatOttomanPosCtlReq,const std::uint8_t _ACU_RLSeatOttomanAnglePosCtlReq,const std::uint8_t _ACU_RLSeatOttomanExtentPosCtlReq,const std::uint8_t _ACU_RLSeatInclinePosCtlReq,const std::uint8_t _ACU_RRSeatSlideXPosCtlReq,const std::uint8_t _ACU_RRSeatSlideYPosCtlReq,const std::uint8_t _ACU_RRSeatHeightPosCtlReq,const std::uint8_t _ACU_RRSeatBackrestPosCtlReq,const std::uint8_t _ACU_RRSeatTiltPosCtlReq,const std::uint8_t _ACU_RRSeatCushionPosCtlReq,const std::uint64_t _ACU_RRSeatOttomanPosCtlReq,const std::uint8_t _ACU_RRSeatOttomanAnglePosCtlReq,const std::uint8_t _ACU_RRSeatOttomanExtentPosCtlReq,const std::uint8_t _ACU_RRSeatInclinePosCtlReq,const std::uint8_t _SSW_RLSeatHeatTempValue,const std::uint8_t _SSW_RLSeatHeatTempVD,const std::uint8_t _SSW_RRSeatHeatTempValue,const std::uint8_t _SSW_RRSeatHeatTempVD,const std::uint8_t _ACU_RLSeatHeatLevelReq,const std::uint8_t _ACU_RLSeatVentLevelReq,const std::uint8_t _ACU_RRSeatHeatLevelReq,const std::uint8_t _ACU_RRSeatVentLevelReq,const std::uint8_t _ACU_RLSeatAutoModeCfgReq,const std::uint8_t _ACU_RRSeatAutoModeCfgReq,const std::uint8_t _SSW_RLSeatAutoModeCfgSt,const std::uint8_t _SSW_RRSeatAutoModeCfgSt):ACU_RLSeatSlideXPosCtlReq(_ACU_RLSeatSlideXPosCtlReq),ACU_RLSeatSlideYPosCtlReq(_ACU_RLSeatSlideYPosCtlReq),ACU_RLSeatHeightPosCtlReq(_ACU_RLSeatHeightPosCtlReq),ACU_RLSeatBackrestPosCtlReq(_ACU_RLSeatBackrestPosCtlReq),ACU_RLSeatTiltPosCtlReq(_ACU_RLSeatTiltPosCtlReq),ACU_RLSeatCushionPosCtlReq(_ACU_RLSeatCushionPosCtlReq),ACU_RLSeatOttomanPosCtlReq(_ACU_RLSeatOttomanPosCtlReq),ACU_RLSeatOttomanAnglePosCtlReq(_ACU_RLSeatOttomanAnglePosCtlReq),ACU_RLSeatOttomanExtentPosCtlReq(_ACU_RLSeatOttomanExtentPosCtlReq),ACU_RLSeatInclinePosCtlReq(_ACU_RLSeatInclinePosCtlReq),ACU_RRSeatSlideXPosCtlReq(_ACU_RRSeatSlideXPosCtlReq),ACU_RRSeatSlideYPosCtlReq(_ACU_RRSeatSlideYPosCtlReq),ACU_RRSeatHeightPosCtlReq(_ACU_RRSeatHeightPosCtlReq),ACU_RRSeatBackrestPosCtlReq(_ACU_RRSeatBackrestPosCtlReq),ACU_RRSeatTiltPosCtlReq(_ACU_RRSeatTiltPosCtlReq),ACU_RRSeatCushionPosCtlReq(_ACU_RRSeatCushionPosCtlReq),ACU_RRSeatOttomanPosCtlReq(_ACU_RRSeatOttomanPosCtlReq),ACU_RRSeatOttomanAnglePosCtlReq(_ACU_RRSeatOttomanAnglePosCtlReq),ACU_RRSeatOttomanExtentPosCtlReq(_ACU_RRSeatOttomanExtentPosCtlReq),ACU_RRSeatInclinePosCtlReq(_ACU_RRSeatInclinePosCtlReq),SSW_RLSeatHeatTempValue(_SSW_RLSeatHeatTempValue),SSW_RLSeatHeatTempVD(_SSW_RLSeatHeatTempVD),SSW_RRSeatHeatTempValue(_SSW_RRSeatHeatTempValue),SSW_RRSeatHeatTempVD(_SSW_RRSeatHeatTempVD),ACU_RLSeatHeatLevelReq(_ACU_RLSeatHeatLevelReq),ACU_RLSeatVentLevelReq(_ACU_RLSeatVentLevelReq),ACU_RRSeatHeatLevelReq(_ACU_RRSeatHeatLevelReq),ACU_RRSeatVentLevelReq(_ACU_RRSeatVentLevelReq),ACU_RLSeatAutoModeCfgReq(_ACU_RLSeatAutoModeCfgReq),ACU_RRSeatAutoModeCfgReq(_ACU_RRSeatAutoModeCfgReq),SSW_RLSeatAutoModeCfgSt(_SSW_RLSeatAutoModeCfgSt),SSW_RRSeatAutoModeCfgSt(_SSW_RRSeatAutoModeCfgSt) {}
	BDCSSW7(const BDCSSW7 &_x){
		ACU_RLSeatSlideXPosCtlReq = _x.ACU_RLSeatSlideXPosCtlReq;
		ACU_RLSeatSlideYPosCtlReq = _x.ACU_RLSeatSlideYPosCtlReq;
		ACU_RLSeatHeightPosCtlReq = _x.ACU_RLSeatHeightPosCtlReq;
		ACU_RLSeatBackrestPosCtlReq = _x.ACU_RLSeatBackrestPosCtlReq;
		ACU_RLSeatTiltPosCtlReq = _x.ACU_RLSeatTiltPosCtlReq;
		ACU_RLSeatCushionPosCtlReq = _x.ACU_RLSeatCushionPosCtlReq;
		ACU_RLSeatOttomanPosCtlReq = _x.ACU_RLSeatOttomanPosCtlReq;
		ACU_RLSeatOttomanAnglePosCtlReq = _x.ACU_RLSeatOttomanAnglePosCtlReq;
		ACU_RLSeatOttomanExtentPosCtlReq = _x.ACU_RLSeatOttomanExtentPosCtlReq;
		ACU_RLSeatInclinePosCtlReq = _x.ACU_RLSeatInclinePosCtlReq;
		ACU_RRSeatSlideXPosCtlReq = _x.ACU_RRSeatSlideXPosCtlReq;
		ACU_RRSeatSlideYPosCtlReq = _x.ACU_RRSeatSlideYPosCtlReq;
		ACU_RRSeatHeightPosCtlReq = _x.ACU_RRSeatHeightPosCtlReq;
		ACU_RRSeatBackrestPosCtlReq = _x.ACU_RRSeatBackrestPosCtlReq;
		ACU_RRSeatTiltPosCtlReq = _x.ACU_RRSeatTiltPosCtlReq;
		ACU_RRSeatCushionPosCtlReq = _x.ACU_RRSeatCushionPosCtlReq;
		ACU_RRSeatOttomanPosCtlReq = _x.ACU_RRSeatOttomanPosCtlReq;
		ACU_RRSeatOttomanAnglePosCtlReq = _x.ACU_RRSeatOttomanAnglePosCtlReq;
		ACU_RRSeatOttomanExtentPosCtlReq = _x.ACU_RRSeatOttomanExtentPosCtlReq;
		ACU_RRSeatInclinePosCtlReq = _x.ACU_RRSeatInclinePosCtlReq;
		SSW_RLSeatHeatTempValue = _x.SSW_RLSeatHeatTempValue;
		SSW_RLSeatHeatTempVD = _x.SSW_RLSeatHeatTempVD;
		SSW_RRSeatHeatTempValue = _x.SSW_RRSeatHeatTempValue;
		SSW_RRSeatHeatTempVD = _x.SSW_RRSeatHeatTempVD;
		ACU_RLSeatHeatLevelReq = _x.ACU_RLSeatHeatLevelReq;
		ACU_RLSeatVentLevelReq = _x.ACU_RLSeatVentLevelReq;
		ACU_RRSeatHeatLevelReq = _x.ACU_RRSeatHeatLevelReq;
		ACU_RRSeatVentLevelReq = _x.ACU_RRSeatVentLevelReq;
		ACU_RLSeatAutoModeCfgReq = _x.ACU_RLSeatAutoModeCfgReq;
		ACU_RRSeatAutoModeCfgReq = _x.ACU_RRSeatAutoModeCfgReq;
		SSW_RLSeatAutoModeCfgSt = _x.SSW_RLSeatAutoModeCfgSt;
		SSW_RRSeatAutoModeCfgSt = _x.SSW_RRSeatAutoModeCfgSt;
	}
	BDCSSW7(BDCSSW7 &&_x){
		ACU_RLSeatSlideXPosCtlReq = std::move(_x.ACU_RLSeatSlideXPosCtlReq);
		ACU_RLSeatSlideYPosCtlReq = std::move(_x.ACU_RLSeatSlideYPosCtlReq);
		ACU_RLSeatHeightPosCtlReq = std::move(_x.ACU_RLSeatHeightPosCtlReq);
		ACU_RLSeatBackrestPosCtlReq = std::move(_x.ACU_RLSeatBackrestPosCtlReq);
		ACU_RLSeatTiltPosCtlReq = std::move(_x.ACU_RLSeatTiltPosCtlReq);
		ACU_RLSeatCushionPosCtlReq = std::move(_x.ACU_RLSeatCushionPosCtlReq);
		ACU_RLSeatOttomanPosCtlReq = std::move(_x.ACU_RLSeatOttomanPosCtlReq);
		ACU_RLSeatOttomanAnglePosCtlReq = std::move(_x.ACU_RLSeatOttomanAnglePosCtlReq);
		ACU_RLSeatOttomanExtentPosCtlReq = std::move(_x.ACU_RLSeatOttomanExtentPosCtlReq);
		ACU_RLSeatInclinePosCtlReq = std::move(_x.ACU_RLSeatInclinePosCtlReq);
		ACU_RRSeatSlideXPosCtlReq = std::move(_x.ACU_RRSeatSlideXPosCtlReq);
		ACU_RRSeatSlideYPosCtlReq = std::move(_x.ACU_RRSeatSlideYPosCtlReq);
		ACU_RRSeatHeightPosCtlReq = std::move(_x.ACU_RRSeatHeightPosCtlReq);
		ACU_RRSeatBackrestPosCtlReq = std::move(_x.ACU_RRSeatBackrestPosCtlReq);
		ACU_RRSeatTiltPosCtlReq = std::move(_x.ACU_RRSeatTiltPosCtlReq);
		ACU_RRSeatCushionPosCtlReq = std::move(_x.ACU_RRSeatCushionPosCtlReq);
		ACU_RRSeatOttomanPosCtlReq = std::move(_x.ACU_RRSeatOttomanPosCtlReq);
		ACU_RRSeatOttomanAnglePosCtlReq = std::move(_x.ACU_RRSeatOttomanAnglePosCtlReq);
		ACU_RRSeatOttomanExtentPosCtlReq = std::move(_x.ACU_RRSeatOttomanExtentPosCtlReq);
		ACU_RRSeatInclinePosCtlReq = std::move(_x.ACU_RRSeatInclinePosCtlReq);
		SSW_RLSeatHeatTempValue = std::move(_x.SSW_RLSeatHeatTempValue);
		SSW_RLSeatHeatTempVD = std::move(_x.SSW_RLSeatHeatTempVD);
		SSW_RRSeatHeatTempValue = std::move(_x.SSW_RRSeatHeatTempValue);
		SSW_RRSeatHeatTempVD = std::move(_x.SSW_RRSeatHeatTempVD);
		ACU_RLSeatHeatLevelReq = std::move(_x.ACU_RLSeatHeatLevelReq);
		ACU_RLSeatVentLevelReq = std::move(_x.ACU_RLSeatVentLevelReq);
		ACU_RRSeatHeatLevelReq = std::move(_x.ACU_RRSeatHeatLevelReq);
		ACU_RRSeatVentLevelReq = std::move(_x.ACU_RRSeatVentLevelReq);
		ACU_RLSeatAutoModeCfgReq = std::move(_x.ACU_RLSeatAutoModeCfgReq);
		ACU_RRSeatAutoModeCfgReq = std::move(_x.ACU_RRSeatAutoModeCfgReq);
		SSW_RLSeatAutoModeCfgSt = std::move(_x.SSW_RLSeatAutoModeCfgSt);
		SSW_RRSeatAutoModeCfgSt = std::move(_x.SSW_RRSeatAutoModeCfgSt);
	}
	BDCSSW7& operator=(const BDCSSW7 &_x){
		ACU_RLSeatSlideXPosCtlReq = _x.ACU_RLSeatSlideXPosCtlReq;
		ACU_RLSeatSlideYPosCtlReq = _x.ACU_RLSeatSlideYPosCtlReq;
		ACU_RLSeatHeightPosCtlReq = _x.ACU_RLSeatHeightPosCtlReq;
		ACU_RLSeatBackrestPosCtlReq = _x.ACU_RLSeatBackrestPosCtlReq;
		ACU_RLSeatTiltPosCtlReq = _x.ACU_RLSeatTiltPosCtlReq;
		ACU_RLSeatCushionPosCtlReq = _x.ACU_RLSeatCushionPosCtlReq;
		ACU_RLSeatOttomanPosCtlReq = _x.ACU_RLSeatOttomanPosCtlReq;
		ACU_RLSeatOttomanAnglePosCtlReq = _x.ACU_RLSeatOttomanAnglePosCtlReq;
		ACU_RLSeatOttomanExtentPosCtlReq = _x.ACU_RLSeatOttomanExtentPosCtlReq;
		ACU_RLSeatInclinePosCtlReq = _x.ACU_RLSeatInclinePosCtlReq;
		ACU_RRSeatSlideXPosCtlReq = _x.ACU_RRSeatSlideXPosCtlReq;
		ACU_RRSeatSlideYPosCtlReq = _x.ACU_RRSeatSlideYPosCtlReq;
		ACU_RRSeatHeightPosCtlReq = _x.ACU_RRSeatHeightPosCtlReq;
		ACU_RRSeatBackrestPosCtlReq = _x.ACU_RRSeatBackrestPosCtlReq;
		ACU_RRSeatTiltPosCtlReq = _x.ACU_RRSeatTiltPosCtlReq;
		ACU_RRSeatCushionPosCtlReq = _x.ACU_RRSeatCushionPosCtlReq;
		ACU_RRSeatOttomanPosCtlReq = _x.ACU_RRSeatOttomanPosCtlReq;
		ACU_RRSeatOttomanAnglePosCtlReq = _x.ACU_RRSeatOttomanAnglePosCtlReq;
		ACU_RRSeatOttomanExtentPosCtlReq = _x.ACU_RRSeatOttomanExtentPosCtlReq;
		ACU_RRSeatInclinePosCtlReq = _x.ACU_RRSeatInclinePosCtlReq;
		SSW_RLSeatHeatTempValue = _x.SSW_RLSeatHeatTempValue;
		SSW_RLSeatHeatTempVD = _x.SSW_RLSeatHeatTempVD;
		SSW_RRSeatHeatTempValue = _x.SSW_RRSeatHeatTempValue;
		SSW_RRSeatHeatTempVD = _x.SSW_RRSeatHeatTempVD;
		ACU_RLSeatHeatLevelReq = _x.ACU_RLSeatHeatLevelReq;
		ACU_RLSeatVentLevelReq = _x.ACU_RLSeatVentLevelReq;
		ACU_RRSeatHeatLevelReq = _x.ACU_RRSeatHeatLevelReq;
		ACU_RRSeatVentLevelReq = _x.ACU_RRSeatVentLevelReq;
		ACU_RLSeatAutoModeCfgReq = _x.ACU_RLSeatAutoModeCfgReq;
		ACU_RRSeatAutoModeCfgReq = _x.ACU_RRSeatAutoModeCfgReq;
		SSW_RLSeatAutoModeCfgSt = _x.SSW_RLSeatAutoModeCfgSt;
		SSW_RRSeatAutoModeCfgSt = _x.SSW_RRSeatAutoModeCfgSt;
		return *this;
	}
	BDCSSW7& operator=(BDCSSW7 &&_x){
		ACU_RLSeatSlideXPosCtlReq = std::move(_x.ACU_RLSeatSlideXPosCtlReq);
		ACU_RLSeatSlideYPosCtlReq = std::move(_x.ACU_RLSeatSlideYPosCtlReq);
		ACU_RLSeatHeightPosCtlReq = std::move(_x.ACU_RLSeatHeightPosCtlReq);
		ACU_RLSeatBackrestPosCtlReq = std::move(_x.ACU_RLSeatBackrestPosCtlReq);
		ACU_RLSeatTiltPosCtlReq = std::move(_x.ACU_RLSeatTiltPosCtlReq);
		ACU_RLSeatCushionPosCtlReq = std::move(_x.ACU_RLSeatCushionPosCtlReq);
		ACU_RLSeatOttomanPosCtlReq = std::move(_x.ACU_RLSeatOttomanPosCtlReq);
		ACU_RLSeatOttomanAnglePosCtlReq = std::move(_x.ACU_RLSeatOttomanAnglePosCtlReq);
		ACU_RLSeatOttomanExtentPosCtlReq = std::move(_x.ACU_RLSeatOttomanExtentPosCtlReq);
		ACU_RLSeatInclinePosCtlReq = std::move(_x.ACU_RLSeatInclinePosCtlReq);
		ACU_RRSeatSlideXPosCtlReq = std::move(_x.ACU_RRSeatSlideXPosCtlReq);
		ACU_RRSeatSlideYPosCtlReq = std::move(_x.ACU_RRSeatSlideYPosCtlReq);
		ACU_RRSeatHeightPosCtlReq = std::move(_x.ACU_RRSeatHeightPosCtlReq);
		ACU_RRSeatBackrestPosCtlReq = std::move(_x.ACU_RRSeatBackrestPosCtlReq);
		ACU_RRSeatTiltPosCtlReq = std::move(_x.ACU_RRSeatTiltPosCtlReq);
		ACU_RRSeatCushionPosCtlReq = std::move(_x.ACU_RRSeatCushionPosCtlReq);
		ACU_RRSeatOttomanPosCtlReq = std::move(_x.ACU_RRSeatOttomanPosCtlReq);
		ACU_RRSeatOttomanAnglePosCtlReq = std::move(_x.ACU_RRSeatOttomanAnglePosCtlReq);
		ACU_RRSeatOttomanExtentPosCtlReq = std::move(_x.ACU_RRSeatOttomanExtentPosCtlReq);
		ACU_RRSeatInclinePosCtlReq = std::move(_x.ACU_RRSeatInclinePosCtlReq);
		SSW_RLSeatHeatTempValue = std::move(_x.SSW_RLSeatHeatTempValue);
		SSW_RLSeatHeatTempVD = std::move(_x.SSW_RLSeatHeatTempVD);
		SSW_RRSeatHeatTempValue = std::move(_x.SSW_RRSeatHeatTempValue);
		SSW_RRSeatHeatTempVD = std::move(_x.SSW_RRSeatHeatTempVD);
		ACU_RLSeatHeatLevelReq = std::move(_x.ACU_RLSeatHeatLevelReq);
		ACU_RLSeatVentLevelReq = std::move(_x.ACU_RLSeatVentLevelReq);
		ACU_RRSeatHeatLevelReq = std::move(_x.ACU_RRSeatHeatLevelReq);
		ACU_RRSeatVentLevelReq = std::move(_x.ACU_RRSeatVentLevelReq);
		ACU_RLSeatAutoModeCfgReq = std::move(_x.ACU_RLSeatAutoModeCfgReq);
		ACU_RRSeatAutoModeCfgReq = std::move(_x.ACU_RRSeatAutoModeCfgReq);
		SSW_RLSeatAutoModeCfgSt = std::move(_x.SSW_RLSeatAutoModeCfgSt);
		SSW_RRSeatAutoModeCfgSt = std::move(_x.SSW_RRSeatAutoModeCfgSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ACU_RLSeatSlideXPosCtlReq);
		fun(ACU_RLSeatSlideYPosCtlReq);
		fun(ACU_RLSeatHeightPosCtlReq);
		fun(ACU_RLSeatBackrestPosCtlReq);
		fun(ACU_RLSeatTiltPosCtlReq);
		fun(ACU_RLSeatCushionPosCtlReq);
		fun(ACU_RLSeatOttomanPosCtlReq);
		fun(ACU_RLSeatOttomanAnglePosCtlReq);
		fun(ACU_RLSeatOttomanExtentPosCtlReq);
		fun(ACU_RLSeatInclinePosCtlReq);
		fun(ACU_RRSeatSlideXPosCtlReq);
		fun(ACU_RRSeatSlideYPosCtlReq);
		fun(ACU_RRSeatHeightPosCtlReq);
		fun(ACU_RRSeatBackrestPosCtlReq);
		fun(ACU_RRSeatTiltPosCtlReq);
		fun(ACU_RRSeatCushionPosCtlReq);
		fun(ACU_RRSeatOttomanPosCtlReq);
		fun(ACU_RRSeatOttomanAnglePosCtlReq);
		fun(ACU_RRSeatOttomanExtentPosCtlReq);
		fun(ACU_RRSeatInclinePosCtlReq);
		fun(SSW_RLSeatHeatTempValue);
		fun(SSW_RLSeatHeatTempVD);
		fun(SSW_RRSeatHeatTempValue);
		fun(SSW_RRSeatHeatTempVD);
		fun(ACU_RLSeatHeatLevelReq);
		fun(ACU_RLSeatVentLevelReq);
		fun(ACU_RRSeatHeatLevelReq);
		fun(ACU_RRSeatVentLevelReq);
		fun(ACU_RLSeatAutoModeCfgReq);
		fun(ACU_RRSeatAutoModeCfgReq);
		fun(SSW_RLSeatAutoModeCfgSt);
		fun(SSW_RRSeatAutoModeCfgSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ACU_RLSeatSlideXPosCtlReq);
		fun(ACU_RLSeatSlideYPosCtlReq);
		fun(ACU_RLSeatHeightPosCtlReq);
		fun(ACU_RLSeatBackrestPosCtlReq);
		fun(ACU_RLSeatTiltPosCtlReq);
		fun(ACU_RLSeatCushionPosCtlReq);
		fun(ACU_RLSeatOttomanPosCtlReq);
		fun(ACU_RLSeatOttomanAnglePosCtlReq);
		fun(ACU_RLSeatOttomanExtentPosCtlReq);
		fun(ACU_RLSeatInclinePosCtlReq);
		fun(ACU_RRSeatSlideXPosCtlReq);
		fun(ACU_RRSeatSlideYPosCtlReq);
		fun(ACU_RRSeatHeightPosCtlReq);
		fun(ACU_RRSeatBackrestPosCtlReq);
		fun(ACU_RRSeatTiltPosCtlReq);
		fun(ACU_RRSeatCushionPosCtlReq);
		fun(ACU_RRSeatOttomanPosCtlReq);
		fun(ACU_RRSeatOttomanAnglePosCtlReq);
		fun(ACU_RRSeatOttomanExtentPosCtlReq);
		fun(ACU_RRSeatInclinePosCtlReq);
		fun(SSW_RLSeatHeatTempValue);
		fun(SSW_RLSeatHeatTempVD);
		fun(SSW_RRSeatHeatTempValue);
		fun(SSW_RRSeatHeatTempVD);
		fun(ACU_RLSeatHeatLevelReq);
		fun(ACU_RLSeatVentLevelReq);
		fun(ACU_RRSeatHeatLevelReq);
		fun(ACU_RRSeatVentLevelReq);
		fun(ACU_RLSeatAutoModeCfgReq);
		fun(ACU_RRSeatAutoModeCfgReq);
		fun(SSW_RLSeatAutoModeCfgSt);
		fun(SSW_RRSeatAutoModeCfgSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ACU_RLSeatSlideXPosCtlReq);
		fun << (ACU_RLSeatSlideYPosCtlReq);
		fun << (ACU_RLSeatHeightPosCtlReq);
		fun << (ACU_RLSeatBackrestPosCtlReq);
		fun << (ACU_RLSeatTiltPosCtlReq);
		fun << (ACU_RLSeatCushionPosCtlReq);
		fun << (ACU_RLSeatOttomanPosCtlReq);
		fun << (ACU_RLSeatOttomanAnglePosCtlReq);
		fun << (ACU_RLSeatOttomanExtentPosCtlReq);
		fun << (ACU_RLSeatInclinePosCtlReq);
		fun << (ACU_RRSeatSlideXPosCtlReq);
		fun << (ACU_RRSeatSlideYPosCtlReq);
		fun << (ACU_RRSeatHeightPosCtlReq);
		fun << (ACU_RRSeatBackrestPosCtlReq);
		fun << (ACU_RRSeatTiltPosCtlReq);
		fun << (ACU_RRSeatCushionPosCtlReq);
		fun << (ACU_RRSeatOttomanPosCtlReq);
		fun << (ACU_RRSeatOttomanAnglePosCtlReq);
		fun << (ACU_RRSeatOttomanExtentPosCtlReq);
		fun << (ACU_RRSeatInclinePosCtlReq);
		fun << (SSW_RLSeatHeatTempValue);
		fun << (SSW_RLSeatHeatTempVD);
		fun << (SSW_RRSeatHeatTempValue);
		fun << (SSW_RRSeatHeatTempVD);
		fun << (ACU_RLSeatHeatLevelReq);
		fun << (ACU_RLSeatVentLevelReq);
		fun << (ACU_RRSeatHeatLevelReq);
		fun << (ACU_RRSeatVentLevelReq);
		fun << (ACU_RLSeatAutoModeCfgReq);
		fun << (ACU_RRSeatAutoModeCfgReq);
		fun << (SSW_RLSeatAutoModeCfgSt);
		fun << (SSW_RRSeatAutoModeCfgSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ACU_RLSeatSlideXPosCtlReq);
		fun >> (ACU_RLSeatSlideYPosCtlReq);
		fun >> (ACU_RLSeatHeightPosCtlReq);
		fun >> (ACU_RLSeatBackrestPosCtlReq);
		fun >> (ACU_RLSeatTiltPosCtlReq);
		fun >> (ACU_RLSeatCushionPosCtlReq);
		fun >> (ACU_RLSeatOttomanPosCtlReq);
		fun >> (ACU_RLSeatOttomanAnglePosCtlReq);
		fun >> (ACU_RLSeatOttomanExtentPosCtlReq);
		fun >> (ACU_RLSeatInclinePosCtlReq);
		fun >> (ACU_RRSeatSlideXPosCtlReq);
		fun >> (ACU_RRSeatSlideYPosCtlReq);
		fun >> (ACU_RRSeatHeightPosCtlReq);
		fun >> (ACU_RRSeatBackrestPosCtlReq);
		fun >> (ACU_RRSeatTiltPosCtlReq);
		fun >> (ACU_RRSeatCushionPosCtlReq);
		fun >> (ACU_RRSeatOttomanPosCtlReq);
		fun >> (ACU_RRSeatOttomanAnglePosCtlReq);
		fun >> (ACU_RRSeatOttomanExtentPosCtlReq);
		fun >> (ACU_RRSeatInclinePosCtlReq);
		fun >> (SSW_RLSeatHeatTempValue);
		fun >> (SSW_RLSeatHeatTempVD);
		fun >> (SSW_RRSeatHeatTempValue);
		fun >> (SSW_RRSeatHeatTempVD);
		fun >> (ACU_RLSeatHeatLevelReq);
		fun >> (ACU_RLSeatVentLevelReq);
		fun >> (ACU_RRSeatHeatLevelReq);
		fun >> (ACU_RRSeatVentLevelReq);
		fun >> (ACU_RLSeatAutoModeCfgReq);
		fun >> (ACU_RRSeatAutoModeCfgReq);
		fun >> (SSW_RLSeatAutoModeCfgSt);
		fun >> (SSW_RRSeatAutoModeCfgSt);
	}
};

#endif //____BDCSSW7_H__
