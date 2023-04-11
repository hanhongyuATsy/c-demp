#ifndef ____BATTWAKEDATA2_H__
#define ____BATTWAKEDATA2_H__


#include "cstdint"






struct BattWakeDATA2 {
public:
	std::uint8_t EMS_NMNodeAddress;
	std::uint8_t EMS_NMCBV;
	std::uint8_t EMS_NMWakeupOrigin;
	std::uint8_t EMS_PNCInformation0;
	std::uint32_t EMS_PNCInformation1;
	std::uint64_t TCU_NMNodeAddress;
	std::uint64_t TCU_NMCBV;
	std::uint64_t TCU_NMWakeupOrigin;
	std::uint64_t TCU_PNCInformation0;
	std::uint64_t TCU_PNCInformation1;
	std::uint8_t BMS_NMNodeAddress;
	std::uint8_t BMS_NMCBV;
	std::uint8_t BMS_NMWakeupOrigin;
	std::uint8_t BMS_PNCInformation0;
	std::uint32_t BMS_PNCInformation1;
	std::uint8_t DCU_NMNodeAddress;
	std::uint8_t DCU_NMCBV;
	std::uint8_t DCU_NMWakeupOrigin;
	std::uint8_t DCU_PNCInformation0;
	std::uint32_t DCU_PNCInformation1;
	std::uint8_t GCU_NMNodeAddress;
	std::uint8_t GCU_NMCBV;
	std::uint8_t GCU_NMWakeupOrigin;
	std::uint8_t GCU_PNCInformation0;
	std::uint32_t GCU_PNCInformation1;
	std::uint8_t IPS_NMNodeAddress;
	std::uint8_t IPS_NMCBV;
	std::uint8_t IPS_NMWakeupOrigin;
	std::uint8_t IPS_PNCInformation0;
	std::uint32_t IPS_PNCInformation1;
	std::uint8_t OPC_NMNodeAddress;
	std::uint8_t OPC_NMCBV;
	std::uint8_t OPC_NMWakeupOrigin;
	std::uint8_t OPC_PNCInformation0;
	std::uint32_t OPC_PNCInformation1;
	std::uint8_t IBCS_NMNodeAddress;
	std::uint8_t IBCS_NMCBV;
	std::uint8_t IBCS_NMWakeupOrigin;
	std::uint8_t IBCS_PNCInformation0;
	std::uint32_t IBCS_PNCInformation1;
/*
	BattWakeDATA2() {}
	~BattWakeDATA2() {}
	BattWakeDATA2(const std::uint8_t _EMS_NMNodeAddress,const std::uint8_t _EMS_NMCBV,const std::uint8_t _EMS_NMWakeupOrigin,const std::uint8_t _EMS_PNCInformation0,const std::uint32_t _EMS_PNCInformation1,const std::uint64_t _TCU_NMNodeAddress,const std::uint64_t _TCU_NMCBV,const std::uint64_t _TCU_NMWakeupOrigin,const std::uint64_t _TCU_PNCInformation0,const std::uint64_t _TCU_PNCInformation1,const std::uint8_t _BMS_NMNodeAddress,const std::uint8_t _BMS_NMCBV,const std::uint8_t _BMS_NMWakeupOrigin,const std::uint8_t _BMS_PNCInformation0,const std::uint32_t _BMS_PNCInformation1,const std::uint8_t _DCU_NMNodeAddress,const std::uint8_t _DCU_NMCBV,const std::uint8_t _DCU_NMWakeupOrigin,const std::uint8_t _DCU_PNCInformation0,const std::uint32_t _DCU_PNCInformation1,const std::uint8_t _GCU_NMNodeAddress,const std::uint8_t _GCU_NMCBV,const std::uint8_t _GCU_NMWakeupOrigin,const std::uint8_t _GCU_PNCInformation0,const std::uint32_t _GCU_PNCInformation1,const std::uint8_t _IPS_NMNodeAddress,const std::uint8_t _IPS_NMCBV,const std::uint8_t _IPS_NMWakeupOrigin,const std::uint8_t _IPS_PNCInformation0,const std::uint32_t _IPS_PNCInformation1,const std::uint8_t _OPC_NMNodeAddress,const std::uint8_t _OPC_NMCBV,const std::uint8_t _OPC_NMWakeupOrigin,const std::uint8_t _OPC_PNCInformation0,const std::uint32_t _OPC_PNCInformation1,const std::uint8_t _IBCS_NMNodeAddress,const std::uint8_t _IBCS_NMCBV,const std::uint8_t _IBCS_NMWakeupOrigin,const std::uint8_t _IBCS_PNCInformation0,const std::uint32_t _IBCS_PNCInformation1):EMS_NMNodeAddress(_EMS_NMNodeAddress),EMS_NMCBV(_EMS_NMCBV),EMS_NMWakeupOrigin(_EMS_NMWakeupOrigin),EMS_PNCInformation0(_EMS_PNCInformation0),EMS_PNCInformation1(_EMS_PNCInformation1),TCU_NMNodeAddress(_TCU_NMNodeAddress),TCU_NMCBV(_TCU_NMCBV),TCU_NMWakeupOrigin(_TCU_NMWakeupOrigin),TCU_PNCInformation0(_TCU_PNCInformation0),TCU_PNCInformation1(_TCU_PNCInformation1),BMS_NMNodeAddress(_BMS_NMNodeAddress),BMS_NMCBV(_BMS_NMCBV),BMS_NMWakeupOrigin(_BMS_NMWakeupOrigin),BMS_PNCInformation0(_BMS_PNCInformation0),BMS_PNCInformation1(_BMS_PNCInformation1),DCU_NMNodeAddress(_DCU_NMNodeAddress),DCU_NMCBV(_DCU_NMCBV),DCU_NMWakeupOrigin(_DCU_NMWakeupOrigin),DCU_PNCInformation0(_DCU_PNCInformation0),DCU_PNCInformation1(_DCU_PNCInformation1),GCU_NMNodeAddress(_GCU_NMNodeAddress),GCU_NMCBV(_GCU_NMCBV),GCU_NMWakeupOrigin(_GCU_NMWakeupOrigin),GCU_PNCInformation0(_GCU_PNCInformation0),GCU_PNCInformation1(_GCU_PNCInformation1),IPS_NMNodeAddress(_IPS_NMNodeAddress),IPS_NMCBV(_IPS_NMCBV),IPS_NMWakeupOrigin(_IPS_NMWakeupOrigin),IPS_PNCInformation0(_IPS_PNCInformation0),IPS_PNCInformation1(_IPS_PNCInformation1),OPC_NMNodeAddress(_OPC_NMNodeAddress),OPC_NMCBV(_OPC_NMCBV),OPC_NMWakeupOrigin(_OPC_NMWakeupOrigin),OPC_PNCInformation0(_OPC_PNCInformation0),OPC_PNCInformation1(_OPC_PNCInformation1),IBCS_NMNodeAddress(_IBCS_NMNodeAddress),IBCS_NMCBV(_IBCS_NMCBV),IBCS_NMWakeupOrigin(_IBCS_NMWakeupOrigin),IBCS_PNCInformation0(_IBCS_PNCInformation0),IBCS_PNCInformation1(_IBCS_PNCInformation1) {}
	BattWakeDATA2(const BattWakeDATA2 &_x){
		EMS_NMNodeAddress = _x.EMS_NMNodeAddress;
		EMS_NMCBV = _x.EMS_NMCBV;
		EMS_NMWakeupOrigin = _x.EMS_NMWakeupOrigin;
		EMS_PNCInformation0 = _x.EMS_PNCInformation0;
		EMS_PNCInformation1 = _x.EMS_PNCInformation1;
		TCU_NMNodeAddress = _x.TCU_NMNodeAddress;
		TCU_NMCBV = _x.TCU_NMCBV;
		TCU_NMWakeupOrigin = _x.TCU_NMWakeupOrigin;
		TCU_PNCInformation0 = _x.TCU_PNCInformation0;
		TCU_PNCInformation1 = _x.TCU_PNCInformation1;
		BMS_NMNodeAddress = _x.BMS_NMNodeAddress;
		BMS_NMCBV = _x.BMS_NMCBV;
		BMS_NMWakeupOrigin = _x.BMS_NMWakeupOrigin;
		BMS_PNCInformation0 = _x.BMS_PNCInformation0;
		BMS_PNCInformation1 = _x.BMS_PNCInformation1;
		DCU_NMNodeAddress = _x.DCU_NMNodeAddress;
		DCU_NMCBV = _x.DCU_NMCBV;
		DCU_NMWakeupOrigin = _x.DCU_NMWakeupOrigin;
		DCU_PNCInformation0 = _x.DCU_PNCInformation0;
		DCU_PNCInformation1 = _x.DCU_PNCInformation1;
		GCU_NMNodeAddress = _x.GCU_NMNodeAddress;
		GCU_NMCBV = _x.GCU_NMCBV;
		GCU_NMWakeupOrigin = _x.GCU_NMWakeupOrigin;
		GCU_PNCInformation0 = _x.GCU_PNCInformation0;
		GCU_PNCInformation1 = _x.GCU_PNCInformation1;
		IPS_NMNodeAddress = _x.IPS_NMNodeAddress;
		IPS_NMCBV = _x.IPS_NMCBV;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		IPS_PNCInformation1 = _x.IPS_PNCInformation1;
		OPC_NMNodeAddress = _x.OPC_NMNodeAddress;
		OPC_NMCBV = _x.OPC_NMCBV;
		OPC_NMWakeupOrigin = _x.OPC_NMWakeupOrigin;
		OPC_PNCInformation0 = _x.OPC_PNCInformation0;
		OPC_PNCInformation1 = _x.OPC_PNCInformation1;
		IBCS_NMNodeAddress = _x.IBCS_NMNodeAddress;
		IBCS_NMCBV = _x.IBCS_NMCBV;
		IBCS_NMWakeupOrigin = _x.IBCS_NMWakeupOrigin;
		IBCS_PNCInformation0 = _x.IBCS_PNCInformation0;
		IBCS_PNCInformation1 = _x.IBCS_PNCInformation1;
	}
	BattWakeDATA2(BattWakeDATA2 &&_x){
		EMS_NMNodeAddress = std::move(_x.EMS_NMNodeAddress);
		EMS_NMCBV = std::move(_x.EMS_NMCBV);
		EMS_NMWakeupOrigin = std::move(_x.EMS_NMWakeupOrigin);
		EMS_PNCInformation0 = std::move(_x.EMS_PNCInformation0);
		EMS_PNCInformation1 = std::move(_x.EMS_PNCInformation1);
		TCU_NMNodeAddress = std::move(_x.TCU_NMNodeAddress);
		TCU_NMCBV = std::move(_x.TCU_NMCBV);
		TCU_NMWakeupOrigin = std::move(_x.TCU_NMWakeupOrigin);
		TCU_PNCInformation0 = std::move(_x.TCU_PNCInformation0);
		TCU_PNCInformation1 = std::move(_x.TCU_PNCInformation1);
		BMS_NMNodeAddress = std::move(_x.BMS_NMNodeAddress);
		BMS_NMCBV = std::move(_x.BMS_NMCBV);
		BMS_NMWakeupOrigin = std::move(_x.BMS_NMWakeupOrigin);
		BMS_PNCInformation0 = std::move(_x.BMS_PNCInformation0);
		BMS_PNCInformation1 = std::move(_x.BMS_PNCInformation1);
		DCU_NMNodeAddress = std::move(_x.DCU_NMNodeAddress);
		DCU_NMCBV = std::move(_x.DCU_NMCBV);
		DCU_NMWakeupOrigin = std::move(_x.DCU_NMWakeupOrigin);
		DCU_PNCInformation0 = std::move(_x.DCU_PNCInformation0);
		DCU_PNCInformation1 = std::move(_x.DCU_PNCInformation1);
		GCU_NMNodeAddress = std::move(_x.GCU_NMNodeAddress);
		GCU_NMCBV = std::move(_x.GCU_NMCBV);
		GCU_NMWakeupOrigin = std::move(_x.GCU_NMWakeupOrigin);
		GCU_PNCInformation0 = std::move(_x.GCU_PNCInformation0);
		GCU_PNCInformation1 = std::move(_x.GCU_PNCInformation1);
		IPS_NMNodeAddress = std::move(_x.IPS_NMNodeAddress);
		IPS_NMCBV = std::move(_x.IPS_NMCBV);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		IPS_PNCInformation1 = std::move(_x.IPS_PNCInformation1);
		OPC_NMNodeAddress = std::move(_x.OPC_NMNodeAddress);
		OPC_NMCBV = std::move(_x.OPC_NMCBV);
		OPC_NMWakeupOrigin = std::move(_x.OPC_NMWakeupOrigin);
		OPC_PNCInformation0 = std::move(_x.OPC_PNCInformation0);
		OPC_PNCInformation1 = std::move(_x.OPC_PNCInformation1);
		IBCS_NMNodeAddress = std::move(_x.IBCS_NMNodeAddress);
		IBCS_NMCBV = std::move(_x.IBCS_NMCBV);
		IBCS_NMWakeupOrigin = std::move(_x.IBCS_NMWakeupOrigin);
		IBCS_PNCInformation0 = std::move(_x.IBCS_PNCInformation0);
		IBCS_PNCInformation1 = std::move(_x.IBCS_PNCInformation1);
	}
	BattWakeDATA2& operator=(const BattWakeDATA2 &_x){
		EMS_NMNodeAddress = _x.EMS_NMNodeAddress;
		EMS_NMCBV = _x.EMS_NMCBV;
		EMS_NMWakeupOrigin = _x.EMS_NMWakeupOrigin;
		EMS_PNCInformation0 = _x.EMS_PNCInformation0;
		EMS_PNCInformation1 = _x.EMS_PNCInformation1;
		TCU_NMNodeAddress = _x.TCU_NMNodeAddress;
		TCU_NMCBV = _x.TCU_NMCBV;
		TCU_NMWakeupOrigin = _x.TCU_NMWakeupOrigin;
		TCU_PNCInformation0 = _x.TCU_PNCInformation0;
		TCU_PNCInformation1 = _x.TCU_PNCInformation1;
		BMS_NMNodeAddress = _x.BMS_NMNodeAddress;
		BMS_NMCBV = _x.BMS_NMCBV;
		BMS_NMWakeupOrigin = _x.BMS_NMWakeupOrigin;
		BMS_PNCInformation0 = _x.BMS_PNCInformation0;
		BMS_PNCInformation1 = _x.BMS_PNCInformation1;
		DCU_NMNodeAddress = _x.DCU_NMNodeAddress;
		DCU_NMCBV = _x.DCU_NMCBV;
		DCU_NMWakeupOrigin = _x.DCU_NMWakeupOrigin;
		DCU_PNCInformation0 = _x.DCU_PNCInformation0;
		DCU_PNCInformation1 = _x.DCU_PNCInformation1;
		GCU_NMNodeAddress = _x.GCU_NMNodeAddress;
		GCU_NMCBV = _x.GCU_NMCBV;
		GCU_NMWakeupOrigin = _x.GCU_NMWakeupOrigin;
		GCU_PNCInformation0 = _x.GCU_PNCInformation0;
		GCU_PNCInformation1 = _x.GCU_PNCInformation1;
		IPS_NMNodeAddress = _x.IPS_NMNodeAddress;
		IPS_NMCBV = _x.IPS_NMCBV;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		IPS_PNCInformation1 = _x.IPS_PNCInformation1;
		OPC_NMNodeAddress = _x.OPC_NMNodeAddress;
		OPC_NMCBV = _x.OPC_NMCBV;
		OPC_NMWakeupOrigin = _x.OPC_NMWakeupOrigin;
		OPC_PNCInformation0 = _x.OPC_PNCInformation0;
		OPC_PNCInformation1 = _x.OPC_PNCInformation1;
		IBCS_NMNodeAddress = _x.IBCS_NMNodeAddress;
		IBCS_NMCBV = _x.IBCS_NMCBV;
		IBCS_NMWakeupOrigin = _x.IBCS_NMWakeupOrigin;
		IBCS_PNCInformation0 = _x.IBCS_PNCInformation0;
		IBCS_PNCInformation1 = _x.IBCS_PNCInformation1;
		return *this;
	}
	BattWakeDATA2& operator=(BattWakeDATA2 &&_x){
		EMS_NMNodeAddress = std::move(_x.EMS_NMNodeAddress);
		EMS_NMCBV = std::move(_x.EMS_NMCBV);
		EMS_NMWakeupOrigin = std::move(_x.EMS_NMWakeupOrigin);
		EMS_PNCInformation0 = std::move(_x.EMS_PNCInformation0);
		EMS_PNCInformation1 = std::move(_x.EMS_PNCInformation1);
		TCU_NMNodeAddress = std::move(_x.TCU_NMNodeAddress);
		TCU_NMCBV = std::move(_x.TCU_NMCBV);
		TCU_NMWakeupOrigin = std::move(_x.TCU_NMWakeupOrigin);
		TCU_PNCInformation0 = std::move(_x.TCU_PNCInformation0);
		TCU_PNCInformation1 = std::move(_x.TCU_PNCInformation1);
		BMS_NMNodeAddress = std::move(_x.BMS_NMNodeAddress);
		BMS_NMCBV = std::move(_x.BMS_NMCBV);
		BMS_NMWakeupOrigin = std::move(_x.BMS_NMWakeupOrigin);
		BMS_PNCInformation0 = std::move(_x.BMS_PNCInformation0);
		BMS_PNCInformation1 = std::move(_x.BMS_PNCInformation1);
		DCU_NMNodeAddress = std::move(_x.DCU_NMNodeAddress);
		DCU_NMCBV = std::move(_x.DCU_NMCBV);
		DCU_NMWakeupOrigin = std::move(_x.DCU_NMWakeupOrigin);
		DCU_PNCInformation0 = std::move(_x.DCU_PNCInformation0);
		DCU_PNCInformation1 = std::move(_x.DCU_PNCInformation1);
		GCU_NMNodeAddress = std::move(_x.GCU_NMNodeAddress);
		GCU_NMCBV = std::move(_x.GCU_NMCBV);
		GCU_NMWakeupOrigin = std::move(_x.GCU_NMWakeupOrigin);
		GCU_PNCInformation0 = std::move(_x.GCU_PNCInformation0);
		GCU_PNCInformation1 = std::move(_x.GCU_PNCInformation1);
		IPS_NMNodeAddress = std::move(_x.IPS_NMNodeAddress);
		IPS_NMCBV = std::move(_x.IPS_NMCBV);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		IPS_PNCInformation1 = std::move(_x.IPS_PNCInformation1);
		OPC_NMNodeAddress = std::move(_x.OPC_NMNodeAddress);
		OPC_NMCBV = std::move(_x.OPC_NMCBV);
		OPC_NMWakeupOrigin = std::move(_x.OPC_NMWakeupOrigin);
		OPC_PNCInformation0 = std::move(_x.OPC_PNCInformation0);
		OPC_PNCInformation1 = std::move(_x.OPC_PNCInformation1);
		IBCS_NMNodeAddress = std::move(_x.IBCS_NMNodeAddress);
		IBCS_NMCBV = std::move(_x.IBCS_NMCBV);
		IBCS_NMWakeupOrigin = std::move(_x.IBCS_NMWakeupOrigin);
		IBCS_PNCInformation0 = std::move(_x.IBCS_PNCInformation0);
		IBCS_PNCInformation1 = std::move(_x.IBCS_PNCInformation1);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EMS_NMNodeAddress);
		fun(EMS_NMCBV);
		fun(EMS_NMWakeupOrigin);
		fun(EMS_PNCInformation0);
		fun(EMS_PNCInformation1);
		fun(TCU_NMNodeAddress);
		fun(TCU_NMCBV);
		fun(TCU_NMWakeupOrigin);
		fun(TCU_PNCInformation0);
		fun(TCU_PNCInformation1);
		fun(BMS_NMNodeAddress);
		fun(BMS_NMCBV);
		fun(BMS_NMWakeupOrigin);
		fun(BMS_PNCInformation0);
		fun(BMS_PNCInformation1);
		fun(DCU_NMNodeAddress);
		fun(DCU_NMCBV);
		fun(DCU_NMWakeupOrigin);
		fun(DCU_PNCInformation0);
		fun(DCU_PNCInformation1);
		fun(GCU_NMNodeAddress);
		fun(GCU_NMCBV);
		fun(GCU_NMWakeupOrigin);
		fun(GCU_PNCInformation0);
		fun(GCU_PNCInformation1);
		fun(IPS_NMNodeAddress);
		fun(IPS_NMCBV);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(IPS_PNCInformation1);
		fun(OPC_NMNodeAddress);
		fun(OPC_NMCBV);
		fun(OPC_NMWakeupOrigin);
		fun(OPC_PNCInformation0);
		fun(OPC_PNCInformation1);
		fun(IBCS_NMNodeAddress);
		fun(IBCS_NMCBV);
		fun(IBCS_NMWakeupOrigin);
		fun(IBCS_PNCInformation0);
		fun(IBCS_PNCInformation1);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EMS_NMNodeAddress);
		fun(EMS_NMCBV);
		fun(EMS_NMWakeupOrigin);
		fun(EMS_PNCInformation0);
		fun(EMS_PNCInformation1);
		fun(TCU_NMNodeAddress);
		fun(TCU_NMCBV);
		fun(TCU_NMWakeupOrigin);
		fun(TCU_PNCInformation0);
		fun(TCU_PNCInformation1);
		fun(BMS_NMNodeAddress);
		fun(BMS_NMCBV);
		fun(BMS_NMWakeupOrigin);
		fun(BMS_PNCInformation0);
		fun(BMS_PNCInformation1);
		fun(DCU_NMNodeAddress);
		fun(DCU_NMCBV);
		fun(DCU_NMWakeupOrigin);
		fun(DCU_PNCInformation0);
		fun(DCU_PNCInformation1);
		fun(GCU_NMNodeAddress);
		fun(GCU_NMCBV);
		fun(GCU_NMWakeupOrigin);
		fun(GCU_PNCInformation0);
		fun(GCU_PNCInformation1);
		fun(IPS_NMNodeAddress);
		fun(IPS_NMCBV);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(IPS_PNCInformation1);
		fun(OPC_NMNodeAddress);
		fun(OPC_NMCBV);
		fun(OPC_NMWakeupOrigin);
		fun(OPC_PNCInformation0);
		fun(OPC_PNCInformation1);
		fun(IBCS_NMNodeAddress);
		fun(IBCS_NMCBV);
		fun(IBCS_NMWakeupOrigin);
		fun(IBCS_PNCInformation0);
		fun(IBCS_PNCInformation1);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EMS_NMNodeAddress);
		fun << (EMS_NMCBV);
		fun << (EMS_NMWakeupOrigin);
		fun << (EMS_PNCInformation0);
		fun << (EMS_PNCInformation1);
		fun << (TCU_NMNodeAddress);
		fun << (TCU_NMCBV);
		fun << (TCU_NMWakeupOrigin);
		fun << (TCU_PNCInformation0);
		fun << (TCU_PNCInformation1);
		fun << (BMS_NMNodeAddress);
		fun << (BMS_NMCBV);
		fun << (BMS_NMWakeupOrigin);
		fun << (BMS_PNCInformation0);
		fun << (BMS_PNCInformation1);
		fun << (DCU_NMNodeAddress);
		fun << (DCU_NMCBV);
		fun << (DCU_NMWakeupOrigin);
		fun << (DCU_PNCInformation0);
		fun << (DCU_PNCInformation1);
		fun << (GCU_NMNodeAddress);
		fun << (GCU_NMCBV);
		fun << (GCU_NMWakeupOrigin);
		fun << (GCU_PNCInformation0);
		fun << (GCU_PNCInformation1);
		fun << (IPS_NMNodeAddress);
		fun << (IPS_NMCBV);
		fun << (IPS_NMWakeupOrigin);
		fun << (IPS_PNCInformation0);
		fun << (IPS_PNCInformation1);
		fun << (OPC_NMNodeAddress);
		fun << (OPC_NMCBV);
		fun << (OPC_NMWakeupOrigin);
		fun << (OPC_PNCInformation0);
		fun << (OPC_PNCInformation1);
		fun << (IBCS_NMNodeAddress);
		fun << (IBCS_NMCBV);
		fun << (IBCS_NMWakeupOrigin);
		fun << (IBCS_PNCInformation0);
		fun << (IBCS_PNCInformation1);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EMS_NMNodeAddress);
		fun >> (EMS_NMCBV);
		fun >> (EMS_NMWakeupOrigin);
		fun >> (EMS_PNCInformation0);
		fun >> (EMS_PNCInformation1);
		fun >> (TCU_NMNodeAddress);
		fun >> (TCU_NMCBV);
		fun >> (TCU_NMWakeupOrigin);
		fun >> (TCU_PNCInformation0);
		fun >> (TCU_PNCInformation1);
		fun >> (BMS_NMNodeAddress);
		fun >> (BMS_NMCBV);
		fun >> (BMS_NMWakeupOrigin);
		fun >> (BMS_PNCInformation0);
		fun >> (BMS_PNCInformation1);
		fun >> (DCU_NMNodeAddress);
		fun >> (DCU_NMCBV);
		fun >> (DCU_NMWakeupOrigin);
		fun >> (DCU_PNCInformation0);
		fun >> (DCU_PNCInformation1);
		fun >> (GCU_NMNodeAddress);
		fun >> (GCU_NMCBV);
		fun >> (GCU_NMWakeupOrigin);
		fun >> (GCU_PNCInformation0);
		fun >> (GCU_PNCInformation1);
		fun >> (IPS_NMNodeAddress);
		fun >> (IPS_NMCBV);
		fun >> (IPS_NMWakeupOrigin);
		fun >> (IPS_PNCInformation0);
		fun >> (IPS_PNCInformation1);
		fun >> (OPC_NMNodeAddress);
		fun >> (OPC_NMCBV);
		fun >> (OPC_NMWakeupOrigin);
		fun >> (OPC_PNCInformation0);
		fun >> (OPC_PNCInformation1);
		fun >> (IBCS_NMNodeAddress);
		fun >> (IBCS_NMCBV);
		fun >> (IBCS_NMWakeupOrigin);
		fun >> (IBCS_PNCInformation0);
		fun >> (IBCS_PNCInformation1);
	}
};

#endif //____BATTWAKEDATA2_H__
