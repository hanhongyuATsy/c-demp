#ifndef ____BDCOTA2_H__
#define ____BDCOTA2_H__


#include "cstdint"






struct BDCOTA2 {
public:
	std::uint8_t IPS_DCDCModeSt;
	std::uint8_t DCDC_ModeSt;
	std::uint8_t BMC_DCUBattSt;
	std::uint64_t BMS_DCUBattSt;
	std::uint16_t BCS_VehSpd;
	std::uint8_t BCS_VehSpdVD;
	std::uint8_t VMM_VehModeSt;
	std::uint8_t VMM_OTAModeSt;
	std::uint8_t UMM_UsageModeSt;
	std::uint8_t EBST_SOC;
	std::uint8_t EBST_SOC_STATE;
	std::uint8_t EBSF_SOC;
	std::uint8_t EBSF_SOC_STATE;
	std::uint16_t EBSF_BattVolt;
	std::uint16_t EBST_BattVolt;
	std::uint64_t BMS_BattSocDisp;
	std::uint16_t BMS_TEL_BattSocDisp;
	std::uint8_t VCU_BMS_BattSocDisp;
	std::uint8_t ATWS_ATWSSt;
	std::uint8_t VCU_CrntGearLvl;
	std::uint8_t BMC_HVBattSt;
	std::uint8_t BMS_HVBattSt;
	std::uint8_t PWL_WinCurrentPos_FLWinPst;
	std::uint8_t PWL_WinCurrentPos_FRWinPst;
	std::uint8_t PWL_WinCurrentPos_RLWinPst;
	std::uint8_t PWL_WinCurrentPos_RRWinPst;
	std::uint8_t UMM_DriverSeatSt;
	std::uint8_t UMM_FrontPassengerSeatSt;
	std::uint8_t IPS_OBCModeSt;
	std::uint64_t VCU_OTAGeneratingSt;
/*
	BDCOTA2() {}
	~BDCOTA2() {}
	BDCOTA2(const std::uint8_t _IPS_DCDCModeSt,const std::uint8_t _DCDC_ModeSt,const std::uint8_t _BMC_DCUBattSt,const std::uint64_t _BMS_DCUBattSt,const std::uint16_t _BCS_VehSpd,const std::uint8_t _BCS_VehSpdVD,const std::uint8_t _VMM_VehModeSt,const std::uint8_t _VMM_OTAModeSt,const std::uint8_t _UMM_UsageModeSt,const std::uint8_t _EBST_SOC,const std::uint8_t _EBST_SOC_STATE,const std::uint8_t _EBSF_SOC,const std::uint8_t _EBSF_SOC_STATE,const std::uint16_t _EBSF_BattVolt,const std::uint16_t _EBST_BattVolt,const std::uint64_t _BMS_BattSocDisp,const std::uint16_t _BMS_TEL_BattSocDisp,const std::uint8_t _VCU_BMS_BattSocDisp,const std::uint8_t _ATWS_ATWSSt,const std::uint8_t _VCU_CrntGearLvl,const std::uint8_t _BMC_HVBattSt,const std::uint8_t _BMS_HVBattSt,const std::uint8_t _PWL_WinCurrentPos_FLWinPst,const std::uint8_t _PWL_WinCurrentPos_FRWinPst,const std::uint8_t _PWL_WinCurrentPos_RLWinPst,const std::uint8_t _PWL_WinCurrentPos_RRWinPst,const std::uint8_t _UMM_DriverSeatSt,const std::uint8_t _UMM_FrontPassengerSeatSt,const std::uint8_t _IPS_OBCModeSt,const std::uint64_t _VCU_OTAGeneratingSt):IPS_DCDCModeSt(_IPS_DCDCModeSt),DCDC_ModeSt(_DCDC_ModeSt),BMC_DCUBattSt(_BMC_DCUBattSt),BMS_DCUBattSt(_BMS_DCUBattSt),BCS_VehSpd(_BCS_VehSpd),BCS_VehSpdVD(_BCS_VehSpdVD),VMM_VehModeSt(_VMM_VehModeSt),VMM_OTAModeSt(_VMM_OTAModeSt),UMM_UsageModeSt(_UMM_UsageModeSt),EBST_SOC(_EBST_SOC),EBST_SOC_STATE(_EBST_SOC_STATE),EBSF_SOC(_EBSF_SOC),EBSF_SOC_STATE(_EBSF_SOC_STATE),EBSF_BattVolt(_EBSF_BattVolt),EBST_BattVolt(_EBST_BattVolt),BMS_BattSocDisp(_BMS_BattSocDisp),BMS_TEL_BattSocDisp(_BMS_TEL_BattSocDisp),VCU_BMS_BattSocDisp(_VCU_BMS_BattSocDisp),ATWS_ATWSSt(_ATWS_ATWSSt),VCU_CrntGearLvl(_VCU_CrntGearLvl),BMC_HVBattSt(_BMC_HVBattSt),BMS_HVBattSt(_BMS_HVBattSt),PWL_WinCurrentPos_FLWinPst(_PWL_WinCurrentPos_FLWinPst),PWL_WinCurrentPos_FRWinPst(_PWL_WinCurrentPos_FRWinPst),PWL_WinCurrentPos_RLWinPst(_PWL_WinCurrentPos_RLWinPst),PWL_WinCurrentPos_RRWinPst(_PWL_WinCurrentPos_RRWinPst),UMM_DriverSeatSt(_UMM_DriverSeatSt),UMM_FrontPassengerSeatSt(_UMM_FrontPassengerSeatSt),IPS_OBCModeSt(_IPS_OBCModeSt),VCU_OTAGeneratingSt(_VCU_OTAGeneratingSt) {}
	BDCOTA2(const BDCOTA2 &_x){
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		BMC_DCUBattSt = _x.BMC_DCUBattSt;
		BMS_DCUBattSt = _x.BMS_DCUBattSt;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		EBST_SOC = _x.EBST_SOC;
		EBST_SOC_STATE = _x.EBST_SOC_STATE;
		EBSF_SOC = _x.EBSF_SOC;
		EBSF_SOC_STATE = _x.EBSF_SOC_STATE;
		EBSF_BattVolt = _x.EBSF_BattVolt;
		EBST_BattVolt = _x.EBST_BattVolt;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		BMS_TEL_BattSocDisp = _x.BMS_TEL_BattSocDisp;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		ATWS_ATWSSt = _x.ATWS_ATWSSt;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		BMC_HVBattSt = _x.BMC_HVBattSt;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
		UMM_DriverSeatSt = _x.UMM_DriverSeatSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		VCU_OTAGeneratingSt = _x.VCU_OTAGeneratingSt;
	}
	BDCOTA2(BDCOTA2 &&_x){
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		BMC_DCUBattSt = std::move(_x.BMC_DCUBattSt);
		BMS_DCUBattSt = std::move(_x.BMS_DCUBattSt);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		EBST_SOC = std::move(_x.EBST_SOC);
		EBST_SOC_STATE = std::move(_x.EBST_SOC_STATE);
		EBSF_SOC = std::move(_x.EBSF_SOC);
		EBSF_SOC_STATE = std::move(_x.EBSF_SOC_STATE);
		EBSF_BattVolt = std::move(_x.EBSF_BattVolt);
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		BMS_TEL_BattSocDisp = std::move(_x.BMS_TEL_BattSocDisp);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		ATWS_ATWSSt = std::move(_x.ATWS_ATWSSt);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		BMC_HVBattSt = std::move(_x.BMC_HVBattSt);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
		UMM_DriverSeatSt = std::move(_x.UMM_DriverSeatSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		VCU_OTAGeneratingSt = std::move(_x.VCU_OTAGeneratingSt);
	}
	BDCOTA2& operator=(const BDCOTA2 &_x){
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		BMC_DCUBattSt = _x.BMC_DCUBattSt;
		BMS_DCUBattSt = _x.BMS_DCUBattSt;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		EBST_SOC = _x.EBST_SOC;
		EBST_SOC_STATE = _x.EBST_SOC_STATE;
		EBSF_SOC = _x.EBSF_SOC;
		EBSF_SOC_STATE = _x.EBSF_SOC_STATE;
		EBSF_BattVolt = _x.EBSF_BattVolt;
		EBST_BattVolt = _x.EBST_BattVolt;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		BMS_TEL_BattSocDisp = _x.BMS_TEL_BattSocDisp;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		ATWS_ATWSSt = _x.ATWS_ATWSSt;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		BMC_HVBattSt = _x.BMC_HVBattSt;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
		UMM_DriverSeatSt = _x.UMM_DriverSeatSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		VCU_OTAGeneratingSt = _x.VCU_OTAGeneratingSt;
		return *this;
	}
	BDCOTA2& operator=(BDCOTA2 &&_x){
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		BMC_DCUBattSt = std::move(_x.BMC_DCUBattSt);
		BMS_DCUBattSt = std::move(_x.BMS_DCUBattSt);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		EBST_SOC = std::move(_x.EBST_SOC);
		EBST_SOC_STATE = std::move(_x.EBST_SOC_STATE);
		EBSF_SOC = std::move(_x.EBSF_SOC);
		EBSF_SOC_STATE = std::move(_x.EBSF_SOC_STATE);
		EBSF_BattVolt = std::move(_x.EBSF_BattVolt);
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		BMS_TEL_BattSocDisp = std::move(_x.BMS_TEL_BattSocDisp);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		ATWS_ATWSSt = std::move(_x.ATWS_ATWSSt);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		BMC_HVBattSt = std::move(_x.BMC_HVBattSt);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
		UMM_DriverSeatSt = std::move(_x.UMM_DriverSeatSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		VCU_OTAGeneratingSt = std::move(_x.VCU_OTAGeneratingSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCModeSt);
		fun(DCDC_ModeSt);
		fun(BMC_DCUBattSt);
		fun(BMS_DCUBattSt);
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(VMM_VehModeSt);
		fun(VMM_OTAModeSt);
		fun(UMM_UsageModeSt);
		fun(EBST_SOC);
		fun(EBST_SOC_STATE);
		fun(EBSF_SOC);
		fun(EBSF_SOC_STATE);
		fun(EBSF_BattVolt);
		fun(EBST_BattVolt);
		fun(BMS_BattSocDisp);
		fun(BMS_TEL_BattSocDisp);
		fun(VCU_BMS_BattSocDisp);
		fun(ATWS_ATWSSt);
		fun(VCU_CrntGearLvl);
		fun(BMC_HVBattSt);
		fun(BMS_HVBattSt);
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
		fun(UMM_DriverSeatSt);
		fun(UMM_FrontPassengerSeatSt);
		fun(IPS_OBCModeSt);
		fun(VCU_OTAGeneratingSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCModeSt);
		fun(DCDC_ModeSt);
		fun(BMC_DCUBattSt);
		fun(BMS_DCUBattSt);
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(VMM_VehModeSt);
		fun(VMM_OTAModeSt);
		fun(UMM_UsageModeSt);
		fun(EBST_SOC);
		fun(EBST_SOC_STATE);
		fun(EBSF_SOC);
		fun(EBSF_SOC_STATE);
		fun(EBSF_BattVolt);
		fun(EBST_BattVolt);
		fun(BMS_BattSocDisp);
		fun(BMS_TEL_BattSocDisp);
		fun(VCU_BMS_BattSocDisp);
		fun(ATWS_ATWSSt);
		fun(VCU_CrntGearLvl);
		fun(BMC_HVBattSt);
		fun(BMS_HVBattSt);
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
		fun(UMM_DriverSeatSt);
		fun(UMM_FrontPassengerSeatSt);
		fun(IPS_OBCModeSt);
		fun(VCU_OTAGeneratingSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCModeSt);
		fun << (DCDC_ModeSt);
		fun << (BMC_DCUBattSt);
		fun << (BMS_DCUBattSt);
		fun << (BCS_VehSpd);
		fun << (BCS_VehSpdVD);
		fun << (VMM_VehModeSt);
		fun << (VMM_OTAModeSt);
		fun << (UMM_UsageModeSt);
		fun << (EBST_SOC);
		fun << (EBST_SOC_STATE);
		fun << (EBSF_SOC);
		fun << (EBSF_SOC_STATE);
		fun << (EBSF_BattVolt);
		fun << (EBST_BattVolt);
		fun << (BMS_BattSocDisp);
		fun << (BMS_TEL_BattSocDisp);
		fun << (VCU_BMS_BattSocDisp);
		fun << (ATWS_ATWSSt);
		fun << (VCU_CrntGearLvl);
		fun << (BMC_HVBattSt);
		fun << (BMS_HVBattSt);
		fun << (PWL_WinCurrentPos_FLWinPst);
		fun << (PWL_WinCurrentPos_FRWinPst);
		fun << (PWL_WinCurrentPos_RLWinPst);
		fun << (PWL_WinCurrentPos_RRWinPst);
		fun << (UMM_DriverSeatSt);
		fun << (UMM_FrontPassengerSeatSt);
		fun << (IPS_OBCModeSt);
		fun << (VCU_OTAGeneratingSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCModeSt);
		fun >> (DCDC_ModeSt);
		fun >> (BMC_DCUBattSt);
		fun >> (BMS_DCUBattSt);
		fun >> (BCS_VehSpd);
		fun >> (BCS_VehSpdVD);
		fun >> (VMM_VehModeSt);
		fun >> (VMM_OTAModeSt);
		fun >> (UMM_UsageModeSt);
		fun >> (EBST_SOC);
		fun >> (EBST_SOC_STATE);
		fun >> (EBSF_SOC);
		fun >> (EBSF_SOC_STATE);
		fun >> (EBSF_BattVolt);
		fun >> (EBST_BattVolt);
		fun >> (BMS_BattSocDisp);
		fun >> (BMS_TEL_BattSocDisp);
		fun >> (VCU_BMS_BattSocDisp);
		fun >> (ATWS_ATWSSt);
		fun >> (VCU_CrntGearLvl);
		fun >> (BMC_HVBattSt);
		fun >> (BMS_HVBattSt);
		fun >> (PWL_WinCurrentPos_FLWinPst);
		fun >> (PWL_WinCurrentPos_FRWinPst);
		fun >> (PWL_WinCurrentPos_RLWinPst);
		fun >> (PWL_WinCurrentPos_RRWinPst);
		fun >> (UMM_DriverSeatSt);
		fun >> (UMM_FrontPassengerSeatSt);
		fun >> (IPS_OBCModeSt);
		fun >> (VCU_OTAGeneratingSt);
	}
};

#endif //____BDCOTA2_H__
