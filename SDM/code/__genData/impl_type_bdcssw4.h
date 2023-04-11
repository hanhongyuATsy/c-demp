#ifndef ____BDCSSW4_H__
#define ____BDCSSW4_H__


#include "cstdint"






struct BDCSSW4 {
public:
	std::uint8_t SSW_FROttomanAngleCurrentPst;
	std::uint8_t SSW_FROttomanExtentCurrentPst;
	std::uint8_t SSW_FROttomanAngleCurrentOpeSt;
	std::uint8_t SSW_FROttomanExtentCurrentOpeSt;
	std::uint8_t SSW_SteerHeatTempValue;
	std::uint8_t SSW_FRSeatOttomanAngleFaultSt;
	std::uint8_t SSW_FRSeatOttomanExtentFaultSt;
	std::uint8_t SSW_FRLumbarOpeSt;
	std::uint8_t SSW_PosSaveRecallPopUpReq;
	std::uint8_t ACU_FRSeatOttomanAnglePosCtlReq;
	std::uint8_t ACU_FRSeatOttomanExtentPosCtlReq;
/*
	BDCSSW4() {}
	~BDCSSW4() {}
	BDCSSW4(const std::uint8_t _SSW_FROttomanAngleCurrentPst,const std::uint8_t _SSW_FROttomanExtentCurrentPst,const std::uint8_t _SSW_FROttomanAngleCurrentOpeSt,const std::uint8_t _SSW_FROttomanExtentCurrentOpeSt,const std::uint8_t _SSW_SteerHeatTempValue,const std::uint8_t _SSW_FRSeatOttomanAngleFaultSt,const std::uint8_t _SSW_FRSeatOttomanExtentFaultSt,const std::uint8_t _SSW_FRLumbarOpeSt,const std::uint8_t _SSW_PosSaveRecallPopUpReq,const std::uint8_t _ACU_FRSeatOttomanAnglePosCtlReq,const std::uint8_t _ACU_FRSeatOttomanExtentPosCtlReq):SSW_FROttomanAngleCurrentPst(_SSW_FROttomanAngleCurrentPst),SSW_FROttomanExtentCurrentPst(_SSW_FROttomanExtentCurrentPst),SSW_FROttomanAngleCurrentOpeSt(_SSW_FROttomanAngleCurrentOpeSt),SSW_FROttomanExtentCurrentOpeSt(_SSW_FROttomanExtentCurrentOpeSt),SSW_SteerHeatTempValue(_SSW_SteerHeatTempValue),SSW_FRSeatOttomanAngleFaultSt(_SSW_FRSeatOttomanAngleFaultSt),SSW_FRSeatOttomanExtentFaultSt(_SSW_FRSeatOttomanExtentFaultSt),SSW_FRLumbarOpeSt(_SSW_FRLumbarOpeSt),SSW_PosSaveRecallPopUpReq(_SSW_PosSaveRecallPopUpReq),ACU_FRSeatOttomanAnglePosCtlReq(_ACU_FRSeatOttomanAnglePosCtlReq),ACU_FRSeatOttomanExtentPosCtlReq(_ACU_FRSeatOttomanExtentPosCtlReq) {}
	BDCSSW4(const BDCSSW4 &_x){
		SSW_FROttomanAngleCurrentPst = _x.SSW_FROttomanAngleCurrentPst;
		SSW_FROttomanExtentCurrentPst = _x.SSW_FROttomanExtentCurrentPst;
		SSW_FROttomanAngleCurrentOpeSt = _x.SSW_FROttomanAngleCurrentOpeSt;
		SSW_FROttomanExtentCurrentOpeSt = _x.SSW_FROttomanExtentCurrentOpeSt;
		SSW_SteerHeatTempValue = _x.SSW_SteerHeatTempValue;
		SSW_FRSeatOttomanAngleFaultSt = _x.SSW_FRSeatOttomanAngleFaultSt;
		SSW_FRSeatOttomanExtentFaultSt = _x.SSW_FRSeatOttomanExtentFaultSt;
		SSW_FRLumbarOpeSt = _x.SSW_FRLumbarOpeSt;
		SSW_PosSaveRecallPopUpReq = _x.SSW_PosSaveRecallPopUpReq;
		ACU_FRSeatOttomanAnglePosCtlReq = _x.ACU_FRSeatOttomanAnglePosCtlReq;
		ACU_FRSeatOttomanExtentPosCtlReq = _x.ACU_FRSeatOttomanExtentPosCtlReq;
	}
	BDCSSW4(BDCSSW4 &&_x){
		SSW_FROttomanAngleCurrentPst = std::move(_x.SSW_FROttomanAngleCurrentPst);
		SSW_FROttomanExtentCurrentPst = std::move(_x.SSW_FROttomanExtentCurrentPst);
		SSW_FROttomanAngleCurrentOpeSt = std::move(_x.SSW_FROttomanAngleCurrentOpeSt);
		SSW_FROttomanExtentCurrentOpeSt = std::move(_x.SSW_FROttomanExtentCurrentOpeSt);
		SSW_SteerHeatTempValue = std::move(_x.SSW_SteerHeatTempValue);
		SSW_FRSeatOttomanAngleFaultSt = std::move(_x.SSW_FRSeatOttomanAngleFaultSt);
		SSW_FRSeatOttomanExtentFaultSt = std::move(_x.SSW_FRSeatOttomanExtentFaultSt);
		SSW_FRLumbarOpeSt = std::move(_x.SSW_FRLumbarOpeSt);
		SSW_PosSaveRecallPopUpReq = std::move(_x.SSW_PosSaveRecallPopUpReq);
		ACU_FRSeatOttomanAnglePosCtlReq = std::move(_x.ACU_FRSeatOttomanAnglePosCtlReq);
		ACU_FRSeatOttomanExtentPosCtlReq = std::move(_x.ACU_FRSeatOttomanExtentPosCtlReq);
	}
	BDCSSW4& operator=(const BDCSSW4 &_x){
		SSW_FROttomanAngleCurrentPst = _x.SSW_FROttomanAngleCurrentPst;
		SSW_FROttomanExtentCurrentPst = _x.SSW_FROttomanExtentCurrentPst;
		SSW_FROttomanAngleCurrentOpeSt = _x.SSW_FROttomanAngleCurrentOpeSt;
		SSW_FROttomanExtentCurrentOpeSt = _x.SSW_FROttomanExtentCurrentOpeSt;
		SSW_SteerHeatTempValue = _x.SSW_SteerHeatTempValue;
		SSW_FRSeatOttomanAngleFaultSt = _x.SSW_FRSeatOttomanAngleFaultSt;
		SSW_FRSeatOttomanExtentFaultSt = _x.SSW_FRSeatOttomanExtentFaultSt;
		SSW_FRLumbarOpeSt = _x.SSW_FRLumbarOpeSt;
		SSW_PosSaveRecallPopUpReq = _x.SSW_PosSaveRecallPopUpReq;
		ACU_FRSeatOttomanAnglePosCtlReq = _x.ACU_FRSeatOttomanAnglePosCtlReq;
		ACU_FRSeatOttomanExtentPosCtlReq = _x.ACU_FRSeatOttomanExtentPosCtlReq;
		return *this;
	}
	BDCSSW4& operator=(BDCSSW4 &&_x){
		SSW_FROttomanAngleCurrentPst = std::move(_x.SSW_FROttomanAngleCurrentPst);
		SSW_FROttomanExtentCurrentPst = std::move(_x.SSW_FROttomanExtentCurrentPst);
		SSW_FROttomanAngleCurrentOpeSt = std::move(_x.SSW_FROttomanAngleCurrentOpeSt);
		SSW_FROttomanExtentCurrentOpeSt = std::move(_x.SSW_FROttomanExtentCurrentOpeSt);
		SSW_SteerHeatTempValue = std::move(_x.SSW_SteerHeatTempValue);
		SSW_FRSeatOttomanAngleFaultSt = std::move(_x.SSW_FRSeatOttomanAngleFaultSt);
		SSW_FRSeatOttomanExtentFaultSt = std::move(_x.SSW_FRSeatOttomanExtentFaultSt);
		SSW_FRLumbarOpeSt = std::move(_x.SSW_FRLumbarOpeSt);
		SSW_PosSaveRecallPopUpReq = std::move(_x.SSW_PosSaveRecallPopUpReq);
		ACU_FRSeatOttomanAnglePosCtlReq = std::move(_x.ACU_FRSeatOttomanAnglePosCtlReq);
		ACU_FRSeatOttomanExtentPosCtlReq = std::move(_x.ACU_FRSeatOttomanExtentPosCtlReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_FROttomanAngleCurrentPst);
		fun(SSW_FROttomanExtentCurrentPst);
		fun(SSW_FROttomanAngleCurrentOpeSt);
		fun(SSW_FROttomanExtentCurrentOpeSt);
		fun(SSW_SteerHeatTempValue);
		fun(SSW_FRSeatOttomanAngleFaultSt);
		fun(SSW_FRSeatOttomanExtentFaultSt);
		fun(SSW_FRLumbarOpeSt);
		fun(SSW_PosSaveRecallPopUpReq);
		fun(ACU_FRSeatOttomanAnglePosCtlReq);
		fun(ACU_FRSeatOttomanExtentPosCtlReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_FROttomanAngleCurrentPst);
		fun(SSW_FROttomanExtentCurrentPst);
		fun(SSW_FROttomanAngleCurrentOpeSt);
		fun(SSW_FROttomanExtentCurrentOpeSt);
		fun(SSW_SteerHeatTempValue);
		fun(SSW_FRSeatOttomanAngleFaultSt);
		fun(SSW_FRSeatOttomanExtentFaultSt);
		fun(SSW_FRLumbarOpeSt);
		fun(SSW_PosSaveRecallPopUpReq);
		fun(ACU_FRSeatOttomanAnglePosCtlReq);
		fun(ACU_FRSeatOttomanExtentPosCtlReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_FROttomanAngleCurrentPst);
		fun << (SSW_FROttomanExtentCurrentPst);
		fun << (SSW_FROttomanAngleCurrentOpeSt);
		fun << (SSW_FROttomanExtentCurrentOpeSt);
		fun << (SSW_SteerHeatTempValue);
		fun << (SSW_FRSeatOttomanAngleFaultSt);
		fun << (SSW_FRSeatOttomanExtentFaultSt);
		fun << (SSW_FRLumbarOpeSt);
		fun << (SSW_PosSaveRecallPopUpReq);
		fun << (ACU_FRSeatOttomanAnglePosCtlReq);
		fun << (ACU_FRSeatOttomanExtentPosCtlReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_FROttomanAngleCurrentPst);
		fun >> (SSW_FROttomanExtentCurrentPst);
		fun >> (SSW_FROttomanAngleCurrentOpeSt);
		fun >> (SSW_FROttomanExtentCurrentOpeSt);
		fun >> (SSW_SteerHeatTempValue);
		fun >> (SSW_FRSeatOttomanAngleFaultSt);
		fun >> (SSW_FRSeatOttomanExtentFaultSt);
		fun >> (SSW_FRLumbarOpeSt);
		fun >> (SSW_PosSaveRecallPopUpReq);
		fun >> (ACU_FRSeatOttomanAnglePosCtlReq);
		fun >> (ACU_FRSeatOttomanExtentPosCtlReq);
	}
};

#endif //____BDCSSW4_H__
