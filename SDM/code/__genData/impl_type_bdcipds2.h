#ifndef ____BDCIPDS2_H__
#define ____BDCIPDS2_H__


#include "cstdint"






struct BDCIPDS2 {
public:
	std::uint16_t IPDS_FLLampCtlUnitPowerCurrent;
	std::uint16_t IPDS_FRLampCtlUnitPowerCurrent;
	std::uint16_t IPDS_FrontRadarPowerCurrent;
	std::uint16_t IPDS_FLRadarPowerCurrent;
	std::uint16_t IPDS_FRRadarPowerCurrent;
	std::uint16_t IPDS_AGSPowerCurrent;
	std::uint16_t IPDS_ECPPowerCurrent;
	std::uint16_t IPDS_AVASPowerCurrent;
	std::uint16_t IPDS_BrakeSwNCPowerCurrent;
	std::uint16_t IPDS_AQSPowerCurrent;
	std::uint16_t IPDS_DriverLumbarMotorPowerCurrent;
	std::uint16_t IPDS_RoofDevicePowerCurrent;
	std::uint16_t IPDS_ETCPowerCurrent;
	std::uint16_t IPDS_ClusterDisplayPowerCurrent;
	std::uint16_t IPDS_PassDisplayPowerCurrent;
	std::uint16_t IPDS_IDCDisplayPowerCurrent;
	std::uint16_t IPDS_CigarLigterPowerCurrent;
	std::uint16_t IPDS_HDMapPowerCurrent;
	std::uint16_t IPDS_Lidar1PowerCurrent;
	std::uint16_t IPDS_Lidar2PowerCurrent;
	std::uint16_t IPDS_Lidar3PowerCurrent;
	std::uint16_t IPDS_HODPowerCurrent;
	std::uint16_t IPDS_ISRVMPowerCurrent;
	std::uint16_t IPDS_SRSECUPowerCurrent;
	std::uint16_t IPDS_HUDPowerCurrent;
	std::uint64_t IPDS_CluCurrenterPowerCurrent;
	std::uint16_t IPDS_WCMPowerCurrent;
	std::uint16_t IPDS_FrontUSBChargerPowerCurrent;
	std::uint16_t IPDS_PM25PowerCurrent;
	std::uint16_t IPDS_PassLumbarMotorPowerCurrent;
	std::uint16_t IPDS_FrontBlowerPowerCurrent;
	std::uint16_t IPDS_RMPowerCurrent;
	std::uint16_t IPDS_RearCtrlPanelPowerCurrent;
	std::uint16_t IPDS_Rear12VPowerCurrent;
	std::uint16_t IPDS_InverterPowerCurrent;
	std::uint16_t IPDS_RearMotorPowerCurrent;
	std::uint16_t IPDS_AMPPowerCurrent;
	std::uint16_t IPDS_RearEOPPowerCurrent;
	std::uint16_t IPDS_RearRadarPowerCurrent;
	std::uint16_t IPDS_RLALampCtlUnitPowerCurrent;
	std::uint16_t IPDS_RRALampCtlUnitPowerCurrent;
	std::uint16_t IPDS_RLBLampCtlUnitPowerCurrent;
	std::uint16_t IPDS_RRBLampCtlUnitPowerCurrent;
	std::uint16_t IPDS_EXVPowerCurrent;
	std::uint16_t IPDS_PASPowerCurrent;
	std::uint16_t IPDS_GSMPowerCurrent;
	std::uint16_t IPDS_DSMPowerCurrent;
	std::uint16_t IPDS_IPSPowerCurrent;
	std::uint16_t IPDS_BMSPowerCurrent;
	std::uint16_t IPDS_RLSPowerCurrent;
	std::uint16_t IPDS_DVRPowerCurrent;
	std::uint16_t IPDS_ADCMain1PowerCurrent;
	std::uint16_t IPDS_ADCMain2PowerCurrent;
	std::uint16_t IPDS_BrakeSwNOPowerCurrent;
	std::uint16_t IPDS_SAMPowerCurrent;
	std::uint16_t IPDS_TBoxPowerCurrent;
	std::uint16_t IPDS_FrontIDCPowerCurrent;
	std::uint16_t IPDS_RearDCDCPowerCurrent;
	std::uint16_t IPDS_ADCBackup1PowerCurrent;
	std::uint16_t IPDS_ADCBackup2PowerCurrent;
/*
	BDCIPDS2() {}
	~BDCIPDS2() {}
	BDCIPDS2(const std::uint16_t _IPDS_FLLampCtlUnitPowerCurrent,const std::uint16_t _IPDS_FRLampCtlUnitPowerCurrent,const std::uint16_t _IPDS_FrontRadarPowerCurrent,const std::uint16_t _IPDS_FLRadarPowerCurrent,const std::uint16_t _IPDS_FRRadarPowerCurrent,const std::uint16_t _IPDS_AGSPowerCurrent,const std::uint16_t _IPDS_ECPPowerCurrent,const std::uint16_t _IPDS_AVASPowerCurrent,const std::uint16_t _IPDS_BrakeSwNCPowerCurrent,const std::uint16_t _IPDS_AQSPowerCurrent,const std::uint16_t _IPDS_DriverLumbarMotorPowerCurrent,const std::uint16_t _IPDS_RoofDevicePowerCurrent,const std::uint16_t _IPDS_ETCPowerCurrent,const std::uint16_t _IPDS_ClusterDisplayPowerCurrent,const std::uint16_t _IPDS_PassDisplayPowerCurrent,const std::uint16_t _IPDS_IDCDisplayPowerCurrent,const std::uint16_t _IPDS_CigarLigterPowerCurrent,const std::uint16_t _IPDS_HDMapPowerCurrent,const std::uint16_t _IPDS_Lidar1PowerCurrent,const std::uint16_t _IPDS_Lidar2PowerCurrent,const std::uint16_t _IPDS_Lidar3PowerCurrent,const std::uint16_t _IPDS_HODPowerCurrent,const std::uint16_t _IPDS_ISRVMPowerCurrent,const std::uint16_t _IPDS_SRSECUPowerCurrent,const std::uint16_t _IPDS_HUDPowerCurrent,const std::uint64_t _IPDS_CluCurrenterPowerCurrent,const std::uint16_t _IPDS_WCMPowerCurrent,const std::uint16_t _IPDS_FrontUSBChargerPowerCurrent,const std::uint16_t _IPDS_PM25PowerCurrent,const std::uint16_t _IPDS_PassLumbarMotorPowerCurrent,const std::uint16_t _IPDS_FrontBlowerPowerCurrent,const std::uint16_t _IPDS_RMPowerCurrent,const std::uint16_t _IPDS_RearCtrlPanelPowerCurrent,const std::uint16_t _IPDS_Rear12VPowerCurrent,const std::uint16_t _IPDS_InverterPowerCurrent,const std::uint16_t _IPDS_RearMotorPowerCurrent,const std::uint16_t _IPDS_AMPPowerCurrent,const std::uint16_t _IPDS_RearEOPPowerCurrent,const std::uint16_t _IPDS_RearRadarPowerCurrent,const std::uint16_t _IPDS_RLALampCtlUnitPowerCurrent,const std::uint16_t _IPDS_RRALampCtlUnitPowerCurrent,const std::uint16_t _IPDS_RLBLampCtlUnitPowerCurrent,const std::uint16_t _IPDS_RRBLampCtlUnitPowerCurrent,const std::uint16_t _IPDS_EXVPowerCurrent,const std::uint16_t _IPDS_PASPowerCurrent,const std::uint16_t _IPDS_GSMPowerCurrent,const std::uint16_t _IPDS_DSMPowerCurrent,const std::uint16_t _IPDS_IPSPowerCurrent,const std::uint16_t _IPDS_BMSPowerCurrent,const std::uint16_t _IPDS_RLSPowerCurrent,const std::uint16_t _IPDS_DVRPowerCurrent,const std::uint16_t _IPDS_ADCMain1PowerCurrent,const std::uint16_t _IPDS_ADCMain2PowerCurrent,const std::uint16_t _IPDS_BrakeSwNOPowerCurrent,const std::uint16_t _IPDS_SAMPowerCurrent,const std::uint16_t _IPDS_TBoxPowerCurrent,const std::uint16_t _IPDS_FrontIDCPowerCurrent,const std::uint16_t _IPDS_RearDCDCPowerCurrent,const std::uint16_t _IPDS_ADCBackup1PowerCurrent,const std::uint16_t _IPDS_ADCBackup2PowerCurrent):IPDS_FLLampCtlUnitPowerCurrent(_IPDS_FLLampCtlUnitPowerCurrent),IPDS_FRLampCtlUnitPowerCurrent(_IPDS_FRLampCtlUnitPowerCurrent),IPDS_FrontRadarPowerCurrent(_IPDS_FrontRadarPowerCurrent),IPDS_FLRadarPowerCurrent(_IPDS_FLRadarPowerCurrent),IPDS_FRRadarPowerCurrent(_IPDS_FRRadarPowerCurrent),IPDS_AGSPowerCurrent(_IPDS_AGSPowerCurrent),IPDS_ECPPowerCurrent(_IPDS_ECPPowerCurrent),IPDS_AVASPowerCurrent(_IPDS_AVASPowerCurrent),IPDS_BrakeSwNCPowerCurrent(_IPDS_BrakeSwNCPowerCurrent),IPDS_AQSPowerCurrent(_IPDS_AQSPowerCurrent),IPDS_DriverLumbarMotorPowerCurrent(_IPDS_DriverLumbarMotorPowerCurrent),IPDS_RoofDevicePowerCurrent(_IPDS_RoofDevicePowerCurrent),IPDS_ETCPowerCurrent(_IPDS_ETCPowerCurrent),IPDS_ClusterDisplayPowerCurrent(_IPDS_ClusterDisplayPowerCurrent),IPDS_PassDisplayPowerCurrent(_IPDS_PassDisplayPowerCurrent),IPDS_IDCDisplayPowerCurrent(_IPDS_IDCDisplayPowerCurrent),IPDS_CigarLigterPowerCurrent(_IPDS_CigarLigterPowerCurrent),IPDS_HDMapPowerCurrent(_IPDS_HDMapPowerCurrent),IPDS_Lidar1PowerCurrent(_IPDS_Lidar1PowerCurrent),IPDS_Lidar2PowerCurrent(_IPDS_Lidar2PowerCurrent),IPDS_Lidar3PowerCurrent(_IPDS_Lidar3PowerCurrent),IPDS_HODPowerCurrent(_IPDS_HODPowerCurrent),IPDS_ISRVMPowerCurrent(_IPDS_ISRVMPowerCurrent),IPDS_SRSECUPowerCurrent(_IPDS_SRSECUPowerCurrent),IPDS_HUDPowerCurrent(_IPDS_HUDPowerCurrent),IPDS_CluCurrenterPowerCurrent(_IPDS_CluCurrenterPowerCurrent),IPDS_WCMPowerCurrent(_IPDS_WCMPowerCurrent),IPDS_FrontUSBChargerPowerCurrent(_IPDS_FrontUSBChargerPowerCurrent),IPDS_PM25PowerCurrent(_IPDS_PM25PowerCurrent),IPDS_PassLumbarMotorPowerCurrent(_IPDS_PassLumbarMotorPowerCurrent),IPDS_FrontBlowerPowerCurrent(_IPDS_FrontBlowerPowerCurrent),IPDS_RMPowerCurrent(_IPDS_RMPowerCurrent),IPDS_RearCtrlPanelPowerCurrent(_IPDS_RearCtrlPanelPowerCurrent),IPDS_Rear12VPowerCurrent(_IPDS_Rear12VPowerCurrent),IPDS_InverterPowerCurrent(_IPDS_InverterPowerCurrent),IPDS_RearMotorPowerCurrent(_IPDS_RearMotorPowerCurrent),IPDS_AMPPowerCurrent(_IPDS_AMPPowerCurrent),IPDS_RearEOPPowerCurrent(_IPDS_RearEOPPowerCurrent),IPDS_RearRadarPowerCurrent(_IPDS_RearRadarPowerCurrent),IPDS_RLALampCtlUnitPowerCurrent(_IPDS_RLALampCtlUnitPowerCurrent),IPDS_RRALampCtlUnitPowerCurrent(_IPDS_RRALampCtlUnitPowerCurrent),IPDS_RLBLampCtlUnitPowerCurrent(_IPDS_RLBLampCtlUnitPowerCurrent),IPDS_RRBLampCtlUnitPowerCurrent(_IPDS_RRBLampCtlUnitPowerCurrent),IPDS_EXVPowerCurrent(_IPDS_EXVPowerCurrent),IPDS_PASPowerCurrent(_IPDS_PASPowerCurrent),IPDS_GSMPowerCurrent(_IPDS_GSMPowerCurrent),IPDS_DSMPowerCurrent(_IPDS_DSMPowerCurrent),IPDS_IPSPowerCurrent(_IPDS_IPSPowerCurrent),IPDS_BMSPowerCurrent(_IPDS_BMSPowerCurrent),IPDS_RLSPowerCurrent(_IPDS_RLSPowerCurrent),IPDS_DVRPowerCurrent(_IPDS_DVRPowerCurrent),IPDS_ADCMain1PowerCurrent(_IPDS_ADCMain1PowerCurrent),IPDS_ADCMain2PowerCurrent(_IPDS_ADCMain2PowerCurrent),IPDS_BrakeSwNOPowerCurrent(_IPDS_BrakeSwNOPowerCurrent),IPDS_SAMPowerCurrent(_IPDS_SAMPowerCurrent),IPDS_TBoxPowerCurrent(_IPDS_TBoxPowerCurrent),IPDS_FrontIDCPowerCurrent(_IPDS_FrontIDCPowerCurrent),IPDS_RearDCDCPowerCurrent(_IPDS_RearDCDCPowerCurrent),IPDS_ADCBackup1PowerCurrent(_IPDS_ADCBackup1PowerCurrent),IPDS_ADCBackup2PowerCurrent(_IPDS_ADCBackup2PowerCurrent) {}
	BDCIPDS2(const BDCIPDS2 &_x){
		IPDS_FLLampCtlUnitPowerCurrent = _x.IPDS_FLLampCtlUnitPowerCurrent;
		IPDS_FRLampCtlUnitPowerCurrent = _x.IPDS_FRLampCtlUnitPowerCurrent;
		IPDS_FrontRadarPowerCurrent = _x.IPDS_FrontRadarPowerCurrent;
		IPDS_FLRadarPowerCurrent = _x.IPDS_FLRadarPowerCurrent;
		IPDS_FRRadarPowerCurrent = _x.IPDS_FRRadarPowerCurrent;
		IPDS_AGSPowerCurrent = _x.IPDS_AGSPowerCurrent;
		IPDS_ECPPowerCurrent = _x.IPDS_ECPPowerCurrent;
		IPDS_AVASPowerCurrent = _x.IPDS_AVASPowerCurrent;
		IPDS_BrakeSwNCPowerCurrent = _x.IPDS_BrakeSwNCPowerCurrent;
		IPDS_AQSPowerCurrent = _x.IPDS_AQSPowerCurrent;
		IPDS_DriverLumbarMotorPowerCurrent = _x.IPDS_DriverLumbarMotorPowerCurrent;
		IPDS_RoofDevicePowerCurrent = _x.IPDS_RoofDevicePowerCurrent;
		IPDS_ETCPowerCurrent = _x.IPDS_ETCPowerCurrent;
		IPDS_ClusterDisplayPowerCurrent = _x.IPDS_ClusterDisplayPowerCurrent;
		IPDS_PassDisplayPowerCurrent = _x.IPDS_PassDisplayPowerCurrent;
		IPDS_IDCDisplayPowerCurrent = _x.IPDS_IDCDisplayPowerCurrent;
		IPDS_CigarLigterPowerCurrent = _x.IPDS_CigarLigterPowerCurrent;
		IPDS_HDMapPowerCurrent = _x.IPDS_HDMapPowerCurrent;
		IPDS_Lidar1PowerCurrent = _x.IPDS_Lidar1PowerCurrent;
		IPDS_Lidar2PowerCurrent = _x.IPDS_Lidar2PowerCurrent;
		IPDS_Lidar3PowerCurrent = _x.IPDS_Lidar3PowerCurrent;
		IPDS_HODPowerCurrent = _x.IPDS_HODPowerCurrent;
		IPDS_ISRVMPowerCurrent = _x.IPDS_ISRVMPowerCurrent;
		IPDS_SRSECUPowerCurrent = _x.IPDS_SRSECUPowerCurrent;
		IPDS_HUDPowerCurrent = _x.IPDS_HUDPowerCurrent;
		IPDS_CluCurrenterPowerCurrent = _x.IPDS_CluCurrenterPowerCurrent;
		IPDS_WCMPowerCurrent = _x.IPDS_WCMPowerCurrent;
		IPDS_FrontUSBChargerPowerCurrent = _x.IPDS_FrontUSBChargerPowerCurrent;
		IPDS_PM25PowerCurrent = _x.IPDS_PM25PowerCurrent;
		IPDS_PassLumbarMotorPowerCurrent = _x.IPDS_PassLumbarMotorPowerCurrent;
		IPDS_FrontBlowerPowerCurrent = _x.IPDS_FrontBlowerPowerCurrent;
		IPDS_RMPowerCurrent = _x.IPDS_RMPowerCurrent;
		IPDS_RearCtrlPanelPowerCurrent = _x.IPDS_RearCtrlPanelPowerCurrent;
		IPDS_Rear12VPowerCurrent = _x.IPDS_Rear12VPowerCurrent;
		IPDS_InverterPowerCurrent = _x.IPDS_InverterPowerCurrent;
		IPDS_RearMotorPowerCurrent = _x.IPDS_RearMotorPowerCurrent;
		IPDS_AMPPowerCurrent = _x.IPDS_AMPPowerCurrent;
		IPDS_RearEOPPowerCurrent = _x.IPDS_RearEOPPowerCurrent;
		IPDS_RearRadarPowerCurrent = _x.IPDS_RearRadarPowerCurrent;
		IPDS_RLALampCtlUnitPowerCurrent = _x.IPDS_RLALampCtlUnitPowerCurrent;
		IPDS_RRALampCtlUnitPowerCurrent = _x.IPDS_RRALampCtlUnitPowerCurrent;
		IPDS_RLBLampCtlUnitPowerCurrent = _x.IPDS_RLBLampCtlUnitPowerCurrent;
		IPDS_RRBLampCtlUnitPowerCurrent = _x.IPDS_RRBLampCtlUnitPowerCurrent;
		IPDS_EXVPowerCurrent = _x.IPDS_EXVPowerCurrent;
		IPDS_PASPowerCurrent = _x.IPDS_PASPowerCurrent;
		IPDS_GSMPowerCurrent = _x.IPDS_GSMPowerCurrent;
		IPDS_DSMPowerCurrent = _x.IPDS_DSMPowerCurrent;
		IPDS_IPSPowerCurrent = _x.IPDS_IPSPowerCurrent;
		IPDS_BMSPowerCurrent = _x.IPDS_BMSPowerCurrent;
		IPDS_RLSPowerCurrent = _x.IPDS_RLSPowerCurrent;
		IPDS_DVRPowerCurrent = _x.IPDS_DVRPowerCurrent;
		IPDS_ADCMain1PowerCurrent = _x.IPDS_ADCMain1PowerCurrent;
		IPDS_ADCMain2PowerCurrent = _x.IPDS_ADCMain2PowerCurrent;
		IPDS_BrakeSwNOPowerCurrent = _x.IPDS_BrakeSwNOPowerCurrent;
		IPDS_SAMPowerCurrent = _x.IPDS_SAMPowerCurrent;
		IPDS_TBoxPowerCurrent = _x.IPDS_TBoxPowerCurrent;
		IPDS_FrontIDCPowerCurrent = _x.IPDS_FrontIDCPowerCurrent;
		IPDS_RearDCDCPowerCurrent = _x.IPDS_RearDCDCPowerCurrent;
		IPDS_ADCBackup1PowerCurrent = _x.IPDS_ADCBackup1PowerCurrent;
		IPDS_ADCBackup2PowerCurrent = _x.IPDS_ADCBackup2PowerCurrent;
	}
	BDCIPDS2(BDCIPDS2 &&_x){
		IPDS_FLLampCtlUnitPowerCurrent = std::move(_x.IPDS_FLLampCtlUnitPowerCurrent);
		IPDS_FRLampCtlUnitPowerCurrent = std::move(_x.IPDS_FRLampCtlUnitPowerCurrent);
		IPDS_FrontRadarPowerCurrent = std::move(_x.IPDS_FrontRadarPowerCurrent);
		IPDS_FLRadarPowerCurrent = std::move(_x.IPDS_FLRadarPowerCurrent);
		IPDS_FRRadarPowerCurrent = std::move(_x.IPDS_FRRadarPowerCurrent);
		IPDS_AGSPowerCurrent = std::move(_x.IPDS_AGSPowerCurrent);
		IPDS_ECPPowerCurrent = std::move(_x.IPDS_ECPPowerCurrent);
		IPDS_AVASPowerCurrent = std::move(_x.IPDS_AVASPowerCurrent);
		IPDS_BrakeSwNCPowerCurrent = std::move(_x.IPDS_BrakeSwNCPowerCurrent);
		IPDS_AQSPowerCurrent = std::move(_x.IPDS_AQSPowerCurrent);
		IPDS_DriverLumbarMotorPowerCurrent = std::move(_x.IPDS_DriverLumbarMotorPowerCurrent);
		IPDS_RoofDevicePowerCurrent = std::move(_x.IPDS_RoofDevicePowerCurrent);
		IPDS_ETCPowerCurrent = std::move(_x.IPDS_ETCPowerCurrent);
		IPDS_ClusterDisplayPowerCurrent = std::move(_x.IPDS_ClusterDisplayPowerCurrent);
		IPDS_PassDisplayPowerCurrent = std::move(_x.IPDS_PassDisplayPowerCurrent);
		IPDS_IDCDisplayPowerCurrent = std::move(_x.IPDS_IDCDisplayPowerCurrent);
		IPDS_CigarLigterPowerCurrent = std::move(_x.IPDS_CigarLigterPowerCurrent);
		IPDS_HDMapPowerCurrent = std::move(_x.IPDS_HDMapPowerCurrent);
		IPDS_Lidar1PowerCurrent = std::move(_x.IPDS_Lidar1PowerCurrent);
		IPDS_Lidar2PowerCurrent = std::move(_x.IPDS_Lidar2PowerCurrent);
		IPDS_Lidar3PowerCurrent = std::move(_x.IPDS_Lidar3PowerCurrent);
		IPDS_HODPowerCurrent = std::move(_x.IPDS_HODPowerCurrent);
		IPDS_ISRVMPowerCurrent = std::move(_x.IPDS_ISRVMPowerCurrent);
		IPDS_SRSECUPowerCurrent = std::move(_x.IPDS_SRSECUPowerCurrent);
		IPDS_HUDPowerCurrent = std::move(_x.IPDS_HUDPowerCurrent);
		IPDS_CluCurrenterPowerCurrent = std::move(_x.IPDS_CluCurrenterPowerCurrent);
		IPDS_WCMPowerCurrent = std::move(_x.IPDS_WCMPowerCurrent);
		IPDS_FrontUSBChargerPowerCurrent = std::move(_x.IPDS_FrontUSBChargerPowerCurrent);
		IPDS_PM25PowerCurrent = std::move(_x.IPDS_PM25PowerCurrent);
		IPDS_PassLumbarMotorPowerCurrent = std::move(_x.IPDS_PassLumbarMotorPowerCurrent);
		IPDS_FrontBlowerPowerCurrent = std::move(_x.IPDS_FrontBlowerPowerCurrent);
		IPDS_RMPowerCurrent = std::move(_x.IPDS_RMPowerCurrent);
		IPDS_RearCtrlPanelPowerCurrent = std::move(_x.IPDS_RearCtrlPanelPowerCurrent);
		IPDS_Rear12VPowerCurrent = std::move(_x.IPDS_Rear12VPowerCurrent);
		IPDS_InverterPowerCurrent = std::move(_x.IPDS_InverterPowerCurrent);
		IPDS_RearMotorPowerCurrent = std::move(_x.IPDS_RearMotorPowerCurrent);
		IPDS_AMPPowerCurrent = std::move(_x.IPDS_AMPPowerCurrent);
		IPDS_RearEOPPowerCurrent = std::move(_x.IPDS_RearEOPPowerCurrent);
		IPDS_RearRadarPowerCurrent = std::move(_x.IPDS_RearRadarPowerCurrent);
		IPDS_RLALampCtlUnitPowerCurrent = std::move(_x.IPDS_RLALampCtlUnitPowerCurrent);
		IPDS_RRALampCtlUnitPowerCurrent = std::move(_x.IPDS_RRALampCtlUnitPowerCurrent);
		IPDS_RLBLampCtlUnitPowerCurrent = std::move(_x.IPDS_RLBLampCtlUnitPowerCurrent);
		IPDS_RRBLampCtlUnitPowerCurrent = std::move(_x.IPDS_RRBLampCtlUnitPowerCurrent);
		IPDS_EXVPowerCurrent = std::move(_x.IPDS_EXVPowerCurrent);
		IPDS_PASPowerCurrent = std::move(_x.IPDS_PASPowerCurrent);
		IPDS_GSMPowerCurrent = std::move(_x.IPDS_GSMPowerCurrent);
		IPDS_DSMPowerCurrent = std::move(_x.IPDS_DSMPowerCurrent);
		IPDS_IPSPowerCurrent = std::move(_x.IPDS_IPSPowerCurrent);
		IPDS_BMSPowerCurrent = std::move(_x.IPDS_BMSPowerCurrent);
		IPDS_RLSPowerCurrent = std::move(_x.IPDS_RLSPowerCurrent);
		IPDS_DVRPowerCurrent = std::move(_x.IPDS_DVRPowerCurrent);
		IPDS_ADCMain1PowerCurrent = std::move(_x.IPDS_ADCMain1PowerCurrent);
		IPDS_ADCMain2PowerCurrent = std::move(_x.IPDS_ADCMain2PowerCurrent);
		IPDS_BrakeSwNOPowerCurrent = std::move(_x.IPDS_BrakeSwNOPowerCurrent);
		IPDS_SAMPowerCurrent = std::move(_x.IPDS_SAMPowerCurrent);
		IPDS_TBoxPowerCurrent = std::move(_x.IPDS_TBoxPowerCurrent);
		IPDS_FrontIDCPowerCurrent = std::move(_x.IPDS_FrontIDCPowerCurrent);
		IPDS_RearDCDCPowerCurrent = std::move(_x.IPDS_RearDCDCPowerCurrent);
		IPDS_ADCBackup1PowerCurrent = std::move(_x.IPDS_ADCBackup1PowerCurrent);
		IPDS_ADCBackup2PowerCurrent = std::move(_x.IPDS_ADCBackup2PowerCurrent);
	}
	BDCIPDS2& operator=(const BDCIPDS2 &_x){
		IPDS_FLLampCtlUnitPowerCurrent = _x.IPDS_FLLampCtlUnitPowerCurrent;
		IPDS_FRLampCtlUnitPowerCurrent = _x.IPDS_FRLampCtlUnitPowerCurrent;
		IPDS_FrontRadarPowerCurrent = _x.IPDS_FrontRadarPowerCurrent;
		IPDS_FLRadarPowerCurrent = _x.IPDS_FLRadarPowerCurrent;
		IPDS_FRRadarPowerCurrent = _x.IPDS_FRRadarPowerCurrent;
		IPDS_AGSPowerCurrent = _x.IPDS_AGSPowerCurrent;
		IPDS_ECPPowerCurrent = _x.IPDS_ECPPowerCurrent;
		IPDS_AVASPowerCurrent = _x.IPDS_AVASPowerCurrent;
		IPDS_BrakeSwNCPowerCurrent = _x.IPDS_BrakeSwNCPowerCurrent;
		IPDS_AQSPowerCurrent = _x.IPDS_AQSPowerCurrent;
		IPDS_DriverLumbarMotorPowerCurrent = _x.IPDS_DriverLumbarMotorPowerCurrent;
		IPDS_RoofDevicePowerCurrent = _x.IPDS_RoofDevicePowerCurrent;
		IPDS_ETCPowerCurrent = _x.IPDS_ETCPowerCurrent;
		IPDS_ClusterDisplayPowerCurrent = _x.IPDS_ClusterDisplayPowerCurrent;
		IPDS_PassDisplayPowerCurrent = _x.IPDS_PassDisplayPowerCurrent;
		IPDS_IDCDisplayPowerCurrent = _x.IPDS_IDCDisplayPowerCurrent;
		IPDS_CigarLigterPowerCurrent = _x.IPDS_CigarLigterPowerCurrent;
		IPDS_HDMapPowerCurrent = _x.IPDS_HDMapPowerCurrent;
		IPDS_Lidar1PowerCurrent = _x.IPDS_Lidar1PowerCurrent;
		IPDS_Lidar2PowerCurrent = _x.IPDS_Lidar2PowerCurrent;
		IPDS_Lidar3PowerCurrent = _x.IPDS_Lidar3PowerCurrent;
		IPDS_HODPowerCurrent = _x.IPDS_HODPowerCurrent;
		IPDS_ISRVMPowerCurrent = _x.IPDS_ISRVMPowerCurrent;
		IPDS_SRSECUPowerCurrent = _x.IPDS_SRSECUPowerCurrent;
		IPDS_HUDPowerCurrent = _x.IPDS_HUDPowerCurrent;
		IPDS_CluCurrenterPowerCurrent = _x.IPDS_CluCurrenterPowerCurrent;
		IPDS_WCMPowerCurrent = _x.IPDS_WCMPowerCurrent;
		IPDS_FrontUSBChargerPowerCurrent = _x.IPDS_FrontUSBChargerPowerCurrent;
		IPDS_PM25PowerCurrent = _x.IPDS_PM25PowerCurrent;
		IPDS_PassLumbarMotorPowerCurrent = _x.IPDS_PassLumbarMotorPowerCurrent;
		IPDS_FrontBlowerPowerCurrent = _x.IPDS_FrontBlowerPowerCurrent;
		IPDS_RMPowerCurrent = _x.IPDS_RMPowerCurrent;
		IPDS_RearCtrlPanelPowerCurrent = _x.IPDS_RearCtrlPanelPowerCurrent;
		IPDS_Rear12VPowerCurrent = _x.IPDS_Rear12VPowerCurrent;
		IPDS_InverterPowerCurrent = _x.IPDS_InverterPowerCurrent;
		IPDS_RearMotorPowerCurrent = _x.IPDS_RearMotorPowerCurrent;
		IPDS_AMPPowerCurrent = _x.IPDS_AMPPowerCurrent;
		IPDS_RearEOPPowerCurrent = _x.IPDS_RearEOPPowerCurrent;
		IPDS_RearRadarPowerCurrent = _x.IPDS_RearRadarPowerCurrent;
		IPDS_RLALampCtlUnitPowerCurrent = _x.IPDS_RLALampCtlUnitPowerCurrent;
		IPDS_RRALampCtlUnitPowerCurrent = _x.IPDS_RRALampCtlUnitPowerCurrent;
		IPDS_RLBLampCtlUnitPowerCurrent = _x.IPDS_RLBLampCtlUnitPowerCurrent;
		IPDS_RRBLampCtlUnitPowerCurrent = _x.IPDS_RRBLampCtlUnitPowerCurrent;
		IPDS_EXVPowerCurrent = _x.IPDS_EXVPowerCurrent;
		IPDS_PASPowerCurrent = _x.IPDS_PASPowerCurrent;
		IPDS_GSMPowerCurrent = _x.IPDS_GSMPowerCurrent;
		IPDS_DSMPowerCurrent = _x.IPDS_DSMPowerCurrent;
		IPDS_IPSPowerCurrent = _x.IPDS_IPSPowerCurrent;
		IPDS_BMSPowerCurrent = _x.IPDS_BMSPowerCurrent;
		IPDS_RLSPowerCurrent = _x.IPDS_RLSPowerCurrent;
		IPDS_DVRPowerCurrent = _x.IPDS_DVRPowerCurrent;
		IPDS_ADCMain1PowerCurrent = _x.IPDS_ADCMain1PowerCurrent;
		IPDS_ADCMain2PowerCurrent = _x.IPDS_ADCMain2PowerCurrent;
		IPDS_BrakeSwNOPowerCurrent = _x.IPDS_BrakeSwNOPowerCurrent;
		IPDS_SAMPowerCurrent = _x.IPDS_SAMPowerCurrent;
		IPDS_TBoxPowerCurrent = _x.IPDS_TBoxPowerCurrent;
		IPDS_FrontIDCPowerCurrent = _x.IPDS_FrontIDCPowerCurrent;
		IPDS_RearDCDCPowerCurrent = _x.IPDS_RearDCDCPowerCurrent;
		IPDS_ADCBackup1PowerCurrent = _x.IPDS_ADCBackup1PowerCurrent;
		IPDS_ADCBackup2PowerCurrent = _x.IPDS_ADCBackup2PowerCurrent;
		return *this;
	}
	BDCIPDS2& operator=(BDCIPDS2 &&_x){
		IPDS_FLLampCtlUnitPowerCurrent = std::move(_x.IPDS_FLLampCtlUnitPowerCurrent);
		IPDS_FRLampCtlUnitPowerCurrent = std::move(_x.IPDS_FRLampCtlUnitPowerCurrent);
		IPDS_FrontRadarPowerCurrent = std::move(_x.IPDS_FrontRadarPowerCurrent);
		IPDS_FLRadarPowerCurrent = std::move(_x.IPDS_FLRadarPowerCurrent);
		IPDS_FRRadarPowerCurrent = std::move(_x.IPDS_FRRadarPowerCurrent);
		IPDS_AGSPowerCurrent = std::move(_x.IPDS_AGSPowerCurrent);
		IPDS_ECPPowerCurrent = std::move(_x.IPDS_ECPPowerCurrent);
		IPDS_AVASPowerCurrent = std::move(_x.IPDS_AVASPowerCurrent);
		IPDS_BrakeSwNCPowerCurrent = std::move(_x.IPDS_BrakeSwNCPowerCurrent);
		IPDS_AQSPowerCurrent = std::move(_x.IPDS_AQSPowerCurrent);
		IPDS_DriverLumbarMotorPowerCurrent = std::move(_x.IPDS_DriverLumbarMotorPowerCurrent);
		IPDS_RoofDevicePowerCurrent = std::move(_x.IPDS_RoofDevicePowerCurrent);
		IPDS_ETCPowerCurrent = std::move(_x.IPDS_ETCPowerCurrent);
		IPDS_ClusterDisplayPowerCurrent = std::move(_x.IPDS_ClusterDisplayPowerCurrent);
		IPDS_PassDisplayPowerCurrent = std::move(_x.IPDS_PassDisplayPowerCurrent);
		IPDS_IDCDisplayPowerCurrent = std::move(_x.IPDS_IDCDisplayPowerCurrent);
		IPDS_CigarLigterPowerCurrent = std::move(_x.IPDS_CigarLigterPowerCurrent);
		IPDS_HDMapPowerCurrent = std::move(_x.IPDS_HDMapPowerCurrent);
		IPDS_Lidar1PowerCurrent = std::move(_x.IPDS_Lidar1PowerCurrent);
		IPDS_Lidar2PowerCurrent = std::move(_x.IPDS_Lidar2PowerCurrent);
		IPDS_Lidar3PowerCurrent = std::move(_x.IPDS_Lidar3PowerCurrent);
		IPDS_HODPowerCurrent = std::move(_x.IPDS_HODPowerCurrent);
		IPDS_ISRVMPowerCurrent = std::move(_x.IPDS_ISRVMPowerCurrent);
		IPDS_SRSECUPowerCurrent = std::move(_x.IPDS_SRSECUPowerCurrent);
		IPDS_HUDPowerCurrent = std::move(_x.IPDS_HUDPowerCurrent);
		IPDS_CluCurrenterPowerCurrent = std::move(_x.IPDS_CluCurrenterPowerCurrent);
		IPDS_WCMPowerCurrent = std::move(_x.IPDS_WCMPowerCurrent);
		IPDS_FrontUSBChargerPowerCurrent = std::move(_x.IPDS_FrontUSBChargerPowerCurrent);
		IPDS_PM25PowerCurrent = std::move(_x.IPDS_PM25PowerCurrent);
		IPDS_PassLumbarMotorPowerCurrent = std::move(_x.IPDS_PassLumbarMotorPowerCurrent);
		IPDS_FrontBlowerPowerCurrent = std::move(_x.IPDS_FrontBlowerPowerCurrent);
		IPDS_RMPowerCurrent = std::move(_x.IPDS_RMPowerCurrent);
		IPDS_RearCtrlPanelPowerCurrent = std::move(_x.IPDS_RearCtrlPanelPowerCurrent);
		IPDS_Rear12VPowerCurrent = std::move(_x.IPDS_Rear12VPowerCurrent);
		IPDS_InverterPowerCurrent = std::move(_x.IPDS_InverterPowerCurrent);
		IPDS_RearMotorPowerCurrent = std::move(_x.IPDS_RearMotorPowerCurrent);
		IPDS_AMPPowerCurrent = std::move(_x.IPDS_AMPPowerCurrent);
		IPDS_RearEOPPowerCurrent = std::move(_x.IPDS_RearEOPPowerCurrent);
		IPDS_RearRadarPowerCurrent = std::move(_x.IPDS_RearRadarPowerCurrent);
		IPDS_RLALampCtlUnitPowerCurrent = std::move(_x.IPDS_RLALampCtlUnitPowerCurrent);
		IPDS_RRALampCtlUnitPowerCurrent = std::move(_x.IPDS_RRALampCtlUnitPowerCurrent);
		IPDS_RLBLampCtlUnitPowerCurrent = std::move(_x.IPDS_RLBLampCtlUnitPowerCurrent);
		IPDS_RRBLampCtlUnitPowerCurrent = std::move(_x.IPDS_RRBLampCtlUnitPowerCurrent);
		IPDS_EXVPowerCurrent = std::move(_x.IPDS_EXVPowerCurrent);
		IPDS_PASPowerCurrent = std::move(_x.IPDS_PASPowerCurrent);
		IPDS_GSMPowerCurrent = std::move(_x.IPDS_GSMPowerCurrent);
		IPDS_DSMPowerCurrent = std::move(_x.IPDS_DSMPowerCurrent);
		IPDS_IPSPowerCurrent = std::move(_x.IPDS_IPSPowerCurrent);
		IPDS_BMSPowerCurrent = std::move(_x.IPDS_BMSPowerCurrent);
		IPDS_RLSPowerCurrent = std::move(_x.IPDS_RLSPowerCurrent);
		IPDS_DVRPowerCurrent = std::move(_x.IPDS_DVRPowerCurrent);
		IPDS_ADCMain1PowerCurrent = std::move(_x.IPDS_ADCMain1PowerCurrent);
		IPDS_ADCMain2PowerCurrent = std::move(_x.IPDS_ADCMain2PowerCurrent);
		IPDS_BrakeSwNOPowerCurrent = std::move(_x.IPDS_BrakeSwNOPowerCurrent);
		IPDS_SAMPowerCurrent = std::move(_x.IPDS_SAMPowerCurrent);
		IPDS_TBoxPowerCurrent = std::move(_x.IPDS_TBoxPowerCurrent);
		IPDS_FrontIDCPowerCurrent = std::move(_x.IPDS_FrontIDCPowerCurrent);
		IPDS_RearDCDCPowerCurrent = std::move(_x.IPDS_RearDCDCPowerCurrent);
		IPDS_ADCBackup1PowerCurrent = std::move(_x.IPDS_ADCBackup1PowerCurrent);
		IPDS_ADCBackup2PowerCurrent = std::move(_x.IPDS_ADCBackup2PowerCurrent);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPDS_FLLampCtlUnitPowerCurrent);
		fun(IPDS_FRLampCtlUnitPowerCurrent);
		fun(IPDS_FrontRadarPowerCurrent);
		fun(IPDS_FLRadarPowerCurrent);
		fun(IPDS_FRRadarPowerCurrent);
		fun(IPDS_AGSPowerCurrent);
		fun(IPDS_ECPPowerCurrent);
		fun(IPDS_AVASPowerCurrent);
		fun(IPDS_BrakeSwNCPowerCurrent);
		fun(IPDS_AQSPowerCurrent);
		fun(IPDS_DriverLumbarMotorPowerCurrent);
		fun(IPDS_RoofDevicePowerCurrent);
		fun(IPDS_ETCPowerCurrent);
		fun(IPDS_ClusterDisplayPowerCurrent);
		fun(IPDS_PassDisplayPowerCurrent);
		fun(IPDS_IDCDisplayPowerCurrent);
		fun(IPDS_CigarLigterPowerCurrent);
		fun(IPDS_HDMapPowerCurrent);
		fun(IPDS_Lidar1PowerCurrent);
		fun(IPDS_Lidar2PowerCurrent);
		fun(IPDS_Lidar3PowerCurrent);
		fun(IPDS_HODPowerCurrent);
		fun(IPDS_ISRVMPowerCurrent);
		fun(IPDS_SRSECUPowerCurrent);
		fun(IPDS_HUDPowerCurrent);
		fun(IPDS_CluCurrenterPowerCurrent);
		fun(IPDS_WCMPowerCurrent);
		fun(IPDS_FrontUSBChargerPowerCurrent);
		fun(IPDS_PM25PowerCurrent);
		fun(IPDS_PassLumbarMotorPowerCurrent);
		fun(IPDS_FrontBlowerPowerCurrent);
		fun(IPDS_RMPowerCurrent);
		fun(IPDS_RearCtrlPanelPowerCurrent);
		fun(IPDS_Rear12VPowerCurrent);
		fun(IPDS_InverterPowerCurrent);
		fun(IPDS_RearMotorPowerCurrent);
		fun(IPDS_AMPPowerCurrent);
		fun(IPDS_RearEOPPowerCurrent);
		fun(IPDS_RearRadarPowerCurrent);
		fun(IPDS_RLALampCtlUnitPowerCurrent);
		fun(IPDS_RRALampCtlUnitPowerCurrent);
		fun(IPDS_RLBLampCtlUnitPowerCurrent);
		fun(IPDS_RRBLampCtlUnitPowerCurrent);
		fun(IPDS_EXVPowerCurrent);
		fun(IPDS_PASPowerCurrent);
		fun(IPDS_GSMPowerCurrent);
		fun(IPDS_DSMPowerCurrent);
		fun(IPDS_IPSPowerCurrent);
		fun(IPDS_BMSPowerCurrent);
		fun(IPDS_RLSPowerCurrent);
		fun(IPDS_DVRPowerCurrent);
		fun(IPDS_ADCMain1PowerCurrent);
		fun(IPDS_ADCMain2PowerCurrent);
		fun(IPDS_BrakeSwNOPowerCurrent);
		fun(IPDS_SAMPowerCurrent);
		fun(IPDS_TBoxPowerCurrent);
		fun(IPDS_FrontIDCPowerCurrent);
		fun(IPDS_RearDCDCPowerCurrent);
		fun(IPDS_ADCBackup1PowerCurrent);
		fun(IPDS_ADCBackup2PowerCurrent);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPDS_FLLampCtlUnitPowerCurrent);
		fun(IPDS_FRLampCtlUnitPowerCurrent);
		fun(IPDS_FrontRadarPowerCurrent);
		fun(IPDS_FLRadarPowerCurrent);
		fun(IPDS_FRRadarPowerCurrent);
		fun(IPDS_AGSPowerCurrent);
		fun(IPDS_ECPPowerCurrent);
		fun(IPDS_AVASPowerCurrent);
		fun(IPDS_BrakeSwNCPowerCurrent);
		fun(IPDS_AQSPowerCurrent);
		fun(IPDS_DriverLumbarMotorPowerCurrent);
		fun(IPDS_RoofDevicePowerCurrent);
		fun(IPDS_ETCPowerCurrent);
		fun(IPDS_ClusterDisplayPowerCurrent);
		fun(IPDS_PassDisplayPowerCurrent);
		fun(IPDS_IDCDisplayPowerCurrent);
		fun(IPDS_CigarLigterPowerCurrent);
		fun(IPDS_HDMapPowerCurrent);
		fun(IPDS_Lidar1PowerCurrent);
		fun(IPDS_Lidar2PowerCurrent);
		fun(IPDS_Lidar3PowerCurrent);
		fun(IPDS_HODPowerCurrent);
		fun(IPDS_ISRVMPowerCurrent);
		fun(IPDS_SRSECUPowerCurrent);
		fun(IPDS_HUDPowerCurrent);
		fun(IPDS_CluCurrenterPowerCurrent);
		fun(IPDS_WCMPowerCurrent);
		fun(IPDS_FrontUSBChargerPowerCurrent);
		fun(IPDS_PM25PowerCurrent);
		fun(IPDS_PassLumbarMotorPowerCurrent);
		fun(IPDS_FrontBlowerPowerCurrent);
		fun(IPDS_RMPowerCurrent);
		fun(IPDS_RearCtrlPanelPowerCurrent);
		fun(IPDS_Rear12VPowerCurrent);
		fun(IPDS_InverterPowerCurrent);
		fun(IPDS_RearMotorPowerCurrent);
		fun(IPDS_AMPPowerCurrent);
		fun(IPDS_RearEOPPowerCurrent);
		fun(IPDS_RearRadarPowerCurrent);
		fun(IPDS_RLALampCtlUnitPowerCurrent);
		fun(IPDS_RRALampCtlUnitPowerCurrent);
		fun(IPDS_RLBLampCtlUnitPowerCurrent);
		fun(IPDS_RRBLampCtlUnitPowerCurrent);
		fun(IPDS_EXVPowerCurrent);
		fun(IPDS_PASPowerCurrent);
		fun(IPDS_GSMPowerCurrent);
		fun(IPDS_DSMPowerCurrent);
		fun(IPDS_IPSPowerCurrent);
		fun(IPDS_BMSPowerCurrent);
		fun(IPDS_RLSPowerCurrent);
		fun(IPDS_DVRPowerCurrent);
		fun(IPDS_ADCMain1PowerCurrent);
		fun(IPDS_ADCMain2PowerCurrent);
		fun(IPDS_BrakeSwNOPowerCurrent);
		fun(IPDS_SAMPowerCurrent);
		fun(IPDS_TBoxPowerCurrent);
		fun(IPDS_FrontIDCPowerCurrent);
		fun(IPDS_RearDCDCPowerCurrent);
		fun(IPDS_ADCBackup1PowerCurrent);
		fun(IPDS_ADCBackup2PowerCurrent);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPDS_FLLampCtlUnitPowerCurrent);
		fun << (IPDS_FRLampCtlUnitPowerCurrent);
		fun << (IPDS_FrontRadarPowerCurrent);
		fun << (IPDS_FLRadarPowerCurrent);
		fun << (IPDS_FRRadarPowerCurrent);
		fun << (IPDS_AGSPowerCurrent);
		fun << (IPDS_ECPPowerCurrent);
		fun << (IPDS_AVASPowerCurrent);
		fun << (IPDS_BrakeSwNCPowerCurrent);
		fun << (IPDS_AQSPowerCurrent);
		fun << (IPDS_DriverLumbarMotorPowerCurrent);
		fun << (IPDS_RoofDevicePowerCurrent);
		fun << (IPDS_ETCPowerCurrent);
		fun << (IPDS_ClusterDisplayPowerCurrent);
		fun << (IPDS_PassDisplayPowerCurrent);
		fun << (IPDS_IDCDisplayPowerCurrent);
		fun << (IPDS_CigarLigterPowerCurrent);
		fun << (IPDS_HDMapPowerCurrent);
		fun << (IPDS_Lidar1PowerCurrent);
		fun << (IPDS_Lidar2PowerCurrent);
		fun << (IPDS_Lidar3PowerCurrent);
		fun << (IPDS_HODPowerCurrent);
		fun << (IPDS_ISRVMPowerCurrent);
		fun << (IPDS_SRSECUPowerCurrent);
		fun << (IPDS_HUDPowerCurrent);
		fun << (IPDS_CluCurrenterPowerCurrent);
		fun << (IPDS_WCMPowerCurrent);
		fun << (IPDS_FrontUSBChargerPowerCurrent);
		fun << (IPDS_PM25PowerCurrent);
		fun << (IPDS_PassLumbarMotorPowerCurrent);
		fun << (IPDS_FrontBlowerPowerCurrent);
		fun << (IPDS_RMPowerCurrent);
		fun << (IPDS_RearCtrlPanelPowerCurrent);
		fun << (IPDS_Rear12VPowerCurrent);
		fun << (IPDS_InverterPowerCurrent);
		fun << (IPDS_RearMotorPowerCurrent);
		fun << (IPDS_AMPPowerCurrent);
		fun << (IPDS_RearEOPPowerCurrent);
		fun << (IPDS_RearRadarPowerCurrent);
		fun << (IPDS_RLALampCtlUnitPowerCurrent);
		fun << (IPDS_RRALampCtlUnitPowerCurrent);
		fun << (IPDS_RLBLampCtlUnitPowerCurrent);
		fun << (IPDS_RRBLampCtlUnitPowerCurrent);
		fun << (IPDS_EXVPowerCurrent);
		fun << (IPDS_PASPowerCurrent);
		fun << (IPDS_GSMPowerCurrent);
		fun << (IPDS_DSMPowerCurrent);
		fun << (IPDS_IPSPowerCurrent);
		fun << (IPDS_BMSPowerCurrent);
		fun << (IPDS_RLSPowerCurrent);
		fun << (IPDS_DVRPowerCurrent);
		fun << (IPDS_ADCMain1PowerCurrent);
		fun << (IPDS_ADCMain2PowerCurrent);
		fun << (IPDS_BrakeSwNOPowerCurrent);
		fun << (IPDS_SAMPowerCurrent);
		fun << (IPDS_TBoxPowerCurrent);
		fun << (IPDS_FrontIDCPowerCurrent);
		fun << (IPDS_RearDCDCPowerCurrent);
		fun << (IPDS_ADCBackup1PowerCurrent);
		fun << (IPDS_ADCBackup2PowerCurrent);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPDS_FLLampCtlUnitPowerCurrent);
		fun >> (IPDS_FRLampCtlUnitPowerCurrent);
		fun >> (IPDS_FrontRadarPowerCurrent);
		fun >> (IPDS_FLRadarPowerCurrent);
		fun >> (IPDS_FRRadarPowerCurrent);
		fun >> (IPDS_AGSPowerCurrent);
		fun >> (IPDS_ECPPowerCurrent);
		fun >> (IPDS_AVASPowerCurrent);
		fun >> (IPDS_BrakeSwNCPowerCurrent);
		fun >> (IPDS_AQSPowerCurrent);
		fun >> (IPDS_DriverLumbarMotorPowerCurrent);
		fun >> (IPDS_RoofDevicePowerCurrent);
		fun >> (IPDS_ETCPowerCurrent);
		fun >> (IPDS_ClusterDisplayPowerCurrent);
		fun >> (IPDS_PassDisplayPowerCurrent);
		fun >> (IPDS_IDCDisplayPowerCurrent);
		fun >> (IPDS_CigarLigterPowerCurrent);
		fun >> (IPDS_HDMapPowerCurrent);
		fun >> (IPDS_Lidar1PowerCurrent);
		fun >> (IPDS_Lidar2PowerCurrent);
		fun >> (IPDS_Lidar3PowerCurrent);
		fun >> (IPDS_HODPowerCurrent);
		fun >> (IPDS_ISRVMPowerCurrent);
		fun >> (IPDS_SRSECUPowerCurrent);
		fun >> (IPDS_HUDPowerCurrent);
		fun >> (IPDS_CluCurrenterPowerCurrent);
		fun >> (IPDS_WCMPowerCurrent);
		fun >> (IPDS_FrontUSBChargerPowerCurrent);
		fun >> (IPDS_PM25PowerCurrent);
		fun >> (IPDS_PassLumbarMotorPowerCurrent);
		fun >> (IPDS_FrontBlowerPowerCurrent);
		fun >> (IPDS_RMPowerCurrent);
		fun >> (IPDS_RearCtrlPanelPowerCurrent);
		fun >> (IPDS_Rear12VPowerCurrent);
		fun >> (IPDS_InverterPowerCurrent);
		fun >> (IPDS_RearMotorPowerCurrent);
		fun >> (IPDS_AMPPowerCurrent);
		fun >> (IPDS_RearEOPPowerCurrent);
		fun >> (IPDS_RearRadarPowerCurrent);
		fun >> (IPDS_RLALampCtlUnitPowerCurrent);
		fun >> (IPDS_RRALampCtlUnitPowerCurrent);
		fun >> (IPDS_RLBLampCtlUnitPowerCurrent);
		fun >> (IPDS_RRBLampCtlUnitPowerCurrent);
		fun >> (IPDS_EXVPowerCurrent);
		fun >> (IPDS_PASPowerCurrent);
		fun >> (IPDS_GSMPowerCurrent);
		fun >> (IPDS_DSMPowerCurrent);
		fun >> (IPDS_IPSPowerCurrent);
		fun >> (IPDS_BMSPowerCurrent);
		fun >> (IPDS_RLSPowerCurrent);
		fun >> (IPDS_DVRPowerCurrent);
		fun >> (IPDS_ADCMain1PowerCurrent);
		fun >> (IPDS_ADCMain2PowerCurrent);
		fun >> (IPDS_BrakeSwNOPowerCurrent);
		fun >> (IPDS_SAMPowerCurrent);
		fun >> (IPDS_TBoxPowerCurrent);
		fun >> (IPDS_FrontIDCPowerCurrent);
		fun >> (IPDS_RearDCDCPowerCurrent);
		fun >> (IPDS_ADCBackup1PowerCurrent);
		fun >> (IPDS_ADCBackup2PowerCurrent);
	}
};

#endif //____BDCIPDS2_H__
