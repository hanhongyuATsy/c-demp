#ifndef ____BDCBATTDATA_H__
#define ____BDCBATTDATA_H__


#include "cstdint"






struct BDCBattData {
public:
	std::uint8_t VCU_VehChgDischgSt;
	std::uint8_t BMC_BattTempAvg;
	std::uint8_t VCU_DspDischgSt;
	std::uint16_t VCU_DspDischgVolt;
	std::uint16_t VCU_DspDischgCurr;
/*
	BDCBattData() {}
	~BDCBattData() {}
	BDCBattData(const std::uint8_t _VCU_VehChgDischgSt,const std::uint8_t _BMC_BattTempAvg,const std::uint8_t _VCU_DspDischgSt,const std::uint16_t _VCU_DspDischgVolt,const std::uint16_t _VCU_DspDischgCurr):VCU_VehChgDischgSt(_VCU_VehChgDischgSt),BMC_BattTempAvg(_BMC_BattTempAvg),VCU_DspDischgSt(_VCU_DspDischgSt),VCU_DspDischgVolt(_VCU_DspDischgVolt),VCU_DspDischgCurr(_VCU_DspDischgCurr) {}
	BDCBattData(const BDCBattData &_x){
		VCU_VehChgDischgSt = _x.VCU_VehChgDischgSt;
		BMC_BattTempAvg = _x.BMC_BattTempAvg;
		VCU_DspDischgSt = _x.VCU_DspDischgSt;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
	}
	BDCBattData(BDCBattData &&_x){
		VCU_VehChgDischgSt = std::move(_x.VCU_VehChgDischgSt);
		BMC_BattTempAvg = std::move(_x.BMC_BattTempAvg);
		VCU_DspDischgSt = std::move(_x.VCU_DspDischgSt);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
	}
	BDCBattData& operator=(const BDCBattData &_x){
		VCU_VehChgDischgSt = _x.VCU_VehChgDischgSt;
		BMC_BattTempAvg = _x.BMC_BattTempAvg;
		VCU_DspDischgSt = _x.VCU_DspDischgSt;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
		return *this;
	}
	BDCBattData& operator=(BDCBattData &&_x){
		VCU_VehChgDischgSt = std::move(_x.VCU_VehChgDischgSt);
		BMC_BattTempAvg = std::move(_x.BMC_BattTempAvg);
		VCU_DspDischgSt = std::move(_x.VCU_DspDischgSt);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_VehChgDischgSt);
		fun(BMC_BattTempAvg);
		fun(VCU_DspDischgSt);
		fun(VCU_DspDischgVolt);
		fun(VCU_DspDischgCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_VehChgDischgSt);
		fun(BMC_BattTempAvg);
		fun(VCU_DspDischgSt);
		fun(VCU_DspDischgVolt);
		fun(VCU_DspDischgCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_VehChgDischgSt);
		fun << (BMC_BattTempAvg);
		fun << (VCU_DspDischgSt);
		fun << (VCU_DspDischgVolt);
		fun << (VCU_DspDischgCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_VehChgDischgSt);
		fun >> (BMC_BattTempAvg);
		fun >> (VCU_DspDischgSt);
		fun >> (VCU_DspDischgVolt);
		fun >> (VCU_DspDischgCurr);
	}
};

#endif //____BDCBATTDATA_H__
