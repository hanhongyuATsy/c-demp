#ifndef ____BDCDDRVADC_H__
#define ____BDCDDRVADC_H__


#include "cstdint"






struct BDCDDrvADC {
public:
	std::uint8_t ADC_APAst;
	std::uint8_t ADC_LDWSt;
	std::uint8_t ADC_LDPSt;
	std::uint8_t ADC_FCWAssistType;
	std::uint8_t ADC_FCWPreWarn;
	std::uint8_t ADC_FCWLatentWarn;
	std::uint8_t ADC_AEBOffSt;
	std::uint8_t ADC_AEBInterventionSt;
	std::uint8_t ADC_RCTAEnableSt;
	std::uint8_t ADC_TSR_EnableSt;
	std::uint8_t ADC_TSR_St;
	std::uint8_t ADC_RCWEnableSt;
	std::uint8_t ADC_FCTAEnableSt;
	std::uint8_t ADC_FCTASt;
	std::uint8_t ADC_BSDLCAEnableSt;
	std::uint8_t ADC_ILC_EnableSt;
	std::uint8_t ADC_ACCMode_C;
	std::uint8_t ADC_ICA_St;
	std::uint8_t ADC_NDASt;
	std::uint8_t ACU_IFC_RoadType;
	std::uint32_t ICM_TotalOdometer_accurate;
/*
	BDCDDrvADC() {}
	~BDCDDrvADC() {}
	BDCDDrvADC(const std::uint8_t _ADC_APAst,const std::uint8_t _ADC_LDWSt,const std::uint8_t _ADC_LDPSt,const std::uint8_t _ADC_FCWAssistType,const std::uint8_t _ADC_FCWPreWarn,const std::uint8_t _ADC_FCWLatentWarn,const std::uint8_t _ADC_AEBOffSt,const std::uint8_t _ADC_AEBInterventionSt,const std::uint8_t _ADC_RCTAEnableSt,const std::uint8_t _ADC_TSR_EnableSt,const std::uint8_t _ADC_TSR_St,const std::uint8_t _ADC_RCWEnableSt,const std::uint8_t _ADC_FCTAEnableSt,const std::uint8_t _ADC_FCTASt,const std::uint8_t _ADC_BSDLCAEnableSt,const std::uint8_t _ADC_ILC_EnableSt,const std::uint8_t _ADC_ACCMode_C,const std::uint8_t _ADC_ICA_St,const std::uint8_t _ADC_NDASt,const std::uint8_t _ACU_IFC_RoadType,const std::uint32_t _ICM_TotalOdometer_accurate):ADC_APAst(_ADC_APAst),ADC_LDWSt(_ADC_LDWSt),ADC_LDPSt(_ADC_LDPSt),ADC_FCWAssistType(_ADC_FCWAssistType),ADC_FCWPreWarn(_ADC_FCWPreWarn),ADC_FCWLatentWarn(_ADC_FCWLatentWarn),ADC_AEBOffSt(_ADC_AEBOffSt),ADC_AEBInterventionSt(_ADC_AEBInterventionSt),ADC_RCTAEnableSt(_ADC_RCTAEnableSt),ADC_TSR_EnableSt(_ADC_TSR_EnableSt),ADC_TSR_St(_ADC_TSR_St),ADC_RCWEnableSt(_ADC_RCWEnableSt),ADC_FCTAEnableSt(_ADC_FCTAEnableSt),ADC_FCTASt(_ADC_FCTASt),ADC_BSDLCAEnableSt(_ADC_BSDLCAEnableSt),ADC_ILC_EnableSt(_ADC_ILC_EnableSt),ADC_ACCMode_C(_ADC_ACCMode_C),ADC_ICA_St(_ADC_ICA_St),ADC_NDASt(_ADC_NDASt),ACU_IFC_RoadType(_ACU_IFC_RoadType),ICM_TotalOdometer_accurate(_ICM_TotalOdometer_accurate) {}
	BDCDDrvADC(const BDCDDrvADC &_x){
		ADC_APAst = _x.ADC_APAst;
		ADC_LDWSt = _x.ADC_LDWSt;
		ADC_LDPSt = _x.ADC_LDPSt;
		ADC_FCWAssistType = _x.ADC_FCWAssistType;
		ADC_FCWPreWarn = _x.ADC_FCWPreWarn;
		ADC_FCWLatentWarn = _x.ADC_FCWLatentWarn;
		ADC_AEBOffSt = _x.ADC_AEBOffSt;
		ADC_AEBInterventionSt = _x.ADC_AEBInterventionSt;
		ADC_RCTAEnableSt = _x.ADC_RCTAEnableSt;
		ADC_TSR_EnableSt = _x.ADC_TSR_EnableSt;
		ADC_TSR_St = _x.ADC_TSR_St;
		ADC_RCWEnableSt = _x.ADC_RCWEnableSt;
		ADC_FCTAEnableSt = _x.ADC_FCTAEnableSt;
		ADC_FCTASt = _x.ADC_FCTASt;
		ADC_BSDLCAEnableSt = _x.ADC_BSDLCAEnableSt;
		ADC_ILC_EnableSt = _x.ADC_ILC_EnableSt;
		ADC_ACCMode_C = _x.ADC_ACCMode_C;
		ADC_ICA_St = _x.ADC_ICA_St;
		ADC_NDASt = _x.ADC_NDASt;
		ACU_IFC_RoadType = _x.ACU_IFC_RoadType;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
	}
	BDCDDrvADC(BDCDDrvADC &&_x){
		ADC_APAst = std::move(_x.ADC_APAst);
		ADC_LDWSt = std::move(_x.ADC_LDWSt);
		ADC_LDPSt = std::move(_x.ADC_LDPSt);
		ADC_FCWAssistType = std::move(_x.ADC_FCWAssistType);
		ADC_FCWPreWarn = std::move(_x.ADC_FCWPreWarn);
		ADC_FCWLatentWarn = std::move(_x.ADC_FCWLatentWarn);
		ADC_AEBOffSt = std::move(_x.ADC_AEBOffSt);
		ADC_AEBInterventionSt = std::move(_x.ADC_AEBInterventionSt);
		ADC_RCTAEnableSt = std::move(_x.ADC_RCTAEnableSt);
		ADC_TSR_EnableSt = std::move(_x.ADC_TSR_EnableSt);
		ADC_TSR_St = std::move(_x.ADC_TSR_St);
		ADC_RCWEnableSt = std::move(_x.ADC_RCWEnableSt);
		ADC_FCTAEnableSt = std::move(_x.ADC_FCTAEnableSt);
		ADC_FCTASt = std::move(_x.ADC_FCTASt);
		ADC_BSDLCAEnableSt = std::move(_x.ADC_BSDLCAEnableSt);
		ADC_ILC_EnableSt = std::move(_x.ADC_ILC_EnableSt);
		ADC_ACCMode_C = std::move(_x.ADC_ACCMode_C);
		ADC_ICA_St = std::move(_x.ADC_ICA_St);
		ADC_NDASt = std::move(_x.ADC_NDASt);
		ACU_IFC_RoadType = std::move(_x.ACU_IFC_RoadType);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
	}
	BDCDDrvADC& operator=(const BDCDDrvADC &_x){
		ADC_APAst = _x.ADC_APAst;
		ADC_LDWSt = _x.ADC_LDWSt;
		ADC_LDPSt = _x.ADC_LDPSt;
		ADC_FCWAssistType = _x.ADC_FCWAssistType;
		ADC_FCWPreWarn = _x.ADC_FCWPreWarn;
		ADC_FCWLatentWarn = _x.ADC_FCWLatentWarn;
		ADC_AEBOffSt = _x.ADC_AEBOffSt;
		ADC_AEBInterventionSt = _x.ADC_AEBInterventionSt;
		ADC_RCTAEnableSt = _x.ADC_RCTAEnableSt;
		ADC_TSR_EnableSt = _x.ADC_TSR_EnableSt;
		ADC_TSR_St = _x.ADC_TSR_St;
		ADC_RCWEnableSt = _x.ADC_RCWEnableSt;
		ADC_FCTAEnableSt = _x.ADC_FCTAEnableSt;
		ADC_FCTASt = _x.ADC_FCTASt;
		ADC_BSDLCAEnableSt = _x.ADC_BSDLCAEnableSt;
		ADC_ILC_EnableSt = _x.ADC_ILC_EnableSt;
		ADC_ACCMode_C = _x.ADC_ACCMode_C;
		ADC_ICA_St = _x.ADC_ICA_St;
		ADC_NDASt = _x.ADC_NDASt;
		ACU_IFC_RoadType = _x.ACU_IFC_RoadType;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
		return *this;
	}
	BDCDDrvADC& operator=(BDCDDrvADC &&_x){
		ADC_APAst = std::move(_x.ADC_APAst);
		ADC_LDWSt = std::move(_x.ADC_LDWSt);
		ADC_LDPSt = std::move(_x.ADC_LDPSt);
		ADC_FCWAssistType = std::move(_x.ADC_FCWAssistType);
		ADC_FCWPreWarn = std::move(_x.ADC_FCWPreWarn);
		ADC_FCWLatentWarn = std::move(_x.ADC_FCWLatentWarn);
		ADC_AEBOffSt = std::move(_x.ADC_AEBOffSt);
		ADC_AEBInterventionSt = std::move(_x.ADC_AEBInterventionSt);
		ADC_RCTAEnableSt = std::move(_x.ADC_RCTAEnableSt);
		ADC_TSR_EnableSt = std::move(_x.ADC_TSR_EnableSt);
		ADC_TSR_St = std::move(_x.ADC_TSR_St);
		ADC_RCWEnableSt = std::move(_x.ADC_RCWEnableSt);
		ADC_FCTAEnableSt = std::move(_x.ADC_FCTAEnableSt);
		ADC_FCTASt = std::move(_x.ADC_FCTASt);
		ADC_BSDLCAEnableSt = std::move(_x.ADC_BSDLCAEnableSt);
		ADC_ILC_EnableSt = std::move(_x.ADC_ILC_EnableSt);
		ADC_ACCMode_C = std::move(_x.ADC_ACCMode_C);
		ADC_ICA_St = std::move(_x.ADC_ICA_St);
		ADC_NDASt = std::move(_x.ADC_NDASt);
		ACU_IFC_RoadType = std::move(_x.ACU_IFC_RoadType);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ADC_APAst);
		fun(ADC_LDWSt);
		fun(ADC_LDPSt);
		fun(ADC_FCWAssistType);
		fun(ADC_FCWPreWarn);
		fun(ADC_FCWLatentWarn);
		fun(ADC_AEBOffSt);
		fun(ADC_AEBInterventionSt);
		fun(ADC_RCTAEnableSt);
		fun(ADC_TSR_EnableSt);
		fun(ADC_TSR_St);
		fun(ADC_RCWEnableSt);
		fun(ADC_FCTAEnableSt);
		fun(ADC_FCTASt);
		fun(ADC_BSDLCAEnableSt);
		fun(ADC_ILC_EnableSt);
		fun(ADC_ACCMode_C);
		fun(ADC_ICA_St);
		fun(ADC_NDASt);
		fun(ACU_IFC_RoadType);
		fun(ICM_TotalOdometer_accurate);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ADC_APAst);
		fun(ADC_LDWSt);
		fun(ADC_LDPSt);
		fun(ADC_FCWAssistType);
		fun(ADC_FCWPreWarn);
		fun(ADC_FCWLatentWarn);
		fun(ADC_AEBOffSt);
		fun(ADC_AEBInterventionSt);
		fun(ADC_RCTAEnableSt);
		fun(ADC_TSR_EnableSt);
		fun(ADC_TSR_St);
		fun(ADC_RCWEnableSt);
		fun(ADC_FCTAEnableSt);
		fun(ADC_FCTASt);
		fun(ADC_BSDLCAEnableSt);
		fun(ADC_ILC_EnableSt);
		fun(ADC_ACCMode_C);
		fun(ADC_ICA_St);
		fun(ADC_NDASt);
		fun(ACU_IFC_RoadType);
		fun(ICM_TotalOdometer_accurate);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ADC_APAst);
		fun << (ADC_LDWSt);
		fun << (ADC_LDPSt);
		fun << (ADC_FCWAssistType);
		fun << (ADC_FCWPreWarn);
		fun << (ADC_FCWLatentWarn);
		fun << (ADC_AEBOffSt);
		fun << (ADC_AEBInterventionSt);
		fun << (ADC_RCTAEnableSt);
		fun << (ADC_TSR_EnableSt);
		fun << (ADC_TSR_St);
		fun << (ADC_RCWEnableSt);
		fun << (ADC_FCTAEnableSt);
		fun << (ADC_FCTASt);
		fun << (ADC_BSDLCAEnableSt);
		fun << (ADC_ILC_EnableSt);
		fun << (ADC_ACCMode_C);
		fun << (ADC_ICA_St);
		fun << (ADC_NDASt);
		fun << (ACU_IFC_RoadType);
		fun << (ICM_TotalOdometer_accurate);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ADC_APAst);
		fun >> (ADC_LDWSt);
		fun >> (ADC_LDPSt);
		fun >> (ADC_FCWAssistType);
		fun >> (ADC_FCWPreWarn);
		fun >> (ADC_FCWLatentWarn);
		fun >> (ADC_AEBOffSt);
		fun >> (ADC_AEBInterventionSt);
		fun >> (ADC_RCTAEnableSt);
		fun >> (ADC_TSR_EnableSt);
		fun >> (ADC_TSR_St);
		fun >> (ADC_RCWEnableSt);
		fun >> (ADC_FCTAEnableSt);
		fun >> (ADC_FCTASt);
		fun >> (ADC_BSDLCAEnableSt);
		fun >> (ADC_ILC_EnableSt);
		fun >> (ADC_ACCMode_C);
		fun >> (ADC_ICA_St);
		fun >> (ADC_NDASt);
		fun >> (ACU_IFC_RoadType);
		fun >> (ICM_TotalOdometer_accurate);
	}
};

#endif //____BDCDDRVADC_H__
