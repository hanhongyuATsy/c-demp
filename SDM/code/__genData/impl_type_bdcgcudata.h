#ifndef ____BDCGCUDATA_H__
#define ____BDCGCUDATA_H__


#include "cstdint"






struct BDCGCUDATA {
public:
	std::uint64_t GCU_SpdAct;
	std::uint8_t GCU_CooltFlowReq;
	std::uint16_t DCU_TrqWoDstC;
	std::uint16_t GCU_TrqWoDstC;
	std::uint16_t GCU_Fault1;
	std::uint16_t GCU_Fault2;
	std::uint16_t GCU_Fault3;
	std::uint16_t GCU_Fault4;
/*
	BDCGCUDATA() {}
	~BDCGCUDATA() {}
	BDCGCUDATA(const std::uint64_t _GCU_SpdAct,const std::uint8_t _GCU_CooltFlowReq,const std::uint16_t _DCU_TrqWoDstC,const std::uint16_t _GCU_TrqWoDstC,const std::uint16_t _GCU_Fault1,const std::uint16_t _GCU_Fault2,const std::uint16_t _GCU_Fault3,const std::uint16_t _GCU_Fault4):GCU_SpdAct(_GCU_SpdAct),GCU_CooltFlowReq(_GCU_CooltFlowReq),DCU_TrqWoDstC(_DCU_TrqWoDstC),GCU_TrqWoDstC(_GCU_TrqWoDstC),GCU_Fault1(_GCU_Fault1),GCU_Fault2(_GCU_Fault2),GCU_Fault3(_GCU_Fault3),GCU_Fault4(_GCU_Fault4) {}
	BDCGCUDATA(const BDCGCUDATA &_x){
		GCU_SpdAct = _x.GCU_SpdAct;
		GCU_CooltFlowReq = _x.GCU_CooltFlowReq;
		DCU_TrqWoDstC = _x.DCU_TrqWoDstC;
		GCU_TrqWoDstC = _x.GCU_TrqWoDstC;
		GCU_Fault1 = _x.GCU_Fault1;
		GCU_Fault2 = _x.GCU_Fault2;
		GCU_Fault3 = _x.GCU_Fault3;
		GCU_Fault4 = _x.GCU_Fault4;
	}
	BDCGCUDATA(BDCGCUDATA &&_x){
		GCU_SpdAct = std::move(_x.GCU_SpdAct);
		GCU_CooltFlowReq = std::move(_x.GCU_CooltFlowReq);
		DCU_TrqWoDstC = std::move(_x.DCU_TrqWoDstC);
		GCU_TrqWoDstC = std::move(_x.GCU_TrqWoDstC);
		GCU_Fault1 = std::move(_x.GCU_Fault1);
		GCU_Fault2 = std::move(_x.GCU_Fault2);
		GCU_Fault3 = std::move(_x.GCU_Fault3);
		GCU_Fault4 = std::move(_x.GCU_Fault4);
	}
	BDCGCUDATA& operator=(const BDCGCUDATA &_x){
		GCU_SpdAct = _x.GCU_SpdAct;
		GCU_CooltFlowReq = _x.GCU_CooltFlowReq;
		DCU_TrqWoDstC = _x.DCU_TrqWoDstC;
		GCU_TrqWoDstC = _x.GCU_TrqWoDstC;
		GCU_Fault1 = _x.GCU_Fault1;
		GCU_Fault2 = _x.GCU_Fault2;
		GCU_Fault3 = _x.GCU_Fault3;
		GCU_Fault4 = _x.GCU_Fault4;
		return *this;
	}
	BDCGCUDATA& operator=(BDCGCUDATA &&_x){
		GCU_SpdAct = std::move(_x.GCU_SpdAct);
		GCU_CooltFlowReq = std::move(_x.GCU_CooltFlowReq);
		DCU_TrqWoDstC = std::move(_x.DCU_TrqWoDstC);
		GCU_TrqWoDstC = std::move(_x.GCU_TrqWoDstC);
		GCU_Fault1 = std::move(_x.GCU_Fault1);
		GCU_Fault2 = std::move(_x.GCU_Fault2);
		GCU_Fault3 = std::move(_x.GCU_Fault3);
		GCU_Fault4 = std::move(_x.GCU_Fault4);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(GCU_SpdAct);
		fun(GCU_CooltFlowReq);
		fun(DCU_TrqWoDstC);
		fun(GCU_TrqWoDstC);
		fun(GCU_Fault1);
		fun(GCU_Fault2);
		fun(GCU_Fault3);
		fun(GCU_Fault4);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(GCU_SpdAct);
		fun(GCU_CooltFlowReq);
		fun(DCU_TrqWoDstC);
		fun(GCU_TrqWoDstC);
		fun(GCU_Fault1);
		fun(GCU_Fault2);
		fun(GCU_Fault3);
		fun(GCU_Fault4);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (GCU_SpdAct);
		fun << (GCU_CooltFlowReq);
		fun << (DCU_TrqWoDstC);
		fun << (GCU_TrqWoDstC);
		fun << (GCU_Fault1);
		fun << (GCU_Fault2);
		fun << (GCU_Fault3);
		fun << (GCU_Fault4);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (GCU_SpdAct);
		fun >> (GCU_CooltFlowReq);
		fun >> (DCU_TrqWoDstC);
		fun >> (GCU_TrqWoDstC);
		fun >> (GCU_Fault1);
		fun >> (GCU_Fault2);
		fun >> (GCU_Fault3);
		fun >> (GCU_Fault4);
	}
};

#endif //____BDCGCUDATA_H__
