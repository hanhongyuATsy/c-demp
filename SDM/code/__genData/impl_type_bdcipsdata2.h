#ifndef ____BDCIPSDATA2_H__
#define ____BDCIPSDATA2_H__


#include "cstdint"






struct BDCIPSDATA2 {
public:
	std::uint16_t IPS_DCDCKL30VoltForHyb;
	std::uint8_t IPS_OBCDschDisable;
	std::uint8_t IPS_ACHvilStForHyb;
	std::uint8_t IPS_HVDCHVilStForHyb;
	std::uint64_t OPC_RemoteDiagCode;
	std::uint8_t IPS_OBCModest;
/*
	BDCIPSDATA2() {}
	~BDCIPSDATA2() {}
	BDCIPSDATA2(const std::uint16_t _IPS_DCDCKL30VoltForHyb,const std::uint8_t _IPS_OBCDschDisable,const std::uint8_t _IPS_ACHvilStForHyb,const std::uint8_t _IPS_HVDCHVilStForHyb,const std::uint64_t _OPC_RemoteDiagCode,const std::uint8_t _IPS_OBCModest):IPS_DCDCKL30VoltForHyb(_IPS_DCDCKL30VoltForHyb),IPS_OBCDschDisable(_IPS_OBCDschDisable),IPS_ACHvilStForHyb(_IPS_ACHvilStForHyb),IPS_HVDCHVilStForHyb(_IPS_HVDCHVilStForHyb),OPC_RemoteDiagCode(_OPC_RemoteDiagCode),IPS_OBCModest(_IPS_OBCModest) {}
	BDCIPSDATA2(const BDCIPSDATA2 &_x){
		IPS_DCDCKL30VoltForHyb = _x.IPS_DCDCKL30VoltForHyb;
		IPS_OBCDschDisable = _x.IPS_OBCDschDisable;
		IPS_ACHvilStForHyb = _x.IPS_ACHvilStForHyb;
		IPS_HVDCHVilStForHyb = _x.IPS_HVDCHVilStForHyb;
		OPC_RemoteDiagCode = _x.OPC_RemoteDiagCode;
		IPS_OBCModest = _x.IPS_OBCModest;
	}
	BDCIPSDATA2(BDCIPSDATA2 &&_x){
		IPS_DCDCKL30VoltForHyb = std::move(_x.IPS_DCDCKL30VoltForHyb);
		IPS_OBCDschDisable = std::move(_x.IPS_OBCDschDisable);
		IPS_ACHvilStForHyb = std::move(_x.IPS_ACHvilStForHyb);
		IPS_HVDCHVilStForHyb = std::move(_x.IPS_HVDCHVilStForHyb);
		OPC_RemoteDiagCode = std::move(_x.OPC_RemoteDiagCode);
		IPS_OBCModest = std::move(_x.IPS_OBCModest);
	}
	BDCIPSDATA2& operator=(const BDCIPSDATA2 &_x){
		IPS_DCDCKL30VoltForHyb = _x.IPS_DCDCKL30VoltForHyb;
		IPS_OBCDschDisable = _x.IPS_OBCDschDisable;
		IPS_ACHvilStForHyb = _x.IPS_ACHvilStForHyb;
		IPS_HVDCHVilStForHyb = _x.IPS_HVDCHVilStForHyb;
		OPC_RemoteDiagCode = _x.OPC_RemoteDiagCode;
		IPS_OBCModest = _x.IPS_OBCModest;
		return *this;
	}
	BDCIPSDATA2& operator=(BDCIPSDATA2 &&_x){
		IPS_DCDCKL30VoltForHyb = std::move(_x.IPS_DCDCKL30VoltForHyb);
		IPS_OBCDschDisable = std::move(_x.IPS_OBCDschDisable);
		IPS_ACHvilStForHyb = std::move(_x.IPS_ACHvilStForHyb);
		IPS_HVDCHVilStForHyb = std::move(_x.IPS_HVDCHVilStForHyb);
		OPC_RemoteDiagCode = std::move(_x.OPC_RemoteDiagCode);
		IPS_OBCModest = std::move(_x.IPS_OBCModest);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCKL30VoltForHyb);
		fun(IPS_OBCDschDisable);
		fun(IPS_ACHvilStForHyb);
		fun(IPS_HVDCHVilStForHyb);
		fun(OPC_RemoteDiagCode);
		fun(IPS_OBCModest);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCKL30VoltForHyb);
		fun(IPS_OBCDschDisable);
		fun(IPS_ACHvilStForHyb);
		fun(IPS_HVDCHVilStForHyb);
		fun(OPC_RemoteDiagCode);
		fun(IPS_OBCModest);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCKL30VoltForHyb);
		fun << (IPS_OBCDschDisable);
		fun << (IPS_ACHvilStForHyb);
		fun << (IPS_HVDCHVilStForHyb);
		fun << (OPC_RemoteDiagCode);
		fun << (IPS_OBCModest);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCKL30VoltForHyb);
		fun >> (IPS_OBCDschDisable);
		fun >> (IPS_ACHvilStForHyb);
		fun >> (IPS_HVDCHVilStForHyb);
		fun >> (OPC_RemoteDiagCode);
		fun >> (IPS_OBCModest);
	}
};

#endif //____BDCIPSDATA2_H__
