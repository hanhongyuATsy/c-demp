#ifndef __ARA_COM_VSOMEIP__POWERTRAINCAPACITYINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__POWERTRAINCAPACITYINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PowerTrainCapacityInfo_Type {
public:
	std::uint16_t BMS_ChgPwrMax2s;
	std::uint16_t BMS_DisPwrMax2s;
	std::uint16_t BMS_ChgPwrMax10s;
	std::uint16_t BMS_DisPwrMax10s;
	std::uint16_t BMS_DisPwrMax30s;
	std::uint16_t BMS_ChgPwrMax30s;
	std::uint16_t BMS_BattEvaTemp;
	std::uint8_t BMS_SelfHeatPwr2min;
	std::uint8_t BMS_SelfHeatPwr5min;
	std::uint8_t BMS_SelfHeatPwr10min;
	std::uint16_t DCU_VCU_TorqMax;
	std::uint16_t DCU_VCU_TorqMin;
	std::uint16_t GCU_VCU_TorqMax;
	std::uint16_t GCU_VCU_TorqMin;
	std::uint16_t BMS_BattTempAvg;
	std::uint8_t BMS_DCChgPlugSt;
/*
	PowerTrainCapacityInfo_Type() {}
	~PowerTrainCapacityInfo_Type() {}
	PowerTrainCapacityInfo_Type(const std::uint16_t _BMS_ChgPwrMax2s,const std::uint16_t _BMS_DisPwrMax2s,const std::uint16_t _BMS_ChgPwrMax10s,const std::uint16_t _BMS_DisPwrMax10s,const std::uint16_t _BMS_DisPwrMax30s,const std::uint16_t _BMS_ChgPwrMax30s,const std::uint16_t _BMS_BattEvaTemp,const std::uint8_t _BMS_SelfHeatPwr2min,const std::uint8_t _BMS_SelfHeatPwr5min,const std::uint8_t _BMS_SelfHeatPwr10min,const std::uint16_t _DCU_VCU_TorqMax,const std::uint16_t _DCU_VCU_TorqMin,const std::uint16_t _GCU_VCU_TorqMax,const std::uint16_t _GCU_VCU_TorqMin,const std::uint16_t _BMS_BattTempAvg,const std::uint8_t _BMS_DCChgPlugSt):BMS_ChgPwrMax2s(_BMS_ChgPwrMax2s),BMS_DisPwrMax2s(_BMS_DisPwrMax2s),BMS_ChgPwrMax10s(_BMS_ChgPwrMax10s),BMS_DisPwrMax10s(_BMS_DisPwrMax10s),BMS_DisPwrMax30s(_BMS_DisPwrMax30s),BMS_ChgPwrMax30s(_BMS_ChgPwrMax30s),BMS_BattEvaTemp(_BMS_BattEvaTemp),BMS_SelfHeatPwr2min(_BMS_SelfHeatPwr2min),BMS_SelfHeatPwr5min(_BMS_SelfHeatPwr5min),BMS_SelfHeatPwr10min(_BMS_SelfHeatPwr10min),DCU_VCU_TorqMax(_DCU_VCU_TorqMax),DCU_VCU_TorqMin(_DCU_VCU_TorqMin),GCU_VCU_TorqMax(_GCU_VCU_TorqMax),GCU_VCU_TorqMin(_GCU_VCU_TorqMin),BMS_BattTempAvg(_BMS_BattTempAvg),BMS_DCChgPlugSt(_BMS_DCChgPlugSt) {}
	PowerTrainCapacityInfo_Type(const PowerTrainCapacityInfo_Type &_x){
		BMS_ChgPwrMax2s = _x.BMS_ChgPwrMax2s;
		BMS_DisPwrMax2s = _x.BMS_DisPwrMax2s;
		BMS_ChgPwrMax10s = _x.BMS_ChgPwrMax10s;
		BMS_DisPwrMax10s = _x.BMS_DisPwrMax10s;
		BMS_DisPwrMax30s = _x.BMS_DisPwrMax30s;
		BMS_ChgPwrMax30s = _x.BMS_ChgPwrMax30s;
		BMS_BattEvaTemp = _x.BMS_BattEvaTemp;
		BMS_SelfHeatPwr2min = _x.BMS_SelfHeatPwr2min;
		BMS_SelfHeatPwr5min = _x.BMS_SelfHeatPwr5min;
		BMS_SelfHeatPwr10min = _x.BMS_SelfHeatPwr10min;
		DCU_VCU_TorqMax = _x.DCU_VCU_TorqMax;
		DCU_VCU_TorqMin = _x.DCU_VCU_TorqMin;
		GCU_VCU_TorqMax = _x.GCU_VCU_TorqMax;
		GCU_VCU_TorqMin = _x.GCU_VCU_TorqMin;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_DCChgPlugSt = _x.BMS_DCChgPlugSt;
	}
	PowerTrainCapacityInfo_Type(PowerTrainCapacityInfo_Type &&_x){
		BMS_ChgPwrMax2s = std::move(_x.BMS_ChgPwrMax2s);
		BMS_DisPwrMax2s = std::move(_x.BMS_DisPwrMax2s);
		BMS_ChgPwrMax10s = std::move(_x.BMS_ChgPwrMax10s);
		BMS_DisPwrMax10s = std::move(_x.BMS_DisPwrMax10s);
		BMS_DisPwrMax30s = std::move(_x.BMS_DisPwrMax30s);
		BMS_ChgPwrMax30s = std::move(_x.BMS_ChgPwrMax30s);
		BMS_BattEvaTemp = std::move(_x.BMS_BattEvaTemp);
		BMS_SelfHeatPwr2min = std::move(_x.BMS_SelfHeatPwr2min);
		BMS_SelfHeatPwr5min = std::move(_x.BMS_SelfHeatPwr5min);
		BMS_SelfHeatPwr10min = std::move(_x.BMS_SelfHeatPwr10min);
		DCU_VCU_TorqMax = std::move(_x.DCU_VCU_TorqMax);
		DCU_VCU_TorqMin = std::move(_x.DCU_VCU_TorqMin);
		GCU_VCU_TorqMax = std::move(_x.GCU_VCU_TorqMax);
		GCU_VCU_TorqMin = std::move(_x.GCU_VCU_TorqMin);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_DCChgPlugSt = std::move(_x.BMS_DCChgPlugSt);
	}
	PowerTrainCapacityInfo_Type& operator=(const PowerTrainCapacityInfo_Type &_x){
		BMS_ChgPwrMax2s = _x.BMS_ChgPwrMax2s;
		BMS_DisPwrMax2s = _x.BMS_DisPwrMax2s;
		BMS_ChgPwrMax10s = _x.BMS_ChgPwrMax10s;
		BMS_DisPwrMax10s = _x.BMS_DisPwrMax10s;
		BMS_DisPwrMax30s = _x.BMS_DisPwrMax30s;
		BMS_ChgPwrMax30s = _x.BMS_ChgPwrMax30s;
		BMS_BattEvaTemp = _x.BMS_BattEvaTemp;
		BMS_SelfHeatPwr2min = _x.BMS_SelfHeatPwr2min;
		BMS_SelfHeatPwr5min = _x.BMS_SelfHeatPwr5min;
		BMS_SelfHeatPwr10min = _x.BMS_SelfHeatPwr10min;
		DCU_VCU_TorqMax = _x.DCU_VCU_TorqMax;
		DCU_VCU_TorqMin = _x.DCU_VCU_TorqMin;
		GCU_VCU_TorqMax = _x.GCU_VCU_TorqMax;
		GCU_VCU_TorqMin = _x.GCU_VCU_TorqMin;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_DCChgPlugSt = _x.BMS_DCChgPlugSt;
		return *this;
	}
	PowerTrainCapacityInfo_Type& operator=(PowerTrainCapacityInfo_Type &&_x){
		BMS_ChgPwrMax2s = std::move(_x.BMS_ChgPwrMax2s);
		BMS_DisPwrMax2s = std::move(_x.BMS_DisPwrMax2s);
		BMS_ChgPwrMax10s = std::move(_x.BMS_ChgPwrMax10s);
		BMS_DisPwrMax10s = std::move(_x.BMS_DisPwrMax10s);
		BMS_DisPwrMax30s = std::move(_x.BMS_DisPwrMax30s);
		BMS_ChgPwrMax30s = std::move(_x.BMS_ChgPwrMax30s);
		BMS_BattEvaTemp = std::move(_x.BMS_BattEvaTemp);
		BMS_SelfHeatPwr2min = std::move(_x.BMS_SelfHeatPwr2min);
		BMS_SelfHeatPwr5min = std::move(_x.BMS_SelfHeatPwr5min);
		BMS_SelfHeatPwr10min = std::move(_x.BMS_SelfHeatPwr10min);
		DCU_VCU_TorqMax = std::move(_x.DCU_VCU_TorqMax);
		DCU_VCU_TorqMin = std::move(_x.DCU_VCU_TorqMin);
		GCU_VCU_TorqMax = std::move(_x.GCU_VCU_TorqMax);
		GCU_VCU_TorqMin = std::move(_x.GCU_VCU_TorqMin);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_DCChgPlugSt = std::move(_x.BMS_DCChgPlugSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_ChgPwrMax2s);
		fun(BMS_DisPwrMax2s);
		fun(BMS_ChgPwrMax10s);
		fun(BMS_DisPwrMax10s);
		fun(BMS_DisPwrMax30s);
		fun(BMS_ChgPwrMax30s);
		fun(BMS_BattEvaTemp);
		fun(BMS_SelfHeatPwr2min);
		fun(BMS_SelfHeatPwr5min);
		fun(BMS_SelfHeatPwr10min);
		fun(DCU_VCU_TorqMax);
		fun(DCU_VCU_TorqMin);
		fun(GCU_VCU_TorqMax);
		fun(GCU_VCU_TorqMin);
		fun(BMS_BattTempAvg);
		fun(BMS_DCChgPlugSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_ChgPwrMax2s);
		fun(BMS_DisPwrMax2s);
		fun(BMS_ChgPwrMax10s);
		fun(BMS_DisPwrMax10s);
		fun(BMS_DisPwrMax30s);
		fun(BMS_ChgPwrMax30s);
		fun(BMS_BattEvaTemp);
		fun(BMS_SelfHeatPwr2min);
		fun(BMS_SelfHeatPwr5min);
		fun(BMS_SelfHeatPwr10min);
		fun(DCU_VCU_TorqMax);
		fun(DCU_VCU_TorqMin);
		fun(GCU_VCU_TorqMax);
		fun(GCU_VCU_TorqMin);
		fun(BMS_BattTempAvg);
		fun(BMS_DCChgPlugSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_ChgPwrMax2s);
		fun << (BMS_DisPwrMax2s);
		fun << (BMS_ChgPwrMax10s);
		fun << (BMS_DisPwrMax10s);
		fun << (BMS_DisPwrMax30s);
		fun << (BMS_ChgPwrMax30s);
		fun << (BMS_BattEvaTemp);
		fun << (BMS_SelfHeatPwr2min);
		fun << (BMS_SelfHeatPwr5min);
		fun << (BMS_SelfHeatPwr10min);
		fun << (DCU_VCU_TorqMax);
		fun << (DCU_VCU_TorqMin);
		fun << (GCU_VCU_TorqMax);
		fun << (GCU_VCU_TorqMin);
		fun << (BMS_BattTempAvg);
		fun << (BMS_DCChgPlugSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_ChgPwrMax2s);
		fun >> (BMS_DisPwrMax2s);
		fun >> (BMS_ChgPwrMax10s);
		fun >> (BMS_DisPwrMax10s);
		fun >> (BMS_DisPwrMax30s);
		fun >> (BMS_ChgPwrMax30s);
		fun >> (BMS_BattEvaTemp);
		fun >> (BMS_SelfHeatPwr2min);
		fun >> (BMS_SelfHeatPwr5min);
		fun >> (BMS_SelfHeatPwr10min);
		fun >> (DCU_VCU_TorqMax);
		fun >> (DCU_VCU_TorqMin);
		fun >> (GCU_VCU_TorqMax);
		fun >> (GCU_VCU_TorqMin);
		fun >> (BMS_BattTempAvg);
		fun >> (BMS_DCChgPlugSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POWERTRAINCAPACITYINFO_TYPE_H__
