#ifndef ____BDCBATTWAKE_H__
#define ____BDCBATTWAKE_H__


#include "cstdint"






struct BDCBattWake {
public:
	std::uint8_t CCU_NMNodeAddress;
	std::uint8_t CCU_NMCBV;
	std::uint8_t CCU_NMWakeupOrigin;
	std::uint8_t CCU_PNCInformation0;
	std::uint32_t CCU_PNCInformation1;
	std::uint8_t ZCUF_NMNodeAddress;
	std::uint8_t ZCUF_NMCBV;
	std::uint8_t ZCUF_NMWakeupOrigin;
	std::uint8_t ZCUF_PNCInformation0;
	std::uint32_t ZCUF_PNCInformation1;
	std::uint8_t ZCUL_NMNodeAddress;
	std::uint8_t ZCUL_NMCBV;
	std::uint8_t ZCUL_NMWakeupOrigin;
	std::uint8_t ZCUL_PNCInformation0;
	std::uint32_t ZCUL_PNCInformation1;
	std::uint8_t ZCUR_NMNodeAddress;
	std::uint8_t ZCUR_NMCBV;
	std::uint8_t ZCUR_NMWakeupOrigin;
	std::uint8_t ZCUR_PNCInformation0;
	std::uint32_t ZCUR_PNCInformation1;
	std::uint8_t ZCUT_NMNodeAddress;
	std::uint8_t ZCUT_NMCBV;
	std::uint8_t ZCUT_NMWakeupOrigin;
	std::uint8_t ZCUT_PNCInformation0;
	std::uint32_t ZCUT_PNCInformation1;
	std::uint8_t IDC_NMNodeAddress;
	std::uint8_t IDC_NMCBV;
	std::uint8_t IDC_NMWakeupOrigin;
	std::uint8_t IDC_PNCInformation0;
	std::uint32_t IDC_PNCInformation1;
	std::uint8_t MFS_NMCBV;
	std::uint8_t MFS_NMWakeupOrigin;
	std::uint8_t MFS_PNCInformation0;
	std::uint32_t MFS_PNCInformation1;
	std::uint8_t DCU_NMNodeAddress;
	std::uint8_t DCU_NMCBV;
	std::uint8_t DCU_NMWakeupOrigin;
	std::uint8_t DCU_PNCInformation0;
	std::uint8_t IPS_NMNodeAddress;
	std::uint8_t IPS_NMCBV;
	std::uint8_t IPS_NMWakeupOrigin;
	std::uint8_t IPS_PNCInformation0;
	std::uint32_t IPS_PNCInformation1;
	std::uint8_t ITS_NMNodeAddress;
	std::uint8_t ITS_NMCBV;
	std::uint8_t ITS_NMWakeupOrigin;
	std::uint8_t ITS_PNCInformation0;
	std::uint32_t ITS_PNCInformation1;
	std::uint8_t BMC_NMNodeAddress;
	std::uint8_t BMC_NMCBV;
	std::uint8_t BMC_NMWakeupOrigin;
	std::uint8_t BMC_PNCInformation0;
	std::uint32_t BMC_PNCInformation1;
	std::uint8_t DCDC_NMNodeAddress;
	std::uint8_t DCDC_NMCBV;
	std::uint8_t DCDC_NMWakeupOrigin;
	std::uint8_t DCDC_PNCInformation0;
	std::uint32_t DCDC_PNCInformation1;
	std::uint8_t RBM_NMNodeAddress;
	std::uint8_t RBM_NMCBV;
	std::uint8_t RBM_NMWakeupOrigin;
	std::uint8_t RBM_PNCInformation0;
	std::uint32_t RBM_PNCInformation1;
	std::uint8_t BCS_NMNodeAddress;
	std::uint8_t BCS_NMCBV;
	std::uint8_t BCS_NMWakeupOrigin;
	std::uint8_t BCS_PNCInformation0;
	std::uint32_t BCS_PNCInformation1;
	std::uint8_t TBOX_NMNodeAddress;
	std::uint8_t TBOX_NMCBV;
	std::uint8_t TBOX_NMWakeupOrigin;
	std::uint8_t TBOX_PNCInformation0;
	std::uint32_t TBOX_PNCInformation1;
	std::uint8_t ADC_NMNodeAddress;
	std::uint8_t ADC_NMCBV;
	std::uint8_t ADC_NMWakeupOrigin;
	std::uint8_t ADC_PNCInformation0;
	std::uint32_t ADC_PNCInformation1;
/*
	BDCBattWake() {}
	~BDCBattWake() {}
	BDCBattWake(const std::uint8_t _CCU_NMNodeAddress,const std::uint8_t _CCU_NMCBV,const std::uint8_t _CCU_NMWakeupOrigin,const std::uint8_t _CCU_PNCInformation0,const std::uint32_t _CCU_PNCInformation1,const std::uint8_t _ZCUF_NMNodeAddress,const std::uint8_t _ZCUF_NMCBV,const std::uint8_t _ZCUF_NMWakeupOrigin,const std::uint8_t _ZCUF_PNCInformation0,const std::uint32_t _ZCUF_PNCInformation1,const std::uint8_t _ZCUL_NMNodeAddress,const std::uint8_t _ZCUL_NMCBV,const std::uint8_t _ZCUL_NMWakeupOrigin,const std::uint8_t _ZCUL_PNCInformation0,const std::uint32_t _ZCUL_PNCInformation1,const std::uint8_t _ZCUR_NMNodeAddress,const std::uint8_t _ZCUR_NMCBV,const std::uint8_t _ZCUR_NMWakeupOrigin,const std::uint8_t _ZCUR_PNCInformation0,const std::uint32_t _ZCUR_PNCInformation1,const std::uint8_t _ZCUT_NMNodeAddress,const std::uint8_t _ZCUT_NMCBV,const std::uint8_t _ZCUT_NMWakeupOrigin,const std::uint8_t _ZCUT_PNCInformation0,const std::uint32_t _ZCUT_PNCInformation1,const std::uint8_t _IDC_NMNodeAddress,const std::uint8_t _IDC_NMCBV,const std::uint8_t _IDC_NMWakeupOrigin,const std::uint8_t _IDC_PNCInformation0,const std::uint32_t _IDC_PNCInformation1,const std::uint8_t _MFS_NMCBV,const std::uint8_t _MFS_NMWakeupOrigin,const std::uint8_t _MFS_PNCInformation0,const std::uint32_t _MFS_PNCInformation1,const std::uint8_t _DCU_NMNodeAddress,const std::uint8_t _DCU_NMCBV,const std::uint8_t _DCU_NMWakeupOrigin,const std::uint8_t _DCU_PNCInformation0,const std::uint8_t _IPS_NMNodeAddress,const std::uint8_t _IPS_NMCBV,const std::uint8_t _IPS_NMWakeupOrigin,const std::uint8_t _IPS_PNCInformation0,const std::uint32_t _IPS_PNCInformation1,const std::uint8_t _ITS_NMNodeAddress,const std::uint8_t _ITS_NMCBV,const std::uint8_t _ITS_NMWakeupOrigin,const std::uint8_t _ITS_PNCInformation0,const std::uint32_t _ITS_PNCInformation1,const std::uint8_t _BMC_NMNodeAddress,const std::uint8_t _BMC_NMCBV,const std::uint8_t _BMC_NMWakeupOrigin,const std::uint8_t _BMC_PNCInformation0,const std::uint32_t _BMC_PNCInformation1,const std::uint8_t _DCDC_NMNodeAddress,const std::uint8_t _DCDC_NMCBV,const std::uint8_t _DCDC_NMWakeupOrigin,const std::uint8_t _DCDC_PNCInformation0,const std::uint32_t _DCDC_PNCInformation1,const std::uint8_t _RBM_NMNodeAddress,const std::uint8_t _RBM_NMCBV,const std::uint8_t _RBM_NMWakeupOrigin,const std::uint8_t _RBM_PNCInformation0,const std::uint32_t _RBM_PNCInformation1,const std::uint8_t _BCS_NMNodeAddress,const std::uint8_t _BCS_NMCBV,const std::uint8_t _BCS_NMWakeupOrigin,const std::uint8_t _BCS_PNCInformation0,const std::uint32_t _BCS_PNCInformation1,const std::uint8_t _TBOX_NMNodeAddress,const std::uint8_t _TBOX_NMCBV,const std::uint8_t _TBOX_NMWakeupOrigin,const std::uint8_t _TBOX_PNCInformation0,const std::uint32_t _TBOX_PNCInformation1,const std::uint8_t _ADC_NMNodeAddress,const std::uint8_t _ADC_NMCBV,const std::uint8_t _ADC_NMWakeupOrigin,const std::uint8_t _ADC_PNCInformation0,const std::uint32_t _ADC_PNCInformation1):CCU_NMNodeAddress(_CCU_NMNodeAddress),CCU_NMCBV(_CCU_NMCBV),CCU_NMWakeupOrigin(_CCU_NMWakeupOrigin),CCU_PNCInformation0(_CCU_PNCInformation0),CCU_PNCInformation1(_CCU_PNCInformation1),ZCUF_NMNodeAddress(_ZCUF_NMNodeAddress),ZCUF_NMCBV(_ZCUF_NMCBV),ZCUF_NMWakeupOrigin(_ZCUF_NMWakeupOrigin),ZCUF_PNCInformation0(_ZCUF_PNCInformation0),ZCUF_PNCInformation1(_ZCUF_PNCInformation1),ZCUL_NMNodeAddress(_ZCUL_NMNodeAddress),ZCUL_NMCBV(_ZCUL_NMCBV),ZCUL_NMWakeupOrigin(_ZCUL_NMWakeupOrigin),ZCUL_PNCInformation0(_ZCUL_PNCInformation0),ZCUL_PNCInformation1(_ZCUL_PNCInformation1),ZCUR_NMNodeAddress(_ZCUR_NMNodeAddress),ZCUR_NMCBV(_ZCUR_NMCBV),ZCUR_NMWakeupOrigin(_ZCUR_NMWakeupOrigin),ZCUR_PNCInformation0(_ZCUR_PNCInformation0),ZCUR_PNCInformation1(_ZCUR_PNCInformation1),ZCUT_NMNodeAddress(_ZCUT_NMNodeAddress),ZCUT_NMCBV(_ZCUT_NMCBV),ZCUT_NMWakeupOrigin(_ZCUT_NMWakeupOrigin),ZCUT_PNCInformation0(_ZCUT_PNCInformation0),ZCUT_PNCInformation1(_ZCUT_PNCInformation1),IDC_NMNodeAddress(_IDC_NMNodeAddress),IDC_NMCBV(_IDC_NMCBV),IDC_NMWakeupOrigin(_IDC_NMWakeupOrigin),IDC_PNCInformation0(_IDC_PNCInformation0),IDC_PNCInformation1(_IDC_PNCInformation1),MFS_NMCBV(_MFS_NMCBV),MFS_NMWakeupOrigin(_MFS_NMWakeupOrigin),MFS_PNCInformation0(_MFS_PNCInformation0),MFS_PNCInformation1(_MFS_PNCInformation1),DCU_NMNodeAddress(_DCU_NMNodeAddress),DCU_NMCBV(_DCU_NMCBV),DCU_NMWakeupOrigin(_DCU_NMWakeupOrigin),DCU_PNCInformation0(_DCU_PNCInformation0),IPS_NMNodeAddress(_IPS_NMNodeAddress),IPS_NMCBV(_IPS_NMCBV),IPS_NMWakeupOrigin(_IPS_NMWakeupOrigin),IPS_PNCInformation0(_IPS_PNCInformation0),IPS_PNCInformation1(_IPS_PNCInformation1),ITS_NMNodeAddress(_ITS_NMNodeAddress),ITS_NMCBV(_ITS_NMCBV),ITS_NMWakeupOrigin(_ITS_NMWakeupOrigin),ITS_PNCInformation0(_ITS_PNCInformation0),ITS_PNCInformation1(_ITS_PNCInformation1),BMC_NMNodeAddress(_BMC_NMNodeAddress),BMC_NMCBV(_BMC_NMCBV),BMC_NMWakeupOrigin(_BMC_NMWakeupOrigin),BMC_PNCInformation0(_BMC_PNCInformation0),BMC_PNCInformation1(_BMC_PNCInformation1),DCDC_NMNodeAddress(_DCDC_NMNodeAddress),DCDC_NMCBV(_DCDC_NMCBV),DCDC_NMWakeupOrigin(_DCDC_NMWakeupOrigin),DCDC_PNCInformation0(_DCDC_PNCInformation0),DCDC_PNCInformation1(_DCDC_PNCInformation1),RBM_NMNodeAddress(_RBM_NMNodeAddress),RBM_NMCBV(_RBM_NMCBV),RBM_NMWakeupOrigin(_RBM_NMWakeupOrigin),RBM_PNCInformation0(_RBM_PNCInformation0),RBM_PNCInformation1(_RBM_PNCInformation1),BCS_NMNodeAddress(_BCS_NMNodeAddress),BCS_NMCBV(_BCS_NMCBV),BCS_NMWakeupOrigin(_BCS_NMWakeupOrigin),BCS_PNCInformation0(_BCS_PNCInformation0),BCS_PNCInformation1(_BCS_PNCInformation1),TBOX_NMNodeAddress(_TBOX_NMNodeAddress),TBOX_NMCBV(_TBOX_NMCBV),TBOX_NMWakeupOrigin(_TBOX_NMWakeupOrigin),TBOX_PNCInformation0(_TBOX_PNCInformation0),TBOX_PNCInformation1(_TBOX_PNCInformation1),ADC_NMNodeAddress(_ADC_NMNodeAddress),ADC_NMCBV(_ADC_NMCBV),ADC_NMWakeupOrigin(_ADC_NMWakeupOrigin),ADC_PNCInformation0(_ADC_PNCInformation0),ADC_PNCInformation1(_ADC_PNCInformation1) {}
	BDCBattWake(const BDCBattWake &_x){
		CCU_NMNodeAddress = _x.CCU_NMNodeAddress;
		CCU_NMCBV = _x.CCU_NMCBV;
		CCU_NMWakeupOrigin = _x.CCU_NMWakeupOrigin;
		CCU_PNCInformation0 = _x.CCU_PNCInformation0;
		CCU_PNCInformation1 = _x.CCU_PNCInformation1;
		ZCUF_NMNodeAddress = _x.ZCUF_NMNodeAddress;
		ZCUF_NMCBV = _x.ZCUF_NMCBV;
		ZCUF_NMWakeupOrigin = _x.ZCUF_NMWakeupOrigin;
		ZCUF_PNCInformation0 = _x.ZCUF_PNCInformation0;
		ZCUF_PNCInformation1 = _x.ZCUF_PNCInformation1;
		ZCUL_NMNodeAddress = _x.ZCUL_NMNodeAddress;
		ZCUL_NMCBV = _x.ZCUL_NMCBV;
		ZCUL_NMWakeupOrigin = _x.ZCUL_NMWakeupOrigin;
		ZCUL_PNCInformation0 = _x.ZCUL_PNCInformation0;
		ZCUL_PNCInformation1 = _x.ZCUL_PNCInformation1;
		ZCUR_NMNodeAddress = _x.ZCUR_NMNodeAddress;
		ZCUR_NMCBV = _x.ZCUR_NMCBV;
		ZCUR_NMWakeupOrigin = _x.ZCUR_NMWakeupOrigin;
		ZCUR_PNCInformation0 = _x.ZCUR_PNCInformation0;
		ZCUR_PNCInformation1 = _x.ZCUR_PNCInformation1;
		ZCUT_NMNodeAddress = _x.ZCUT_NMNodeAddress;
		ZCUT_NMCBV = _x.ZCUT_NMCBV;
		ZCUT_NMWakeupOrigin = _x.ZCUT_NMWakeupOrigin;
		ZCUT_PNCInformation0 = _x.ZCUT_PNCInformation0;
		ZCUT_PNCInformation1 = _x.ZCUT_PNCInformation1;
		IDC_NMNodeAddress = _x.IDC_NMNodeAddress;
		IDC_NMCBV = _x.IDC_NMCBV;
		IDC_NMWakeupOrigin = _x.IDC_NMWakeupOrigin;
		IDC_PNCInformation0 = _x.IDC_PNCInformation0;
		IDC_PNCInformation1 = _x.IDC_PNCInformation1;
		MFS_NMCBV = _x.MFS_NMCBV;
		MFS_NMWakeupOrigin = _x.MFS_NMWakeupOrigin;
		MFS_PNCInformation0 = _x.MFS_PNCInformation0;
		MFS_PNCInformation1 = _x.MFS_PNCInformation1;
		DCU_NMNodeAddress = _x.DCU_NMNodeAddress;
		DCU_NMCBV = _x.DCU_NMCBV;
		DCU_NMWakeupOrigin = _x.DCU_NMWakeupOrigin;
		DCU_PNCInformation0 = _x.DCU_PNCInformation0;
		IPS_NMNodeAddress = _x.IPS_NMNodeAddress;
		IPS_NMCBV = _x.IPS_NMCBV;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		IPS_PNCInformation1 = _x.IPS_PNCInformation1;
		ITS_NMNodeAddress = _x.ITS_NMNodeAddress;
		ITS_NMCBV = _x.ITS_NMCBV;
		ITS_NMWakeupOrigin = _x.ITS_NMWakeupOrigin;
		ITS_PNCInformation0 = _x.ITS_PNCInformation0;
		ITS_PNCInformation1 = _x.ITS_PNCInformation1;
		BMC_NMNodeAddress = _x.BMC_NMNodeAddress;
		BMC_NMCBV = _x.BMC_NMCBV;
		BMC_NMWakeupOrigin = _x.BMC_NMWakeupOrigin;
		BMC_PNCInformation0 = _x.BMC_PNCInformation0;
		BMC_PNCInformation1 = _x.BMC_PNCInformation1;
		DCDC_NMNodeAddress = _x.DCDC_NMNodeAddress;
		DCDC_NMCBV = _x.DCDC_NMCBV;
		DCDC_NMWakeupOrigin = _x.DCDC_NMWakeupOrigin;
		DCDC_PNCInformation0 = _x.DCDC_PNCInformation0;
		DCDC_PNCInformation1 = _x.DCDC_PNCInformation1;
		RBM_NMNodeAddress = _x.RBM_NMNodeAddress;
		RBM_NMCBV = _x.RBM_NMCBV;
		RBM_NMWakeupOrigin = _x.RBM_NMWakeupOrigin;
		RBM_PNCInformation0 = _x.RBM_PNCInformation0;
		RBM_PNCInformation1 = _x.RBM_PNCInformation1;
		BCS_NMNodeAddress = _x.BCS_NMNodeAddress;
		BCS_NMCBV = _x.BCS_NMCBV;
		BCS_NMWakeupOrigin = _x.BCS_NMWakeupOrigin;
		BCS_PNCInformation0 = _x.BCS_PNCInformation0;
		BCS_PNCInformation1 = _x.BCS_PNCInformation1;
		TBOX_NMNodeAddress = _x.TBOX_NMNodeAddress;
		TBOX_NMCBV = _x.TBOX_NMCBV;
		TBOX_NMWakeupOrigin = _x.TBOX_NMWakeupOrigin;
		TBOX_PNCInformation0 = _x.TBOX_PNCInformation0;
		TBOX_PNCInformation1 = _x.TBOX_PNCInformation1;
		ADC_NMNodeAddress = _x.ADC_NMNodeAddress;
		ADC_NMCBV = _x.ADC_NMCBV;
		ADC_NMWakeupOrigin = _x.ADC_NMWakeupOrigin;
		ADC_PNCInformation0 = _x.ADC_PNCInformation0;
		ADC_PNCInformation1 = _x.ADC_PNCInformation1;
	}
	BDCBattWake(BDCBattWake &&_x){
		CCU_NMNodeAddress = std::move(_x.CCU_NMNodeAddress);
		CCU_NMCBV = std::move(_x.CCU_NMCBV);
		CCU_NMWakeupOrigin = std::move(_x.CCU_NMWakeupOrigin);
		CCU_PNCInformation0 = std::move(_x.CCU_PNCInformation0);
		CCU_PNCInformation1 = std::move(_x.CCU_PNCInformation1);
		ZCUF_NMNodeAddress = std::move(_x.ZCUF_NMNodeAddress);
		ZCUF_NMCBV = std::move(_x.ZCUF_NMCBV);
		ZCUF_NMWakeupOrigin = std::move(_x.ZCUF_NMWakeupOrigin);
		ZCUF_PNCInformation0 = std::move(_x.ZCUF_PNCInformation0);
		ZCUF_PNCInformation1 = std::move(_x.ZCUF_PNCInformation1);
		ZCUL_NMNodeAddress = std::move(_x.ZCUL_NMNodeAddress);
		ZCUL_NMCBV = std::move(_x.ZCUL_NMCBV);
		ZCUL_NMWakeupOrigin = std::move(_x.ZCUL_NMWakeupOrigin);
		ZCUL_PNCInformation0 = std::move(_x.ZCUL_PNCInformation0);
		ZCUL_PNCInformation1 = std::move(_x.ZCUL_PNCInformation1);
		ZCUR_NMNodeAddress = std::move(_x.ZCUR_NMNodeAddress);
		ZCUR_NMCBV = std::move(_x.ZCUR_NMCBV);
		ZCUR_NMWakeupOrigin = std::move(_x.ZCUR_NMWakeupOrigin);
		ZCUR_PNCInformation0 = std::move(_x.ZCUR_PNCInformation0);
		ZCUR_PNCInformation1 = std::move(_x.ZCUR_PNCInformation1);
		ZCUT_NMNodeAddress = std::move(_x.ZCUT_NMNodeAddress);
		ZCUT_NMCBV = std::move(_x.ZCUT_NMCBV);
		ZCUT_NMWakeupOrigin = std::move(_x.ZCUT_NMWakeupOrigin);
		ZCUT_PNCInformation0 = std::move(_x.ZCUT_PNCInformation0);
		ZCUT_PNCInformation1 = std::move(_x.ZCUT_PNCInformation1);
		IDC_NMNodeAddress = std::move(_x.IDC_NMNodeAddress);
		IDC_NMCBV = std::move(_x.IDC_NMCBV);
		IDC_NMWakeupOrigin = std::move(_x.IDC_NMWakeupOrigin);
		IDC_PNCInformation0 = std::move(_x.IDC_PNCInformation0);
		IDC_PNCInformation1 = std::move(_x.IDC_PNCInformation1);
		MFS_NMCBV = std::move(_x.MFS_NMCBV);
		MFS_NMWakeupOrigin = std::move(_x.MFS_NMWakeupOrigin);
		MFS_PNCInformation0 = std::move(_x.MFS_PNCInformation0);
		MFS_PNCInformation1 = std::move(_x.MFS_PNCInformation1);
		DCU_NMNodeAddress = std::move(_x.DCU_NMNodeAddress);
		DCU_NMCBV = std::move(_x.DCU_NMCBV);
		DCU_NMWakeupOrigin = std::move(_x.DCU_NMWakeupOrigin);
		DCU_PNCInformation0 = std::move(_x.DCU_PNCInformation0);
		IPS_NMNodeAddress = std::move(_x.IPS_NMNodeAddress);
		IPS_NMCBV = std::move(_x.IPS_NMCBV);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		IPS_PNCInformation1 = std::move(_x.IPS_PNCInformation1);
		ITS_NMNodeAddress = std::move(_x.ITS_NMNodeAddress);
		ITS_NMCBV = std::move(_x.ITS_NMCBV);
		ITS_NMWakeupOrigin = std::move(_x.ITS_NMWakeupOrigin);
		ITS_PNCInformation0 = std::move(_x.ITS_PNCInformation0);
		ITS_PNCInformation1 = std::move(_x.ITS_PNCInformation1);
		BMC_NMNodeAddress = std::move(_x.BMC_NMNodeAddress);
		BMC_NMCBV = std::move(_x.BMC_NMCBV);
		BMC_NMWakeupOrigin = std::move(_x.BMC_NMWakeupOrigin);
		BMC_PNCInformation0 = std::move(_x.BMC_PNCInformation0);
		BMC_PNCInformation1 = std::move(_x.BMC_PNCInformation1);
		DCDC_NMNodeAddress = std::move(_x.DCDC_NMNodeAddress);
		DCDC_NMCBV = std::move(_x.DCDC_NMCBV);
		DCDC_NMWakeupOrigin = std::move(_x.DCDC_NMWakeupOrigin);
		DCDC_PNCInformation0 = std::move(_x.DCDC_PNCInformation0);
		DCDC_PNCInformation1 = std::move(_x.DCDC_PNCInformation1);
		RBM_NMNodeAddress = std::move(_x.RBM_NMNodeAddress);
		RBM_NMCBV = std::move(_x.RBM_NMCBV);
		RBM_NMWakeupOrigin = std::move(_x.RBM_NMWakeupOrigin);
		RBM_PNCInformation0 = std::move(_x.RBM_PNCInformation0);
		RBM_PNCInformation1 = std::move(_x.RBM_PNCInformation1);
		BCS_NMNodeAddress = std::move(_x.BCS_NMNodeAddress);
		BCS_NMCBV = std::move(_x.BCS_NMCBV);
		BCS_NMWakeupOrigin = std::move(_x.BCS_NMWakeupOrigin);
		BCS_PNCInformation0 = std::move(_x.BCS_PNCInformation0);
		BCS_PNCInformation1 = std::move(_x.BCS_PNCInformation1);
		TBOX_NMNodeAddress = std::move(_x.TBOX_NMNodeAddress);
		TBOX_NMCBV = std::move(_x.TBOX_NMCBV);
		TBOX_NMWakeupOrigin = std::move(_x.TBOX_NMWakeupOrigin);
		TBOX_PNCInformation0 = std::move(_x.TBOX_PNCInformation0);
		TBOX_PNCInformation1 = std::move(_x.TBOX_PNCInformation1);
		ADC_NMNodeAddress = std::move(_x.ADC_NMNodeAddress);
		ADC_NMCBV = std::move(_x.ADC_NMCBV);
		ADC_NMWakeupOrigin = std::move(_x.ADC_NMWakeupOrigin);
		ADC_PNCInformation0 = std::move(_x.ADC_PNCInformation0);
		ADC_PNCInformation1 = std::move(_x.ADC_PNCInformation1);
	}
	BDCBattWake& operator=(const BDCBattWake &_x){
		CCU_NMNodeAddress = _x.CCU_NMNodeAddress;
		CCU_NMCBV = _x.CCU_NMCBV;
		CCU_NMWakeupOrigin = _x.CCU_NMWakeupOrigin;
		CCU_PNCInformation0 = _x.CCU_PNCInformation0;
		CCU_PNCInformation1 = _x.CCU_PNCInformation1;
		ZCUF_NMNodeAddress = _x.ZCUF_NMNodeAddress;
		ZCUF_NMCBV = _x.ZCUF_NMCBV;
		ZCUF_NMWakeupOrigin = _x.ZCUF_NMWakeupOrigin;
		ZCUF_PNCInformation0 = _x.ZCUF_PNCInformation0;
		ZCUF_PNCInformation1 = _x.ZCUF_PNCInformation1;
		ZCUL_NMNodeAddress = _x.ZCUL_NMNodeAddress;
		ZCUL_NMCBV = _x.ZCUL_NMCBV;
		ZCUL_NMWakeupOrigin = _x.ZCUL_NMWakeupOrigin;
		ZCUL_PNCInformation0 = _x.ZCUL_PNCInformation0;
		ZCUL_PNCInformation1 = _x.ZCUL_PNCInformation1;
		ZCUR_NMNodeAddress = _x.ZCUR_NMNodeAddress;
		ZCUR_NMCBV = _x.ZCUR_NMCBV;
		ZCUR_NMWakeupOrigin = _x.ZCUR_NMWakeupOrigin;
		ZCUR_PNCInformation0 = _x.ZCUR_PNCInformation0;
		ZCUR_PNCInformation1 = _x.ZCUR_PNCInformation1;
		ZCUT_NMNodeAddress = _x.ZCUT_NMNodeAddress;
		ZCUT_NMCBV = _x.ZCUT_NMCBV;
		ZCUT_NMWakeupOrigin = _x.ZCUT_NMWakeupOrigin;
		ZCUT_PNCInformation0 = _x.ZCUT_PNCInformation0;
		ZCUT_PNCInformation1 = _x.ZCUT_PNCInformation1;
		IDC_NMNodeAddress = _x.IDC_NMNodeAddress;
		IDC_NMCBV = _x.IDC_NMCBV;
		IDC_NMWakeupOrigin = _x.IDC_NMWakeupOrigin;
		IDC_PNCInformation0 = _x.IDC_PNCInformation0;
		IDC_PNCInformation1 = _x.IDC_PNCInformation1;
		MFS_NMCBV = _x.MFS_NMCBV;
		MFS_NMWakeupOrigin = _x.MFS_NMWakeupOrigin;
		MFS_PNCInformation0 = _x.MFS_PNCInformation0;
		MFS_PNCInformation1 = _x.MFS_PNCInformation1;
		DCU_NMNodeAddress = _x.DCU_NMNodeAddress;
		DCU_NMCBV = _x.DCU_NMCBV;
		DCU_NMWakeupOrigin = _x.DCU_NMWakeupOrigin;
		DCU_PNCInformation0 = _x.DCU_PNCInformation0;
		IPS_NMNodeAddress = _x.IPS_NMNodeAddress;
		IPS_NMCBV = _x.IPS_NMCBV;
		IPS_NMWakeupOrigin = _x.IPS_NMWakeupOrigin;
		IPS_PNCInformation0 = _x.IPS_PNCInformation0;
		IPS_PNCInformation1 = _x.IPS_PNCInformation1;
		ITS_NMNodeAddress = _x.ITS_NMNodeAddress;
		ITS_NMCBV = _x.ITS_NMCBV;
		ITS_NMWakeupOrigin = _x.ITS_NMWakeupOrigin;
		ITS_PNCInformation0 = _x.ITS_PNCInformation0;
		ITS_PNCInformation1 = _x.ITS_PNCInformation1;
		BMC_NMNodeAddress = _x.BMC_NMNodeAddress;
		BMC_NMCBV = _x.BMC_NMCBV;
		BMC_NMWakeupOrigin = _x.BMC_NMWakeupOrigin;
		BMC_PNCInformation0 = _x.BMC_PNCInformation0;
		BMC_PNCInformation1 = _x.BMC_PNCInformation1;
		DCDC_NMNodeAddress = _x.DCDC_NMNodeAddress;
		DCDC_NMCBV = _x.DCDC_NMCBV;
		DCDC_NMWakeupOrigin = _x.DCDC_NMWakeupOrigin;
		DCDC_PNCInformation0 = _x.DCDC_PNCInformation0;
		DCDC_PNCInformation1 = _x.DCDC_PNCInformation1;
		RBM_NMNodeAddress = _x.RBM_NMNodeAddress;
		RBM_NMCBV = _x.RBM_NMCBV;
		RBM_NMWakeupOrigin = _x.RBM_NMWakeupOrigin;
		RBM_PNCInformation0 = _x.RBM_PNCInformation0;
		RBM_PNCInformation1 = _x.RBM_PNCInformation1;
		BCS_NMNodeAddress = _x.BCS_NMNodeAddress;
		BCS_NMCBV = _x.BCS_NMCBV;
		BCS_NMWakeupOrigin = _x.BCS_NMWakeupOrigin;
		BCS_PNCInformation0 = _x.BCS_PNCInformation0;
		BCS_PNCInformation1 = _x.BCS_PNCInformation1;
		TBOX_NMNodeAddress = _x.TBOX_NMNodeAddress;
		TBOX_NMCBV = _x.TBOX_NMCBV;
		TBOX_NMWakeupOrigin = _x.TBOX_NMWakeupOrigin;
		TBOX_PNCInformation0 = _x.TBOX_PNCInformation0;
		TBOX_PNCInformation1 = _x.TBOX_PNCInformation1;
		ADC_NMNodeAddress = _x.ADC_NMNodeAddress;
		ADC_NMCBV = _x.ADC_NMCBV;
		ADC_NMWakeupOrigin = _x.ADC_NMWakeupOrigin;
		ADC_PNCInformation0 = _x.ADC_PNCInformation0;
		ADC_PNCInformation1 = _x.ADC_PNCInformation1;
		return *this;
	}
	BDCBattWake& operator=(BDCBattWake &&_x){
		CCU_NMNodeAddress = std::move(_x.CCU_NMNodeAddress);
		CCU_NMCBV = std::move(_x.CCU_NMCBV);
		CCU_NMWakeupOrigin = std::move(_x.CCU_NMWakeupOrigin);
		CCU_PNCInformation0 = std::move(_x.CCU_PNCInformation0);
		CCU_PNCInformation1 = std::move(_x.CCU_PNCInformation1);
		ZCUF_NMNodeAddress = std::move(_x.ZCUF_NMNodeAddress);
		ZCUF_NMCBV = std::move(_x.ZCUF_NMCBV);
		ZCUF_NMWakeupOrigin = std::move(_x.ZCUF_NMWakeupOrigin);
		ZCUF_PNCInformation0 = std::move(_x.ZCUF_PNCInformation0);
		ZCUF_PNCInformation1 = std::move(_x.ZCUF_PNCInformation1);
		ZCUL_NMNodeAddress = std::move(_x.ZCUL_NMNodeAddress);
		ZCUL_NMCBV = std::move(_x.ZCUL_NMCBV);
		ZCUL_NMWakeupOrigin = std::move(_x.ZCUL_NMWakeupOrigin);
		ZCUL_PNCInformation0 = std::move(_x.ZCUL_PNCInformation0);
		ZCUL_PNCInformation1 = std::move(_x.ZCUL_PNCInformation1);
		ZCUR_NMNodeAddress = std::move(_x.ZCUR_NMNodeAddress);
		ZCUR_NMCBV = std::move(_x.ZCUR_NMCBV);
		ZCUR_NMWakeupOrigin = std::move(_x.ZCUR_NMWakeupOrigin);
		ZCUR_PNCInformation0 = std::move(_x.ZCUR_PNCInformation0);
		ZCUR_PNCInformation1 = std::move(_x.ZCUR_PNCInformation1);
		ZCUT_NMNodeAddress = std::move(_x.ZCUT_NMNodeAddress);
		ZCUT_NMCBV = std::move(_x.ZCUT_NMCBV);
		ZCUT_NMWakeupOrigin = std::move(_x.ZCUT_NMWakeupOrigin);
		ZCUT_PNCInformation0 = std::move(_x.ZCUT_PNCInformation0);
		ZCUT_PNCInformation1 = std::move(_x.ZCUT_PNCInformation1);
		IDC_NMNodeAddress = std::move(_x.IDC_NMNodeAddress);
		IDC_NMCBV = std::move(_x.IDC_NMCBV);
		IDC_NMWakeupOrigin = std::move(_x.IDC_NMWakeupOrigin);
		IDC_PNCInformation0 = std::move(_x.IDC_PNCInformation0);
		IDC_PNCInformation1 = std::move(_x.IDC_PNCInformation1);
		MFS_NMCBV = std::move(_x.MFS_NMCBV);
		MFS_NMWakeupOrigin = std::move(_x.MFS_NMWakeupOrigin);
		MFS_PNCInformation0 = std::move(_x.MFS_PNCInformation0);
		MFS_PNCInformation1 = std::move(_x.MFS_PNCInformation1);
		DCU_NMNodeAddress = std::move(_x.DCU_NMNodeAddress);
		DCU_NMCBV = std::move(_x.DCU_NMCBV);
		DCU_NMWakeupOrigin = std::move(_x.DCU_NMWakeupOrigin);
		DCU_PNCInformation0 = std::move(_x.DCU_PNCInformation0);
		IPS_NMNodeAddress = std::move(_x.IPS_NMNodeAddress);
		IPS_NMCBV = std::move(_x.IPS_NMCBV);
		IPS_NMWakeupOrigin = std::move(_x.IPS_NMWakeupOrigin);
		IPS_PNCInformation0 = std::move(_x.IPS_PNCInformation0);
		IPS_PNCInformation1 = std::move(_x.IPS_PNCInformation1);
		ITS_NMNodeAddress = std::move(_x.ITS_NMNodeAddress);
		ITS_NMCBV = std::move(_x.ITS_NMCBV);
		ITS_NMWakeupOrigin = std::move(_x.ITS_NMWakeupOrigin);
		ITS_PNCInformation0 = std::move(_x.ITS_PNCInformation0);
		ITS_PNCInformation1 = std::move(_x.ITS_PNCInformation1);
		BMC_NMNodeAddress = std::move(_x.BMC_NMNodeAddress);
		BMC_NMCBV = std::move(_x.BMC_NMCBV);
		BMC_NMWakeupOrigin = std::move(_x.BMC_NMWakeupOrigin);
		BMC_PNCInformation0 = std::move(_x.BMC_PNCInformation0);
		BMC_PNCInformation1 = std::move(_x.BMC_PNCInformation1);
		DCDC_NMNodeAddress = std::move(_x.DCDC_NMNodeAddress);
		DCDC_NMCBV = std::move(_x.DCDC_NMCBV);
		DCDC_NMWakeupOrigin = std::move(_x.DCDC_NMWakeupOrigin);
		DCDC_PNCInformation0 = std::move(_x.DCDC_PNCInformation0);
		DCDC_PNCInformation1 = std::move(_x.DCDC_PNCInformation1);
		RBM_NMNodeAddress = std::move(_x.RBM_NMNodeAddress);
		RBM_NMCBV = std::move(_x.RBM_NMCBV);
		RBM_NMWakeupOrigin = std::move(_x.RBM_NMWakeupOrigin);
		RBM_PNCInformation0 = std::move(_x.RBM_PNCInformation0);
		RBM_PNCInformation1 = std::move(_x.RBM_PNCInformation1);
		BCS_NMNodeAddress = std::move(_x.BCS_NMNodeAddress);
		BCS_NMCBV = std::move(_x.BCS_NMCBV);
		BCS_NMWakeupOrigin = std::move(_x.BCS_NMWakeupOrigin);
		BCS_PNCInformation0 = std::move(_x.BCS_PNCInformation0);
		BCS_PNCInformation1 = std::move(_x.BCS_PNCInformation1);
		TBOX_NMNodeAddress = std::move(_x.TBOX_NMNodeAddress);
		TBOX_NMCBV = std::move(_x.TBOX_NMCBV);
		TBOX_NMWakeupOrigin = std::move(_x.TBOX_NMWakeupOrigin);
		TBOX_PNCInformation0 = std::move(_x.TBOX_PNCInformation0);
		TBOX_PNCInformation1 = std::move(_x.TBOX_PNCInformation1);
		ADC_NMNodeAddress = std::move(_x.ADC_NMNodeAddress);
		ADC_NMCBV = std::move(_x.ADC_NMCBV);
		ADC_NMWakeupOrigin = std::move(_x.ADC_NMWakeupOrigin);
		ADC_PNCInformation0 = std::move(_x.ADC_PNCInformation0);
		ADC_PNCInformation1 = std::move(_x.ADC_PNCInformation1);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CCU_NMNodeAddress);
		fun(CCU_NMCBV);
		fun(CCU_NMWakeupOrigin);
		fun(CCU_PNCInformation0);
		fun(CCU_PNCInformation1);
		fun(ZCUF_NMNodeAddress);
		fun(ZCUF_NMCBV);
		fun(ZCUF_NMWakeupOrigin);
		fun(ZCUF_PNCInformation0);
		fun(ZCUF_PNCInformation1);
		fun(ZCUL_NMNodeAddress);
		fun(ZCUL_NMCBV);
		fun(ZCUL_NMWakeupOrigin);
		fun(ZCUL_PNCInformation0);
		fun(ZCUL_PNCInformation1);
		fun(ZCUR_NMNodeAddress);
		fun(ZCUR_NMCBV);
		fun(ZCUR_NMWakeupOrigin);
		fun(ZCUR_PNCInformation0);
		fun(ZCUR_PNCInformation1);
		fun(ZCUT_NMNodeAddress);
		fun(ZCUT_NMCBV);
		fun(ZCUT_NMWakeupOrigin);
		fun(ZCUT_PNCInformation0);
		fun(ZCUT_PNCInformation1);
		fun(IDC_NMNodeAddress);
		fun(IDC_NMCBV);
		fun(IDC_NMWakeupOrigin);
		fun(IDC_PNCInformation0);
		fun(IDC_PNCInformation1);
		fun(MFS_NMCBV);
		fun(MFS_NMWakeupOrigin);
		fun(MFS_PNCInformation0);
		fun(MFS_PNCInformation1);
		fun(DCU_NMNodeAddress);
		fun(DCU_NMCBV);
		fun(DCU_NMWakeupOrigin);
		fun(DCU_PNCInformation0);
		fun(IPS_NMNodeAddress);
		fun(IPS_NMCBV);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(IPS_PNCInformation1);
		fun(ITS_NMNodeAddress);
		fun(ITS_NMCBV);
		fun(ITS_NMWakeupOrigin);
		fun(ITS_PNCInformation0);
		fun(ITS_PNCInformation1);
		fun(BMC_NMNodeAddress);
		fun(BMC_NMCBV);
		fun(BMC_NMWakeupOrigin);
		fun(BMC_PNCInformation0);
		fun(BMC_PNCInformation1);
		fun(DCDC_NMNodeAddress);
		fun(DCDC_NMCBV);
		fun(DCDC_NMWakeupOrigin);
		fun(DCDC_PNCInformation0);
		fun(DCDC_PNCInformation1);
		fun(RBM_NMNodeAddress);
		fun(RBM_NMCBV);
		fun(RBM_NMWakeupOrigin);
		fun(RBM_PNCInformation0);
		fun(RBM_PNCInformation1);
		fun(BCS_NMNodeAddress);
		fun(BCS_NMCBV);
		fun(BCS_NMWakeupOrigin);
		fun(BCS_PNCInformation0);
		fun(BCS_PNCInformation1);
		fun(TBOX_NMNodeAddress);
		fun(TBOX_NMCBV);
		fun(TBOX_NMWakeupOrigin);
		fun(TBOX_PNCInformation0);
		fun(TBOX_PNCInformation1);
		fun(ADC_NMNodeAddress);
		fun(ADC_NMCBV);
		fun(ADC_NMWakeupOrigin);
		fun(ADC_PNCInformation0);
		fun(ADC_PNCInformation1);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CCU_NMNodeAddress);
		fun(CCU_NMCBV);
		fun(CCU_NMWakeupOrigin);
		fun(CCU_PNCInformation0);
		fun(CCU_PNCInformation1);
		fun(ZCUF_NMNodeAddress);
		fun(ZCUF_NMCBV);
		fun(ZCUF_NMWakeupOrigin);
		fun(ZCUF_PNCInformation0);
		fun(ZCUF_PNCInformation1);
		fun(ZCUL_NMNodeAddress);
		fun(ZCUL_NMCBV);
		fun(ZCUL_NMWakeupOrigin);
		fun(ZCUL_PNCInformation0);
		fun(ZCUL_PNCInformation1);
		fun(ZCUR_NMNodeAddress);
		fun(ZCUR_NMCBV);
		fun(ZCUR_NMWakeupOrigin);
		fun(ZCUR_PNCInformation0);
		fun(ZCUR_PNCInformation1);
		fun(ZCUT_NMNodeAddress);
		fun(ZCUT_NMCBV);
		fun(ZCUT_NMWakeupOrigin);
		fun(ZCUT_PNCInformation0);
		fun(ZCUT_PNCInformation1);
		fun(IDC_NMNodeAddress);
		fun(IDC_NMCBV);
		fun(IDC_NMWakeupOrigin);
		fun(IDC_PNCInformation0);
		fun(IDC_PNCInformation1);
		fun(MFS_NMCBV);
		fun(MFS_NMWakeupOrigin);
		fun(MFS_PNCInformation0);
		fun(MFS_PNCInformation1);
		fun(DCU_NMNodeAddress);
		fun(DCU_NMCBV);
		fun(DCU_NMWakeupOrigin);
		fun(DCU_PNCInformation0);
		fun(IPS_NMNodeAddress);
		fun(IPS_NMCBV);
		fun(IPS_NMWakeupOrigin);
		fun(IPS_PNCInformation0);
		fun(IPS_PNCInformation1);
		fun(ITS_NMNodeAddress);
		fun(ITS_NMCBV);
		fun(ITS_NMWakeupOrigin);
		fun(ITS_PNCInformation0);
		fun(ITS_PNCInformation1);
		fun(BMC_NMNodeAddress);
		fun(BMC_NMCBV);
		fun(BMC_NMWakeupOrigin);
		fun(BMC_PNCInformation0);
		fun(BMC_PNCInformation1);
		fun(DCDC_NMNodeAddress);
		fun(DCDC_NMCBV);
		fun(DCDC_NMWakeupOrigin);
		fun(DCDC_PNCInformation0);
		fun(DCDC_PNCInformation1);
		fun(RBM_NMNodeAddress);
		fun(RBM_NMCBV);
		fun(RBM_NMWakeupOrigin);
		fun(RBM_PNCInformation0);
		fun(RBM_PNCInformation1);
		fun(BCS_NMNodeAddress);
		fun(BCS_NMCBV);
		fun(BCS_NMWakeupOrigin);
		fun(BCS_PNCInformation0);
		fun(BCS_PNCInformation1);
		fun(TBOX_NMNodeAddress);
		fun(TBOX_NMCBV);
		fun(TBOX_NMWakeupOrigin);
		fun(TBOX_PNCInformation0);
		fun(TBOX_PNCInformation1);
		fun(ADC_NMNodeAddress);
		fun(ADC_NMCBV);
		fun(ADC_NMWakeupOrigin);
		fun(ADC_PNCInformation0);
		fun(ADC_PNCInformation1);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CCU_NMNodeAddress);
		fun << (CCU_NMCBV);
		fun << (CCU_NMWakeupOrigin);
		fun << (CCU_PNCInformation0);
		fun << (CCU_PNCInformation1);
		fun << (ZCUF_NMNodeAddress);
		fun << (ZCUF_NMCBV);
		fun << (ZCUF_NMWakeupOrigin);
		fun << (ZCUF_PNCInformation0);
		fun << (ZCUF_PNCInformation1);
		fun << (ZCUL_NMNodeAddress);
		fun << (ZCUL_NMCBV);
		fun << (ZCUL_NMWakeupOrigin);
		fun << (ZCUL_PNCInformation0);
		fun << (ZCUL_PNCInformation1);
		fun << (ZCUR_NMNodeAddress);
		fun << (ZCUR_NMCBV);
		fun << (ZCUR_NMWakeupOrigin);
		fun << (ZCUR_PNCInformation0);
		fun << (ZCUR_PNCInformation1);
		fun << (ZCUT_NMNodeAddress);
		fun << (ZCUT_NMCBV);
		fun << (ZCUT_NMWakeupOrigin);
		fun << (ZCUT_PNCInformation0);
		fun << (ZCUT_PNCInformation1);
		fun << (IDC_NMNodeAddress);
		fun << (IDC_NMCBV);
		fun << (IDC_NMWakeupOrigin);
		fun << (IDC_PNCInformation0);
		fun << (IDC_PNCInformation1);
		fun << (MFS_NMCBV);
		fun << (MFS_NMWakeupOrigin);
		fun << (MFS_PNCInformation0);
		fun << (MFS_PNCInformation1);
		fun << (DCU_NMNodeAddress);
		fun << (DCU_NMCBV);
		fun << (DCU_NMWakeupOrigin);
		fun << (DCU_PNCInformation0);
		fun << (IPS_NMNodeAddress);
		fun << (IPS_NMCBV);
		fun << (IPS_NMWakeupOrigin);
		fun << (IPS_PNCInformation0);
		fun << (IPS_PNCInformation1);
		fun << (ITS_NMNodeAddress);
		fun << (ITS_NMCBV);
		fun << (ITS_NMWakeupOrigin);
		fun << (ITS_PNCInformation0);
		fun << (ITS_PNCInformation1);
		fun << (BMC_NMNodeAddress);
		fun << (BMC_NMCBV);
		fun << (BMC_NMWakeupOrigin);
		fun << (BMC_PNCInformation0);
		fun << (BMC_PNCInformation1);
		fun << (DCDC_NMNodeAddress);
		fun << (DCDC_NMCBV);
		fun << (DCDC_NMWakeupOrigin);
		fun << (DCDC_PNCInformation0);
		fun << (DCDC_PNCInformation1);
		fun << (RBM_NMNodeAddress);
		fun << (RBM_NMCBV);
		fun << (RBM_NMWakeupOrigin);
		fun << (RBM_PNCInformation0);
		fun << (RBM_PNCInformation1);
		fun << (BCS_NMNodeAddress);
		fun << (BCS_NMCBV);
		fun << (BCS_NMWakeupOrigin);
		fun << (BCS_PNCInformation0);
		fun << (BCS_PNCInformation1);
		fun << (TBOX_NMNodeAddress);
		fun << (TBOX_NMCBV);
		fun << (TBOX_NMWakeupOrigin);
		fun << (TBOX_PNCInformation0);
		fun << (TBOX_PNCInformation1);
		fun << (ADC_NMNodeAddress);
		fun << (ADC_NMCBV);
		fun << (ADC_NMWakeupOrigin);
		fun << (ADC_PNCInformation0);
		fun << (ADC_PNCInformation1);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CCU_NMNodeAddress);
		fun >> (CCU_NMCBV);
		fun >> (CCU_NMWakeupOrigin);
		fun >> (CCU_PNCInformation0);
		fun >> (CCU_PNCInformation1);
		fun >> (ZCUF_NMNodeAddress);
		fun >> (ZCUF_NMCBV);
		fun >> (ZCUF_NMWakeupOrigin);
		fun >> (ZCUF_PNCInformation0);
		fun >> (ZCUF_PNCInformation1);
		fun >> (ZCUL_NMNodeAddress);
		fun >> (ZCUL_NMCBV);
		fun >> (ZCUL_NMWakeupOrigin);
		fun >> (ZCUL_PNCInformation0);
		fun >> (ZCUL_PNCInformation1);
		fun >> (ZCUR_NMNodeAddress);
		fun >> (ZCUR_NMCBV);
		fun >> (ZCUR_NMWakeupOrigin);
		fun >> (ZCUR_PNCInformation0);
		fun >> (ZCUR_PNCInformation1);
		fun >> (ZCUT_NMNodeAddress);
		fun >> (ZCUT_NMCBV);
		fun >> (ZCUT_NMWakeupOrigin);
		fun >> (ZCUT_PNCInformation0);
		fun >> (ZCUT_PNCInformation1);
		fun >> (IDC_NMNodeAddress);
		fun >> (IDC_NMCBV);
		fun >> (IDC_NMWakeupOrigin);
		fun >> (IDC_PNCInformation0);
		fun >> (IDC_PNCInformation1);
		fun >> (MFS_NMCBV);
		fun >> (MFS_NMWakeupOrigin);
		fun >> (MFS_PNCInformation0);
		fun >> (MFS_PNCInformation1);
		fun >> (DCU_NMNodeAddress);
		fun >> (DCU_NMCBV);
		fun >> (DCU_NMWakeupOrigin);
		fun >> (DCU_PNCInformation0);
		fun >> (IPS_NMNodeAddress);
		fun >> (IPS_NMCBV);
		fun >> (IPS_NMWakeupOrigin);
		fun >> (IPS_PNCInformation0);
		fun >> (IPS_PNCInformation1);
		fun >> (ITS_NMNodeAddress);
		fun >> (ITS_NMCBV);
		fun >> (ITS_NMWakeupOrigin);
		fun >> (ITS_PNCInformation0);
		fun >> (ITS_PNCInformation1);
		fun >> (BMC_NMNodeAddress);
		fun >> (BMC_NMCBV);
		fun >> (BMC_NMWakeupOrigin);
		fun >> (BMC_PNCInformation0);
		fun >> (BMC_PNCInformation1);
		fun >> (DCDC_NMNodeAddress);
		fun >> (DCDC_NMCBV);
		fun >> (DCDC_NMWakeupOrigin);
		fun >> (DCDC_PNCInformation0);
		fun >> (DCDC_PNCInformation1);
		fun >> (RBM_NMNodeAddress);
		fun >> (RBM_NMCBV);
		fun >> (RBM_NMWakeupOrigin);
		fun >> (RBM_PNCInformation0);
		fun >> (RBM_PNCInformation1);
		fun >> (BCS_NMNodeAddress);
		fun >> (BCS_NMCBV);
		fun >> (BCS_NMWakeupOrigin);
		fun >> (BCS_PNCInformation0);
		fun >> (BCS_PNCInformation1);
		fun >> (TBOX_NMNodeAddress);
		fun >> (TBOX_NMCBV);
		fun >> (TBOX_NMWakeupOrigin);
		fun >> (TBOX_PNCInformation0);
		fun >> (TBOX_PNCInformation1);
		fun >> (ADC_NMNodeAddress);
		fun >> (ADC_NMCBV);
		fun >> (ADC_NMWakeupOrigin);
		fun >> (ADC_PNCInformation0);
		fun >> (ADC_PNCInformation1);
	}
};

#endif //____BDCBATTWAKE_H__