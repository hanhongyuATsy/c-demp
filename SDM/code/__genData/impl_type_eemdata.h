#ifndef ____EEMDATA_H__
#define ____EEMDATA_H__


#include "cstdint"






struct EEMDATA {
public:
	std::uint8_t EEM_HVReqSt;
	std::uint8_t EEM_HVReqSt_Aux;
	std::uint8_t NMEEMKeepAwakeFlag;
	std::uint8_t NMEEMKeepAwakeFlag_Aux;
	std::uint8_t EEM_LvElecEgySt;
	std::uint8_t EEM_LvElecEgySt_Aux;
	std::uint8_t EEM_ChrgReq;
	std::uint8_t EEM_ChrgReq_Aux;
	std::uint8_t EEM_ChrgQuitSt;
	std::uint8_t EEM_ChrgQuitSt_Aux;
	std::uint8_t EEM_RefReq;
	std::uint8_t EEM_RefReq_Aux;
	std::uint8_t EEM_RefQuitSt;
	std::uint8_t EEM_RefQuitSt_Aux;
	std::uint8_t EEM_DCDCSPSt;
	std::uint8_t EEM_Uset;
	std::uint8_t EEM_DCDCSPwarn;
	std::uint8_t VCU_LVBatFillSt_1;
	std::uint8_t VCU_LVBatFillSt_2;
/*
	EEMDATA() {}
	~EEMDATA() {}
	EEMDATA(const std::uint8_t _EEM_HVReqSt,const std::uint8_t _EEM_HVReqSt_Aux,const std::uint8_t _NMEEMKeepAwakeFlag,const std::uint8_t _NMEEMKeepAwakeFlag_Aux,const std::uint8_t _EEM_LvElecEgySt,const std::uint8_t _EEM_LvElecEgySt_Aux,const std::uint8_t _EEM_ChrgReq,const std::uint8_t _EEM_ChrgReq_Aux,const std::uint8_t _EEM_ChrgQuitSt,const std::uint8_t _EEM_ChrgQuitSt_Aux,const std::uint8_t _EEM_RefReq,const std::uint8_t _EEM_RefReq_Aux,const std::uint8_t _EEM_RefQuitSt,const std::uint8_t _EEM_RefQuitSt_Aux,const std::uint8_t _EEM_DCDCSPSt,const std::uint8_t _EEM_Uset,const std::uint8_t _EEM_DCDCSPwarn,const std::uint8_t _VCU_LVBatFillSt_1,const std::uint8_t _VCU_LVBatFillSt_2):EEM_HVReqSt(_EEM_HVReqSt),EEM_HVReqSt_Aux(_EEM_HVReqSt_Aux),NMEEMKeepAwakeFlag(_NMEEMKeepAwakeFlag),NMEEMKeepAwakeFlag_Aux(_NMEEMKeepAwakeFlag_Aux),EEM_LvElecEgySt(_EEM_LvElecEgySt),EEM_LvElecEgySt_Aux(_EEM_LvElecEgySt_Aux),EEM_ChrgReq(_EEM_ChrgReq),EEM_ChrgReq_Aux(_EEM_ChrgReq_Aux),EEM_ChrgQuitSt(_EEM_ChrgQuitSt),EEM_ChrgQuitSt_Aux(_EEM_ChrgQuitSt_Aux),EEM_RefReq(_EEM_RefReq),EEM_RefReq_Aux(_EEM_RefReq_Aux),EEM_RefQuitSt(_EEM_RefQuitSt),EEM_RefQuitSt_Aux(_EEM_RefQuitSt_Aux),EEM_DCDCSPSt(_EEM_DCDCSPSt),EEM_Uset(_EEM_Uset),EEM_DCDCSPwarn(_EEM_DCDCSPwarn),VCU_LVBatFillSt_1(_VCU_LVBatFillSt_1),VCU_LVBatFillSt_2(_VCU_LVBatFillSt_2) {}
	EEMDATA(const EEMDATA &_x){
		EEM_HVReqSt = _x.EEM_HVReqSt;
		EEM_HVReqSt_Aux = _x.EEM_HVReqSt_Aux;
		NMEEMKeepAwakeFlag = _x.NMEEMKeepAwakeFlag;
		NMEEMKeepAwakeFlag_Aux = _x.NMEEMKeepAwakeFlag_Aux;
		EEM_LvElecEgySt = _x.EEM_LvElecEgySt;
		EEM_LvElecEgySt_Aux = _x.EEM_LvElecEgySt_Aux;
		EEM_ChrgReq = _x.EEM_ChrgReq;
		EEM_ChrgReq_Aux = _x.EEM_ChrgReq_Aux;
		EEM_ChrgQuitSt = _x.EEM_ChrgQuitSt;
		EEM_ChrgQuitSt_Aux = _x.EEM_ChrgQuitSt_Aux;
		EEM_RefReq = _x.EEM_RefReq;
		EEM_RefReq_Aux = _x.EEM_RefReq_Aux;
		EEM_RefQuitSt = _x.EEM_RefQuitSt;
		EEM_RefQuitSt_Aux = _x.EEM_RefQuitSt_Aux;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		EEM_Uset = _x.EEM_Uset;
		EEM_DCDCSPwarn = _x.EEM_DCDCSPwarn;
		VCU_LVBatFillSt_1 = _x.VCU_LVBatFillSt_1;
		VCU_LVBatFillSt_2 = _x.VCU_LVBatFillSt_2;
	}
	EEMDATA(EEMDATA &&_x){
		EEM_HVReqSt = std::move(_x.EEM_HVReqSt);
		EEM_HVReqSt_Aux = std::move(_x.EEM_HVReqSt_Aux);
		NMEEMKeepAwakeFlag = std::move(_x.NMEEMKeepAwakeFlag);
		NMEEMKeepAwakeFlag_Aux = std::move(_x.NMEEMKeepAwakeFlag_Aux);
		EEM_LvElecEgySt = std::move(_x.EEM_LvElecEgySt);
		EEM_LvElecEgySt_Aux = std::move(_x.EEM_LvElecEgySt_Aux);
		EEM_ChrgReq = std::move(_x.EEM_ChrgReq);
		EEM_ChrgReq_Aux = std::move(_x.EEM_ChrgReq_Aux);
		EEM_ChrgQuitSt = std::move(_x.EEM_ChrgQuitSt);
		EEM_ChrgQuitSt_Aux = std::move(_x.EEM_ChrgQuitSt_Aux);
		EEM_RefReq = std::move(_x.EEM_RefReq);
		EEM_RefReq_Aux = std::move(_x.EEM_RefReq_Aux);
		EEM_RefQuitSt = std::move(_x.EEM_RefQuitSt);
		EEM_RefQuitSt_Aux = std::move(_x.EEM_RefQuitSt_Aux);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		EEM_Uset = std::move(_x.EEM_Uset);
		EEM_DCDCSPwarn = std::move(_x.EEM_DCDCSPwarn);
		VCU_LVBatFillSt_1 = std::move(_x.VCU_LVBatFillSt_1);
		VCU_LVBatFillSt_2 = std::move(_x.VCU_LVBatFillSt_2);
	}
	EEMDATA& operator=(const EEMDATA &_x){
		EEM_HVReqSt = _x.EEM_HVReqSt;
		EEM_HVReqSt_Aux = _x.EEM_HVReqSt_Aux;
		NMEEMKeepAwakeFlag = _x.NMEEMKeepAwakeFlag;
		NMEEMKeepAwakeFlag_Aux = _x.NMEEMKeepAwakeFlag_Aux;
		EEM_LvElecEgySt = _x.EEM_LvElecEgySt;
		EEM_LvElecEgySt_Aux = _x.EEM_LvElecEgySt_Aux;
		EEM_ChrgReq = _x.EEM_ChrgReq;
		EEM_ChrgReq_Aux = _x.EEM_ChrgReq_Aux;
		EEM_ChrgQuitSt = _x.EEM_ChrgQuitSt;
		EEM_ChrgQuitSt_Aux = _x.EEM_ChrgQuitSt_Aux;
		EEM_RefReq = _x.EEM_RefReq;
		EEM_RefReq_Aux = _x.EEM_RefReq_Aux;
		EEM_RefQuitSt = _x.EEM_RefQuitSt;
		EEM_RefQuitSt_Aux = _x.EEM_RefQuitSt_Aux;
		EEM_DCDCSPSt = _x.EEM_DCDCSPSt;
		EEM_Uset = _x.EEM_Uset;
		EEM_DCDCSPwarn = _x.EEM_DCDCSPwarn;
		VCU_LVBatFillSt_1 = _x.VCU_LVBatFillSt_1;
		VCU_LVBatFillSt_2 = _x.VCU_LVBatFillSt_2;
		return *this;
	}
	EEMDATA& operator=(EEMDATA &&_x){
		EEM_HVReqSt = std::move(_x.EEM_HVReqSt);
		EEM_HVReqSt_Aux = std::move(_x.EEM_HVReqSt_Aux);
		NMEEMKeepAwakeFlag = std::move(_x.NMEEMKeepAwakeFlag);
		NMEEMKeepAwakeFlag_Aux = std::move(_x.NMEEMKeepAwakeFlag_Aux);
		EEM_LvElecEgySt = std::move(_x.EEM_LvElecEgySt);
		EEM_LvElecEgySt_Aux = std::move(_x.EEM_LvElecEgySt_Aux);
		EEM_ChrgReq = std::move(_x.EEM_ChrgReq);
		EEM_ChrgReq_Aux = std::move(_x.EEM_ChrgReq_Aux);
		EEM_ChrgQuitSt = std::move(_x.EEM_ChrgQuitSt);
		EEM_ChrgQuitSt_Aux = std::move(_x.EEM_ChrgQuitSt_Aux);
		EEM_RefReq = std::move(_x.EEM_RefReq);
		EEM_RefReq_Aux = std::move(_x.EEM_RefReq_Aux);
		EEM_RefQuitSt = std::move(_x.EEM_RefQuitSt);
		EEM_RefQuitSt_Aux = std::move(_x.EEM_RefQuitSt_Aux);
		EEM_DCDCSPSt = std::move(_x.EEM_DCDCSPSt);
		EEM_Uset = std::move(_x.EEM_Uset);
		EEM_DCDCSPwarn = std::move(_x.EEM_DCDCSPwarn);
		VCU_LVBatFillSt_1 = std::move(_x.VCU_LVBatFillSt_1);
		VCU_LVBatFillSt_2 = std::move(_x.VCU_LVBatFillSt_2);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EEM_HVReqSt);
		fun(EEM_HVReqSt_Aux);
		fun(NMEEMKeepAwakeFlag);
		fun(NMEEMKeepAwakeFlag_Aux);
		fun(EEM_LvElecEgySt);
		fun(EEM_LvElecEgySt_Aux);
		fun(EEM_ChrgReq);
		fun(EEM_ChrgReq_Aux);
		fun(EEM_ChrgQuitSt);
		fun(EEM_ChrgQuitSt_Aux);
		fun(EEM_RefReq);
		fun(EEM_RefReq_Aux);
		fun(EEM_RefQuitSt);
		fun(EEM_RefQuitSt_Aux);
		fun(EEM_DCDCSPSt);
		fun(EEM_Uset);
		fun(EEM_DCDCSPwarn);
		fun(VCU_LVBatFillSt_1);
		fun(VCU_LVBatFillSt_2);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EEM_HVReqSt);
		fun(EEM_HVReqSt_Aux);
		fun(NMEEMKeepAwakeFlag);
		fun(NMEEMKeepAwakeFlag_Aux);
		fun(EEM_LvElecEgySt);
		fun(EEM_LvElecEgySt_Aux);
		fun(EEM_ChrgReq);
		fun(EEM_ChrgReq_Aux);
		fun(EEM_ChrgQuitSt);
		fun(EEM_ChrgQuitSt_Aux);
		fun(EEM_RefReq);
		fun(EEM_RefReq_Aux);
		fun(EEM_RefQuitSt);
		fun(EEM_RefQuitSt_Aux);
		fun(EEM_DCDCSPSt);
		fun(EEM_Uset);
		fun(EEM_DCDCSPwarn);
		fun(VCU_LVBatFillSt_1);
		fun(VCU_LVBatFillSt_2);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EEM_HVReqSt);
		fun << (EEM_HVReqSt_Aux);
		fun << (NMEEMKeepAwakeFlag);
		fun << (NMEEMKeepAwakeFlag_Aux);
		fun << (EEM_LvElecEgySt);
		fun << (EEM_LvElecEgySt_Aux);
		fun << (EEM_ChrgReq);
		fun << (EEM_ChrgReq_Aux);
		fun << (EEM_ChrgQuitSt);
		fun << (EEM_ChrgQuitSt_Aux);
		fun << (EEM_RefReq);
		fun << (EEM_RefReq_Aux);
		fun << (EEM_RefQuitSt);
		fun << (EEM_RefQuitSt_Aux);
		fun << (EEM_DCDCSPSt);
		fun << (EEM_Uset);
		fun << (EEM_DCDCSPwarn);
		fun << (VCU_LVBatFillSt_1);
		fun << (VCU_LVBatFillSt_2);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EEM_HVReqSt);
		fun >> (EEM_HVReqSt_Aux);
		fun >> (NMEEMKeepAwakeFlag);
		fun >> (NMEEMKeepAwakeFlag_Aux);
		fun >> (EEM_LvElecEgySt);
		fun >> (EEM_LvElecEgySt_Aux);
		fun >> (EEM_ChrgReq);
		fun >> (EEM_ChrgReq_Aux);
		fun >> (EEM_ChrgQuitSt);
		fun >> (EEM_ChrgQuitSt_Aux);
		fun >> (EEM_RefReq);
		fun >> (EEM_RefReq_Aux);
		fun >> (EEM_RefQuitSt);
		fun >> (EEM_RefQuitSt_Aux);
		fun >> (EEM_DCDCSPSt);
		fun >> (EEM_Uset);
		fun >> (EEM_DCDCSPwarn);
		fun >> (VCU_LVBatFillSt_1);
		fun >> (VCU_LVBatFillSt_2);
	}
};

#endif //____EEMDATA_H__
