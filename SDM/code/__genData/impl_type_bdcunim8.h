#ifndef ____BDCUNIM8_H__
#define ____BDCUNIM8_H__


#include "cstdint"






struct BDCUNIM8 {
public:
	std::uint8_t EOSL_gesture_detected;
	std::uint8_t EOSL_A_detected;
	std::uint8_t EOSL_B_detected;
	std::uint8_t EOSL_volt_detected;
	std::uint8_t EOSL_A_diagnostic;
	std::uint8_t EOSL_B_diagnostic;
	std::uint8_t EOSL_Protected;
	std::uint8_t EOSL_RespError;
	std::uint16_t EOSL_SW_Ver;
	std::uint16_t EOSL_HW_Ver;
	std::uint8_t EOSR_gesture_detected;
	std::uint8_t EOSR_A_detected;
	std::uint8_t EOSR_B_detected;
	std::uint8_t EOSR_volt_detected;
	std::uint8_t EOSR_A_diagnostic;
	std::uint8_t EOSR_B_diagnostic;
	std::uint8_t EOSR_Protected;
	std::uint8_t EOSR_RespError;
	std::uint16_t EOSR_SW_Ver;
	std::uint16_t EOSR_HW_Ver;
/*
	BDCUNIM8() {}
	~BDCUNIM8() {}
	BDCUNIM8(const std::uint8_t _EOSL_gesture_detected,const std::uint8_t _EOSL_A_detected,const std::uint8_t _EOSL_B_detected,const std::uint8_t _EOSL_volt_detected,const std::uint8_t _EOSL_A_diagnostic,const std::uint8_t _EOSL_B_diagnostic,const std::uint8_t _EOSL_Protected,const std::uint8_t _EOSL_RespError,const std::uint16_t _EOSL_SW_Ver,const std::uint16_t _EOSL_HW_Ver,const std::uint8_t _EOSR_gesture_detected,const std::uint8_t _EOSR_A_detected,const std::uint8_t _EOSR_B_detected,const std::uint8_t _EOSR_volt_detected,const std::uint8_t _EOSR_A_diagnostic,const std::uint8_t _EOSR_B_diagnostic,const std::uint8_t _EOSR_Protected,const std::uint8_t _EOSR_RespError,const std::uint16_t _EOSR_SW_Ver,const std::uint16_t _EOSR_HW_Ver):EOSL_gesture_detected(_EOSL_gesture_detected),EOSL_A_detected(_EOSL_A_detected),EOSL_B_detected(_EOSL_B_detected),EOSL_volt_detected(_EOSL_volt_detected),EOSL_A_diagnostic(_EOSL_A_diagnostic),EOSL_B_diagnostic(_EOSL_B_diagnostic),EOSL_Protected(_EOSL_Protected),EOSL_RespError(_EOSL_RespError),EOSL_SW_Ver(_EOSL_SW_Ver),EOSL_HW_Ver(_EOSL_HW_Ver),EOSR_gesture_detected(_EOSR_gesture_detected),EOSR_A_detected(_EOSR_A_detected),EOSR_B_detected(_EOSR_B_detected),EOSR_volt_detected(_EOSR_volt_detected),EOSR_A_diagnostic(_EOSR_A_diagnostic),EOSR_B_diagnostic(_EOSR_B_diagnostic),EOSR_Protected(_EOSR_Protected),EOSR_RespError(_EOSR_RespError),EOSR_SW_Ver(_EOSR_SW_Ver),EOSR_HW_Ver(_EOSR_HW_Ver) {}
	BDCUNIM8(const BDCUNIM8 &_x){
		EOSL_gesture_detected = _x.EOSL_gesture_detected;
		EOSL_A_detected = _x.EOSL_A_detected;
		EOSL_B_detected = _x.EOSL_B_detected;
		EOSL_volt_detected = _x.EOSL_volt_detected;
		EOSL_A_diagnostic = _x.EOSL_A_diagnostic;
		EOSL_B_diagnostic = _x.EOSL_B_diagnostic;
		EOSL_Protected = _x.EOSL_Protected;
		EOSL_RespError = _x.EOSL_RespError;
		EOSL_SW_Ver = _x.EOSL_SW_Ver;
		EOSL_HW_Ver = _x.EOSL_HW_Ver;
		EOSR_gesture_detected = _x.EOSR_gesture_detected;
		EOSR_A_detected = _x.EOSR_A_detected;
		EOSR_B_detected = _x.EOSR_B_detected;
		EOSR_volt_detected = _x.EOSR_volt_detected;
		EOSR_A_diagnostic = _x.EOSR_A_diagnostic;
		EOSR_B_diagnostic = _x.EOSR_B_diagnostic;
		EOSR_Protected = _x.EOSR_Protected;
		EOSR_RespError = _x.EOSR_RespError;
		EOSR_SW_Ver = _x.EOSR_SW_Ver;
		EOSR_HW_Ver = _x.EOSR_HW_Ver;
	}
	BDCUNIM8(BDCUNIM8 &&_x){
		EOSL_gesture_detected = std::move(_x.EOSL_gesture_detected);
		EOSL_A_detected = std::move(_x.EOSL_A_detected);
		EOSL_B_detected = std::move(_x.EOSL_B_detected);
		EOSL_volt_detected = std::move(_x.EOSL_volt_detected);
		EOSL_A_diagnostic = std::move(_x.EOSL_A_diagnostic);
		EOSL_B_diagnostic = std::move(_x.EOSL_B_diagnostic);
		EOSL_Protected = std::move(_x.EOSL_Protected);
		EOSL_RespError = std::move(_x.EOSL_RespError);
		EOSL_SW_Ver = std::move(_x.EOSL_SW_Ver);
		EOSL_HW_Ver = std::move(_x.EOSL_HW_Ver);
		EOSR_gesture_detected = std::move(_x.EOSR_gesture_detected);
		EOSR_A_detected = std::move(_x.EOSR_A_detected);
		EOSR_B_detected = std::move(_x.EOSR_B_detected);
		EOSR_volt_detected = std::move(_x.EOSR_volt_detected);
		EOSR_A_diagnostic = std::move(_x.EOSR_A_diagnostic);
		EOSR_B_diagnostic = std::move(_x.EOSR_B_diagnostic);
		EOSR_Protected = std::move(_x.EOSR_Protected);
		EOSR_RespError = std::move(_x.EOSR_RespError);
		EOSR_SW_Ver = std::move(_x.EOSR_SW_Ver);
		EOSR_HW_Ver = std::move(_x.EOSR_HW_Ver);
	}
	BDCUNIM8& operator=(const BDCUNIM8 &_x){
		EOSL_gesture_detected = _x.EOSL_gesture_detected;
		EOSL_A_detected = _x.EOSL_A_detected;
		EOSL_B_detected = _x.EOSL_B_detected;
		EOSL_volt_detected = _x.EOSL_volt_detected;
		EOSL_A_diagnostic = _x.EOSL_A_diagnostic;
		EOSL_B_diagnostic = _x.EOSL_B_diagnostic;
		EOSL_Protected = _x.EOSL_Protected;
		EOSL_RespError = _x.EOSL_RespError;
		EOSL_SW_Ver = _x.EOSL_SW_Ver;
		EOSL_HW_Ver = _x.EOSL_HW_Ver;
		EOSR_gesture_detected = _x.EOSR_gesture_detected;
		EOSR_A_detected = _x.EOSR_A_detected;
		EOSR_B_detected = _x.EOSR_B_detected;
		EOSR_volt_detected = _x.EOSR_volt_detected;
		EOSR_A_diagnostic = _x.EOSR_A_diagnostic;
		EOSR_B_diagnostic = _x.EOSR_B_diagnostic;
		EOSR_Protected = _x.EOSR_Protected;
		EOSR_RespError = _x.EOSR_RespError;
		EOSR_SW_Ver = _x.EOSR_SW_Ver;
		EOSR_HW_Ver = _x.EOSR_HW_Ver;
		return *this;
	}
	BDCUNIM8& operator=(BDCUNIM8 &&_x){
		EOSL_gesture_detected = std::move(_x.EOSL_gesture_detected);
		EOSL_A_detected = std::move(_x.EOSL_A_detected);
		EOSL_B_detected = std::move(_x.EOSL_B_detected);
		EOSL_volt_detected = std::move(_x.EOSL_volt_detected);
		EOSL_A_diagnostic = std::move(_x.EOSL_A_diagnostic);
		EOSL_B_diagnostic = std::move(_x.EOSL_B_diagnostic);
		EOSL_Protected = std::move(_x.EOSL_Protected);
		EOSL_RespError = std::move(_x.EOSL_RespError);
		EOSL_SW_Ver = std::move(_x.EOSL_SW_Ver);
		EOSL_HW_Ver = std::move(_x.EOSL_HW_Ver);
		EOSR_gesture_detected = std::move(_x.EOSR_gesture_detected);
		EOSR_A_detected = std::move(_x.EOSR_A_detected);
		EOSR_B_detected = std::move(_x.EOSR_B_detected);
		EOSR_volt_detected = std::move(_x.EOSR_volt_detected);
		EOSR_A_diagnostic = std::move(_x.EOSR_A_diagnostic);
		EOSR_B_diagnostic = std::move(_x.EOSR_B_diagnostic);
		EOSR_Protected = std::move(_x.EOSR_Protected);
		EOSR_RespError = std::move(_x.EOSR_RespError);
		EOSR_SW_Ver = std::move(_x.EOSR_SW_Ver);
		EOSR_HW_Ver = std::move(_x.EOSR_HW_Ver);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EOSL_gesture_detected);
		fun(EOSL_A_detected);
		fun(EOSL_B_detected);
		fun(EOSL_volt_detected);
		fun(EOSL_A_diagnostic);
		fun(EOSL_B_diagnostic);
		fun(EOSL_Protected);
		fun(EOSL_RespError);
		fun(EOSL_SW_Ver);
		fun(EOSL_HW_Ver);
		fun(EOSR_gesture_detected);
		fun(EOSR_A_detected);
		fun(EOSR_B_detected);
		fun(EOSR_volt_detected);
		fun(EOSR_A_diagnostic);
		fun(EOSR_B_diagnostic);
		fun(EOSR_Protected);
		fun(EOSR_RespError);
		fun(EOSR_SW_Ver);
		fun(EOSR_HW_Ver);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EOSL_gesture_detected);
		fun(EOSL_A_detected);
		fun(EOSL_B_detected);
		fun(EOSL_volt_detected);
		fun(EOSL_A_diagnostic);
		fun(EOSL_B_diagnostic);
		fun(EOSL_Protected);
		fun(EOSL_RespError);
		fun(EOSL_SW_Ver);
		fun(EOSL_HW_Ver);
		fun(EOSR_gesture_detected);
		fun(EOSR_A_detected);
		fun(EOSR_B_detected);
		fun(EOSR_volt_detected);
		fun(EOSR_A_diagnostic);
		fun(EOSR_B_diagnostic);
		fun(EOSR_Protected);
		fun(EOSR_RespError);
		fun(EOSR_SW_Ver);
		fun(EOSR_HW_Ver);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EOSL_gesture_detected);
		fun << (EOSL_A_detected);
		fun << (EOSL_B_detected);
		fun << (EOSL_volt_detected);
		fun << (EOSL_A_diagnostic);
		fun << (EOSL_B_diagnostic);
		fun << (EOSL_Protected);
		fun << (EOSL_RespError);
		fun << (EOSL_SW_Ver);
		fun << (EOSL_HW_Ver);
		fun << (EOSR_gesture_detected);
		fun << (EOSR_A_detected);
		fun << (EOSR_B_detected);
		fun << (EOSR_volt_detected);
		fun << (EOSR_A_diagnostic);
		fun << (EOSR_B_diagnostic);
		fun << (EOSR_Protected);
		fun << (EOSR_RespError);
		fun << (EOSR_SW_Ver);
		fun << (EOSR_HW_Ver);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EOSL_gesture_detected);
		fun >> (EOSL_A_detected);
		fun >> (EOSL_B_detected);
		fun >> (EOSL_volt_detected);
		fun >> (EOSL_A_diagnostic);
		fun >> (EOSL_B_diagnostic);
		fun >> (EOSL_Protected);
		fun >> (EOSL_RespError);
		fun >> (EOSL_SW_Ver);
		fun >> (EOSL_HW_Ver);
		fun >> (EOSR_gesture_detected);
		fun >> (EOSR_A_detected);
		fun >> (EOSR_B_detected);
		fun >> (EOSR_volt_detected);
		fun >> (EOSR_A_diagnostic);
		fun >> (EOSR_B_diagnostic);
		fun >> (EOSR_Protected);
		fun >> (EOSR_RespError);
		fun >> (EOSR_SW_Ver);
		fun >> (EOSR_HW_Ver);
	}
};

#endif //____BDCUNIM8_H__
