#ifndef ____BDCBMCBATT2_H__
#define ____BDCBMCBATT2_H__


#include "cstdint"






struct BDCBMCBatt2 {
public:
	std::uint16_t BMC_BattSoh;
	std::uint8_t BMC_BattTempMin;
	std::uint8_t BMC_BattTempAvg;
	std::uint8_t BMC_BattTempMax;
	std::uint8_t BMC_12Volt;
	std::uint16_t BMC_ErrID1BD;
	std::uint16_t BMC_ErrID2BD;
	std::uint16_t BMC_ErrID3BD;
	std::uint16_t BMC_ErrID4BD;
	std::uint16_t BMC_ErrID5BD;
	std::uint16_t BMC_ErrID6BD;
	std::uint16_t BMC_ErrID7BD;
	std::uint16_t BMC_ErrID8BD;
	std::uint16_t BMC_ErrID9BD;
	std::uint16_t BMC_ErrID10BD;
	std::uint16_t BMC_BusVoltBD;
	std::uint16_t BMC_DCVoltBD;
	std::uint16_t BMC_NegVoltBD;
	std::uint8_t BMC_BattTypeStBD;
	std::uint16_t BMC_CellVoltSumBD;
	std::uint16_t BMC_SohCellMax;
	std::uint16_t BMC_SohCellMin;
	std::uint32_t BMC_DeltaQChgDch;
	std::uint16_t BMC_SohDifV;
	std::uint16_t BMC_SohVarV;
	std::uint16_t BMC_SohDifR;
	std::uint16_t BMC_SohVarR;
	std::uint8_t BMC_NrBattTempMax;
	std::uint8_t BMC_NrBattTempMin;
	std::uint8_t BMC_TempErr;
	std::uint8_t BMC_TempOvrErr;
	std::uint8_t BMC_BattVoltOvrErr;
	std::uint8_t BMC_BattVoltUndErr;
	std::uint8_t BMC_CellVoltOvrErr;
	std::uint8_t BMC_CellVoltUndErr;
	std::uint8_t BMC_InsErr;
	std::uint8_t BMC_CellConsErr;
	std::uint8_t BMC_BattMatErr;
	std::uint8_t BMC_ChgOvrErr;
	std::uint16_t BMC_TEL_InslRes;
/*
	BDCBMCBatt2() {}
	~BDCBMCBatt2() {}
	BDCBMCBatt2(const std::uint16_t _BMC_BattSoh,const std::uint8_t _BMC_BattTempMin,const std::uint8_t _BMC_BattTempAvg,const std::uint8_t _BMC_BattTempMax,const std::uint8_t _BMC_12Volt,const std::uint16_t _BMC_ErrID1BD,const std::uint16_t _BMC_ErrID2BD,const std::uint16_t _BMC_ErrID3BD,const std::uint16_t _BMC_ErrID4BD,const std::uint16_t _BMC_ErrID5BD,const std::uint16_t _BMC_ErrID6BD,const std::uint16_t _BMC_ErrID7BD,const std::uint16_t _BMC_ErrID8BD,const std::uint16_t _BMC_ErrID9BD,const std::uint16_t _BMC_ErrID10BD,const std::uint16_t _BMC_BusVoltBD,const std::uint16_t _BMC_DCVoltBD,const std::uint16_t _BMC_NegVoltBD,const std::uint8_t _BMC_BattTypeStBD,const std::uint16_t _BMC_CellVoltSumBD,const std::uint16_t _BMC_SohCellMax,const std::uint16_t _BMC_SohCellMin,const std::uint32_t _BMC_DeltaQChgDch,const std::uint16_t _BMC_SohDifV,const std::uint16_t _BMC_SohVarV,const std::uint16_t _BMC_SohDifR,const std::uint16_t _BMC_SohVarR,const std::uint8_t _BMC_NrBattTempMax,const std::uint8_t _BMC_NrBattTempMin,const std::uint8_t _BMC_TempErr,const std::uint8_t _BMC_TempOvrErr,const std::uint8_t _BMC_BattVoltOvrErr,const std::uint8_t _BMC_BattVoltUndErr,const std::uint8_t _BMC_CellVoltOvrErr,const std::uint8_t _BMC_CellVoltUndErr,const std::uint8_t _BMC_InsErr,const std::uint8_t _BMC_CellConsErr,const std::uint8_t _BMC_BattMatErr,const std::uint8_t _BMC_ChgOvrErr,const std::uint16_t _BMC_TEL_InslRes):BMC_BattSoh(_BMC_BattSoh),BMC_BattTempMin(_BMC_BattTempMin),BMC_BattTempAvg(_BMC_BattTempAvg),BMC_BattTempMax(_BMC_BattTempMax),BMC_12Volt(_BMC_12Volt),BMC_ErrID1BD(_BMC_ErrID1BD),BMC_ErrID2BD(_BMC_ErrID2BD),BMC_ErrID3BD(_BMC_ErrID3BD),BMC_ErrID4BD(_BMC_ErrID4BD),BMC_ErrID5BD(_BMC_ErrID5BD),BMC_ErrID6BD(_BMC_ErrID6BD),BMC_ErrID7BD(_BMC_ErrID7BD),BMC_ErrID8BD(_BMC_ErrID8BD),BMC_ErrID9BD(_BMC_ErrID9BD),BMC_ErrID10BD(_BMC_ErrID10BD),BMC_BusVoltBD(_BMC_BusVoltBD),BMC_DCVoltBD(_BMC_DCVoltBD),BMC_NegVoltBD(_BMC_NegVoltBD),BMC_BattTypeStBD(_BMC_BattTypeStBD),BMC_CellVoltSumBD(_BMC_CellVoltSumBD),BMC_SohCellMax(_BMC_SohCellMax),BMC_SohCellMin(_BMC_SohCellMin),BMC_DeltaQChgDch(_BMC_DeltaQChgDch),BMC_SohDifV(_BMC_SohDifV),BMC_SohVarV(_BMC_SohVarV),BMC_SohDifR(_BMC_SohDifR),BMC_SohVarR(_BMC_SohVarR),BMC_NrBattTempMax(_BMC_NrBattTempMax),BMC_NrBattTempMin(_BMC_NrBattTempMin),BMC_TempErr(_BMC_TempErr),BMC_TempOvrErr(_BMC_TempOvrErr),BMC_BattVoltOvrErr(_BMC_BattVoltOvrErr),BMC_BattVoltUndErr(_BMC_BattVoltUndErr),BMC_CellVoltOvrErr(_BMC_CellVoltOvrErr),BMC_CellVoltUndErr(_BMC_CellVoltUndErr),BMC_InsErr(_BMC_InsErr),BMC_CellConsErr(_BMC_CellConsErr),BMC_BattMatErr(_BMC_BattMatErr),BMC_ChgOvrErr(_BMC_ChgOvrErr),BMC_TEL_InslRes(_BMC_TEL_InslRes) {}
	BDCBMCBatt2(const BDCBMCBatt2 &_x){
		BMC_BattSoh = _x.BMC_BattSoh;
		BMC_BattTempMin = _x.BMC_BattTempMin;
		BMC_BattTempAvg = _x.BMC_BattTempAvg;
		BMC_BattTempMax = _x.BMC_BattTempMax;
		BMC_12Volt = _x.BMC_12Volt;
		BMC_ErrID1BD = _x.BMC_ErrID1BD;
		BMC_ErrID2BD = _x.BMC_ErrID2BD;
		BMC_ErrID3BD = _x.BMC_ErrID3BD;
		BMC_ErrID4BD = _x.BMC_ErrID4BD;
		BMC_ErrID5BD = _x.BMC_ErrID5BD;
		BMC_ErrID6BD = _x.BMC_ErrID6BD;
		BMC_ErrID7BD = _x.BMC_ErrID7BD;
		BMC_ErrID8BD = _x.BMC_ErrID8BD;
		BMC_ErrID9BD = _x.BMC_ErrID9BD;
		BMC_ErrID10BD = _x.BMC_ErrID10BD;
		BMC_BusVoltBD = _x.BMC_BusVoltBD;
		BMC_DCVoltBD = _x.BMC_DCVoltBD;
		BMC_NegVoltBD = _x.BMC_NegVoltBD;
		BMC_BattTypeStBD = _x.BMC_BattTypeStBD;
		BMC_CellVoltSumBD = _x.BMC_CellVoltSumBD;
		BMC_SohCellMax = _x.BMC_SohCellMax;
		BMC_SohCellMin = _x.BMC_SohCellMin;
		BMC_DeltaQChgDch = _x.BMC_DeltaQChgDch;
		BMC_SohDifV = _x.BMC_SohDifV;
		BMC_SohVarV = _x.BMC_SohVarV;
		BMC_SohDifR = _x.BMC_SohDifR;
		BMC_SohVarR = _x.BMC_SohVarR;
		BMC_NrBattTempMax = _x.BMC_NrBattTempMax;
		BMC_NrBattTempMin = _x.BMC_NrBattTempMin;
		BMC_TempErr = _x.BMC_TempErr;
		BMC_TempOvrErr = _x.BMC_TempOvrErr;
		BMC_BattVoltOvrErr = _x.BMC_BattVoltOvrErr;
		BMC_BattVoltUndErr = _x.BMC_BattVoltUndErr;
		BMC_CellVoltOvrErr = _x.BMC_CellVoltOvrErr;
		BMC_CellVoltUndErr = _x.BMC_CellVoltUndErr;
		BMC_InsErr = _x.BMC_InsErr;
		BMC_CellConsErr = _x.BMC_CellConsErr;
		BMC_BattMatErr = _x.BMC_BattMatErr;
		BMC_ChgOvrErr = _x.BMC_ChgOvrErr;
		BMC_TEL_InslRes = _x.BMC_TEL_InslRes;
	}
	BDCBMCBatt2(BDCBMCBatt2 &&_x){
		BMC_BattSoh = std::move(_x.BMC_BattSoh);
		BMC_BattTempMin = std::move(_x.BMC_BattTempMin);
		BMC_BattTempAvg = std::move(_x.BMC_BattTempAvg);
		BMC_BattTempMax = std::move(_x.BMC_BattTempMax);
		BMC_12Volt = std::move(_x.BMC_12Volt);
		BMC_ErrID1BD = std::move(_x.BMC_ErrID1BD);
		BMC_ErrID2BD = std::move(_x.BMC_ErrID2BD);
		BMC_ErrID3BD = std::move(_x.BMC_ErrID3BD);
		BMC_ErrID4BD = std::move(_x.BMC_ErrID4BD);
		BMC_ErrID5BD = std::move(_x.BMC_ErrID5BD);
		BMC_ErrID6BD = std::move(_x.BMC_ErrID6BD);
		BMC_ErrID7BD = std::move(_x.BMC_ErrID7BD);
		BMC_ErrID8BD = std::move(_x.BMC_ErrID8BD);
		BMC_ErrID9BD = std::move(_x.BMC_ErrID9BD);
		BMC_ErrID10BD = std::move(_x.BMC_ErrID10BD);
		BMC_BusVoltBD = std::move(_x.BMC_BusVoltBD);
		BMC_DCVoltBD = std::move(_x.BMC_DCVoltBD);
		BMC_NegVoltBD = std::move(_x.BMC_NegVoltBD);
		BMC_BattTypeStBD = std::move(_x.BMC_BattTypeStBD);
		BMC_CellVoltSumBD = std::move(_x.BMC_CellVoltSumBD);
		BMC_SohCellMax = std::move(_x.BMC_SohCellMax);
		BMC_SohCellMin = std::move(_x.BMC_SohCellMin);
		BMC_DeltaQChgDch = std::move(_x.BMC_DeltaQChgDch);
		BMC_SohDifV = std::move(_x.BMC_SohDifV);
		BMC_SohVarV = std::move(_x.BMC_SohVarV);
		BMC_SohDifR = std::move(_x.BMC_SohDifR);
		BMC_SohVarR = std::move(_x.BMC_SohVarR);
		BMC_NrBattTempMax = std::move(_x.BMC_NrBattTempMax);
		BMC_NrBattTempMin = std::move(_x.BMC_NrBattTempMin);
		BMC_TempErr = std::move(_x.BMC_TempErr);
		BMC_TempOvrErr = std::move(_x.BMC_TempOvrErr);
		BMC_BattVoltOvrErr = std::move(_x.BMC_BattVoltOvrErr);
		BMC_BattVoltUndErr = std::move(_x.BMC_BattVoltUndErr);
		BMC_CellVoltOvrErr = std::move(_x.BMC_CellVoltOvrErr);
		BMC_CellVoltUndErr = std::move(_x.BMC_CellVoltUndErr);
		BMC_InsErr = std::move(_x.BMC_InsErr);
		BMC_CellConsErr = std::move(_x.BMC_CellConsErr);
		BMC_BattMatErr = std::move(_x.BMC_BattMatErr);
		BMC_ChgOvrErr = std::move(_x.BMC_ChgOvrErr);
		BMC_TEL_InslRes = std::move(_x.BMC_TEL_InslRes);
	}
	BDCBMCBatt2& operator=(const BDCBMCBatt2 &_x){
		BMC_BattSoh = _x.BMC_BattSoh;
		BMC_BattTempMin = _x.BMC_BattTempMin;
		BMC_BattTempAvg = _x.BMC_BattTempAvg;
		BMC_BattTempMax = _x.BMC_BattTempMax;
		BMC_12Volt = _x.BMC_12Volt;
		BMC_ErrID1BD = _x.BMC_ErrID1BD;
		BMC_ErrID2BD = _x.BMC_ErrID2BD;
		BMC_ErrID3BD = _x.BMC_ErrID3BD;
		BMC_ErrID4BD = _x.BMC_ErrID4BD;
		BMC_ErrID5BD = _x.BMC_ErrID5BD;
		BMC_ErrID6BD = _x.BMC_ErrID6BD;
		BMC_ErrID7BD = _x.BMC_ErrID7BD;
		BMC_ErrID8BD = _x.BMC_ErrID8BD;
		BMC_ErrID9BD = _x.BMC_ErrID9BD;
		BMC_ErrID10BD = _x.BMC_ErrID10BD;
		BMC_BusVoltBD = _x.BMC_BusVoltBD;
		BMC_DCVoltBD = _x.BMC_DCVoltBD;
		BMC_NegVoltBD = _x.BMC_NegVoltBD;
		BMC_BattTypeStBD = _x.BMC_BattTypeStBD;
		BMC_CellVoltSumBD = _x.BMC_CellVoltSumBD;
		BMC_SohCellMax = _x.BMC_SohCellMax;
		BMC_SohCellMin = _x.BMC_SohCellMin;
		BMC_DeltaQChgDch = _x.BMC_DeltaQChgDch;
		BMC_SohDifV = _x.BMC_SohDifV;
		BMC_SohVarV = _x.BMC_SohVarV;
		BMC_SohDifR = _x.BMC_SohDifR;
		BMC_SohVarR = _x.BMC_SohVarR;
		BMC_NrBattTempMax = _x.BMC_NrBattTempMax;
		BMC_NrBattTempMin = _x.BMC_NrBattTempMin;
		BMC_TempErr = _x.BMC_TempErr;
		BMC_TempOvrErr = _x.BMC_TempOvrErr;
		BMC_BattVoltOvrErr = _x.BMC_BattVoltOvrErr;
		BMC_BattVoltUndErr = _x.BMC_BattVoltUndErr;
		BMC_CellVoltOvrErr = _x.BMC_CellVoltOvrErr;
		BMC_CellVoltUndErr = _x.BMC_CellVoltUndErr;
		BMC_InsErr = _x.BMC_InsErr;
		BMC_CellConsErr = _x.BMC_CellConsErr;
		BMC_BattMatErr = _x.BMC_BattMatErr;
		BMC_ChgOvrErr = _x.BMC_ChgOvrErr;
		BMC_TEL_InslRes = _x.BMC_TEL_InslRes;
		return *this;
	}
	BDCBMCBatt2& operator=(BDCBMCBatt2 &&_x){
		BMC_BattSoh = std::move(_x.BMC_BattSoh);
		BMC_BattTempMin = std::move(_x.BMC_BattTempMin);
		BMC_BattTempAvg = std::move(_x.BMC_BattTempAvg);
		BMC_BattTempMax = std::move(_x.BMC_BattTempMax);
		BMC_12Volt = std::move(_x.BMC_12Volt);
		BMC_ErrID1BD = std::move(_x.BMC_ErrID1BD);
		BMC_ErrID2BD = std::move(_x.BMC_ErrID2BD);
		BMC_ErrID3BD = std::move(_x.BMC_ErrID3BD);
		BMC_ErrID4BD = std::move(_x.BMC_ErrID4BD);
		BMC_ErrID5BD = std::move(_x.BMC_ErrID5BD);
		BMC_ErrID6BD = std::move(_x.BMC_ErrID6BD);
		BMC_ErrID7BD = std::move(_x.BMC_ErrID7BD);
		BMC_ErrID8BD = std::move(_x.BMC_ErrID8BD);
		BMC_ErrID9BD = std::move(_x.BMC_ErrID9BD);
		BMC_ErrID10BD = std::move(_x.BMC_ErrID10BD);
		BMC_BusVoltBD = std::move(_x.BMC_BusVoltBD);
		BMC_DCVoltBD = std::move(_x.BMC_DCVoltBD);
		BMC_NegVoltBD = std::move(_x.BMC_NegVoltBD);
		BMC_BattTypeStBD = std::move(_x.BMC_BattTypeStBD);
		BMC_CellVoltSumBD = std::move(_x.BMC_CellVoltSumBD);
		BMC_SohCellMax = std::move(_x.BMC_SohCellMax);
		BMC_SohCellMin = std::move(_x.BMC_SohCellMin);
		BMC_DeltaQChgDch = std::move(_x.BMC_DeltaQChgDch);
		BMC_SohDifV = std::move(_x.BMC_SohDifV);
		BMC_SohVarV = std::move(_x.BMC_SohVarV);
		BMC_SohDifR = std::move(_x.BMC_SohDifR);
		BMC_SohVarR = std::move(_x.BMC_SohVarR);
		BMC_NrBattTempMax = std::move(_x.BMC_NrBattTempMax);
		BMC_NrBattTempMin = std::move(_x.BMC_NrBattTempMin);
		BMC_TempErr = std::move(_x.BMC_TempErr);
		BMC_TempOvrErr = std::move(_x.BMC_TempOvrErr);
		BMC_BattVoltOvrErr = std::move(_x.BMC_BattVoltOvrErr);
		BMC_BattVoltUndErr = std::move(_x.BMC_BattVoltUndErr);
		BMC_CellVoltOvrErr = std::move(_x.BMC_CellVoltOvrErr);
		BMC_CellVoltUndErr = std::move(_x.BMC_CellVoltUndErr);
		BMC_InsErr = std::move(_x.BMC_InsErr);
		BMC_CellConsErr = std::move(_x.BMC_CellConsErr);
		BMC_BattMatErr = std::move(_x.BMC_BattMatErr);
		BMC_ChgOvrErr = std::move(_x.BMC_ChgOvrErr);
		BMC_TEL_InslRes = std::move(_x.BMC_TEL_InslRes);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_BattSoh);
		fun(BMC_BattTempMin);
		fun(BMC_BattTempAvg);
		fun(BMC_BattTempMax);
		fun(BMC_12Volt);
		fun(BMC_ErrID1BD);
		fun(BMC_ErrID2BD);
		fun(BMC_ErrID3BD);
		fun(BMC_ErrID4BD);
		fun(BMC_ErrID5BD);
		fun(BMC_ErrID6BD);
		fun(BMC_ErrID7BD);
		fun(BMC_ErrID8BD);
		fun(BMC_ErrID9BD);
		fun(BMC_ErrID10BD);
		fun(BMC_BusVoltBD);
		fun(BMC_DCVoltBD);
		fun(BMC_NegVoltBD);
		fun(BMC_BattTypeStBD);
		fun(BMC_CellVoltSumBD);
		fun(BMC_SohCellMax);
		fun(BMC_SohCellMin);
		fun(BMC_DeltaQChgDch);
		fun(BMC_SohDifV);
		fun(BMC_SohVarV);
		fun(BMC_SohDifR);
		fun(BMC_SohVarR);
		fun(BMC_NrBattTempMax);
		fun(BMC_NrBattTempMin);
		fun(BMC_TempErr);
		fun(BMC_TempOvrErr);
		fun(BMC_BattVoltOvrErr);
		fun(BMC_BattVoltUndErr);
		fun(BMC_CellVoltOvrErr);
		fun(BMC_CellVoltUndErr);
		fun(BMC_InsErr);
		fun(BMC_CellConsErr);
		fun(BMC_BattMatErr);
		fun(BMC_ChgOvrErr);
		fun(BMC_TEL_InslRes);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_BattSoh);
		fun(BMC_BattTempMin);
		fun(BMC_BattTempAvg);
		fun(BMC_BattTempMax);
		fun(BMC_12Volt);
		fun(BMC_ErrID1BD);
		fun(BMC_ErrID2BD);
		fun(BMC_ErrID3BD);
		fun(BMC_ErrID4BD);
		fun(BMC_ErrID5BD);
		fun(BMC_ErrID6BD);
		fun(BMC_ErrID7BD);
		fun(BMC_ErrID8BD);
		fun(BMC_ErrID9BD);
		fun(BMC_ErrID10BD);
		fun(BMC_BusVoltBD);
		fun(BMC_DCVoltBD);
		fun(BMC_NegVoltBD);
		fun(BMC_BattTypeStBD);
		fun(BMC_CellVoltSumBD);
		fun(BMC_SohCellMax);
		fun(BMC_SohCellMin);
		fun(BMC_DeltaQChgDch);
		fun(BMC_SohDifV);
		fun(BMC_SohVarV);
		fun(BMC_SohDifR);
		fun(BMC_SohVarR);
		fun(BMC_NrBattTempMax);
		fun(BMC_NrBattTempMin);
		fun(BMC_TempErr);
		fun(BMC_TempOvrErr);
		fun(BMC_BattVoltOvrErr);
		fun(BMC_BattVoltUndErr);
		fun(BMC_CellVoltOvrErr);
		fun(BMC_CellVoltUndErr);
		fun(BMC_InsErr);
		fun(BMC_CellConsErr);
		fun(BMC_BattMatErr);
		fun(BMC_ChgOvrErr);
		fun(BMC_TEL_InslRes);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_BattSoh);
		fun << (BMC_BattTempMin);
		fun << (BMC_BattTempAvg);
		fun << (BMC_BattTempMax);
		fun << (BMC_12Volt);
		fun << (BMC_ErrID1BD);
		fun << (BMC_ErrID2BD);
		fun << (BMC_ErrID3BD);
		fun << (BMC_ErrID4BD);
		fun << (BMC_ErrID5BD);
		fun << (BMC_ErrID6BD);
		fun << (BMC_ErrID7BD);
		fun << (BMC_ErrID8BD);
		fun << (BMC_ErrID9BD);
		fun << (BMC_ErrID10BD);
		fun << (BMC_BusVoltBD);
		fun << (BMC_DCVoltBD);
		fun << (BMC_NegVoltBD);
		fun << (BMC_BattTypeStBD);
		fun << (BMC_CellVoltSumBD);
		fun << (BMC_SohCellMax);
		fun << (BMC_SohCellMin);
		fun << (BMC_DeltaQChgDch);
		fun << (BMC_SohDifV);
		fun << (BMC_SohVarV);
		fun << (BMC_SohDifR);
		fun << (BMC_SohVarR);
		fun << (BMC_NrBattTempMax);
		fun << (BMC_NrBattTempMin);
		fun << (BMC_TempErr);
		fun << (BMC_TempOvrErr);
		fun << (BMC_BattVoltOvrErr);
		fun << (BMC_BattVoltUndErr);
		fun << (BMC_CellVoltOvrErr);
		fun << (BMC_CellVoltUndErr);
		fun << (BMC_InsErr);
		fun << (BMC_CellConsErr);
		fun << (BMC_BattMatErr);
		fun << (BMC_ChgOvrErr);
		fun << (BMC_TEL_InslRes);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_BattSoh);
		fun >> (BMC_BattTempMin);
		fun >> (BMC_BattTempAvg);
		fun >> (BMC_BattTempMax);
		fun >> (BMC_12Volt);
		fun >> (BMC_ErrID1BD);
		fun >> (BMC_ErrID2BD);
		fun >> (BMC_ErrID3BD);
		fun >> (BMC_ErrID4BD);
		fun >> (BMC_ErrID5BD);
		fun >> (BMC_ErrID6BD);
		fun >> (BMC_ErrID7BD);
		fun >> (BMC_ErrID8BD);
		fun >> (BMC_ErrID9BD);
		fun >> (BMC_ErrID10BD);
		fun >> (BMC_BusVoltBD);
		fun >> (BMC_DCVoltBD);
		fun >> (BMC_NegVoltBD);
		fun >> (BMC_BattTypeStBD);
		fun >> (BMC_CellVoltSumBD);
		fun >> (BMC_SohCellMax);
		fun >> (BMC_SohCellMin);
		fun >> (BMC_DeltaQChgDch);
		fun >> (BMC_SohDifV);
		fun >> (BMC_SohVarV);
		fun >> (BMC_SohDifR);
		fun >> (BMC_SohVarR);
		fun >> (BMC_NrBattTempMax);
		fun >> (BMC_NrBattTempMin);
		fun >> (BMC_TempErr);
		fun >> (BMC_TempOvrErr);
		fun >> (BMC_BattVoltOvrErr);
		fun >> (BMC_BattVoltUndErr);
		fun >> (BMC_CellVoltOvrErr);
		fun >> (BMC_CellVoltUndErr);
		fun >> (BMC_InsErr);
		fun >> (BMC_CellConsErr);
		fun >> (BMC_BattMatErr);
		fun >> (BMC_ChgOvrErr);
		fun >> (BMC_TEL_InslRes);
	}
};

#endif //____BDCBMCBATT2_H__
