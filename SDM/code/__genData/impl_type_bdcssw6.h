#ifndef ____BDCSSW6_H__
#define ____BDCSSW6_H__


#include "cstdint"






struct BDCSSW6 {
public:
	std::uint8_t SSW_RLSeatVentSt;
	std::uint8_t SSW_RLSeatHeatSt;
	std::uint8_t SSW_RRSeatVentSt;
	std::uint8_t SSW_RRSeatHeatSt;
	std::uint8_t SSW_RLSeatBackrestFaultSt;
	std::uint8_t SSW_RLSeatTiltFaultSt;
	std::uint8_t SSW_RLSeatOttomanAngleFaultSt;
	std::uint8_t SSW_RLSeatVentFaultSt;
	std::uint8_t SSW_RLSeatHeatFaultSt;
	std::uint8_t SSW_RRSeatBackrestFaultSt;
	std::uint8_t SSW_RRSeatTiltFaultSt;
	std::uint8_t SSW_RRSeatOttomanAngleFaultSt;
	std::uint8_t SSW_RRSeatVentFaultSt;
	std::uint8_t SSW_RRSeatHeatFaultSt;
	std::uint8_t SSW_RLSCSOpeSt;
	std::uint8_t SSW_RRSCSOpeSt;
/*
	BDCSSW6() {}
	~BDCSSW6() {}
	BDCSSW6(const std::uint8_t _SSW_RLSeatVentSt,const std::uint8_t _SSW_RLSeatHeatSt,const std::uint8_t _SSW_RRSeatVentSt,const std::uint8_t _SSW_RRSeatHeatSt,const std::uint8_t _SSW_RLSeatBackrestFaultSt,const std::uint8_t _SSW_RLSeatTiltFaultSt,const std::uint8_t _SSW_RLSeatOttomanAngleFaultSt,const std::uint8_t _SSW_RLSeatVentFaultSt,const std::uint8_t _SSW_RLSeatHeatFaultSt,const std::uint8_t _SSW_RRSeatBackrestFaultSt,const std::uint8_t _SSW_RRSeatTiltFaultSt,const std::uint8_t _SSW_RRSeatOttomanAngleFaultSt,const std::uint8_t _SSW_RRSeatVentFaultSt,const std::uint8_t _SSW_RRSeatHeatFaultSt,const std::uint8_t _SSW_RLSCSOpeSt,const std::uint8_t _SSW_RRSCSOpeSt):SSW_RLSeatVentSt(_SSW_RLSeatVentSt),SSW_RLSeatHeatSt(_SSW_RLSeatHeatSt),SSW_RRSeatVentSt(_SSW_RRSeatVentSt),SSW_RRSeatHeatSt(_SSW_RRSeatHeatSt),SSW_RLSeatBackrestFaultSt(_SSW_RLSeatBackrestFaultSt),SSW_RLSeatTiltFaultSt(_SSW_RLSeatTiltFaultSt),SSW_RLSeatOttomanAngleFaultSt(_SSW_RLSeatOttomanAngleFaultSt),SSW_RLSeatVentFaultSt(_SSW_RLSeatVentFaultSt),SSW_RLSeatHeatFaultSt(_SSW_RLSeatHeatFaultSt),SSW_RRSeatBackrestFaultSt(_SSW_RRSeatBackrestFaultSt),SSW_RRSeatTiltFaultSt(_SSW_RRSeatTiltFaultSt),SSW_RRSeatOttomanAngleFaultSt(_SSW_RRSeatOttomanAngleFaultSt),SSW_RRSeatVentFaultSt(_SSW_RRSeatVentFaultSt),SSW_RRSeatHeatFaultSt(_SSW_RRSeatHeatFaultSt),SSW_RLSCSOpeSt(_SSW_RLSCSOpeSt),SSW_RRSCSOpeSt(_SSW_RRSCSOpeSt) {}
	BDCSSW6(const BDCSSW6 &_x){
		SSW_RLSeatVentSt = _x.SSW_RLSeatVentSt;
		SSW_RLSeatHeatSt = _x.SSW_RLSeatHeatSt;
		SSW_RRSeatVentSt = _x.SSW_RRSeatVentSt;
		SSW_RRSeatHeatSt = _x.SSW_RRSeatHeatSt;
		SSW_RLSeatBackrestFaultSt = _x.SSW_RLSeatBackrestFaultSt;
		SSW_RLSeatTiltFaultSt = _x.SSW_RLSeatTiltFaultSt;
		SSW_RLSeatOttomanAngleFaultSt = _x.SSW_RLSeatOttomanAngleFaultSt;
		SSW_RLSeatVentFaultSt = _x.SSW_RLSeatVentFaultSt;
		SSW_RLSeatHeatFaultSt = _x.SSW_RLSeatHeatFaultSt;
		SSW_RRSeatBackrestFaultSt = _x.SSW_RRSeatBackrestFaultSt;
		SSW_RRSeatTiltFaultSt = _x.SSW_RRSeatTiltFaultSt;
		SSW_RRSeatOttomanAngleFaultSt = _x.SSW_RRSeatOttomanAngleFaultSt;
		SSW_RRSeatVentFaultSt = _x.SSW_RRSeatVentFaultSt;
		SSW_RRSeatHeatFaultSt = _x.SSW_RRSeatHeatFaultSt;
		SSW_RLSCSOpeSt = _x.SSW_RLSCSOpeSt;
		SSW_RRSCSOpeSt = _x.SSW_RRSCSOpeSt;
	}
	BDCSSW6(BDCSSW6 &&_x){
		SSW_RLSeatVentSt = std::move(_x.SSW_RLSeatVentSt);
		SSW_RLSeatHeatSt = std::move(_x.SSW_RLSeatHeatSt);
		SSW_RRSeatVentSt = std::move(_x.SSW_RRSeatVentSt);
		SSW_RRSeatHeatSt = std::move(_x.SSW_RRSeatHeatSt);
		SSW_RLSeatBackrestFaultSt = std::move(_x.SSW_RLSeatBackrestFaultSt);
		SSW_RLSeatTiltFaultSt = std::move(_x.SSW_RLSeatTiltFaultSt);
		SSW_RLSeatOttomanAngleFaultSt = std::move(_x.SSW_RLSeatOttomanAngleFaultSt);
		SSW_RLSeatVentFaultSt = std::move(_x.SSW_RLSeatVentFaultSt);
		SSW_RLSeatHeatFaultSt = std::move(_x.SSW_RLSeatHeatFaultSt);
		SSW_RRSeatBackrestFaultSt = std::move(_x.SSW_RRSeatBackrestFaultSt);
		SSW_RRSeatTiltFaultSt = std::move(_x.SSW_RRSeatTiltFaultSt);
		SSW_RRSeatOttomanAngleFaultSt = std::move(_x.SSW_RRSeatOttomanAngleFaultSt);
		SSW_RRSeatVentFaultSt = std::move(_x.SSW_RRSeatVentFaultSt);
		SSW_RRSeatHeatFaultSt = std::move(_x.SSW_RRSeatHeatFaultSt);
		SSW_RLSCSOpeSt = std::move(_x.SSW_RLSCSOpeSt);
		SSW_RRSCSOpeSt = std::move(_x.SSW_RRSCSOpeSt);
	}
	BDCSSW6& operator=(const BDCSSW6 &_x){
		SSW_RLSeatVentSt = _x.SSW_RLSeatVentSt;
		SSW_RLSeatHeatSt = _x.SSW_RLSeatHeatSt;
		SSW_RRSeatVentSt = _x.SSW_RRSeatVentSt;
		SSW_RRSeatHeatSt = _x.SSW_RRSeatHeatSt;
		SSW_RLSeatBackrestFaultSt = _x.SSW_RLSeatBackrestFaultSt;
		SSW_RLSeatTiltFaultSt = _x.SSW_RLSeatTiltFaultSt;
		SSW_RLSeatOttomanAngleFaultSt = _x.SSW_RLSeatOttomanAngleFaultSt;
		SSW_RLSeatVentFaultSt = _x.SSW_RLSeatVentFaultSt;
		SSW_RLSeatHeatFaultSt = _x.SSW_RLSeatHeatFaultSt;
		SSW_RRSeatBackrestFaultSt = _x.SSW_RRSeatBackrestFaultSt;
		SSW_RRSeatTiltFaultSt = _x.SSW_RRSeatTiltFaultSt;
		SSW_RRSeatOttomanAngleFaultSt = _x.SSW_RRSeatOttomanAngleFaultSt;
		SSW_RRSeatVentFaultSt = _x.SSW_RRSeatVentFaultSt;
		SSW_RRSeatHeatFaultSt = _x.SSW_RRSeatHeatFaultSt;
		SSW_RLSCSOpeSt = _x.SSW_RLSCSOpeSt;
		SSW_RRSCSOpeSt = _x.SSW_RRSCSOpeSt;
		return *this;
	}
	BDCSSW6& operator=(BDCSSW6 &&_x){
		SSW_RLSeatVentSt = std::move(_x.SSW_RLSeatVentSt);
		SSW_RLSeatHeatSt = std::move(_x.SSW_RLSeatHeatSt);
		SSW_RRSeatVentSt = std::move(_x.SSW_RRSeatVentSt);
		SSW_RRSeatHeatSt = std::move(_x.SSW_RRSeatHeatSt);
		SSW_RLSeatBackrestFaultSt = std::move(_x.SSW_RLSeatBackrestFaultSt);
		SSW_RLSeatTiltFaultSt = std::move(_x.SSW_RLSeatTiltFaultSt);
		SSW_RLSeatOttomanAngleFaultSt = std::move(_x.SSW_RLSeatOttomanAngleFaultSt);
		SSW_RLSeatVentFaultSt = std::move(_x.SSW_RLSeatVentFaultSt);
		SSW_RLSeatHeatFaultSt = std::move(_x.SSW_RLSeatHeatFaultSt);
		SSW_RRSeatBackrestFaultSt = std::move(_x.SSW_RRSeatBackrestFaultSt);
		SSW_RRSeatTiltFaultSt = std::move(_x.SSW_RRSeatTiltFaultSt);
		SSW_RRSeatOttomanAngleFaultSt = std::move(_x.SSW_RRSeatOttomanAngleFaultSt);
		SSW_RRSeatVentFaultSt = std::move(_x.SSW_RRSeatVentFaultSt);
		SSW_RRSeatHeatFaultSt = std::move(_x.SSW_RRSeatHeatFaultSt);
		SSW_RLSCSOpeSt = std::move(_x.SSW_RLSCSOpeSt);
		SSW_RRSCSOpeSt = std::move(_x.SSW_RRSCSOpeSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_RLSeatVentSt);
		fun(SSW_RLSeatHeatSt);
		fun(SSW_RRSeatVentSt);
		fun(SSW_RRSeatHeatSt);
		fun(SSW_RLSeatBackrestFaultSt);
		fun(SSW_RLSeatTiltFaultSt);
		fun(SSW_RLSeatOttomanAngleFaultSt);
		fun(SSW_RLSeatVentFaultSt);
		fun(SSW_RLSeatHeatFaultSt);
		fun(SSW_RRSeatBackrestFaultSt);
		fun(SSW_RRSeatTiltFaultSt);
		fun(SSW_RRSeatOttomanAngleFaultSt);
		fun(SSW_RRSeatVentFaultSt);
		fun(SSW_RRSeatHeatFaultSt);
		fun(SSW_RLSCSOpeSt);
		fun(SSW_RRSCSOpeSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_RLSeatVentSt);
		fun(SSW_RLSeatHeatSt);
		fun(SSW_RRSeatVentSt);
		fun(SSW_RRSeatHeatSt);
		fun(SSW_RLSeatBackrestFaultSt);
		fun(SSW_RLSeatTiltFaultSt);
		fun(SSW_RLSeatOttomanAngleFaultSt);
		fun(SSW_RLSeatVentFaultSt);
		fun(SSW_RLSeatHeatFaultSt);
		fun(SSW_RRSeatBackrestFaultSt);
		fun(SSW_RRSeatTiltFaultSt);
		fun(SSW_RRSeatOttomanAngleFaultSt);
		fun(SSW_RRSeatVentFaultSt);
		fun(SSW_RRSeatHeatFaultSt);
		fun(SSW_RLSCSOpeSt);
		fun(SSW_RRSCSOpeSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_RLSeatVentSt);
		fun << (SSW_RLSeatHeatSt);
		fun << (SSW_RRSeatVentSt);
		fun << (SSW_RRSeatHeatSt);
		fun << (SSW_RLSeatBackrestFaultSt);
		fun << (SSW_RLSeatTiltFaultSt);
		fun << (SSW_RLSeatOttomanAngleFaultSt);
		fun << (SSW_RLSeatVentFaultSt);
		fun << (SSW_RLSeatHeatFaultSt);
		fun << (SSW_RRSeatBackrestFaultSt);
		fun << (SSW_RRSeatTiltFaultSt);
		fun << (SSW_RRSeatOttomanAngleFaultSt);
		fun << (SSW_RRSeatVentFaultSt);
		fun << (SSW_RRSeatHeatFaultSt);
		fun << (SSW_RLSCSOpeSt);
		fun << (SSW_RRSCSOpeSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_RLSeatVentSt);
		fun >> (SSW_RLSeatHeatSt);
		fun >> (SSW_RRSeatVentSt);
		fun >> (SSW_RRSeatHeatSt);
		fun >> (SSW_RLSeatBackrestFaultSt);
		fun >> (SSW_RLSeatTiltFaultSt);
		fun >> (SSW_RLSeatOttomanAngleFaultSt);
		fun >> (SSW_RLSeatVentFaultSt);
		fun >> (SSW_RLSeatHeatFaultSt);
		fun >> (SSW_RRSeatBackrestFaultSt);
		fun >> (SSW_RRSeatTiltFaultSt);
		fun >> (SSW_RRSeatOttomanAngleFaultSt);
		fun >> (SSW_RRSeatVentFaultSt);
		fun >> (SSW_RRSeatHeatFaultSt);
		fun >> (SSW_RLSCSOpeSt);
		fun >> (SSW_RRSCSOpeSt);
	}
};

#endif //____BDCSSW6_H__
