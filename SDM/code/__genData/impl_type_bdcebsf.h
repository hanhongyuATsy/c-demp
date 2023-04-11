#ifndef ____BDCEBSF_H__
#define ____BDCEBSF_H__


#include "cstdint"






struct BDCEBSF {
public:
	std::uint8_t EBSF_CurrentRange;
	std::uint16_t EBSF_BattCurrent;
	std::uint8_t EBSF_BattTemp;
	std::uint8_t EBSF_BattQuiescentCurrent;
	std::uint8_t EBSF_CurrentSt;
	std::uint8_t EBSF_VoltSt;
	std::uint8_t EBSF_TempSt;
	std::uint8_t EBSF_CalibrationErr;
	std::uint8_t EBSF_IdentificationErr;
	std::uint8_t EBSF_Response_Err;
	std::uint8_t EBSF_BattInconsistencyFlag;
	std::uint8_t EBSF_SOH_SUL;
	std::uint8_t EBSF_SOFV_StopEnable;
	std::uint8_t EBSF_SOFV_Restart;
	std::uint8_t EBSF_SOH_LAM;
	std::uint8_t EBSF_SOH_COR;
	std::uint8_t EBSF_SOH_SUL_St;
	std::uint8_t EBSF_SOFV_StopEnable_St;
	std::uint8_t EBSF_SOFV_Restart_St;
	std::uint8_t EBSF_SOH_LAM_St;
	std::uint8_t EBSF_SOH_COR_St;
	std::uint16_t EBSF_Q_Charge;
	std::uint16_t EBSF_Q_Discharge;
	std::uint8_t EBSF_SOCWakeUp;
/*
	BDCEBSF() {}
	~BDCEBSF() {}
	BDCEBSF(const std::uint8_t _EBSF_CurrentRange,const std::uint16_t _EBSF_BattCurrent,const std::uint8_t _EBSF_BattTemp,const std::uint8_t _EBSF_BattQuiescentCurrent,const std::uint8_t _EBSF_CurrentSt,const std::uint8_t _EBSF_VoltSt,const std::uint8_t _EBSF_TempSt,const std::uint8_t _EBSF_CalibrationErr,const std::uint8_t _EBSF_IdentificationErr,const std::uint8_t _EBSF_Response_Err,const std::uint8_t _EBSF_BattInconsistencyFlag,const std::uint8_t _EBSF_SOH_SUL,const std::uint8_t _EBSF_SOFV_StopEnable,const std::uint8_t _EBSF_SOFV_Restart,const std::uint8_t _EBSF_SOH_LAM,const std::uint8_t _EBSF_SOH_COR,const std::uint8_t _EBSF_SOH_SUL_St,const std::uint8_t _EBSF_SOFV_StopEnable_St,const std::uint8_t _EBSF_SOFV_Restart_St,const std::uint8_t _EBSF_SOH_LAM_St,const std::uint8_t _EBSF_SOH_COR_St,const std::uint16_t _EBSF_Q_Charge,const std::uint16_t _EBSF_Q_Discharge,const std::uint8_t _EBSF_SOCWakeUp):EBSF_CurrentRange(_EBSF_CurrentRange),EBSF_BattCurrent(_EBSF_BattCurrent),EBSF_BattTemp(_EBSF_BattTemp),EBSF_BattQuiescentCurrent(_EBSF_BattQuiescentCurrent),EBSF_CurrentSt(_EBSF_CurrentSt),EBSF_VoltSt(_EBSF_VoltSt),EBSF_TempSt(_EBSF_TempSt),EBSF_CalibrationErr(_EBSF_CalibrationErr),EBSF_IdentificationErr(_EBSF_IdentificationErr),EBSF_Response_Err(_EBSF_Response_Err),EBSF_BattInconsistencyFlag(_EBSF_BattInconsistencyFlag),EBSF_SOH_SUL(_EBSF_SOH_SUL),EBSF_SOFV_StopEnable(_EBSF_SOFV_StopEnable),EBSF_SOFV_Restart(_EBSF_SOFV_Restart),EBSF_SOH_LAM(_EBSF_SOH_LAM),EBSF_SOH_COR(_EBSF_SOH_COR),EBSF_SOH_SUL_St(_EBSF_SOH_SUL_St),EBSF_SOFV_StopEnable_St(_EBSF_SOFV_StopEnable_St),EBSF_SOFV_Restart_St(_EBSF_SOFV_Restart_St),EBSF_SOH_LAM_St(_EBSF_SOH_LAM_St),EBSF_SOH_COR_St(_EBSF_SOH_COR_St),EBSF_Q_Charge(_EBSF_Q_Charge),EBSF_Q_Discharge(_EBSF_Q_Discharge),EBSF_SOCWakeUp(_EBSF_SOCWakeUp) {}
	BDCEBSF(const BDCEBSF &_x){
		EBSF_CurrentRange = _x.EBSF_CurrentRange;
		EBSF_BattCurrent = _x.EBSF_BattCurrent;
		EBSF_BattTemp = _x.EBSF_BattTemp;
		EBSF_BattQuiescentCurrent = _x.EBSF_BattQuiescentCurrent;
		EBSF_CurrentSt = _x.EBSF_CurrentSt;
		EBSF_VoltSt = _x.EBSF_VoltSt;
		EBSF_TempSt = _x.EBSF_TempSt;
		EBSF_CalibrationErr = _x.EBSF_CalibrationErr;
		EBSF_IdentificationErr = _x.EBSF_IdentificationErr;
		EBSF_Response_Err = _x.EBSF_Response_Err;
		EBSF_BattInconsistencyFlag = _x.EBSF_BattInconsistencyFlag;
		EBSF_SOH_SUL = _x.EBSF_SOH_SUL;
		EBSF_SOFV_StopEnable = _x.EBSF_SOFV_StopEnable;
		EBSF_SOFV_Restart = _x.EBSF_SOFV_Restart;
		EBSF_SOH_LAM = _x.EBSF_SOH_LAM;
		EBSF_SOH_COR = _x.EBSF_SOH_COR;
		EBSF_SOH_SUL_St = _x.EBSF_SOH_SUL_St;
		EBSF_SOFV_StopEnable_St = _x.EBSF_SOFV_StopEnable_St;
		EBSF_SOFV_Restart_St = _x.EBSF_SOFV_Restart_St;
		EBSF_SOH_LAM_St = _x.EBSF_SOH_LAM_St;
		EBSF_SOH_COR_St = _x.EBSF_SOH_COR_St;
		EBSF_Q_Charge = _x.EBSF_Q_Charge;
		EBSF_Q_Discharge = _x.EBSF_Q_Discharge;
		EBSF_SOCWakeUp = _x.EBSF_SOCWakeUp;
	}
	BDCEBSF(BDCEBSF &&_x){
		EBSF_CurrentRange = std::move(_x.EBSF_CurrentRange);
		EBSF_BattCurrent = std::move(_x.EBSF_BattCurrent);
		EBSF_BattTemp = std::move(_x.EBSF_BattTemp);
		EBSF_BattQuiescentCurrent = std::move(_x.EBSF_BattQuiescentCurrent);
		EBSF_CurrentSt = std::move(_x.EBSF_CurrentSt);
		EBSF_VoltSt = std::move(_x.EBSF_VoltSt);
		EBSF_TempSt = std::move(_x.EBSF_TempSt);
		EBSF_CalibrationErr = std::move(_x.EBSF_CalibrationErr);
		EBSF_IdentificationErr = std::move(_x.EBSF_IdentificationErr);
		EBSF_Response_Err = std::move(_x.EBSF_Response_Err);
		EBSF_BattInconsistencyFlag = std::move(_x.EBSF_BattInconsistencyFlag);
		EBSF_SOH_SUL = std::move(_x.EBSF_SOH_SUL);
		EBSF_SOFV_StopEnable = std::move(_x.EBSF_SOFV_StopEnable);
		EBSF_SOFV_Restart = std::move(_x.EBSF_SOFV_Restart);
		EBSF_SOH_LAM = std::move(_x.EBSF_SOH_LAM);
		EBSF_SOH_COR = std::move(_x.EBSF_SOH_COR);
		EBSF_SOH_SUL_St = std::move(_x.EBSF_SOH_SUL_St);
		EBSF_SOFV_StopEnable_St = std::move(_x.EBSF_SOFV_StopEnable_St);
		EBSF_SOFV_Restart_St = std::move(_x.EBSF_SOFV_Restart_St);
		EBSF_SOH_LAM_St = std::move(_x.EBSF_SOH_LAM_St);
		EBSF_SOH_COR_St = std::move(_x.EBSF_SOH_COR_St);
		EBSF_Q_Charge = std::move(_x.EBSF_Q_Charge);
		EBSF_Q_Discharge = std::move(_x.EBSF_Q_Discharge);
		EBSF_SOCWakeUp = std::move(_x.EBSF_SOCWakeUp);
	}
	BDCEBSF& operator=(const BDCEBSF &_x){
		EBSF_CurrentRange = _x.EBSF_CurrentRange;
		EBSF_BattCurrent = _x.EBSF_BattCurrent;
		EBSF_BattTemp = _x.EBSF_BattTemp;
		EBSF_BattQuiescentCurrent = _x.EBSF_BattQuiescentCurrent;
		EBSF_CurrentSt = _x.EBSF_CurrentSt;
		EBSF_VoltSt = _x.EBSF_VoltSt;
		EBSF_TempSt = _x.EBSF_TempSt;
		EBSF_CalibrationErr = _x.EBSF_CalibrationErr;
		EBSF_IdentificationErr = _x.EBSF_IdentificationErr;
		EBSF_Response_Err = _x.EBSF_Response_Err;
		EBSF_BattInconsistencyFlag = _x.EBSF_BattInconsistencyFlag;
		EBSF_SOH_SUL = _x.EBSF_SOH_SUL;
		EBSF_SOFV_StopEnable = _x.EBSF_SOFV_StopEnable;
		EBSF_SOFV_Restart = _x.EBSF_SOFV_Restart;
		EBSF_SOH_LAM = _x.EBSF_SOH_LAM;
		EBSF_SOH_COR = _x.EBSF_SOH_COR;
		EBSF_SOH_SUL_St = _x.EBSF_SOH_SUL_St;
		EBSF_SOFV_StopEnable_St = _x.EBSF_SOFV_StopEnable_St;
		EBSF_SOFV_Restart_St = _x.EBSF_SOFV_Restart_St;
		EBSF_SOH_LAM_St = _x.EBSF_SOH_LAM_St;
		EBSF_SOH_COR_St = _x.EBSF_SOH_COR_St;
		EBSF_Q_Charge = _x.EBSF_Q_Charge;
		EBSF_Q_Discharge = _x.EBSF_Q_Discharge;
		EBSF_SOCWakeUp = _x.EBSF_SOCWakeUp;
		return *this;
	}
	BDCEBSF& operator=(BDCEBSF &&_x){
		EBSF_CurrentRange = std::move(_x.EBSF_CurrentRange);
		EBSF_BattCurrent = std::move(_x.EBSF_BattCurrent);
		EBSF_BattTemp = std::move(_x.EBSF_BattTemp);
		EBSF_BattQuiescentCurrent = std::move(_x.EBSF_BattQuiescentCurrent);
		EBSF_CurrentSt = std::move(_x.EBSF_CurrentSt);
		EBSF_VoltSt = std::move(_x.EBSF_VoltSt);
		EBSF_TempSt = std::move(_x.EBSF_TempSt);
		EBSF_CalibrationErr = std::move(_x.EBSF_CalibrationErr);
		EBSF_IdentificationErr = std::move(_x.EBSF_IdentificationErr);
		EBSF_Response_Err = std::move(_x.EBSF_Response_Err);
		EBSF_BattInconsistencyFlag = std::move(_x.EBSF_BattInconsistencyFlag);
		EBSF_SOH_SUL = std::move(_x.EBSF_SOH_SUL);
		EBSF_SOFV_StopEnable = std::move(_x.EBSF_SOFV_StopEnable);
		EBSF_SOFV_Restart = std::move(_x.EBSF_SOFV_Restart);
		EBSF_SOH_LAM = std::move(_x.EBSF_SOH_LAM);
		EBSF_SOH_COR = std::move(_x.EBSF_SOH_COR);
		EBSF_SOH_SUL_St = std::move(_x.EBSF_SOH_SUL_St);
		EBSF_SOFV_StopEnable_St = std::move(_x.EBSF_SOFV_StopEnable_St);
		EBSF_SOFV_Restart_St = std::move(_x.EBSF_SOFV_Restart_St);
		EBSF_SOH_LAM_St = std::move(_x.EBSF_SOH_LAM_St);
		EBSF_SOH_COR_St = std::move(_x.EBSF_SOH_COR_St);
		EBSF_Q_Charge = std::move(_x.EBSF_Q_Charge);
		EBSF_Q_Discharge = std::move(_x.EBSF_Q_Discharge);
		EBSF_SOCWakeUp = std::move(_x.EBSF_SOCWakeUp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EBSF_CurrentRange);
		fun(EBSF_BattCurrent);
		fun(EBSF_BattTemp);
		fun(EBSF_BattQuiescentCurrent);
		fun(EBSF_CurrentSt);
		fun(EBSF_VoltSt);
		fun(EBSF_TempSt);
		fun(EBSF_CalibrationErr);
		fun(EBSF_IdentificationErr);
		fun(EBSF_Response_Err);
		fun(EBSF_BattInconsistencyFlag);
		fun(EBSF_SOH_SUL);
		fun(EBSF_SOFV_StopEnable);
		fun(EBSF_SOFV_Restart);
		fun(EBSF_SOH_LAM);
		fun(EBSF_SOH_COR);
		fun(EBSF_SOH_SUL_St);
		fun(EBSF_SOFV_StopEnable_St);
		fun(EBSF_SOFV_Restart_St);
		fun(EBSF_SOH_LAM_St);
		fun(EBSF_SOH_COR_St);
		fun(EBSF_Q_Charge);
		fun(EBSF_Q_Discharge);
		fun(EBSF_SOCWakeUp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EBSF_CurrentRange);
		fun(EBSF_BattCurrent);
		fun(EBSF_BattTemp);
		fun(EBSF_BattQuiescentCurrent);
		fun(EBSF_CurrentSt);
		fun(EBSF_VoltSt);
		fun(EBSF_TempSt);
		fun(EBSF_CalibrationErr);
		fun(EBSF_IdentificationErr);
		fun(EBSF_Response_Err);
		fun(EBSF_BattInconsistencyFlag);
		fun(EBSF_SOH_SUL);
		fun(EBSF_SOFV_StopEnable);
		fun(EBSF_SOFV_Restart);
		fun(EBSF_SOH_LAM);
		fun(EBSF_SOH_COR);
		fun(EBSF_SOH_SUL_St);
		fun(EBSF_SOFV_StopEnable_St);
		fun(EBSF_SOFV_Restart_St);
		fun(EBSF_SOH_LAM_St);
		fun(EBSF_SOH_COR_St);
		fun(EBSF_Q_Charge);
		fun(EBSF_Q_Discharge);
		fun(EBSF_SOCWakeUp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EBSF_CurrentRange);
		fun << (EBSF_BattCurrent);
		fun << (EBSF_BattTemp);
		fun << (EBSF_BattQuiescentCurrent);
		fun << (EBSF_CurrentSt);
		fun << (EBSF_VoltSt);
		fun << (EBSF_TempSt);
		fun << (EBSF_CalibrationErr);
		fun << (EBSF_IdentificationErr);
		fun << (EBSF_Response_Err);
		fun << (EBSF_BattInconsistencyFlag);
		fun << (EBSF_SOH_SUL);
		fun << (EBSF_SOFV_StopEnable);
		fun << (EBSF_SOFV_Restart);
		fun << (EBSF_SOH_LAM);
		fun << (EBSF_SOH_COR);
		fun << (EBSF_SOH_SUL_St);
		fun << (EBSF_SOFV_StopEnable_St);
		fun << (EBSF_SOFV_Restart_St);
		fun << (EBSF_SOH_LAM_St);
		fun << (EBSF_SOH_COR_St);
		fun << (EBSF_Q_Charge);
		fun << (EBSF_Q_Discharge);
		fun << (EBSF_SOCWakeUp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EBSF_CurrentRange);
		fun >> (EBSF_BattCurrent);
		fun >> (EBSF_BattTemp);
		fun >> (EBSF_BattQuiescentCurrent);
		fun >> (EBSF_CurrentSt);
		fun >> (EBSF_VoltSt);
		fun >> (EBSF_TempSt);
		fun >> (EBSF_CalibrationErr);
		fun >> (EBSF_IdentificationErr);
		fun >> (EBSF_Response_Err);
		fun >> (EBSF_BattInconsistencyFlag);
		fun >> (EBSF_SOH_SUL);
		fun >> (EBSF_SOFV_StopEnable);
		fun >> (EBSF_SOFV_Restart);
		fun >> (EBSF_SOH_LAM);
		fun >> (EBSF_SOH_COR);
		fun >> (EBSF_SOH_SUL_St);
		fun >> (EBSF_SOFV_StopEnable_St);
		fun >> (EBSF_SOFV_Restart_St);
		fun >> (EBSF_SOH_LAM_St);
		fun >> (EBSF_SOH_COR_St);
		fun >> (EBSF_Q_Charge);
		fun >> (EBSF_Q_Discharge);
		fun >> (EBSF_SOCWakeUp);
	}
};

#endif //____BDCEBSF_H__
