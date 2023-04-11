#ifndef ____BDCIPSOBCTRI_H__
#define ____BDCIPSOBCTRI_H__


#include "cstdint"






struct BDCIPSOBCTri {
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
/*
	BDCIPSOBCTri() {}
	~BDCIPSOBCTri() {}
	BDCIPSOBCTri(const std::uint8_t _IPS_OBCModeSt,const std::uint16_t _IPS_OBCCurrActL1,const std::uint16_t _IPS_OBCHvDcCurrAct,const std::uint16_t _IPS_OBCUacActL1,const std::uint16_t _IPS_OBCHvDcVoltAct,const std::uint8_t _IPS_OBCCPSt,const std::uint8_t _IPS_OBCCpS2St,const std::uint8_t _IPS_OBCCPVolt,const std::uint16_t _IPS_OBCCC_Res):IPS_OBCModeSt(_IPS_OBCModeSt),IPS_OBCCurrActL1(_IPS_OBCCurrActL1),IPS_OBCHvDcCurrAct(_IPS_OBCHvDcCurrAct),IPS_OBCUacActL1(_IPS_OBCUacActL1),IPS_OBCHvDcVoltAct(_IPS_OBCHvDcVoltAct),IPS_OBCCPSt(_IPS_OBCCPSt),IPS_OBCCpS2St(_IPS_OBCCpS2St),IPS_OBCCPVolt(_IPS_OBCCPVolt),IPS_OBCCC_Res(_IPS_OBCCC_Res) {}
	BDCIPSOBCTri(const BDCIPSOBCTri &_x){
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
	}
	BDCIPSOBCTri(BDCIPSOBCTri &&_x){
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
	}
	BDCIPSOBCTri& operator=(const BDCIPSOBCTri &_x){
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		IPS_OBCCurrActL1 = _x.IPS_OBCCurrActL1;
		IPS_OBCHvDcCurrAct = _x.IPS_OBCHvDcCurrAct;
		IPS_OBCUacActL1 = _x.IPS_OBCUacActL1;
		IPS_OBCHvDcVoltAct = _x.IPS_OBCHvDcVoltAct;
		IPS_OBCCPSt = _x.IPS_OBCCPSt;
		IPS_OBCCpS2St = _x.IPS_OBCCpS2St;
		IPS_OBCCPVolt = _x.IPS_OBCCPVolt;
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
		return *this;
	}
	BDCIPSOBCTri& operator=(BDCIPSOBCTri &&_x){
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		IPS_OBCCurrActL1 = std::move(_x.IPS_OBCCurrActL1);
		IPS_OBCHvDcCurrAct = std::move(_x.IPS_OBCHvDcCurrAct);
		IPS_OBCUacActL1 = std::move(_x.IPS_OBCUacActL1);
		IPS_OBCHvDcVoltAct = std::move(_x.IPS_OBCHvDcVoltAct);
		IPS_OBCCPSt = std::move(_x.IPS_OBCCPSt);
		IPS_OBCCpS2St = std::move(_x.IPS_OBCCpS2St);
		IPS_OBCCPVolt = std::move(_x.IPS_OBCCPVolt);
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
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
	}
};

#endif //____BDCIPSOBCTRI_H__
