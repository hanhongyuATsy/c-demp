#ifndef ____BDCIPSOBC_H__
#define ____BDCIPSOBC_H__


#include "cstdint"






struct BDCIPSOBC {
public:
	std::uint8_t IPS_OBCModeSt;
	std::uint16_t IPS_OBCCurrActL1;
	std::uint16_t IPS_OBCHvDcCurrAct;
	std::uint16_t IPS_OBCUacActL1;
	std::uint16_t IPS_OBCHvDcVoltAct;
	std::uint8_t IPS_OBCCPSt;
	std::uint8_t IPS_OBCCpS2St;
	std::uint8_t IPS_OBCCPVolt;
	std::uint16_t IPS_OBCCC_Res;
	std::uint8_t IPS_TempAct;
	std::uint16_t IPS_OBCCp_DutyCycle;
/*
	BDCIPSOBC() {}
	~BDCIPSOBC() {}
	BDCIPSOBC(const std::uint8_t _IPS_OBCModeSt,const std::uint16_t _IPS_OBCCurrActL1,const std::uint16_t _IPS_OBCHvDcCurrAct,const std::uint16_t _IPS_OBCUacActL1,const std::uint16_t _IPS_OBCHvDcVoltAct,const std::uint8_t _IPS_OBCCPSt,const std::uint8_t _IPS_OBCCpS2St,const std::uint8_t _IPS_OBCCPVolt,const std::uint16_t _IPS_OBCCC_Res,const std::uint8_t _IPS_TempAct,const std::uint16_t _IPS_OBCCp_DutyCycle):IPS_OBCModeSt(_IPS_OBCModeSt),IPS_OBCCurrActL1(_IPS_OBCCurrActL1),IPS_OBCHvDcCurrAct(_IPS_OBCHvDcCurrAct),IPS_OBCUacActL1(_IPS_OBCUacActL1),IPS_OBCHvDcVoltAct(_IPS_OBCHvDcVoltAct),IPS_OBCCPSt(_IPS_OBCCPSt),IPS_OBCCpS2St(_IPS_OBCCpS2St),IPS_OBCCPVolt(_IPS_OBCCPVolt),IPS_OBCCC_Res(_IPS_OBCCC_Res),IPS_TempAct(_IPS_TempAct),IPS_OBCCp_DutyCycle(_IPS_OBCCp_DutyCycle) {}
	BDCIPSOBC(const BDCIPSOBC &_x){
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
		IPS_TempAct = _x.IPS_TempAct;
		IPS_OBCCp_DutyCycle = _x.IPS_OBCCp_DutyCycle;
	}
	BDCIPSOBC(BDCIPSOBC &&_x){
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
		IPS_TempAct = std::move(_x.IPS_TempAct);
		IPS_OBCCp_DutyCycle = std::move(_x.IPS_OBCCp_DutyCycle);
	}
	BDCIPSOBC& operator=(const BDCIPSOBC &_x){
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
		IPS_TempAct = _x.IPS_TempAct;
		IPS_OBCCp_DutyCycle = _x.IPS_OBCCp_DutyCycle;
		return *this;
	}
	BDCIPSOBC& operator=(BDCIPSOBC &&_x){
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
		IPS_TempAct = std::move(_x.IPS_TempAct);
		IPS_OBCCp_DutyCycle = std::move(_x.IPS_OBCCp_DutyCycle);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_OBCModeSt);
		fun(IPS_OBCCurrActL1);
		fun(IPS_OBCHvDcCurrAct);
		fun(IPS_OBCUacActL1);
		fun(IPS_OBCHvDcVoltAct);
		fun(IPS_OBCCPSt);
		fun(IPS_OBCCpS2St);
		fun(IPS_OBCCPVolt);
		fun(IPS_OBCCC_Res);
		fun(IPS_TempAct);
		fun(IPS_OBCCp_DutyCycle);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_OBCModeSt);
		fun(IPS_OBCCurrActL1);
		fun(IPS_OBCHvDcCurrAct);
		fun(IPS_OBCUacActL1);
		fun(IPS_OBCHvDcVoltAct);
		fun(IPS_OBCCPSt);
		fun(IPS_OBCCpS2St);
		fun(IPS_OBCCPVolt);
		fun(IPS_OBCCC_Res);
		fun(IPS_TempAct);
		fun(IPS_OBCCp_DutyCycle);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_OBCModeSt);
		fun << (IPS_OBCCurrActL1);
		fun << (IPS_OBCHvDcCurrAct);
		fun << (IPS_OBCUacActL1);
		fun << (IPS_OBCHvDcVoltAct);
		fun << (IPS_OBCCPSt);
		fun << (IPS_OBCCpS2St);
		fun << (IPS_OBCCPVolt);
		fun << (IPS_OBCCC_Res);
		fun << (IPS_TempAct);
		fun << (IPS_OBCCp_DutyCycle);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_OBCModeSt);
		fun >> (IPS_OBCCurrActL1);
		fun >> (IPS_OBCHvDcCurrAct);
		fun >> (IPS_OBCUacActL1);
		fun >> (IPS_OBCHvDcVoltAct);
		fun >> (IPS_OBCCPSt);
		fun >> (IPS_OBCCpS2St);
		fun >> (IPS_OBCCPVolt);
		fun >> (IPS_OBCCC_Res);
		fun >> (IPS_TempAct);
		fun >> (IPS_OBCCp_DutyCycle);
	}
};

#endif //____BDCIPSOBC_H__
