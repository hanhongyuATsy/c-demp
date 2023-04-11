#ifndef ____BDCIPS2_H__
#define ____BDCIPS2_H__


#include "cstdint"






struct BDCIPS2 {
public:
	std::uint8_t IPS_OBCDiagErrCode;
	std::uint8_t IPS_DCDCDiagErrCode;
	std::uint8_t IPS_DCDCState1;
	std::uint8_t IPS_DCDCState2;
	std::uint8_t IPS_DCDCState3;
	std::uint8_t IPS_DCDCState4;
	std::uint8_t IPS_DCDCState5;
	std::uint8_t IPS_OBCState1;
	std::uint8_t IPS_OBCState2;
	std::uint8_t IPS_OBCState3;
	std::uint8_t IPS_OBCState4;
	std::uint8_t IPS_OBCState5;
	std::uint8_t IPS_HVDCHVilSt;
	std::uint8_t IPS_ACHvilSt;
	std::uint8_t IPS_DCDCFaultLampInd;
	std::uint8_t IPS_OBCFaultLampInd;
	std::uint16_t IPS_DCDCKL30Volt;
/*
	BDCIPS2() {}
	~BDCIPS2() {}
	BDCIPS2(const std::uint8_t _IPS_OBCDiagErrCode,const std::uint8_t _IPS_DCDCDiagErrCode,const std::uint8_t _IPS_DCDCState1,const std::uint8_t _IPS_DCDCState2,const std::uint8_t _IPS_DCDCState3,const std::uint8_t _IPS_DCDCState4,const std::uint8_t _IPS_DCDCState5,const std::uint8_t _IPS_OBCState1,const std::uint8_t _IPS_OBCState2,const std::uint8_t _IPS_OBCState3,const std::uint8_t _IPS_OBCState4,const std::uint8_t _IPS_OBCState5,const std::uint8_t _IPS_HVDCHVilSt,const std::uint8_t _IPS_ACHvilSt,const std::uint8_t _IPS_DCDCFaultLampInd,const std::uint8_t _IPS_OBCFaultLampInd,const std::uint16_t _IPS_DCDCKL30Volt):IPS_OBCDiagErrCode(_IPS_OBCDiagErrCode),IPS_DCDCDiagErrCode(_IPS_DCDCDiagErrCode),IPS_DCDCState1(_IPS_DCDCState1),IPS_DCDCState2(_IPS_DCDCState2),IPS_DCDCState3(_IPS_DCDCState3),IPS_DCDCState4(_IPS_DCDCState4),IPS_DCDCState5(_IPS_DCDCState5),IPS_OBCState1(_IPS_OBCState1),IPS_OBCState2(_IPS_OBCState2),IPS_OBCState3(_IPS_OBCState3),IPS_OBCState4(_IPS_OBCState4),IPS_OBCState5(_IPS_OBCState5),IPS_HVDCHVilSt(_IPS_HVDCHVilSt),IPS_ACHvilSt(_IPS_ACHvilSt),IPS_DCDCFaultLampInd(_IPS_DCDCFaultLampInd),IPS_OBCFaultLampInd(_IPS_OBCFaultLampInd),IPS_DCDCKL30Volt(_IPS_DCDCKL30Volt) {}
	BDCIPS2(const BDCIPS2 &_x){
		IPS_OBCDiagErrCode = _x.IPS_OBCDiagErrCode;
		IPS_DCDCDiagErrCode = _x.IPS_DCDCDiagErrCode;
		IPS_DCDCState1 = _x.IPS_DCDCState1;
		IPS_DCDCState2 = _x.IPS_DCDCState2;
		IPS_DCDCState3 = _x.IPS_DCDCState3;
		IPS_DCDCState4 = _x.IPS_DCDCState4;
		IPS_DCDCState5 = _x.IPS_DCDCState5;
		IPS_OBCState1 = _x.IPS_OBCState1;
		IPS_OBCState2 = _x.IPS_OBCState2;
		IPS_OBCState3 = _x.IPS_OBCState3;
		IPS_OBCState4 = _x.IPS_OBCState4;
		IPS_OBCState5 = _x.IPS_OBCState5;
		IPS_HVDCHVilSt = _x.IPS_HVDCHVilSt;
		IPS_ACHvilSt = _x.IPS_ACHvilSt;
		IPS_DCDCFaultLampInd = _x.IPS_DCDCFaultLampInd;
		IPS_OBCFaultLampInd = _x.IPS_OBCFaultLampInd;
		IPS_DCDCKL30Volt = _x.IPS_DCDCKL30Volt;
	}
	BDCIPS2(BDCIPS2 &&_x){
		IPS_OBCDiagErrCode = std::move(_x.IPS_OBCDiagErrCode);
		IPS_DCDCDiagErrCode = std::move(_x.IPS_DCDCDiagErrCode);
		IPS_DCDCState1 = std::move(_x.IPS_DCDCState1);
		IPS_DCDCState2 = std::move(_x.IPS_DCDCState2);
		IPS_DCDCState3 = std::move(_x.IPS_DCDCState3);
		IPS_DCDCState4 = std::move(_x.IPS_DCDCState4);
		IPS_DCDCState5 = std::move(_x.IPS_DCDCState5);
		IPS_OBCState1 = std::move(_x.IPS_OBCState1);
		IPS_OBCState2 = std::move(_x.IPS_OBCState2);
		IPS_OBCState3 = std::move(_x.IPS_OBCState3);
		IPS_OBCState4 = std::move(_x.IPS_OBCState4);
		IPS_OBCState5 = std::move(_x.IPS_OBCState5);
		IPS_HVDCHVilSt = std::move(_x.IPS_HVDCHVilSt);
		IPS_ACHvilSt = std::move(_x.IPS_ACHvilSt);
		IPS_DCDCFaultLampInd = std::move(_x.IPS_DCDCFaultLampInd);
		IPS_OBCFaultLampInd = std::move(_x.IPS_OBCFaultLampInd);
		IPS_DCDCKL30Volt = std::move(_x.IPS_DCDCKL30Volt);
	}
	BDCIPS2& operator=(const BDCIPS2 &_x){
		IPS_OBCDiagErrCode = _x.IPS_OBCDiagErrCode;
		IPS_DCDCDiagErrCode = _x.IPS_DCDCDiagErrCode;
		IPS_DCDCState1 = _x.IPS_DCDCState1;
		IPS_DCDCState2 = _x.IPS_DCDCState2;
		IPS_DCDCState3 = _x.IPS_DCDCState3;
		IPS_DCDCState4 = _x.IPS_DCDCState4;
		IPS_DCDCState5 = _x.IPS_DCDCState5;
		IPS_OBCState1 = _x.IPS_OBCState1;
		IPS_OBCState2 = _x.IPS_OBCState2;
		IPS_OBCState3 = _x.IPS_OBCState3;
		IPS_OBCState4 = _x.IPS_OBCState4;
		IPS_OBCState5 = _x.IPS_OBCState5;
		IPS_HVDCHVilSt = _x.IPS_HVDCHVilSt;
		IPS_ACHvilSt = _x.IPS_ACHvilSt;
		IPS_DCDCFaultLampInd = _x.IPS_DCDCFaultLampInd;
		IPS_OBCFaultLampInd = _x.IPS_OBCFaultLampInd;
		IPS_DCDCKL30Volt = _x.IPS_DCDCKL30Volt;
		return *this;
	}
	BDCIPS2& operator=(BDCIPS2 &&_x){
		IPS_OBCDiagErrCode = std::move(_x.IPS_OBCDiagErrCode);
		IPS_DCDCDiagErrCode = std::move(_x.IPS_DCDCDiagErrCode);
		IPS_DCDCState1 = std::move(_x.IPS_DCDCState1);
		IPS_DCDCState2 = std::move(_x.IPS_DCDCState2);
		IPS_DCDCState3 = std::move(_x.IPS_DCDCState3);
		IPS_DCDCState4 = std::move(_x.IPS_DCDCState4);
		IPS_DCDCState5 = std::move(_x.IPS_DCDCState5);
		IPS_OBCState1 = std::move(_x.IPS_OBCState1);
		IPS_OBCState2 = std::move(_x.IPS_OBCState2);
		IPS_OBCState3 = std::move(_x.IPS_OBCState3);
		IPS_OBCState4 = std::move(_x.IPS_OBCState4);
		IPS_OBCState5 = std::move(_x.IPS_OBCState5);
		IPS_HVDCHVilSt = std::move(_x.IPS_HVDCHVilSt);
		IPS_ACHvilSt = std::move(_x.IPS_ACHvilSt);
		IPS_DCDCFaultLampInd = std::move(_x.IPS_DCDCFaultLampInd);
		IPS_OBCFaultLampInd = std::move(_x.IPS_OBCFaultLampInd);
		IPS_DCDCKL30Volt = std::move(_x.IPS_DCDCKL30Volt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_OBCDiagErrCode);
		fun(IPS_DCDCDiagErrCode);
		fun(IPS_DCDCState1);
		fun(IPS_DCDCState2);
		fun(IPS_DCDCState3);
		fun(IPS_DCDCState4);
		fun(IPS_DCDCState5);
		fun(IPS_OBCState1);
		fun(IPS_OBCState2);
		fun(IPS_OBCState3);
		fun(IPS_OBCState4);
		fun(IPS_OBCState5);
		fun(IPS_HVDCHVilSt);
		fun(IPS_ACHvilSt);
		fun(IPS_DCDCFaultLampInd);
		fun(IPS_OBCFaultLampInd);
		fun(IPS_DCDCKL30Volt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_OBCDiagErrCode);
		fun(IPS_DCDCDiagErrCode);
		fun(IPS_DCDCState1);
		fun(IPS_DCDCState2);
		fun(IPS_DCDCState3);
		fun(IPS_DCDCState4);
		fun(IPS_DCDCState5);
		fun(IPS_OBCState1);
		fun(IPS_OBCState2);
		fun(IPS_OBCState3);
		fun(IPS_OBCState4);
		fun(IPS_OBCState5);
		fun(IPS_HVDCHVilSt);
		fun(IPS_ACHvilSt);
		fun(IPS_DCDCFaultLampInd);
		fun(IPS_OBCFaultLampInd);
		fun(IPS_DCDCKL30Volt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_OBCDiagErrCode);
		fun << (IPS_DCDCDiagErrCode);
		fun << (IPS_DCDCState1);
		fun << (IPS_DCDCState2);
		fun << (IPS_DCDCState3);
		fun << (IPS_DCDCState4);
		fun << (IPS_DCDCState5);
		fun << (IPS_OBCState1);
		fun << (IPS_OBCState2);
		fun << (IPS_OBCState3);
		fun << (IPS_OBCState4);
		fun << (IPS_OBCState5);
		fun << (IPS_HVDCHVilSt);
		fun << (IPS_ACHvilSt);
		fun << (IPS_DCDCFaultLampInd);
		fun << (IPS_OBCFaultLampInd);
		fun << (IPS_DCDCKL30Volt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_OBCDiagErrCode);
		fun >> (IPS_DCDCDiagErrCode);
		fun >> (IPS_DCDCState1);
		fun >> (IPS_DCDCState2);
		fun >> (IPS_DCDCState3);
		fun >> (IPS_DCDCState4);
		fun >> (IPS_DCDCState5);
		fun >> (IPS_OBCState1);
		fun >> (IPS_OBCState2);
		fun >> (IPS_OBCState3);
		fun >> (IPS_OBCState4);
		fun >> (IPS_OBCState5);
		fun >> (IPS_HVDCHVilSt);
		fun >> (IPS_ACHvilSt);
		fun >> (IPS_DCDCFaultLampInd);
		fun >> (IPS_OBCFaultLampInd);
		fun >> (IPS_DCDCKL30Volt);
	}
};

#endif //____BDCIPS2_H__
