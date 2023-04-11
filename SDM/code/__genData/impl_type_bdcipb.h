#ifndef ____BDCIPB_H__
#define ____BDCIPB_H__


#include "cstdint"






struct BDCIPB {
public:
	std::uint16_t IPB_SimulatorPressure;
	std::uint16_t IPB_PlungerPressure;
	std::uint16_t IPB_InputRodStroke;
	std::uint8_t IPB_BrakePedalSt;
	std::uint8_t IPB_FWAWarning;
	std::uint8_t IPB_BrakeFluidWarning;
	std::uint8_t IPB_TwoFootDrivWarning;
	std::uint8_t IPDS_EnablePowerSup;
	std::uint8_t EPB_SwitchSt;
	std::uint8_t EPB_SysSt;
	std::uint8_t EPB_FailSt;
	std::uint8_t EPB_ReClampRequestToBCS;
	std::uint8_t SRS_DriverSeatBeltSt;
	std::uint8_t VCU_EMS_AccPedalActPst;
	std::uint8_t VCU_VehActDrvTorq;
/*
	BDCIPB() {}
	~BDCIPB() {}
	BDCIPB(const std::uint16_t _IPB_SimulatorPressure,const std::uint16_t _IPB_PlungerPressure,const std::uint16_t _IPB_InputRodStroke,const std::uint8_t _IPB_BrakePedalSt,const std::uint8_t _IPB_FWAWarning,const std::uint8_t _IPB_BrakeFluidWarning,const std::uint8_t _IPB_TwoFootDrivWarning,const std::uint8_t _IPDS_EnablePowerSup,const std::uint8_t _EPB_SwitchSt,const std::uint8_t _EPB_SysSt,const std::uint8_t _EPB_FailSt,const std::uint8_t _EPB_ReClampRequestToBCS,const std::uint8_t _SRS_DriverSeatBeltSt,const std::uint8_t _VCU_EMS_AccPedalActPst,const std::uint8_t _VCU_VehActDrvTorq):IPB_SimulatorPressure(_IPB_SimulatorPressure),IPB_PlungerPressure(_IPB_PlungerPressure),IPB_InputRodStroke(_IPB_InputRodStroke),IPB_BrakePedalSt(_IPB_BrakePedalSt),IPB_FWAWarning(_IPB_FWAWarning),IPB_BrakeFluidWarning(_IPB_BrakeFluidWarning),IPB_TwoFootDrivWarning(_IPB_TwoFootDrivWarning),IPDS_EnablePowerSup(_IPDS_EnablePowerSup),EPB_SwitchSt(_EPB_SwitchSt),EPB_SysSt(_EPB_SysSt),EPB_FailSt(_EPB_FailSt),EPB_ReClampRequestToBCS(_EPB_ReClampRequestToBCS),SRS_DriverSeatBeltSt(_SRS_DriverSeatBeltSt),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst),VCU_VehActDrvTorq(_VCU_VehActDrvTorq) {}
	BDCIPB(const BDCIPB &_x){
		IPB_SimulatorPressure = _x.IPB_SimulatorPressure;
		IPB_PlungerPressure = _x.IPB_PlungerPressure;
		IPB_InputRodStroke = _x.IPB_InputRodStroke;
		IPB_BrakePedalSt = _x.IPB_BrakePedalSt;
		IPB_FWAWarning = _x.IPB_FWAWarning;
		IPB_BrakeFluidWarning = _x.IPB_BrakeFluidWarning;
		IPB_TwoFootDrivWarning = _x.IPB_TwoFootDrivWarning;
		IPDS_EnablePowerSup = _x.IPDS_EnablePowerSup;
		EPB_SwitchSt = _x.EPB_SwitchSt;
		EPB_SysSt = _x.EPB_SysSt;
		EPB_FailSt = _x.EPB_FailSt;
		EPB_ReClampRequestToBCS = _x.EPB_ReClampRequestToBCS;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_VehActDrvTorq = _x.VCU_VehActDrvTorq;
	}
	BDCIPB(BDCIPB &&_x){
		IPB_SimulatorPressure = std::move(_x.IPB_SimulatorPressure);
		IPB_PlungerPressure = std::move(_x.IPB_PlungerPressure);
		IPB_InputRodStroke = std::move(_x.IPB_InputRodStroke);
		IPB_BrakePedalSt = std::move(_x.IPB_BrakePedalSt);
		IPB_FWAWarning = std::move(_x.IPB_FWAWarning);
		IPB_BrakeFluidWarning = std::move(_x.IPB_BrakeFluidWarning);
		IPB_TwoFootDrivWarning = std::move(_x.IPB_TwoFootDrivWarning);
		IPDS_EnablePowerSup = std::move(_x.IPDS_EnablePowerSup);
		EPB_SwitchSt = std::move(_x.EPB_SwitchSt);
		EPB_SysSt = std::move(_x.EPB_SysSt);
		EPB_FailSt = std::move(_x.EPB_FailSt);
		EPB_ReClampRequestToBCS = std::move(_x.EPB_ReClampRequestToBCS);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_VehActDrvTorq = std::move(_x.VCU_VehActDrvTorq);
	}
	BDCIPB& operator=(const BDCIPB &_x){
		IPB_SimulatorPressure = _x.IPB_SimulatorPressure;
		IPB_PlungerPressure = _x.IPB_PlungerPressure;
		IPB_InputRodStroke = _x.IPB_InputRodStroke;
		IPB_BrakePedalSt = _x.IPB_BrakePedalSt;
		IPB_FWAWarning = _x.IPB_FWAWarning;
		IPB_BrakeFluidWarning = _x.IPB_BrakeFluidWarning;
		IPB_TwoFootDrivWarning = _x.IPB_TwoFootDrivWarning;
		IPDS_EnablePowerSup = _x.IPDS_EnablePowerSup;
		EPB_SwitchSt = _x.EPB_SwitchSt;
		EPB_SysSt = _x.EPB_SysSt;
		EPB_FailSt = _x.EPB_FailSt;
		EPB_ReClampRequestToBCS = _x.EPB_ReClampRequestToBCS;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_VehActDrvTorq = _x.VCU_VehActDrvTorq;
		return *this;
	}
	BDCIPB& operator=(BDCIPB &&_x){
		IPB_SimulatorPressure = std::move(_x.IPB_SimulatorPressure);
		IPB_PlungerPressure = std::move(_x.IPB_PlungerPressure);
		IPB_InputRodStroke = std::move(_x.IPB_InputRodStroke);
		IPB_BrakePedalSt = std::move(_x.IPB_BrakePedalSt);
		IPB_FWAWarning = std::move(_x.IPB_FWAWarning);
		IPB_BrakeFluidWarning = std::move(_x.IPB_BrakeFluidWarning);
		IPB_TwoFootDrivWarning = std::move(_x.IPB_TwoFootDrivWarning);
		IPDS_EnablePowerSup = std::move(_x.IPDS_EnablePowerSup);
		EPB_SwitchSt = std::move(_x.EPB_SwitchSt);
		EPB_SysSt = std::move(_x.EPB_SysSt);
		EPB_FailSt = std::move(_x.EPB_FailSt);
		EPB_ReClampRequestToBCS = std::move(_x.EPB_ReClampRequestToBCS);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_VehActDrvTorq = std::move(_x.VCU_VehActDrvTorq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPB_SimulatorPressure);
		fun(IPB_PlungerPressure);
		fun(IPB_InputRodStroke);
		fun(IPB_BrakePedalSt);
		fun(IPB_FWAWarning);
		fun(IPB_BrakeFluidWarning);
		fun(IPB_TwoFootDrivWarning);
		fun(IPDS_EnablePowerSup);
		fun(EPB_SwitchSt);
		fun(EPB_SysSt);
		fun(EPB_FailSt);
		fun(EPB_ReClampRequestToBCS);
		fun(SRS_DriverSeatBeltSt);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_VehActDrvTorq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPB_SimulatorPressure);
		fun(IPB_PlungerPressure);
		fun(IPB_InputRodStroke);
		fun(IPB_BrakePedalSt);
		fun(IPB_FWAWarning);
		fun(IPB_BrakeFluidWarning);
		fun(IPB_TwoFootDrivWarning);
		fun(IPDS_EnablePowerSup);
		fun(EPB_SwitchSt);
		fun(EPB_SysSt);
		fun(EPB_FailSt);
		fun(EPB_ReClampRequestToBCS);
		fun(SRS_DriverSeatBeltSt);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_VehActDrvTorq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPB_SimulatorPressure);
		fun << (IPB_PlungerPressure);
		fun << (IPB_InputRodStroke);
		fun << (IPB_BrakePedalSt);
		fun << (IPB_FWAWarning);
		fun << (IPB_BrakeFluidWarning);
		fun << (IPB_TwoFootDrivWarning);
		fun << (IPDS_EnablePowerSup);
		fun << (EPB_SwitchSt);
		fun << (EPB_SysSt);
		fun << (EPB_FailSt);
		fun << (EPB_ReClampRequestToBCS);
		fun << (SRS_DriverSeatBeltSt);
		fun << (VCU_EMS_AccPedalActPst);
		fun << (VCU_VehActDrvTorq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPB_SimulatorPressure);
		fun >> (IPB_PlungerPressure);
		fun >> (IPB_InputRodStroke);
		fun >> (IPB_BrakePedalSt);
		fun >> (IPB_FWAWarning);
		fun >> (IPB_BrakeFluidWarning);
		fun >> (IPB_TwoFootDrivWarning);
		fun >> (IPDS_EnablePowerSup);
		fun >> (EPB_SwitchSt);
		fun >> (EPB_SysSt);
		fun >> (EPB_FailSt);
		fun >> (EPB_ReClampRequestToBCS);
		fun >> (SRS_DriverSeatBeltSt);
		fun >> (VCU_EMS_AccPedalActPst);
		fun >> (VCU_VehActDrvTorq);
	}
};

#endif //____BDCIPB_H__
