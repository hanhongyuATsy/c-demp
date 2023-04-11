#ifndef ____BDCDCUFUSA_H__
#define ____BDCDCUFUSA_H__


#include "cstdint"






struct BDCDCUFusa {
public:
	std::uint8_t DCU_FusaModeSt;
	std::uint8_t DCU_FusaQDisChargeReq;
	std::uint8_t DCU_FusastPWMEna;
	std::uint8_t DCU_FusastSafePathReq;
	std::uint8_t DCU_FusaErrCode;
	std::uint16_t DCU_FusaRotSpdAct;
	std::uint16_t DCU_FusaTorqAct;
	std::uint32_t DCU_FusaFaultInfo7;
	std::uint32_t DCU_FusaFaultInfo8;
/*
	BDCDCUFusa() {}
	~BDCDCUFusa() {}
	BDCDCUFusa(const std::uint8_t _DCU_FusaModeSt,const std::uint8_t _DCU_FusaQDisChargeReq,const std::uint8_t _DCU_FusastPWMEna,const std::uint8_t _DCU_FusastSafePathReq,const std::uint8_t _DCU_FusaErrCode,const std::uint16_t _DCU_FusaRotSpdAct,const std::uint16_t _DCU_FusaTorqAct,const std::uint32_t _DCU_FusaFaultInfo7,const std::uint32_t _DCU_FusaFaultInfo8):DCU_FusaModeSt(_DCU_FusaModeSt),DCU_FusaQDisChargeReq(_DCU_FusaQDisChargeReq),DCU_FusastPWMEna(_DCU_FusastPWMEna),DCU_FusastSafePathReq(_DCU_FusastSafePathReq),DCU_FusaErrCode(_DCU_FusaErrCode),DCU_FusaRotSpdAct(_DCU_FusaRotSpdAct),DCU_FusaTorqAct(_DCU_FusaTorqAct),DCU_FusaFaultInfo7(_DCU_FusaFaultInfo7),DCU_FusaFaultInfo8(_DCU_FusaFaultInfo8) {}
	BDCDCUFusa(const BDCDCUFusa &_x){
		DCU_FusaModeSt = _x.DCU_FusaModeSt;
		DCU_FusaQDisChargeReq = _x.DCU_FusaQDisChargeReq;
		DCU_FusastPWMEna = _x.DCU_FusastPWMEna;
		DCU_FusastSafePathReq = _x.DCU_FusastSafePathReq;
		DCU_FusaErrCode = _x.DCU_FusaErrCode;
		DCU_FusaRotSpdAct = _x.DCU_FusaRotSpdAct;
		DCU_FusaTorqAct = _x.DCU_FusaTorqAct;
		DCU_FusaFaultInfo7 = _x.DCU_FusaFaultInfo7;
		DCU_FusaFaultInfo8 = _x.DCU_FusaFaultInfo8;
	}
	BDCDCUFusa(BDCDCUFusa &&_x){
		DCU_FusaModeSt = std::move(_x.DCU_FusaModeSt);
		DCU_FusaQDisChargeReq = std::move(_x.DCU_FusaQDisChargeReq);
		DCU_FusastPWMEna = std::move(_x.DCU_FusastPWMEna);
		DCU_FusastSafePathReq = std::move(_x.DCU_FusastSafePathReq);
		DCU_FusaErrCode = std::move(_x.DCU_FusaErrCode);
		DCU_FusaRotSpdAct = std::move(_x.DCU_FusaRotSpdAct);
		DCU_FusaTorqAct = std::move(_x.DCU_FusaTorqAct);
		DCU_FusaFaultInfo7 = std::move(_x.DCU_FusaFaultInfo7);
		DCU_FusaFaultInfo8 = std::move(_x.DCU_FusaFaultInfo8);
	}
	BDCDCUFusa& operator=(const BDCDCUFusa &_x){
		DCU_FusaModeSt = _x.DCU_FusaModeSt;
		DCU_FusaQDisChargeReq = _x.DCU_FusaQDisChargeReq;
		DCU_FusastPWMEna = _x.DCU_FusastPWMEna;
		DCU_FusastSafePathReq = _x.DCU_FusastSafePathReq;
		DCU_FusaErrCode = _x.DCU_FusaErrCode;
		DCU_FusaRotSpdAct = _x.DCU_FusaRotSpdAct;
		DCU_FusaTorqAct = _x.DCU_FusaTorqAct;
		DCU_FusaFaultInfo7 = _x.DCU_FusaFaultInfo7;
		DCU_FusaFaultInfo8 = _x.DCU_FusaFaultInfo8;
		return *this;
	}
	BDCDCUFusa& operator=(BDCDCUFusa &&_x){
		DCU_FusaModeSt = std::move(_x.DCU_FusaModeSt);
		DCU_FusaQDisChargeReq = std::move(_x.DCU_FusaQDisChargeReq);
		DCU_FusastPWMEna = std::move(_x.DCU_FusastPWMEna);
		DCU_FusastSafePathReq = std::move(_x.DCU_FusastSafePathReq);
		DCU_FusaErrCode = std::move(_x.DCU_FusaErrCode);
		DCU_FusaRotSpdAct = std::move(_x.DCU_FusaRotSpdAct);
		DCU_FusaTorqAct = std::move(_x.DCU_FusaTorqAct);
		DCU_FusaFaultInfo7 = std::move(_x.DCU_FusaFaultInfo7);
		DCU_FusaFaultInfo8 = std::move(_x.DCU_FusaFaultInfo8);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCU_FusaModeSt);
		fun(DCU_FusaQDisChargeReq);
		fun(DCU_FusastPWMEna);
		fun(DCU_FusastSafePathReq);
		fun(DCU_FusaErrCode);
		fun(DCU_FusaRotSpdAct);
		fun(DCU_FusaTorqAct);
		fun(DCU_FusaFaultInfo7);
		fun(DCU_FusaFaultInfo8);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCU_FusaModeSt);
		fun(DCU_FusaQDisChargeReq);
		fun(DCU_FusastPWMEna);
		fun(DCU_FusastSafePathReq);
		fun(DCU_FusaErrCode);
		fun(DCU_FusaRotSpdAct);
		fun(DCU_FusaTorqAct);
		fun(DCU_FusaFaultInfo7);
		fun(DCU_FusaFaultInfo8);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCU_FusaModeSt);
		fun << (DCU_FusaQDisChargeReq);
		fun << (DCU_FusastPWMEna);
		fun << (DCU_FusastSafePathReq);
		fun << (DCU_FusaErrCode);
		fun << (DCU_FusaRotSpdAct);
		fun << (DCU_FusaTorqAct);
		fun << (DCU_FusaFaultInfo7);
		fun << (DCU_FusaFaultInfo8);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCU_FusaModeSt);
		fun >> (DCU_FusaQDisChargeReq);
		fun >> (DCU_FusastPWMEna);
		fun >> (DCU_FusastSafePathReq);
		fun >> (DCU_FusaErrCode);
		fun >> (DCU_FusaRotSpdAct);
		fun >> (DCU_FusaTorqAct);
		fun >> (DCU_FusaFaultInfo7);
		fun >> (DCU_FusaFaultInfo8);
	}
};

#endif //____BDCDCUFUSA_H__
