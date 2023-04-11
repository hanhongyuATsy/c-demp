#ifndef ____BDCIPS1_H__
#define ____BDCIPS1_H__


#include "cstdint"






struct BDCIPS1 {
public:
	std::uint16_t IPS_OBCCC_Res;
	std::uint16_t IPS_OBCCp_DutyCycle;
	std::uint8_t IPS_TempAct;
	std::uint16_t IPS_SwVersion;
/*
	BDCIPS1() {}
	~BDCIPS1() {}
	BDCIPS1(const std::uint16_t _IPS_OBCCC_Res,const std::uint16_t _IPS_OBCCp_DutyCycle,const std::uint8_t _IPS_TempAct,const std::uint16_t _IPS_SwVersion):IPS_OBCCC_Res(_IPS_OBCCC_Res),IPS_OBCCp_DutyCycle(_IPS_OBCCp_DutyCycle),IPS_TempAct(_IPS_TempAct),IPS_SwVersion(_IPS_SwVersion) {}
	BDCIPS1(const BDCIPS1 &_x){
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
		IPS_OBCCp_DutyCycle = _x.IPS_OBCCp_DutyCycle;
		IPS_TempAct = _x.IPS_TempAct;
		IPS_SwVersion = _x.IPS_SwVersion;
	}
	BDCIPS1(BDCIPS1 &&_x){
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
		IPS_OBCCp_DutyCycle = std::move(_x.IPS_OBCCp_DutyCycle);
		IPS_TempAct = std::move(_x.IPS_TempAct);
		IPS_SwVersion = std::move(_x.IPS_SwVersion);
	}
	BDCIPS1& operator=(const BDCIPS1 &_x){
		IPS_OBCCC_Res = _x.IPS_OBCCC_Res;
		IPS_OBCCp_DutyCycle = _x.IPS_OBCCp_DutyCycle;
		IPS_TempAct = _x.IPS_TempAct;
		IPS_SwVersion = _x.IPS_SwVersion;
		return *this;
	}
	BDCIPS1& operator=(BDCIPS1 &&_x){
		IPS_OBCCC_Res = std::move(_x.IPS_OBCCC_Res);
		IPS_OBCCp_DutyCycle = std::move(_x.IPS_OBCCp_DutyCycle);
		IPS_TempAct = std::move(_x.IPS_TempAct);
		IPS_SwVersion = std::move(_x.IPS_SwVersion);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_OBCCC_Res);
		fun(IPS_OBCCp_DutyCycle);
		fun(IPS_TempAct);
		fun(IPS_SwVersion);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_OBCCC_Res);
		fun(IPS_OBCCp_DutyCycle);
		fun(IPS_TempAct);
		fun(IPS_SwVersion);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_OBCCC_Res);
		fun << (IPS_OBCCp_DutyCycle);
		fun << (IPS_TempAct);
		fun << (IPS_SwVersion);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_OBCCC_Res);
		fun >> (IPS_OBCCp_DutyCycle);
		fun >> (IPS_TempAct);
		fun >> (IPS_SwVersion);
	}
};

#endif //____BDCIPS1_H__
