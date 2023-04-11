#ifndef ____BDCEBST_H__
#define ____BDCEBST_H__


#include "cstdint"






struct BDCEBST {
public:
	std::uint16_t EBST_BattVolt;
	std::uint8_t EBST_CurrentRange;
	std::uint16_t EBST_BattCurrent;
	std::uint8_t EBST_BattTemp;
	std::uint8_t EBST_BattQuiescentCurrent;
	std::uint8_t EBST_CurrentSt;
	std::uint8_t EBST_VoltSt;
	std::uint8_t EBST_TempSt;
	std::uint8_t EBST_CalibrationErr;
	std::uint8_t EBST_IdentificationErr;
	std::uint8_t EBST_Response_Err;
	std::uint8_t EBST_BattInconsistencyFlag;
	std::uint8_t EBST_SOH_SUL;
	std::uint8_t EBST_SOFV_StopEnable;
	std::uint8_t EBST_SOFV_Restart;
	std::uint8_t EBST_SOH_LAM;
	std::uint8_t EBST_SOH_COR;
	std::uint8_t EBST_SOH_SUL_St;
	std::uint8_t EBST_SOFV_StopEnable_St;
	std::uint8_t EBST_SOFV_Restart_St;
	std::uint8_t EBST_SOH_LAM_St;
	std::uint8_t EBST_SOH_COR_St;
	std::uint16_t EBST_Q_Charge;
	std::uint16_t EBST_Q_Discharge;
	std::uint8_t EBST_SOCWakeUp;
/*
	BDCEBST() {}
	~BDCEBST() {}
	BDCEBST(const std::uint16_t _EBST_BattVolt,const std::uint8_t _EBST_CurrentRange,const std::uint16_t _EBST_BattCurrent,const std::uint8_t _EBST_BattTemp,const std::uint8_t _EBST_BattQuiescentCurrent,const std::uint8_t _EBST_CurrentSt,const std::uint8_t _EBST_VoltSt,const std::uint8_t _EBST_TempSt,const std::uint8_t _EBST_CalibrationErr,const std::uint8_t _EBST_IdentificationErr,const std::uint8_t _EBST_Response_Err,const std::uint8_t _EBST_BattInconsistencyFlag,const std::uint8_t _EBST_SOH_SUL,const std::uint8_t _EBST_SOFV_StopEnable,const std::uint8_t _EBST_SOFV_Restart,const std::uint8_t _EBST_SOH_LAM,const std::uint8_t _EBST_SOH_COR,const std::uint8_t _EBST_SOH_SUL_St,const std::uint8_t _EBST_SOFV_StopEnable_St,const std::uint8_t _EBST_SOFV_Restart_St,const std::uint8_t _EBST_SOH_LAM_St,const std::uint8_t _EBST_SOH_COR_St,const std::uint16_t _EBST_Q_Charge,const std::uint16_t _EBST_Q_Discharge,const std::uint8_t _EBST_SOCWakeUp):EBST_BattVolt(_EBST_BattVolt),EBST_CurrentRange(_EBST_CurrentRange),EBST_BattCurrent(_EBST_BattCurrent),EBST_BattTemp(_EBST_BattTemp),EBST_BattQuiescentCurrent(_EBST_BattQuiescentCurrent),EBST_CurrentSt(_EBST_CurrentSt),EBST_VoltSt(_EBST_VoltSt),EBST_TempSt(_EBST_TempSt),EBST_CalibrationErr(_EBST_CalibrationErr),EBST_IdentificationErr(_EBST_IdentificationErr),EBST_Response_Err(_EBST_Response_Err),EBST_BattInconsistencyFlag(_EBST_BattInconsistencyFlag),EBST_SOH_SUL(_EBST_SOH_SUL),EBST_SOFV_StopEnable(_EBST_SOFV_StopEnable),EBST_SOFV_Restart(_EBST_SOFV_Restart),EBST_SOH_LAM(_EBST_SOH_LAM),EBST_SOH_COR(_EBST_SOH_COR),EBST_SOH_SUL_St(_EBST_SOH_SUL_St),EBST_SOFV_StopEnable_St(_EBST_SOFV_StopEnable_St),EBST_SOFV_Restart_St(_EBST_SOFV_Restart_St),EBST_SOH_LAM_St(_EBST_SOH_LAM_St),EBST_SOH_COR_St(_EBST_SOH_COR_St),EBST_Q_Charge(_EBST_Q_Charge),EBST_Q_Discharge(_EBST_Q_Discharge),EBST_SOCWakeUp(_EBST_SOCWakeUp) {}
	BDCEBST(const BDCEBST &_x){
		EBST_BattVolt = _x.EBST_BattVolt;
		EBST_CurrentRange = _x.EBST_CurrentRange;
		EBST_BattCurrent = _x.EBST_BattCurrent;
		EBST_BattTemp = _x.EBST_BattTemp;
		EBST_BattQuiescentCurrent = _x.EBST_BattQuiescentCurrent;
		EBST_CurrentSt = _x.EBST_CurrentSt;
		EBST_VoltSt = _x.EBST_VoltSt;
		EBST_TempSt = _x.EBST_TempSt;
		EBST_CalibrationErr = _x.EBST_CalibrationErr;
		EBST_IdentificationErr = _x.EBST_IdentificationErr;
		EBST_Response_Err = _x.EBST_Response_Err;
		EBST_BattInconsistencyFlag = _x.EBST_BattInconsistencyFlag;
		EBST_SOH_SUL = _x.EBST_SOH_SUL;
		EBST_SOFV_StopEnable = _x.EBST_SOFV_StopEnable;
		EBST_SOFV_Restart = _x.EBST_SOFV_Restart;
		EBST_SOH_LAM = _x.EBST_SOH_LAM;
		EBST_SOH_COR = _x.EBST_SOH_COR;
		EBST_SOH_SUL_St = _x.EBST_SOH_SUL_St;
		EBST_SOFV_StopEnable_St = _x.EBST_SOFV_StopEnable_St;
		EBST_SOFV_Restart_St = _x.EBST_SOFV_Restart_St;
		EBST_SOH_LAM_St = _x.EBST_SOH_LAM_St;
		EBST_SOH_COR_St = _x.EBST_SOH_COR_St;
		EBST_Q_Charge = _x.EBST_Q_Charge;
		EBST_Q_Discharge = _x.EBST_Q_Discharge;
		EBST_SOCWakeUp = _x.EBST_SOCWakeUp;
	}
	BDCEBST(BDCEBST &&_x){
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
		EBST_CurrentRange = std::move(_x.EBST_CurrentRange);
		EBST_BattCurrent = std::move(_x.EBST_BattCurrent);
		EBST_BattTemp = std::move(_x.EBST_BattTemp);
		EBST_BattQuiescentCurrent = std::move(_x.EBST_BattQuiescentCurrent);
		EBST_CurrentSt = std::move(_x.EBST_CurrentSt);
		EBST_VoltSt = std::move(_x.EBST_VoltSt);
		EBST_TempSt = std::move(_x.EBST_TempSt);
		EBST_CalibrationErr = std::move(_x.EBST_CalibrationErr);
		EBST_IdentificationErr = std::move(_x.EBST_IdentificationErr);
		EBST_Response_Err = std::move(_x.EBST_Response_Err);
		EBST_BattInconsistencyFlag = std::move(_x.EBST_BattInconsistencyFlag);
		EBST_SOH_SUL = std::move(_x.EBST_SOH_SUL);
		EBST_SOFV_StopEnable = std::move(_x.EBST_SOFV_StopEnable);
		EBST_SOFV_Restart = std::move(_x.EBST_SOFV_Restart);
		EBST_SOH_LAM = std::move(_x.EBST_SOH_LAM);
		EBST_SOH_COR = std::move(_x.EBST_SOH_COR);
		EBST_SOH_SUL_St = std::move(_x.EBST_SOH_SUL_St);
		EBST_SOFV_StopEnable_St = std::move(_x.EBST_SOFV_StopEnable_St);
		EBST_SOFV_Restart_St = std::move(_x.EBST_SOFV_Restart_St);
		EBST_SOH_LAM_St = std::move(_x.EBST_SOH_LAM_St);
		EBST_SOH_COR_St = std::move(_x.EBST_SOH_COR_St);
		EBST_Q_Charge = std::move(_x.EBST_Q_Charge);
		EBST_Q_Discharge = std::move(_x.EBST_Q_Discharge);
		EBST_SOCWakeUp = std::move(_x.EBST_SOCWakeUp);
	}
	BDCEBST& operator=(const BDCEBST &_x){
		EBST_BattVolt = _x.EBST_BattVolt;
		EBST_CurrentRange = _x.EBST_CurrentRange;
		EBST_BattCurrent = _x.EBST_BattCurrent;
		EBST_BattTemp = _x.EBST_BattTemp;
		EBST_BattQuiescentCurrent = _x.EBST_BattQuiescentCurrent;
		EBST_CurrentSt = _x.EBST_CurrentSt;
		EBST_VoltSt = _x.EBST_VoltSt;
		EBST_TempSt = _x.EBST_TempSt;
		EBST_CalibrationErr = _x.EBST_CalibrationErr;
		EBST_IdentificationErr = _x.EBST_IdentificationErr;
		EBST_Response_Err = _x.EBST_Response_Err;
		EBST_BattInconsistencyFlag = _x.EBST_BattInconsistencyFlag;
		EBST_SOH_SUL = _x.EBST_SOH_SUL;
		EBST_SOFV_StopEnable = _x.EBST_SOFV_StopEnable;
		EBST_SOFV_Restart = _x.EBST_SOFV_Restart;
		EBST_SOH_LAM = _x.EBST_SOH_LAM;
		EBST_SOH_COR = _x.EBST_SOH_COR;
		EBST_SOH_SUL_St = _x.EBST_SOH_SUL_St;
		EBST_SOFV_StopEnable_St = _x.EBST_SOFV_StopEnable_St;
		EBST_SOFV_Restart_St = _x.EBST_SOFV_Restart_St;
		EBST_SOH_LAM_St = _x.EBST_SOH_LAM_St;
		EBST_SOH_COR_St = _x.EBST_SOH_COR_St;
		EBST_Q_Charge = _x.EBST_Q_Charge;
		EBST_Q_Discharge = _x.EBST_Q_Discharge;
		EBST_SOCWakeUp = _x.EBST_SOCWakeUp;
		return *this;
	}
	BDCEBST& operator=(BDCEBST &&_x){
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
		EBST_CurrentRange = std::move(_x.EBST_CurrentRange);
		EBST_BattCurrent = std::move(_x.EBST_BattCurrent);
		EBST_BattTemp = std::move(_x.EBST_BattTemp);
		EBST_BattQuiescentCurrent = std::move(_x.EBST_BattQuiescentCurrent);
		EBST_CurrentSt = std::move(_x.EBST_CurrentSt);
		EBST_VoltSt = std::move(_x.EBST_VoltSt);
		EBST_TempSt = std::move(_x.EBST_TempSt);
		EBST_CalibrationErr = std::move(_x.EBST_CalibrationErr);
		EBST_IdentificationErr = std::move(_x.EBST_IdentificationErr);
		EBST_Response_Err = std::move(_x.EBST_Response_Err);
		EBST_BattInconsistencyFlag = std::move(_x.EBST_BattInconsistencyFlag);
		EBST_SOH_SUL = std::move(_x.EBST_SOH_SUL);
		EBST_SOFV_StopEnable = std::move(_x.EBST_SOFV_StopEnable);
		EBST_SOFV_Restart = std::move(_x.EBST_SOFV_Restart);
		EBST_SOH_LAM = std::move(_x.EBST_SOH_LAM);
		EBST_SOH_COR = std::move(_x.EBST_SOH_COR);
		EBST_SOH_SUL_St = std::move(_x.EBST_SOH_SUL_St);
		EBST_SOFV_StopEnable_St = std::move(_x.EBST_SOFV_StopEnable_St);
		EBST_SOFV_Restart_St = std::move(_x.EBST_SOFV_Restart_St);
		EBST_SOH_LAM_St = std::move(_x.EBST_SOH_LAM_St);
		EBST_SOH_COR_St = std::move(_x.EBST_SOH_COR_St);
		EBST_Q_Charge = std::move(_x.EBST_Q_Charge);
		EBST_Q_Discharge = std::move(_x.EBST_Q_Discharge);
		EBST_SOCWakeUp = std::move(_x.EBST_SOCWakeUp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EBST_BattVolt);
		fun(EBST_CurrentRange);
		fun(EBST_BattCurrent);
		fun(EBST_BattTemp);
		fun(EBST_BattQuiescentCurrent);
		fun(EBST_CurrentSt);
		fun(EBST_VoltSt);
		fun(EBST_TempSt);
		fun(EBST_CalibrationErr);
		fun(EBST_IdentificationErr);
		fun(EBST_Response_Err);
		fun(EBST_BattInconsistencyFlag);
		fun(EBST_SOH_SUL);
		fun(EBST_SOFV_StopEnable);
		fun(EBST_SOFV_Restart);
		fun(EBST_SOH_LAM);
		fun(EBST_SOH_COR);
		fun(EBST_SOH_SUL_St);
		fun(EBST_SOFV_StopEnable_St);
		fun(EBST_SOFV_Restart_St);
		fun(EBST_SOH_LAM_St);
		fun(EBST_SOH_COR_St);
		fun(EBST_Q_Charge);
		fun(EBST_Q_Discharge);
		fun(EBST_SOCWakeUp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EBST_BattVolt);
		fun(EBST_CurrentRange);
		fun(EBST_BattCurrent);
		fun(EBST_BattTemp);
		fun(EBST_BattQuiescentCurrent);
		fun(EBST_CurrentSt);
		fun(EBST_VoltSt);
		fun(EBST_TempSt);
		fun(EBST_CalibrationErr);
		fun(EBST_IdentificationErr);
		fun(EBST_Response_Err);
		fun(EBST_BattInconsistencyFlag);
		fun(EBST_SOH_SUL);
		fun(EBST_SOFV_StopEnable);
		fun(EBST_SOFV_Restart);
		fun(EBST_SOH_LAM);
		fun(EBST_SOH_COR);
		fun(EBST_SOH_SUL_St);
		fun(EBST_SOFV_StopEnable_St);
		fun(EBST_SOFV_Restart_St);
		fun(EBST_SOH_LAM_St);
		fun(EBST_SOH_COR_St);
		fun(EBST_Q_Charge);
		fun(EBST_Q_Discharge);
		fun(EBST_SOCWakeUp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EBST_BattVolt);
		fun << (EBST_CurrentRange);
		fun << (EBST_BattCurrent);
		fun << (EBST_BattTemp);
		fun << (EBST_BattQuiescentCurrent);
		fun << (EBST_CurrentSt);
		fun << (EBST_VoltSt);
		fun << (EBST_TempSt);
		fun << (EBST_CalibrationErr);
		fun << (EBST_IdentificationErr);
		fun << (EBST_Response_Err);
		fun << (EBST_BattInconsistencyFlag);
		fun << (EBST_SOH_SUL);
		fun << (EBST_SOFV_StopEnable);
		fun << (EBST_SOFV_Restart);
		fun << (EBST_SOH_LAM);
		fun << (EBST_SOH_COR);
		fun << (EBST_SOH_SUL_St);
		fun << (EBST_SOFV_StopEnable_St);
		fun << (EBST_SOFV_Restart_St);
		fun << (EBST_SOH_LAM_St);
		fun << (EBST_SOH_COR_St);
		fun << (EBST_Q_Charge);
		fun << (EBST_Q_Discharge);
		fun << (EBST_SOCWakeUp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EBST_BattVolt);
		fun >> (EBST_CurrentRange);
		fun >> (EBST_BattCurrent);
		fun >> (EBST_BattTemp);
		fun >> (EBST_BattQuiescentCurrent);
		fun >> (EBST_CurrentSt);
		fun >> (EBST_VoltSt);
		fun >> (EBST_TempSt);
		fun >> (EBST_CalibrationErr);
		fun >> (EBST_IdentificationErr);
		fun >> (EBST_Response_Err);
		fun >> (EBST_BattInconsistencyFlag);
		fun >> (EBST_SOH_SUL);
		fun >> (EBST_SOFV_StopEnable);
		fun >> (EBST_SOFV_Restart);
		fun >> (EBST_SOH_LAM);
		fun >> (EBST_SOH_COR);
		fun >> (EBST_SOH_SUL_St);
		fun >> (EBST_SOFV_StopEnable_St);
		fun >> (EBST_SOFV_Restart_St);
		fun >> (EBST_SOH_LAM_St);
		fun >> (EBST_SOH_COR_St);
		fun >> (EBST_Q_Charge);
		fun >> (EBST_Q_Discharge);
		fun >> (EBST_SOCWakeUp);
	}
};

#endif //____BDCEBST_H__
