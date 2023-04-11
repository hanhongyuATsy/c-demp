#ifndef ____BDCTESTBMS8_H__
#define ____BDCTESTBMS8_H__


#include "cstdint"






struct BDCTestBMS8 {
public:
	std::uint16_t BMS_ResisRaiseFac;
	std::uint8_t BMS_DeltaSOHCorrEEP;
	std::uint16_t BMS_TotalSlepHrs;
	std::uint16_t BMS_TotalAh;
	std::uint32_t BMS_MainSV;
	std::uint8_t BMS_MainHV;
	std::uint8_t BMS_DeltaSohStatic;
	std::uint8_t VCU_SubEngWarmUPCycle;
	std::uint8_t VCU_DriveCycleSt;
	std::uint8_t VCU_EngMilLampReq;
	std::uint8_t VCU_rNumBCluStuck;
	std::uint8_t VCU_rNumC1CluStuck;
	std::uint8_t VCU_rNumHiEOPSpdReq;
	std::uint8_t VCU_rNumPMainOilLow4EOPErr;
	std::uint8_t VCU_rNumberC1CluFls;
	std::uint8_t VCU_rNumberBCluFls;
	std::uint8_t VCU_rNumberVaplpFls;
/*
	BDCTestBMS8() {}
	~BDCTestBMS8() {}
	BDCTestBMS8(const std::uint16_t _BMS_ResisRaiseFac,const std::uint8_t _BMS_DeltaSOHCorrEEP,const std::uint16_t _BMS_TotalSlepHrs,const std::uint16_t _BMS_TotalAh,const std::uint32_t _BMS_MainSV,const std::uint8_t _BMS_MainHV,const std::uint8_t _BMS_DeltaSohStatic,const std::uint8_t _VCU_SubEngWarmUPCycle,const std::uint8_t _VCU_DriveCycleSt,const std::uint8_t _VCU_EngMilLampReq,const std::uint8_t _VCU_rNumBCluStuck,const std::uint8_t _VCU_rNumC1CluStuck,const std::uint8_t _VCU_rNumHiEOPSpdReq,const std::uint8_t _VCU_rNumPMainOilLow4EOPErr,const std::uint8_t _VCU_rNumberC1CluFls,const std::uint8_t _VCU_rNumberBCluFls,const std::uint8_t _VCU_rNumberVaplpFls):BMS_ResisRaiseFac(_BMS_ResisRaiseFac),BMS_DeltaSOHCorrEEP(_BMS_DeltaSOHCorrEEP),BMS_TotalSlepHrs(_BMS_TotalSlepHrs),BMS_TotalAh(_BMS_TotalAh),BMS_MainSV(_BMS_MainSV),BMS_MainHV(_BMS_MainHV),BMS_DeltaSohStatic(_BMS_DeltaSohStatic),VCU_SubEngWarmUPCycle(_VCU_SubEngWarmUPCycle),VCU_DriveCycleSt(_VCU_DriveCycleSt),VCU_EngMilLampReq(_VCU_EngMilLampReq),VCU_rNumBCluStuck(_VCU_rNumBCluStuck),VCU_rNumC1CluStuck(_VCU_rNumC1CluStuck),VCU_rNumHiEOPSpdReq(_VCU_rNumHiEOPSpdReq),VCU_rNumPMainOilLow4EOPErr(_VCU_rNumPMainOilLow4EOPErr),VCU_rNumberC1CluFls(_VCU_rNumberC1CluFls),VCU_rNumberBCluFls(_VCU_rNumberBCluFls),VCU_rNumberVaplpFls(_VCU_rNumberVaplpFls) {}
	BDCTestBMS8(const BDCTestBMS8 &_x){
		BMS_ResisRaiseFac = _x.BMS_ResisRaiseFac;
		BMS_DeltaSOHCorrEEP = _x.BMS_DeltaSOHCorrEEP;
		BMS_TotalSlepHrs = _x.BMS_TotalSlepHrs;
		BMS_TotalAh = _x.BMS_TotalAh;
		BMS_MainSV = _x.BMS_MainSV;
		BMS_MainHV = _x.BMS_MainHV;
		BMS_DeltaSohStatic = _x.BMS_DeltaSohStatic;
		VCU_SubEngWarmUPCycle = _x.VCU_SubEngWarmUPCycle;
		VCU_DriveCycleSt = _x.VCU_DriveCycleSt;
		VCU_EngMilLampReq = _x.VCU_EngMilLampReq;
		VCU_rNumBCluStuck = _x.VCU_rNumBCluStuck;
		VCU_rNumC1CluStuck = _x.VCU_rNumC1CluStuck;
		VCU_rNumHiEOPSpdReq = _x.VCU_rNumHiEOPSpdReq;
		VCU_rNumPMainOilLow4EOPErr = _x.VCU_rNumPMainOilLow4EOPErr;
		VCU_rNumberC1CluFls = _x.VCU_rNumberC1CluFls;
		VCU_rNumberBCluFls = _x.VCU_rNumberBCluFls;
		VCU_rNumberVaplpFls = _x.VCU_rNumberVaplpFls;
	}
	BDCTestBMS8(BDCTestBMS8 &&_x){
		BMS_ResisRaiseFac = std::move(_x.BMS_ResisRaiseFac);
		BMS_DeltaSOHCorrEEP = std::move(_x.BMS_DeltaSOHCorrEEP);
		BMS_TotalSlepHrs = std::move(_x.BMS_TotalSlepHrs);
		BMS_TotalAh = std::move(_x.BMS_TotalAh);
		BMS_MainSV = std::move(_x.BMS_MainSV);
		BMS_MainHV = std::move(_x.BMS_MainHV);
		BMS_DeltaSohStatic = std::move(_x.BMS_DeltaSohStatic);
		VCU_SubEngWarmUPCycle = std::move(_x.VCU_SubEngWarmUPCycle);
		VCU_DriveCycleSt = std::move(_x.VCU_DriveCycleSt);
		VCU_EngMilLampReq = std::move(_x.VCU_EngMilLampReq);
		VCU_rNumBCluStuck = std::move(_x.VCU_rNumBCluStuck);
		VCU_rNumC1CluStuck = std::move(_x.VCU_rNumC1CluStuck);
		VCU_rNumHiEOPSpdReq = std::move(_x.VCU_rNumHiEOPSpdReq);
		VCU_rNumPMainOilLow4EOPErr = std::move(_x.VCU_rNumPMainOilLow4EOPErr);
		VCU_rNumberC1CluFls = std::move(_x.VCU_rNumberC1CluFls);
		VCU_rNumberBCluFls = std::move(_x.VCU_rNumberBCluFls);
		VCU_rNumberVaplpFls = std::move(_x.VCU_rNumberVaplpFls);
	}
	BDCTestBMS8& operator=(const BDCTestBMS8 &_x){
		BMS_ResisRaiseFac = _x.BMS_ResisRaiseFac;
		BMS_DeltaSOHCorrEEP = _x.BMS_DeltaSOHCorrEEP;
		BMS_TotalSlepHrs = _x.BMS_TotalSlepHrs;
		BMS_TotalAh = _x.BMS_TotalAh;
		BMS_MainSV = _x.BMS_MainSV;
		BMS_MainHV = _x.BMS_MainHV;
		BMS_DeltaSohStatic = _x.BMS_DeltaSohStatic;
		VCU_SubEngWarmUPCycle = _x.VCU_SubEngWarmUPCycle;
		VCU_DriveCycleSt = _x.VCU_DriveCycleSt;
		VCU_EngMilLampReq = _x.VCU_EngMilLampReq;
		VCU_rNumBCluStuck = _x.VCU_rNumBCluStuck;
		VCU_rNumC1CluStuck = _x.VCU_rNumC1CluStuck;
		VCU_rNumHiEOPSpdReq = _x.VCU_rNumHiEOPSpdReq;
		VCU_rNumPMainOilLow4EOPErr = _x.VCU_rNumPMainOilLow4EOPErr;
		VCU_rNumberC1CluFls = _x.VCU_rNumberC1CluFls;
		VCU_rNumberBCluFls = _x.VCU_rNumberBCluFls;
		VCU_rNumberVaplpFls = _x.VCU_rNumberVaplpFls;
		return *this;
	}
	BDCTestBMS8& operator=(BDCTestBMS8 &&_x){
		BMS_ResisRaiseFac = std::move(_x.BMS_ResisRaiseFac);
		BMS_DeltaSOHCorrEEP = std::move(_x.BMS_DeltaSOHCorrEEP);
		BMS_TotalSlepHrs = std::move(_x.BMS_TotalSlepHrs);
		BMS_TotalAh = std::move(_x.BMS_TotalAh);
		BMS_MainSV = std::move(_x.BMS_MainSV);
		BMS_MainHV = std::move(_x.BMS_MainHV);
		BMS_DeltaSohStatic = std::move(_x.BMS_DeltaSohStatic);
		VCU_SubEngWarmUPCycle = std::move(_x.VCU_SubEngWarmUPCycle);
		VCU_DriveCycleSt = std::move(_x.VCU_DriveCycleSt);
		VCU_EngMilLampReq = std::move(_x.VCU_EngMilLampReq);
		VCU_rNumBCluStuck = std::move(_x.VCU_rNumBCluStuck);
		VCU_rNumC1CluStuck = std::move(_x.VCU_rNumC1CluStuck);
		VCU_rNumHiEOPSpdReq = std::move(_x.VCU_rNumHiEOPSpdReq);
		VCU_rNumPMainOilLow4EOPErr = std::move(_x.VCU_rNumPMainOilLow4EOPErr);
		VCU_rNumberC1CluFls = std::move(_x.VCU_rNumberC1CluFls);
		VCU_rNumberBCluFls = std::move(_x.VCU_rNumberBCluFls);
		VCU_rNumberVaplpFls = std::move(_x.VCU_rNumberVaplpFls);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_ResisRaiseFac);
		fun(BMS_DeltaSOHCorrEEP);
		fun(BMS_TotalSlepHrs);
		fun(BMS_TotalAh);
		fun(BMS_MainSV);
		fun(BMS_MainHV);
		fun(BMS_DeltaSohStatic);
		fun(VCU_SubEngWarmUPCycle);
		fun(VCU_DriveCycleSt);
		fun(VCU_EngMilLampReq);
		fun(VCU_rNumBCluStuck);
		fun(VCU_rNumC1CluStuck);
		fun(VCU_rNumHiEOPSpdReq);
		fun(VCU_rNumPMainOilLow4EOPErr);
		fun(VCU_rNumberC1CluFls);
		fun(VCU_rNumberBCluFls);
		fun(VCU_rNumberVaplpFls);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_ResisRaiseFac);
		fun(BMS_DeltaSOHCorrEEP);
		fun(BMS_TotalSlepHrs);
		fun(BMS_TotalAh);
		fun(BMS_MainSV);
		fun(BMS_MainHV);
		fun(BMS_DeltaSohStatic);
		fun(VCU_SubEngWarmUPCycle);
		fun(VCU_DriveCycleSt);
		fun(VCU_EngMilLampReq);
		fun(VCU_rNumBCluStuck);
		fun(VCU_rNumC1CluStuck);
		fun(VCU_rNumHiEOPSpdReq);
		fun(VCU_rNumPMainOilLow4EOPErr);
		fun(VCU_rNumberC1CluFls);
		fun(VCU_rNumberBCluFls);
		fun(VCU_rNumberVaplpFls);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_ResisRaiseFac);
		fun << (BMS_DeltaSOHCorrEEP);
		fun << (BMS_TotalSlepHrs);
		fun << (BMS_TotalAh);
		fun << (BMS_MainSV);
		fun << (BMS_MainHV);
		fun << (BMS_DeltaSohStatic);
		fun << (VCU_SubEngWarmUPCycle);
		fun << (VCU_DriveCycleSt);
		fun << (VCU_EngMilLampReq);
		fun << (VCU_rNumBCluStuck);
		fun << (VCU_rNumC1CluStuck);
		fun << (VCU_rNumHiEOPSpdReq);
		fun << (VCU_rNumPMainOilLow4EOPErr);
		fun << (VCU_rNumberC1CluFls);
		fun << (VCU_rNumberBCluFls);
		fun << (VCU_rNumberVaplpFls);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_ResisRaiseFac);
		fun >> (BMS_DeltaSOHCorrEEP);
		fun >> (BMS_TotalSlepHrs);
		fun >> (BMS_TotalAh);
		fun >> (BMS_MainSV);
		fun >> (BMS_MainHV);
		fun >> (BMS_DeltaSohStatic);
		fun >> (VCU_SubEngWarmUPCycle);
		fun >> (VCU_DriveCycleSt);
		fun >> (VCU_EngMilLampReq);
		fun >> (VCU_rNumBCluStuck);
		fun >> (VCU_rNumC1CluStuck);
		fun >> (VCU_rNumHiEOPSpdReq);
		fun >> (VCU_rNumPMainOilLow4EOPErr);
		fun >> (VCU_rNumberC1CluFls);
		fun >> (VCU_rNumberBCluFls);
		fun >> (VCU_rNumberVaplpFls);
	}
};

#endif //____BDCTESTBMS8_H__
