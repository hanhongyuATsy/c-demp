#ifndef ____BDCEEM_H__
#define ____BDCEEM_H__


#include "cstdint"






struct BDCEEM {
public:
	std::uint8_t EEM_EBSFSOCWakeUpEn;
	std::uint8_t EEM_EBSFSOC2WakeUpEn;
	std::uint8_t EEM_EBSTSOCWakeUpEn;
	std::uint8_t EEM_EBSTSOC2WakeUpEn;
	std::uint8_t EEM_LdCtlSt;
	std::uint8_t EEM_LdCtlLv;
	std::uint8_t EEM_LvElecEgySt;
	std::uint8_t ACU_EEM_LoadControl;
	std::uint8_t EEM_DCDCSPSt;
	std::uint8_t EEM_DCDCSPwarn;
	std::uint16_t IPS_DCDCVoltLvAct;
/*
	BDCEEM() {}
	~BDCEEM() {}
	BDCEEM(const std::uint8_t _EEM_EBSFSOCWakeUpEn,const std::uint8_t _EEM_EBSFSOC2WakeUpEn,const std::uint8_t _EEM_EBSTSOCWakeUpEn,const std::uint8_t _EEM_EBSTSOC2WakeUpEn,const std::uint8_t _EEM_LdCtlSt,const std::uint8_t _EEM_LdCtlLv,const std::uint8_t _EEM_LvElecEgySt,const std::uint8_t _ACU_EEM_LoadControl,const std::uint8_t _EEM_DCDCSPSt,const std::uint8_t _EEM_DCDCSPwarn,const std::uint16_t _IPS_DCDCVoltLvAct):EEM_EBSFSOCWakeUpEn(_EEM_EBSFSOCWakeUpEn),EEM_EBSFSOC2WakeUpEn(_EEM_EBSFSOC2WakeUpEn),EEM_EBSTSOCWakeUpEn(_EEM_EBSTSOCWakeUpEn),EEM_EBSTSOC2WakeUpEn(_EEM_EBSTSOC2WakeUpEn),EEM_LdCtlSt(_EEM_LdCtlSt),EEM_LdCtlLv(_EEM_LdCtlLv),EEM_LvElecEgySt(_EEM_LvElecEgySt),ACU_EEM_LoadControl(_ACU_EEM_LoadControl),EEM_DCDCSPSt(_EEM_DCDCSPSt),EEM_DCDCSPwarn(_EEM_DCDCSPwarn),IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct) {}
	BDCEEM(const BDCEEM &_x){
		EEM_EBSFSOCWakeUpEn = _x.EEM_EBSFSOCWakeUpEn;
		EEM_EBSFSOC2WakeUpEn = _x.EEM_EBSFSOC2WakeUpEn;
		EEM_EBSTSOCWakeUpEn = _x.EEM_EBSTSOCWakeUpEn;
		EEM_EBSTSOC2WakeUpEn = _x.EEM_EBSTSOC2WakeUpEn;
		EEM_LdCtlSt = _x.EEM_LdCtlSt;
		EEM_LdCtlLv = _x.EEM_LdCtlLv;
		EEM_LvElecEgySt = _x.EEM_LvElecEgySt;
		ACU_EEM_LoadControl = _x.ACU_EEM_LoadControl;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		EEM_DCDCSPwarn = _x.EEM_DCDCSPwarn;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
	}
	BDCEEM(BDCEEM &&_x){
		EEM_EBSFSOCWakeUpEn = std::move(_x.EEM_EBSFSOCWakeUpEn);
		EEM_EBSFSOC2WakeUpEn = std::move(_x.EEM_EBSFSOC2WakeUpEn);
		EEM_EBSTSOCWakeUpEn = std::move(_x.EEM_EBSTSOCWakeUpEn);
		EEM_EBSTSOC2WakeUpEn = std::move(_x.EEM_EBSTSOC2WakeUpEn);
		EEM_LdCtlSt = std::move(_x.EEM_LdCtlSt);
		EEM_LdCtlLv = std::move(_x.EEM_LdCtlLv);
		EEM_LvElecEgySt = std::move(_x.EEM_LvElecEgySt);
		ACU_EEM_LoadControl = std::move(_x.ACU_EEM_LoadControl);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		EEM_DCDCSPwarn = std::move(_x.EEM_DCDCSPwarn);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
	}
	BDCEEM& operator=(const BDCEEM &_x){
		EEM_EBSFSOCWakeUpEn = _x.EEM_EBSFSOCWakeUpEn;
		EEM_EBSFSOC2WakeUpEn = _x.EEM_EBSFSOC2WakeUpEn;
		EEM_EBSTSOCWakeUpEn = _x.EEM_EBSTSOCWakeUpEn;
		EEM_EBSTSOC2WakeUpEn = _x.EEM_EBSTSOC2WakeUpEn;
		EEM_LdCtlSt = _x.EEM_LdCtlSt;
		EEM_LdCtlLv = _x.EEM_LdCtlLv;
		EEM_LvElecEgySt = _x.EEM_LvElecEgySt;
		ACU_EEM_LoadControl = _x.ACU_EEM_LoadControl;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		EEM_DCDCSPwarn = _x.EEM_DCDCSPwarn;
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		return *this;
	}
	BDCEEM& operator=(BDCEEM &&_x){
		EEM_EBSFSOCWakeUpEn = std::move(_x.EEM_EBSFSOCWakeUpEn);
		EEM_EBSFSOC2WakeUpEn = std::move(_x.EEM_EBSFSOC2WakeUpEn);
		EEM_EBSTSOCWakeUpEn = std::move(_x.EEM_EBSTSOCWakeUpEn);
		EEM_EBSTSOC2WakeUpEn = std::move(_x.EEM_EBSTSOC2WakeUpEn);
		EEM_LdCtlSt = std::move(_x.EEM_LdCtlSt);
		EEM_LdCtlLv = std::move(_x.EEM_LdCtlLv);
		EEM_LvElecEgySt = std::move(_x.EEM_LvElecEgySt);
		ACU_EEM_LoadControl = std::move(_x.ACU_EEM_LoadControl);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		EEM_DCDCSPwarn = std::move(_x.EEM_DCDCSPwarn);
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EEM_EBSFSOCWakeUpEn);
		fun(EEM_EBSFSOC2WakeUpEn);
		fun(EEM_EBSTSOCWakeUpEn);
		fun(EEM_EBSTSOC2WakeUpEn);
		fun(EEM_LdCtlSt);
		fun(EEM_LdCtlLv);
		fun(EEM_LvElecEgySt);
		fun(ACU_EEM_LoadControl);
		fun(EEM_DCDCSPSt);
		fun(EEM_DCDCSPwarn);
		fun(IPS_DCDCVoltLvAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EEM_EBSFSOCWakeUpEn);
		fun(EEM_EBSFSOC2WakeUpEn);
		fun(EEM_EBSTSOCWakeUpEn);
		fun(EEM_EBSTSOC2WakeUpEn);
		fun(EEM_LdCtlSt);
		fun(EEM_LdCtlLv);
		fun(EEM_LvElecEgySt);
		fun(ACU_EEM_LoadControl);
		fun(EEM_DCDCSPSt);
		fun(EEM_DCDCSPwarn);
		fun(IPS_DCDCVoltLvAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EEM_EBSFSOCWakeUpEn);
		fun << (EEM_EBSFSOC2WakeUpEn);
		fun << (EEM_EBSTSOCWakeUpEn);
		fun << (EEM_EBSTSOC2WakeUpEn);
		fun << (EEM_LdCtlSt);
		fun << (EEM_LdCtlLv);
		fun << (EEM_LvElecEgySt);
		fun << (ACU_EEM_LoadControl);
		fun << (EEM_DCDCSPSt);
		fun << (EEM_DCDCSPwarn);
		fun << (IPS_DCDCVoltLvAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EEM_EBSFSOCWakeUpEn);
		fun >> (EEM_EBSFSOC2WakeUpEn);
		fun >> (EEM_EBSTSOCWakeUpEn);
		fun >> (EEM_EBSTSOC2WakeUpEn);
		fun >> (EEM_LdCtlSt);
		fun >> (EEM_LdCtlLv);
		fun >> (EEM_LvElecEgySt);
		fun >> (ACU_EEM_LoadControl);
		fun >> (EEM_DCDCSPSt);
		fun >> (EEM_DCDCSPwarn);
		fun >> (IPS_DCDCVoltLvAct);
	}
};

#endif //____BDCEEM_H__
