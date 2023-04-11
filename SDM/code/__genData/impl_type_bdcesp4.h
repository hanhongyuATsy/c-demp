#ifndef ____BDCESP4_H__
#define ____BDCESP4_H__


#include "cstdint"






struct BDCESP4 {
public:
	std::uint8_t VMC_1_Counter;
	std::uint16_t VMC_1_CRC;
	std::uint8_t BCS_ESPFuncResp;
/*
	BDCESP4() {}
	~BDCESP4() {}
	BDCESP4(const std::uint8_t _VMC_1_Counter,const std::uint16_t _VMC_1_CRC,const std::uint8_t _BCS_ESPFuncResp):VMC_1_Counter(_VMC_1_Counter),VMC_1_CRC(_VMC_1_CRC),BCS_ESPFuncResp(_BCS_ESPFuncResp) {}
	BDCESP4(const BDCESP4 &_x){
		VMC_1_Counter = _x.VMC_1_Counter;
		VMC_1_CRC = _x.VMC_1_CRC;
		BCS_ESPFuncResp = _x.BCS_ESPFuncResp;
	}
	BDCESP4(BDCESP4 &&_x){
		VMC_1_Counter = std::move(_x.VMC_1_Counter);
		VMC_1_CRC = std::move(_x.VMC_1_CRC);
		BCS_ESPFuncResp = std::move(_x.BCS_ESPFuncResp);
	}
	BDCESP4& operator=(const BDCESP4 &_x){
		VMC_1_Counter = _x.VMC_1_Counter;
		VMC_1_CRC = _x.VMC_1_CRC;
		BCS_ESPFuncResp = _x.BCS_ESPFuncResp;
		return *this;
	}
	BDCESP4& operator=(BDCESP4 &&_x){
		VMC_1_Counter = std::move(_x.VMC_1_Counter);
		VMC_1_CRC = std::move(_x.VMC_1_CRC);
		BCS_ESPFuncResp = std::move(_x.BCS_ESPFuncResp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VMC_1_Counter);
		fun(VMC_1_CRC);
		fun(BCS_ESPFuncResp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VMC_1_Counter);
		fun(VMC_1_CRC);
		fun(BCS_ESPFuncResp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VMC_1_Counter);
		fun << (VMC_1_CRC);
		fun << (BCS_ESPFuncResp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VMC_1_Counter);
		fun >> (VMC_1_CRC);
		fun >> (BCS_ESPFuncResp);
	}
};

#endif //____BDCESP4_H__
