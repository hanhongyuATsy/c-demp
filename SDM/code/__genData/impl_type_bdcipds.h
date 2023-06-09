#ifndef ____BDCIPDS_H__
#define ____BDCIPDS_H__


#include "cstdint"






struct BDCIPDS {
public:
	std::uint8_t IPDS_FLLampCtlUnitPowerSup;
	std::uint8_t IPDS_FRLampCtlUnitPowerSup;
	std::uint8_t IPDS_HVHPowerSup;
	std::uint8_t IPDS_IPUEOP1PowerSup;
	std::uint8_t IPDS_IPUEOP2PowerSup;
	std::uint8_t IPDS_IPUPowerSup;
	std::uint8_t IPDS_FrontRadarPowerSup;
	std::uint8_t IPDS_FLRadarPowerSup;
	std::uint8_t IPDS_FRRadarPowerSup;
	std::uint8_t IPDS_AGSPowerSup;
	std::uint8_t IPDS_ECPPowerSup;
	std::uint8_t IPDS_AVASPowerSup;
	std::uint8_t IPDS_BrakeSwPowerSup;
	std::uint8_t IPDS_AQSPowerSup;
	std::uint8_t IPDS_DriverLumbarMotorPowerSup;
	std::uint8_t IPDS_RoofDevicePowerSup;
	std::uint8_t IPDS_ETCPowerSup;
	std::uint8_t IPDS_ClusterDisplayPowerSup;
	std::uint8_t IPDS_PassDisplayPowerSup;
	std::uint8_t IPDS_IDCDisplayPowerSup;
	std::uint8_t IPDS_CigarLigterPowerSup;
	std::uint8_t IPDS_HDMapPowerSup;
	std::uint8_t IPDS_Lidar1PowerSup;
	std::uint8_t IPDS_Lidar2PowerSup;
	std::uint8_t IPDS_Lidar3PowerSup;
	std::uint8_t IPDS_HODPowerSup;
	std::uint8_t IPDS_ESCLPowerSup;
	std::uint8_t IPDS_ISRVMPowerSup;
	std::uint8_t IPDS_SRSECUPowerSup;
	std::uint8_t IPDS_KL15L1PowerSup;
	std::uint8_t IPDS_KL15L2PowerSup;
	std::uint8_t IPDS_HUDPowerSup;
	std::uint8_t IPDS_ClusterPowerSup;
	std::uint8_t IPDS_WCMPowerSup;
	std::uint8_t IPDS_FrontUSBChargerPowerSup;
	std::uint8_t IPDS_PM25PowerSup;
	std::uint8_t IPDS_PassLumbarMotorPowerSup;
	std::uint8_t IPDS_FrontBlowerPowerSup;
	std::uint8_t IPDS_UWBSensorPowerSup;
	std::uint8_t IPDS_KL15R1PowerSup;
	std::uint8_t IPDS_KL15R2PowerSup;
	std::uint8_t IPDS_RMPowerSup;
	std::uint8_t IPDS_RearCtrlPanelPowerSup;
	std::uint8_t IPDS_Rear12VPowerSup;
	std::uint8_t IPDS_InverterPowerSup;
	std::uint8_t IPDS_RearMotorPowerSup;
	std::uint8_t IPDS_AMPPowerSup;
	std::uint8_t IPDS_RearEOPPowerSup;
	std::uint8_t IPDS_RearRadarPowerSup;
	std::uint8_t IPDS_RLALampCtlUnitPowerSup;
	std::uint8_t IPDS_RRALampCtlUnitPowerSup;
	std::uint8_t IPDS_RLBLampCtlUnitPowerSup;
	std::uint8_t IPDS_RRBLampCtlUnitPowerSup;
	std::uint8_t IPDS_EXVPowerSup;
	std::uint8_t IPDS_PASPowerSup;
	std::uint8_t IPDS_GSMPowerSup;
	std::uint8_t IPDS_DSMPowerSup;
	std::uint8_t IPDS_KL15T2PowerSup;
	std::uint8_t IPDS_KL15T1PowerSup;
	std::uint8_t IPDS_KL15F1PowerSup;
	std::uint8_t IPDS_EnablePowerSup;
/*
	BDCIPDS() {}
	~BDCIPDS() {}
	BDCIPDS(const std::uint8_t _IPDS_FLLampCtlUnitPowerSup,const std::uint8_t _IPDS_FRLampCtlUnitPowerSup,const std::uint8_t _IPDS_HVHPowerSup,const std::uint8_t _IPDS_IPUEOP1PowerSup,const std::uint8_t _IPDS_IPUEOP2PowerSup,const std::uint8_t _IPDS_IPUPowerSup,const std::uint8_t _IPDS_FrontRadarPowerSup,const std::uint8_t _IPDS_FLRadarPowerSup,const std::uint8_t _IPDS_FRRadarPowerSup,const std::uint8_t _IPDS_AGSPowerSup,const std::uint8_t _IPDS_ECPPowerSup,const std::uint8_t _IPDS_AVASPowerSup,const std::uint8_t _IPDS_BrakeSwPowerSup,const std::uint8_t _IPDS_AQSPowerSup,const std::uint8_t _IPDS_DriverLumbarMotorPowerSup,const std::uint8_t _IPDS_RoofDevicePowerSup,const std::uint8_t _IPDS_ETCPowerSup,const std::uint8_t _IPDS_ClusterDisplayPowerSup,const std::uint8_t _IPDS_PassDisplayPowerSup,const std::uint8_t _IPDS_IDCDisplayPowerSup,const std::uint8_t _IPDS_CigarLigterPowerSup,const std::uint8_t _IPDS_HDMapPowerSup,const std::uint8_t _IPDS_Lidar1PowerSup,const std::uint8_t _IPDS_Lidar2PowerSup,const std::uint8_t _IPDS_Lidar3PowerSup,const std::uint8_t _IPDS_HODPowerSup,const std::uint8_t _IPDS_ESCLPowerSup,const std::uint8_t _IPDS_ISRVMPowerSup,const std::uint8_t _IPDS_SRSECUPowerSup,const std::uint8_t _IPDS_KL15L1PowerSup,const std::uint8_t _IPDS_KL15L2PowerSup,const std::uint8_t _IPDS_HUDPowerSup,const std::uint8_t _IPDS_ClusterPowerSup,const std::uint8_t _IPDS_WCMPowerSup,const std::uint8_t _IPDS_FrontUSBChargerPowerSup,const std::uint8_t _IPDS_PM25PowerSup,const std::uint8_t _IPDS_PassLumbarMotorPowerSup,const std::uint8_t _IPDS_FrontBlowerPowerSup,const std::uint8_t _IPDS_UWBSensorPowerSup,const std::uint8_t _IPDS_KL15R1PowerSup,const std::uint8_t _IPDS_KL15R2PowerSup,const std::uint8_t _IPDS_RMPowerSup,const std::uint8_t _IPDS_RearCtrlPanelPowerSup,const std::uint8_t _IPDS_Rear12VPowerSup,const std::uint8_t _IPDS_InverterPowerSup,const std::uint8_t _IPDS_RearMotorPowerSup,const std::uint8_t _IPDS_AMPPowerSup,const std::uint8_t _IPDS_RearEOPPowerSup,const std::uint8_t _IPDS_RearRadarPowerSup,const std::uint8_t _IPDS_RLALampCtlUnitPowerSup,const std::uint8_t _IPDS_RRALampCtlUnitPowerSup,const std::uint8_t _IPDS_RLBLampCtlUnitPowerSup,const std::uint8_t _IPDS_RRBLampCtlUnitPowerSup,const std::uint8_t _IPDS_EXVPowerSup,const std::uint8_t _IPDS_PASPowerSup,const std::uint8_t _IPDS_GSMPowerSup,const std::uint8_t _IPDS_DSMPowerSup,const std::uint8_t _IPDS_KL15T2PowerSup,const std::uint8_t _IPDS_KL15T1PowerSup,const std::uint8_t _IPDS_KL15F1PowerSup,const std::uint8_t _IPDS_EnablePowerSup):IPDS_FLLampCtlUnitPowerSup(_IPDS_FLLampCtlUnitPowerSup),IPDS_FRLampCtlUnitPowerSup(_IPDS_FRLampCtlUnitPowerSup),IPDS_HVHPowerSup(_IPDS_HVHPowerSup),IPDS_IPUEOP1PowerSup(_IPDS_IPUEOP1PowerSup),IPDS_IPUEOP2PowerSup(_IPDS_IPUEOP2PowerSup),IPDS_IPUPowerSup(_IPDS_IPUPowerSup),IPDS_FrontRadarPowerSup(_IPDS_FrontRadarPowerSup),IPDS_FLRadarPowerSup(_IPDS_FLRadarPowerSup),IPDS_FRRadarPowerSup(_IPDS_FRRadarPowerSup),IPDS_AGSPowerSup(_IPDS_AGSPowerSup),IPDS_ECPPowerSup(_IPDS_ECPPowerSup),IPDS_AVASPowerSup(_IPDS_AVASPowerSup),IPDS_BrakeSwPowerSup(_IPDS_BrakeSwPowerSup),IPDS_AQSPowerSup(_IPDS_AQSPowerSup),IPDS_DriverLumbarMotorPowerSup(_IPDS_DriverLumbarMotorPowerSup),IPDS_RoofDevicePowerSup(_IPDS_RoofDevicePowerSup),IPDS_ETCPowerSup(_IPDS_ETCPowerSup),IPDS_ClusterDisplayPowerSup(_IPDS_ClusterDisplayPowerSup),IPDS_PassDisplayPowerSup(_IPDS_PassDisplayPowerSup),IPDS_IDCDisplayPowerSup(_IPDS_IDCDisplayPowerSup),IPDS_CigarLigterPowerSup(_IPDS_CigarLigterPowerSup),IPDS_HDMapPowerSup(_IPDS_HDMapPowerSup),IPDS_Lidar1PowerSup(_IPDS_Lidar1PowerSup),IPDS_Lidar2PowerSup(_IPDS_Lidar2PowerSup),IPDS_Lidar3PowerSup(_IPDS_Lidar3PowerSup),IPDS_HODPowerSup(_IPDS_HODPowerSup),IPDS_ESCLPowerSup(_IPDS_ESCLPowerSup),IPDS_ISRVMPowerSup(_IPDS_ISRVMPowerSup),IPDS_SRSECUPowerSup(_IPDS_SRSECUPowerSup),IPDS_KL15L1PowerSup(_IPDS_KL15L1PowerSup),IPDS_KL15L2PowerSup(_IPDS_KL15L2PowerSup),IPDS_HUDPowerSup(_IPDS_HUDPowerSup),IPDS_ClusterPowerSup(_IPDS_ClusterPowerSup),IPDS_WCMPowerSup(_IPDS_WCMPowerSup),IPDS_FrontUSBChargerPowerSup(_IPDS_FrontUSBChargerPowerSup),IPDS_PM25PowerSup(_IPDS_PM25PowerSup),IPDS_PassLumbarMotorPowerSup(_IPDS_PassLumbarMotorPowerSup),IPDS_FrontBlowerPowerSup(_IPDS_FrontBlowerPowerSup),IPDS_UWBSensorPowerSup(_IPDS_UWBSensorPowerSup),IPDS_KL15R1PowerSup(_IPDS_KL15R1PowerSup),IPDS_KL15R2PowerSup(_IPDS_KL15R2PowerSup),IPDS_RMPowerSup(_IPDS_RMPowerSup),IPDS_RearCtrlPanelPowerSup(_IPDS_RearCtrlPanelPowerSup),IPDS_Rear12VPowerSup(_IPDS_Rear12VPowerSup),IPDS_InverterPowerSup(_IPDS_InverterPowerSup),IPDS_RearMotorPowerSup(_IPDS_RearMotorPowerSup),IPDS_AMPPowerSup(_IPDS_AMPPowerSup),IPDS_RearEOPPowerSup(_IPDS_RearEOPPowerSup),IPDS_RearRadarPowerSup(_IPDS_RearRadarPowerSup),IPDS_RLALampCtlUnitPowerSup(_IPDS_RLALampCtlUnitPowerSup),IPDS_RRALampCtlUnitPowerSup(_IPDS_RRALampCtlUnitPowerSup),IPDS_RLBLampCtlUnitPowerSup(_IPDS_RLBLampCtlUnitPowerSup),IPDS_RRBLampCtlUnitPowerSup(_IPDS_RRBLampCtlUnitPowerSup),IPDS_EXVPowerSup(_IPDS_EXVPowerSup),IPDS_PASPowerSup(_IPDS_PASPowerSup),IPDS_GSMPowerSup(_IPDS_GSMPowerSup),IPDS_DSMPowerSup(_IPDS_DSMPowerSup),IPDS_KL15T2PowerSup(_IPDS_KL15T2PowerSup),IPDS_KL15T1PowerSup(_IPDS_KL15T1PowerSup),IPDS_KL15F1PowerSup(_IPDS_KL15F1PowerSup),IPDS_EnablePowerSup(_IPDS_EnablePowerSup) {}
	BDCIPDS(const BDCIPDS &_x){
		IPDS_FLLampCtlUnitPowerSup = _x.IPDS_FLLampCtlUnitPowerSup;
		IPDS_FRLampCtlUnitPowerSup = _x.IPDS_FRLampCtlUnitPowerSup;
		IPDS_HVHPowerSup = _x.IPDS_HVHPowerSup;
		IPDS_IPUEOP1PowerSup = _x.IPDS_IPUEOP1PowerSup;
		IPDS_IPUEOP2PowerSup = _x.IPDS_IPUEOP2PowerSup;
		IPDS_IPUPowerSup = _x.IPDS_IPUPowerSup;
		IPDS_FrontRadarPowerSup = _x.IPDS_FrontRadarPowerSup;
		IPDS_FLRadarPowerSup = _x.IPDS_FLRadarPowerSup;
		IPDS_FRRadarPowerSup = _x.IPDS_FRRadarPowerSup;
		IPDS_AGSPowerSup = _x.IPDS_AGSPowerSup;
		IPDS_ECPPowerSup = _x.IPDS_ECPPowerSup;
		IPDS_AVASPowerSup = _x.IPDS_AVASPowerSup;
		IPDS_BrakeSwPowerSup = _x.IPDS_BrakeSwPowerSup;
		IPDS_AQSPowerSup = _x.IPDS_AQSPowerSup;
		IPDS_DriverLumbarMotorPowerSup = _x.IPDS_DriverLumbarMotorPowerSup;
		IPDS_RoofDevicePowerSup = _x.IPDS_RoofDevicePowerSup;
		IPDS_ETCPowerSup = _x.IPDS_ETCPowerSup;
		IPDS_ClusterDisplayPowerSup = _x.IPDS_ClusterDisplayPowerSup;
		IPDS_PassDisplayPowerSup = _x.IPDS_PassDisplayPowerSup;
		IPDS_IDCDisplayPowerSup = _x.IPDS_IDCDisplayPowerSup;
		IPDS_CigarLigterPowerSup = _x.IPDS_CigarLigterPowerSup;
		IPDS_HDMapPowerSup = _x.IPDS_HDMapPowerSup;
		IPDS_Lidar1PowerSup = _x.IPDS_Lidar1PowerSup;
		IPDS_Lidar2PowerSup = _x.IPDS_Lidar2PowerSup;
		IPDS_Lidar3PowerSup = _x.IPDS_Lidar3PowerSup;
		IPDS_HODPowerSup = _x.IPDS_HODPowerSup;
		IPDS_ESCLPowerSup = _x.IPDS_ESCLPowerSup;
		IPDS_ISRVMPowerSup = _x.IPDS_ISRVMPowerSup;
		IPDS_SRSECUPowerSup = _x.IPDS_SRSECUPowerSup;
		IPDS_KL15L1PowerSup = _x.IPDS_KL15L1PowerSup;
		IPDS_KL15L2PowerSup = _x.IPDS_KL15L2PowerSup;
		IPDS_HUDPowerSup = _x.IPDS_HUDPowerSup;
		IPDS_ClusterPowerSup = _x.IPDS_ClusterPowerSup;
		IPDS_WCMPowerSup = _x.IPDS_WCMPowerSup;
		IPDS_FrontUSBChargerPowerSup = _x.IPDS_FrontUSBChargerPowerSup;
		IPDS_PM25PowerSup = _x.IPDS_PM25PowerSup;
		IPDS_PassLumbarMotorPowerSup = _x.IPDS_PassLumbarMotorPowerSup;
		IPDS_FrontBlowerPowerSup = _x.IPDS_FrontBlowerPowerSup;
		IPDS_UWBSensorPowerSup = _x.IPDS_UWBSensorPowerSup;
		IPDS_KL15R1PowerSup = _x.IPDS_KL15R1PowerSup;
		IPDS_KL15R2PowerSup = _x.IPDS_KL15R2PowerSup;
		IPDS_RMPowerSup = _x.IPDS_RMPowerSup;
		IPDS_RearCtrlPanelPowerSup = _x.IPDS_RearCtrlPanelPowerSup;
		IPDS_Rear12VPowerSup = _x.IPDS_Rear12VPowerSup;
		IPDS_InverterPowerSup = _x.IPDS_InverterPowerSup;
		IPDS_RearMotorPowerSup = _x.IPDS_RearMotorPowerSup;
		IPDS_AMPPowerSup = _x.IPDS_AMPPowerSup;
		IPDS_RearEOPPowerSup = _x.IPDS_RearEOPPowerSup;
		IPDS_RearRadarPowerSup = _x.IPDS_RearRadarPowerSup;
		IPDS_RLALampCtlUnitPowerSup = _x.IPDS_RLALampCtlUnitPowerSup;
		IPDS_RRALampCtlUnitPowerSup = _x.IPDS_RRALampCtlUnitPowerSup;
		IPDS_RLBLampCtlUnitPowerSup = _x.IPDS_RLBLampCtlUnitPowerSup;
		IPDS_RRBLampCtlUnitPowerSup = _x.IPDS_RRBLampCtlUnitPowerSup;
		IPDS_EXVPowerSup = _x.IPDS_EXVPowerSup;
		IPDS_PASPowerSup = _x.IPDS_PASPowerSup;
		IPDS_GSMPowerSup = _x.IPDS_GSMPowerSup;
		IPDS_DSMPowerSup = _x.IPDS_DSMPowerSup;
		IPDS_KL15T2PowerSup = _x.IPDS_KL15T2PowerSup;
		IPDS_KL15T1PowerSup = _x.IPDS_KL15T1PowerSup;
		IPDS_KL15F1PowerSup = _x.IPDS_KL15F1PowerSup;
		IPDS_EnablePowerSup = _x.IPDS_EnablePowerSup;
	}
	BDCIPDS(BDCIPDS &&_x){
		IPDS_FLLampCtlUnitPowerSup = std::move(_x.IPDS_FLLampCtlUnitPowerSup);
		IPDS_FRLampCtlUnitPowerSup = std::move(_x.IPDS_FRLampCtlUnitPowerSup);
		IPDS_HVHPowerSup = std::move(_x.IPDS_HVHPowerSup);
		IPDS_IPUEOP1PowerSup = std::move(_x.IPDS_IPUEOP1PowerSup);
		IPDS_IPUEOP2PowerSup = std::move(_x.IPDS_IPUEOP2PowerSup);
		IPDS_IPUPowerSup = std::move(_x.IPDS_IPUPowerSup);
		IPDS_FrontRadarPowerSup = std::move(_x.IPDS_FrontRadarPowerSup);
		IPDS_FLRadarPowerSup = std::move(_x.IPDS_FLRadarPowerSup);
		IPDS_FRRadarPowerSup = std::move(_x.IPDS_FRRadarPowerSup);
		IPDS_AGSPowerSup = std::move(_x.IPDS_AGSPowerSup);
		IPDS_ECPPowerSup = std::move(_x.IPDS_ECPPowerSup);
		IPDS_AVASPowerSup = std::move(_x.IPDS_AVASPowerSup);
		IPDS_BrakeSwPowerSup = std::move(_x.IPDS_BrakeSwPowerSup);
		IPDS_AQSPowerSup = std::move(_x.IPDS_AQSPowerSup);
		IPDS_DriverLumbarMotorPowerSup = std::move(_x.IPDS_DriverLumbarMotorPowerSup);
		IPDS_RoofDevicePowerSup = std::move(_x.IPDS_RoofDevicePowerSup);
		IPDS_ETCPowerSup = std::move(_x.IPDS_ETCPowerSup);
		IPDS_ClusterDisplayPowerSup = std::move(_x.IPDS_ClusterDisplayPowerSup);
		IPDS_PassDisplayPowerSup = std::move(_x.IPDS_PassDisplayPowerSup);
		IPDS_IDCDisplayPowerSup = std::move(_x.IPDS_IDCDisplayPowerSup);
		IPDS_CigarLigterPowerSup = std::move(_x.IPDS_CigarLigterPowerSup);
		IPDS_HDMapPowerSup = std::move(_x.IPDS_HDMapPowerSup);
		IPDS_Lidar1PowerSup = std::move(_x.IPDS_Lidar1PowerSup);
		IPDS_Lidar2PowerSup = std::move(_x.IPDS_Lidar2PowerSup);
		IPDS_Lidar3PowerSup = std::move(_x.IPDS_Lidar3PowerSup);
		IPDS_HODPowerSup = std::move(_x.IPDS_HODPowerSup);
		IPDS_ESCLPowerSup = std::move(_x.IPDS_ESCLPowerSup);
		IPDS_ISRVMPowerSup = std::move(_x.IPDS_ISRVMPowerSup);
		IPDS_SRSECUPowerSup = std::move(_x.IPDS_SRSECUPowerSup);
		IPDS_KL15L1PowerSup = std::move(_x.IPDS_KL15L1PowerSup);
		IPDS_KL15L2PowerSup = std::move(_x.IPDS_KL15L2PowerSup);
		IPDS_HUDPowerSup = std::move(_x.IPDS_HUDPowerSup);
		IPDS_ClusterPowerSup = std::move(_x.IPDS_ClusterPowerSup);
		IPDS_WCMPowerSup = std::move(_x.IPDS_WCMPowerSup);
		IPDS_FrontUSBChargerPowerSup = std::move(_x.IPDS_FrontUSBChargerPowerSup);
		IPDS_PM25PowerSup = std::move(_x.IPDS_PM25PowerSup);
		IPDS_PassLumbarMotorPowerSup = std::move(_x.IPDS_PassLumbarMotorPowerSup);
		IPDS_FrontBlowerPowerSup = std::move(_x.IPDS_FrontBlowerPowerSup);
		IPDS_UWBSensorPowerSup = std::move(_x.IPDS_UWBSensorPowerSup);
		IPDS_KL15R1PowerSup = std::move(_x.IPDS_KL15R1PowerSup);
		IPDS_KL15R2PowerSup = std::move(_x.IPDS_KL15R2PowerSup);
		IPDS_RMPowerSup = std::move(_x.IPDS_RMPowerSup);
		IPDS_RearCtrlPanelPowerSup = std::move(_x.IPDS_RearCtrlPanelPowerSup);
		IPDS_Rear12VPowerSup = std::move(_x.IPDS_Rear12VPowerSup);
		IPDS_InverterPowerSup = std::move(_x.IPDS_InverterPowerSup);
		IPDS_RearMotorPowerSup = std::move(_x.IPDS_RearMotorPowerSup);
		IPDS_AMPPowerSup = std::move(_x.IPDS_AMPPowerSup);
		IPDS_RearEOPPowerSup = std::move(_x.IPDS_RearEOPPowerSup);
		IPDS_RearRadarPowerSup = std::move(_x.IPDS_RearRadarPowerSup);
		IPDS_RLALampCtlUnitPowerSup = std::move(_x.IPDS_RLALampCtlUnitPowerSup);
		IPDS_RRALampCtlUnitPowerSup = std::move(_x.IPDS_RRALampCtlUnitPowerSup);
		IPDS_RLBLampCtlUnitPowerSup = std::move(_x.IPDS_RLBLampCtlUnitPowerSup);
		IPDS_RRBLampCtlUnitPowerSup = std::move(_x.IPDS_RRBLampCtlUnitPowerSup);
		IPDS_EXVPowerSup = std::move(_x.IPDS_EXVPowerSup);
		IPDS_PASPowerSup = std::move(_x.IPDS_PASPowerSup);
		IPDS_GSMPowerSup = std::move(_x.IPDS_GSMPowerSup);
		IPDS_DSMPowerSup = std::move(_x.IPDS_DSMPowerSup);
		IPDS_KL15T2PowerSup = std::move(_x.IPDS_KL15T2PowerSup);
		IPDS_KL15T1PowerSup = std::move(_x.IPDS_KL15T1PowerSup);
		IPDS_KL15F1PowerSup = std::move(_x.IPDS_KL15F1PowerSup);
		IPDS_EnablePowerSup = std::move(_x.IPDS_EnablePowerSup);
	}
	BDCIPDS& operator=(const BDCIPDS &_x){
		IPDS_FLLampCtlUnitPowerSup = _x.IPDS_FLLampCtlUnitPowerSup;
		IPDS_FRLampCtlUnitPowerSup = _x.IPDS_FRLampCtlUnitPowerSup;
		IPDS_HVHPowerSup = _x.IPDS_HVHPowerSup;
		IPDS_IPUEOP1PowerSup = _x.IPDS_IPUEOP1PowerSup;
		IPDS_IPUEOP2PowerSup = _x.IPDS_IPUEOP2PowerSup;
		IPDS_IPUPowerSup = _x.IPDS_IPUPowerSup;
		IPDS_FrontRadarPowerSup = _x.IPDS_FrontRadarPowerSup;
		IPDS_FLRadarPowerSup = _x.IPDS_FLRadarPowerSup;
		IPDS_FRRadarPowerSup = _x.IPDS_FRRadarPowerSup;
		IPDS_AGSPowerSup = _x.IPDS_AGSPowerSup;
		IPDS_ECPPowerSup = _x.IPDS_ECPPowerSup;
		IPDS_AVASPowerSup = _x.IPDS_AVASPowerSup;
		IPDS_BrakeSwPowerSup = _x.IPDS_BrakeSwPowerSup;
		IPDS_AQSPowerSup = _x.IPDS_AQSPowerSup;
		IPDS_DriverLumbarMotorPowerSup = _x.IPDS_DriverLumbarMotorPowerSup;
		IPDS_RoofDevicePowerSup = _x.IPDS_RoofDevicePowerSup;
		IPDS_ETCPowerSup = _x.IPDS_ETCPowerSup;
		IPDS_ClusterDisplayPowerSup = _x.IPDS_ClusterDisplayPowerSup;
		IPDS_PassDisplayPowerSup = _x.IPDS_PassDisplayPowerSup;
		IPDS_IDCDisplayPowerSup = _x.IPDS_IDCDisplayPowerSup;
		IPDS_CigarLigterPowerSup = _x.IPDS_CigarLigterPowerSup;
		IPDS_HDMapPowerSup = _x.IPDS_HDMapPowerSup;
		IPDS_Lidar1PowerSup = _x.IPDS_Lidar1PowerSup;
		IPDS_Lidar2PowerSup = _x.IPDS_Lidar2PowerSup;
		IPDS_Lidar3PowerSup = _x.IPDS_Lidar3PowerSup;
		IPDS_HODPowerSup = _x.IPDS_HODPowerSup;
		IPDS_ESCLPowerSup = _x.IPDS_ESCLPowerSup;
		IPDS_ISRVMPowerSup = _x.IPDS_ISRVMPowerSup;
		IPDS_SRSECUPowerSup = _x.IPDS_SRSECUPowerSup;
		IPDS_KL15L1PowerSup = _x.IPDS_KL15L1PowerSup;
		IPDS_KL15L2PowerSup = _x.IPDS_KL15L2PowerSup;
		IPDS_HUDPowerSup = _x.IPDS_HUDPowerSup;
		IPDS_ClusterPowerSup = _x.IPDS_ClusterPowerSup;
		IPDS_WCMPowerSup = _x.IPDS_WCMPowerSup;
		IPDS_FrontUSBChargerPowerSup = _x.IPDS_FrontUSBChargerPowerSup;
		IPDS_PM25PowerSup = _x.IPDS_PM25PowerSup;
		IPDS_PassLumbarMotorPowerSup = _x.IPDS_PassLumbarMotorPowerSup;
		IPDS_FrontBlowerPowerSup = _x.IPDS_FrontBlowerPowerSup;
		IPDS_UWBSensorPowerSup = _x.IPDS_UWBSensorPowerSup;
		IPDS_KL15R1PowerSup = _x.IPDS_KL15R1PowerSup;
		IPDS_KL15R2PowerSup = _x.IPDS_KL15R2PowerSup;
		IPDS_RMPowerSup = _x.IPDS_RMPowerSup;
		IPDS_RearCtrlPanelPowerSup = _x.IPDS_RearCtrlPanelPowerSup;
		IPDS_Rear12VPowerSup = _x.IPDS_Rear12VPowerSup;
		IPDS_InverterPowerSup = _x.IPDS_InverterPowerSup;
		IPDS_RearMotorPowerSup = _x.IPDS_RearMotorPowerSup;
		IPDS_AMPPowerSup = _x.IPDS_AMPPowerSup;
		IPDS_RearEOPPowerSup = _x.IPDS_RearEOPPowerSup;
		IPDS_RearRadarPowerSup = _x.IPDS_RearRadarPowerSup;
		IPDS_RLALampCtlUnitPowerSup = _x.IPDS_RLALampCtlUnitPowerSup;
		IPDS_RRALampCtlUnitPowerSup = _x.IPDS_RRALampCtlUnitPowerSup;
		IPDS_RLBLampCtlUnitPowerSup = _x.IPDS_RLBLampCtlUnitPowerSup;
		IPDS_RRBLampCtlUnitPowerSup = _x.IPDS_RRBLampCtlUnitPowerSup;
		IPDS_EXVPowerSup = _x.IPDS_EXVPowerSup;
		IPDS_PASPowerSup = _x.IPDS_PASPowerSup;
		IPDS_GSMPowerSup = _x.IPDS_GSMPowerSup;
		IPDS_DSMPowerSup = _x.IPDS_DSMPowerSup;
		IPDS_KL15T2PowerSup = _x.IPDS_KL15T2PowerSup;
		IPDS_KL15T1PowerSup = _x.IPDS_KL15T1PowerSup;
		IPDS_KL15F1PowerSup = _x.IPDS_KL15F1PowerSup;
		IPDS_EnablePowerSup = _x.IPDS_EnablePowerSup;
		return *this;
	}
	BDCIPDS& operator=(BDCIPDS &&_x){
		IPDS_FLLampCtlUnitPowerSup = std::move(_x.IPDS_FLLampCtlUnitPowerSup);
		IPDS_FRLampCtlUnitPowerSup = std::move(_x.IPDS_FRLampCtlUnitPowerSup);
		IPDS_HVHPowerSup = std::move(_x.IPDS_HVHPowerSup);
		IPDS_IPUEOP1PowerSup = std::move(_x.IPDS_IPUEOP1PowerSup);
		IPDS_IPUEOP2PowerSup = std::move(_x.IPDS_IPUEOP2PowerSup);
		IPDS_IPUPowerSup = std::move(_x.IPDS_IPUPowerSup);
		IPDS_FrontRadarPowerSup = std::move(_x.IPDS_FrontRadarPowerSup);
		IPDS_FLRadarPowerSup = std::move(_x.IPDS_FLRadarPowerSup);
		IPDS_FRRadarPowerSup = std::move(_x.IPDS_FRRadarPowerSup);
		IPDS_AGSPowerSup = std::move(_x.IPDS_AGSPowerSup);
		IPDS_ECPPowerSup = std::move(_x.IPDS_ECPPowerSup);
		IPDS_AVASPowerSup = std::move(_x.IPDS_AVASPowerSup);
		IPDS_BrakeSwPowerSup = std::move(_x.IPDS_BrakeSwPowerSup);
		IPDS_AQSPowerSup = std::move(_x.IPDS_AQSPowerSup);
		IPDS_DriverLumbarMotorPowerSup = std::move(_x.IPDS_DriverLumbarMotorPowerSup);
		IPDS_RoofDevicePowerSup = std::move(_x.IPDS_RoofDevicePowerSup);
		IPDS_ETCPowerSup = std::move(_x.IPDS_ETCPowerSup);
		IPDS_ClusterDisplayPowerSup = std::move(_x.IPDS_ClusterDisplayPowerSup);
		IPDS_PassDisplayPowerSup = std::move(_x.IPDS_PassDisplayPowerSup);
		IPDS_IDCDisplayPowerSup = std::move(_x.IPDS_IDCDisplayPowerSup);
		IPDS_CigarLigterPowerSup = std::move(_x.IPDS_CigarLigterPowerSup);
		IPDS_HDMapPowerSup = std::move(_x.IPDS_HDMapPowerSup);
		IPDS_Lidar1PowerSup = std::move(_x.IPDS_Lidar1PowerSup);
		IPDS_Lidar2PowerSup = std::move(_x.IPDS_Lidar2PowerSup);
		IPDS_Lidar3PowerSup = std::move(_x.IPDS_Lidar3PowerSup);
		IPDS_HODPowerSup = std::move(_x.IPDS_HODPowerSup);
		IPDS_ESCLPowerSup = std::move(_x.IPDS_ESCLPowerSup);
		IPDS_ISRVMPowerSup = std::move(_x.IPDS_ISRVMPowerSup);
		IPDS_SRSECUPowerSup = std::move(_x.IPDS_SRSECUPowerSup);
		IPDS_KL15L1PowerSup = std::move(_x.IPDS_KL15L1PowerSup);
		IPDS_KL15L2PowerSup = std::move(_x.IPDS_KL15L2PowerSup);
		IPDS_HUDPowerSup = std::move(_x.IPDS_HUDPowerSup);
		IPDS_ClusterPowerSup = std::move(_x.IPDS_ClusterPowerSup);
		IPDS_WCMPowerSup = std::move(_x.IPDS_WCMPowerSup);
		IPDS_FrontUSBChargerPowerSup = std::move(_x.IPDS_FrontUSBChargerPowerSup);
		IPDS_PM25PowerSup = std::move(_x.IPDS_PM25PowerSup);
		IPDS_PassLumbarMotorPowerSup = std::move(_x.IPDS_PassLumbarMotorPowerSup);
		IPDS_FrontBlowerPowerSup = std::move(_x.IPDS_FrontBlowerPowerSup);
		IPDS_UWBSensorPowerSup = std::move(_x.IPDS_UWBSensorPowerSup);
		IPDS_KL15R1PowerSup = std::move(_x.IPDS_KL15R1PowerSup);
		IPDS_KL15R2PowerSup = std::move(_x.IPDS_KL15R2PowerSup);
		IPDS_RMPowerSup = std::move(_x.IPDS_RMPowerSup);
		IPDS_RearCtrlPanelPowerSup = std::move(_x.IPDS_RearCtrlPanelPowerSup);
		IPDS_Rear12VPowerSup = std::move(_x.IPDS_Rear12VPowerSup);
		IPDS_InverterPowerSup = std::move(_x.IPDS_InverterPowerSup);
		IPDS_RearMotorPowerSup = std::move(_x.IPDS_RearMotorPowerSup);
		IPDS_AMPPowerSup = std::move(_x.IPDS_AMPPowerSup);
		IPDS_RearEOPPowerSup = std::move(_x.IPDS_RearEOPPowerSup);
		IPDS_RearRadarPowerSup = std::move(_x.IPDS_RearRadarPowerSup);
		IPDS_RLALampCtlUnitPowerSup = std::move(_x.IPDS_RLALampCtlUnitPowerSup);
		IPDS_RRALampCtlUnitPowerSup = std::move(_x.IPDS_RRALampCtlUnitPowerSup);
		IPDS_RLBLampCtlUnitPowerSup = std::move(_x.IPDS_RLBLampCtlUnitPowerSup);
		IPDS_RRBLampCtlUnitPowerSup = std::move(_x.IPDS_RRBLampCtlUnitPowerSup);
		IPDS_EXVPowerSup = std::move(_x.IPDS_EXVPowerSup);
		IPDS_PASPowerSup = std::move(_x.IPDS_PASPowerSup);
		IPDS_GSMPowerSup = std::move(_x.IPDS_GSMPowerSup);
		IPDS_DSMPowerSup = std::move(_x.IPDS_DSMPowerSup);
		IPDS_KL15T2PowerSup = std::move(_x.IPDS_KL15T2PowerSup);
		IPDS_KL15T1PowerSup = std::move(_x.IPDS_KL15T1PowerSup);
		IPDS_KL15F1PowerSup = std::move(_x.IPDS_KL15F1PowerSup);
		IPDS_EnablePowerSup = std::move(_x.IPDS_EnablePowerSup);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPDS_FLLampCtlUnitPowerSup);
		fun(IPDS_FRLampCtlUnitPowerSup);
		fun(IPDS_HVHPowerSup);
		fun(IPDS_IPUEOP1PowerSup);
		fun(IPDS_IPUEOP2PowerSup);
		fun(IPDS_IPUPowerSup);
		fun(IPDS_FrontRadarPowerSup);
		fun(IPDS_FLRadarPowerSup);
		fun(IPDS_FRRadarPowerSup);
		fun(IPDS_AGSPowerSup);
		fun(IPDS_ECPPowerSup);
		fun(IPDS_AVASPowerSup);
		fun(IPDS_BrakeSwPowerSup);
		fun(IPDS_AQSPowerSup);
		fun(IPDS_DriverLumbarMotorPowerSup);
		fun(IPDS_RoofDevicePowerSup);
		fun(IPDS_ETCPowerSup);
		fun(IPDS_ClusterDisplayPowerSup);
		fun(IPDS_PassDisplayPowerSup);
		fun(IPDS_IDCDisplayPowerSup);
		fun(IPDS_CigarLigterPowerSup);
		fun(IPDS_HDMapPowerSup);
		fun(IPDS_Lidar1PowerSup);
		fun(IPDS_Lidar2PowerSup);
		fun(IPDS_Lidar3PowerSup);
		fun(IPDS_HODPowerSup);
		fun(IPDS_ESCLPowerSup);
		fun(IPDS_ISRVMPowerSup);
		fun(IPDS_SRSECUPowerSup);
		fun(IPDS_KL15L1PowerSup);
		fun(IPDS_KL15L2PowerSup);
		fun(IPDS_HUDPowerSup);
		fun(IPDS_ClusterPowerSup);
		fun(IPDS_WCMPowerSup);
		fun(IPDS_FrontUSBChargerPowerSup);
		fun(IPDS_PM25PowerSup);
		fun(IPDS_PassLumbarMotorPowerSup);
		fun(IPDS_FrontBlowerPowerSup);
		fun(IPDS_UWBSensorPowerSup);
		fun(IPDS_KL15R1PowerSup);
		fun(IPDS_KL15R2PowerSup);
		fun(IPDS_RMPowerSup);
		fun(IPDS_RearCtrlPanelPowerSup);
		fun(IPDS_Rear12VPowerSup);
		fun(IPDS_InverterPowerSup);
		fun(IPDS_RearMotorPowerSup);
		fun(IPDS_AMPPowerSup);
		fun(IPDS_RearEOPPowerSup);
		fun(IPDS_RearRadarPowerSup);
		fun(IPDS_RLALampCtlUnitPowerSup);
		fun(IPDS_RRALampCtlUnitPowerSup);
		fun(IPDS_RLBLampCtlUnitPowerSup);
		fun(IPDS_RRBLampCtlUnitPowerSup);
		fun(IPDS_EXVPowerSup);
		fun(IPDS_PASPowerSup);
		fun(IPDS_GSMPowerSup);
		fun(IPDS_DSMPowerSup);
		fun(IPDS_KL15T2PowerSup);
		fun(IPDS_KL15T1PowerSup);
		fun(IPDS_KL15F1PowerSup);
		fun(IPDS_EnablePowerSup);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPDS_FLLampCtlUnitPowerSup);
		fun(IPDS_FRLampCtlUnitPowerSup);
		fun(IPDS_HVHPowerSup);
		fun(IPDS_IPUEOP1PowerSup);
		fun(IPDS_IPUEOP2PowerSup);
		fun(IPDS_IPUPowerSup);
		fun(IPDS_FrontRadarPowerSup);
		fun(IPDS_FLRadarPowerSup);
		fun(IPDS_FRRadarPowerSup);
		fun(IPDS_AGSPowerSup);
		fun(IPDS_ECPPowerSup);
		fun(IPDS_AVASPowerSup);
		fun(IPDS_BrakeSwPowerSup);
		fun(IPDS_AQSPowerSup);
		fun(IPDS_DriverLumbarMotorPowerSup);
		fun(IPDS_RoofDevicePowerSup);
		fun(IPDS_ETCPowerSup);
		fun(IPDS_ClusterDisplayPowerSup);
		fun(IPDS_PassDisplayPowerSup);
		fun(IPDS_IDCDisplayPowerSup);
		fun(IPDS_CigarLigterPowerSup);
		fun(IPDS_HDMapPowerSup);
		fun(IPDS_Lidar1PowerSup);
		fun(IPDS_Lidar2PowerSup);
		fun(IPDS_Lidar3PowerSup);
		fun(IPDS_HODPowerSup);
		fun(IPDS_ESCLPowerSup);
		fun(IPDS_ISRVMPowerSup);
		fun(IPDS_SRSECUPowerSup);
		fun(IPDS_KL15L1PowerSup);
		fun(IPDS_KL15L2PowerSup);
		fun(IPDS_HUDPowerSup);
		fun(IPDS_ClusterPowerSup);
		fun(IPDS_WCMPowerSup);
		fun(IPDS_FrontUSBChargerPowerSup);
		fun(IPDS_PM25PowerSup);
		fun(IPDS_PassLumbarMotorPowerSup);
		fun(IPDS_FrontBlowerPowerSup);
		fun(IPDS_UWBSensorPowerSup);
		fun(IPDS_KL15R1PowerSup);
		fun(IPDS_KL15R2PowerSup);
		fun(IPDS_RMPowerSup);
		fun(IPDS_RearCtrlPanelPowerSup);
		fun(IPDS_Rear12VPowerSup);
		fun(IPDS_InverterPowerSup);
		fun(IPDS_RearMotorPowerSup);
		fun(IPDS_AMPPowerSup);
		fun(IPDS_RearEOPPowerSup);
		fun(IPDS_RearRadarPowerSup);
		fun(IPDS_RLALampCtlUnitPowerSup);
		fun(IPDS_RRALampCtlUnitPowerSup);
		fun(IPDS_RLBLampCtlUnitPowerSup);
		fun(IPDS_RRBLampCtlUnitPowerSup);
		fun(IPDS_EXVPowerSup);
		fun(IPDS_PASPowerSup);
		fun(IPDS_GSMPowerSup);
		fun(IPDS_DSMPowerSup);
		fun(IPDS_KL15T2PowerSup);
		fun(IPDS_KL15T1PowerSup);
		fun(IPDS_KL15F1PowerSup);
		fun(IPDS_EnablePowerSup);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPDS_FLLampCtlUnitPowerSup);
		fun << (IPDS_FRLampCtlUnitPowerSup);
		fun << (IPDS_HVHPowerSup);
		fun << (IPDS_IPUEOP1PowerSup);
		fun << (IPDS_IPUEOP2PowerSup);
		fun << (IPDS_IPUPowerSup);
		fun << (IPDS_FrontRadarPowerSup);
		fun << (IPDS_FLRadarPowerSup);
		fun << (IPDS_FRRadarPowerSup);
		fun << (IPDS_AGSPowerSup);
		fun << (IPDS_ECPPowerSup);
		fun << (IPDS_AVASPowerSup);
		fun << (IPDS_BrakeSwPowerSup);
		fun << (IPDS_AQSPowerSup);
		fun << (IPDS_DriverLumbarMotorPowerSup);
		fun << (IPDS_RoofDevicePowerSup);
		fun << (IPDS_ETCPowerSup);
		fun << (IPDS_ClusterDisplayPowerSup);
		fun << (IPDS_PassDisplayPowerSup);
		fun << (IPDS_IDCDisplayPowerSup);
		fun << (IPDS_CigarLigterPowerSup);
		fun << (IPDS_HDMapPowerSup);
		fun << (IPDS_Lidar1PowerSup);
		fun << (IPDS_Lidar2PowerSup);
		fun << (IPDS_Lidar3PowerSup);
		fun << (IPDS_HODPowerSup);
		fun << (IPDS_ESCLPowerSup);
		fun << (IPDS_ISRVMPowerSup);
		fun << (IPDS_SRSECUPowerSup);
		fun << (IPDS_KL15L1PowerSup);
		fun << (IPDS_KL15L2PowerSup);
		fun << (IPDS_HUDPowerSup);
		fun << (IPDS_ClusterPowerSup);
		fun << (IPDS_WCMPowerSup);
		fun << (IPDS_FrontUSBChargerPowerSup);
		fun << (IPDS_PM25PowerSup);
		fun << (IPDS_PassLumbarMotorPowerSup);
		fun << (IPDS_FrontBlowerPowerSup);
		fun << (IPDS_UWBSensorPowerSup);
		fun << (IPDS_KL15R1PowerSup);
		fun << (IPDS_KL15R2PowerSup);
		fun << (IPDS_RMPowerSup);
		fun << (IPDS_RearCtrlPanelPowerSup);
		fun << (IPDS_Rear12VPowerSup);
		fun << (IPDS_InverterPowerSup);
		fun << (IPDS_RearMotorPowerSup);
		fun << (IPDS_AMPPowerSup);
		fun << (IPDS_RearEOPPowerSup);
		fun << (IPDS_RearRadarPowerSup);
		fun << (IPDS_RLALampCtlUnitPowerSup);
		fun << (IPDS_RRALampCtlUnitPowerSup);
		fun << (IPDS_RLBLampCtlUnitPowerSup);
		fun << (IPDS_RRBLampCtlUnitPowerSup);
		fun << (IPDS_EXVPowerSup);
		fun << (IPDS_PASPowerSup);
		fun << (IPDS_GSMPowerSup);
		fun << (IPDS_DSMPowerSup);
		fun << (IPDS_KL15T2PowerSup);
		fun << (IPDS_KL15T1PowerSup);
		fun << (IPDS_KL15F1PowerSup);
		fun << (IPDS_EnablePowerSup);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPDS_FLLampCtlUnitPowerSup);
		fun >> (IPDS_FRLampCtlUnitPowerSup);
		fun >> (IPDS_HVHPowerSup);
		fun >> (IPDS_IPUEOP1PowerSup);
		fun >> (IPDS_IPUEOP2PowerSup);
		fun >> (IPDS_IPUPowerSup);
		fun >> (IPDS_FrontRadarPowerSup);
		fun >> (IPDS_FLRadarPowerSup);
		fun >> (IPDS_FRRadarPowerSup);
		fun >> (IPDS_AGSPowerSup);
		fun >> (IPDS_ECPPowerSup);
		fun >> (IPDS_AVASPowerSup);
		fun >> (IPDS_BrakeSwPowerSup);
		fun >> (IPDS_AQSPowerSup);
		fun >> (IPDS_DriverLumbarMotorPowerSup);
		fun >> (IPDS_RoofDevicePowerSup);
		fun >> (IPDS_ETCPowerSup);
		fun >> (IPDS_ClusterDisplayPowerSup);
		fun >> (IPDS_PassDisplayPowerSup);
		fun >> (IPDS_IDCDisplayPowerSup);
		fun >> (IPDS_CigarLigterPowerSup);
		fun >> (IPDS_HDMapPowerSup);
		fun >> (IPDS_Lidar1PowerSup);
		fun >> (IPDS_Lidar2PowerSup);
		fun >> (IPDS_Lidar3PowerSup);
		fun >> (IPDS_HODPowerSup);
		fun >> (IPDS_ESCLPowerSup);
		fun >> (IPDS_ISRVMPowerSup);
		fun >> (IPDS_SRSECUPowerSup);
		fun >> (IPDS_KL15L1PowerSup);
		fun >> (IPDS_KL15L2PowerSup);
		fun >> (IPDS_HUDPowerSup);
		fun >> (IPDS_ClusterPowerSup);
		fun >> (IPDS_WCMPowerSup);
		fun >> (IPDS_FrontUSBChargerPowerSup);
		fun >> (IPDS_PM25PowerSup);
		fun >> (IPDS_PassLumbarMotorPowerSup);
		fun >> (IPDS_FrontBlowerPowerSup);
		fun >> (IPDS_UWBSensorPowerSup);
		fun >> (IPDS_KL15R1PowerSup);
		fun >> (IPDS_KL15R2PowerSup);
		fun >> (IPDS_RMPowerSup);
		fun >> (IPDS_RearCtrlPanelPowerSup);
		fun >> (IPDS_Rear12VPowerSup);
		fun >> (IPDS_InverterPowerSup);
		fun >> (IPDS_RearMotorPowerSup);
		fun >> (IPDS_AMPPowerSup);
		fun >> (IPDS_RearEOPPowerSup);
		fun >> (IPDS_RearRadarPowerSup);
		fun >> (IPDS_RLALampCtlUnitPowerSup);
		fun >> (IPDS_RRALampCtlUnitPowerSup);
		fun >> (IPDS_RLBLampCtlUnitPowerSup);
		fun >> (IPDS_RRBLampCtlUnitPowerSup);
		fun >> (IPDS_EXVPowerSup);
		fun >> (IPDS_PASPowerSup);
		fun >> (IPDS_GSMPowerSup);
		fun >> (IPDS_DSMPowerSup);
		fun >> (IPDS_KL15T2PowerSup);
		fun >> (IPDS_KL15T1PowerSup);
		fun >> (IPDS_KL15F1PowerSup);
		fun >> (IPDS_EnablePowerSup);
	}
};

#endif //____BDCIPDS_H__
