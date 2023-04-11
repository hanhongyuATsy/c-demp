#ifndef ____BDCTESTBMS10_H__
#define ____BDCTESTBMS10_H__


#include "cstdint"






struct BDCTestBMS10 {
public:
	std::uint16_t BMS_TEL_BattVolt;
	std::uint16_t BMS_DCUVoltDC;
	std::uint16_t BMS_TEL_CellVoltMin;
	std::uint16_t BMS_TEL_CellVoltMax;
	std::uint8_t BMS_MinVoltCellNum;
	std::uint8_t BMS_MaxVoltCellNum;
	std::uint8_t BMS_CellTempMin;
	std::uint8_t BMS_MinTempCellNum;
	std::uint8_t BMS_MinTempSubsysNum;
	std::uint8_t BMS_CellTempMax;
	std::uint8_t BMS_MaxTempCellNum;
	std::uint8_t BMS_MaxTempSubsysNum;
	std::uint8_t BMS_ProbeCount;
	std::uint16_t BMS_TEL_BattSocDisp;
	std::uint8_t BMS_ChgOvrErr;
	std::uint8_t BMS_InsErr;
	std::uint8_t BMS_CellDiffErr;
	std::uint8_t BMS_BattMatErr;
	std::uint8_t BMS_SocJumpErr;
	std::uint8_t BMS_SocOvrErr;
	std::uint8_t BMS_CellVoltUndErr;
	std::uint8_t BMS_CellVoltOvrErr;
	std::uint8_t BMS_SocUndErr;
	std::uint8_t BMS_BattVoltUndErr;
	std::uint8_t BMS_BattVoltOvrErr;
	std::uint8_t BMS_TempOvrErr;
	std::uint8_t BMS_TempDiffErr;
	std::uint8_t BMS_SysErr;
/*
	BDCTestBMS10() {}
	~BDCTestBMS10() {}
	BDCTestBMS10(const std::uint16_t _BMS_TEL_BattVolt,const std::uint16_t _BMS_DCUVoltDC,const std::uint16_t _BMS_TEL_CellVoltMin,const std::uint16_t _BMS_TEL_CellVoltMax,const std::uint8_t _BMS_MinVoltCellNum,const std::uint8_t _BMS_MaxVoltCellNum,const std::uint8_t _BMS_CellTempMin,const std::uint8_t _BMS_MinTempCellNum,const std::uint8_t _BMS_MinTempSubsysNum,const std::uint8_t _BMS_CellTempMax,const std::uint8_t _BMS_MaxTempCellNum,const std::uint8_t _BMS_MaxTempSubsysNum,const std::uint8_t _BMS_ProbeCount,const std::uint16_t _BMS_TEL_BattSocDisp,const std::uint8_t _BMS_ChgOvrErr,const std::uint8_t _BMS_InsErr,const std::uint8_t _BMS_CellDiffErr,const std::uint8_t _BMS_BattMatErr,const std::uint8_t _BMS_SocJumpErr,const std::uint8_t _BMS_SocOvrErr,const std::uint8_t _BMS_CellVoltUndErr,const std::uint8_t _BMS_CellVoltOvrErr,const std::uint8_t _BMS_SocUndErr,const std::uint8_t _BMS_BattVoltUndErr,const std::uint8_t _BMS_BattVoltOvrErr,const std::uint8_t _BMS_TempOvrErr,const std::uint8_t _BMS_TempDiffErr,const std::uint8_t _BMS_SysErr):BMS_TEL_BattVolt(_BMS_TEL_BattVolt),BMS_DCUVoltDC(_BMS_DCUVoltDC),BMS_TEL_CellVoltMin(_BMS_TEL_CellVoltMin),BMS_TEL_CellVoltMax(_BMS_TEL_CellVoltMax),BMS_MinVoltCellNum(_BMS_MinVoltCellNum),BMS_MaxVoltCellNum(_BMS_MaxVoltCellNum),BMS_CellTempMin(_BMS_CellTempMin),BMS_MinTempCellNum(_BMS_MinTempCellNum),BMS_MinTempSubsysNum(_BMS_MinTempSubsysNum),BMS_CellTempMax(_BMS_CellTempMax),BMS_MaxTempCellNum(_BMS_MaxTempCellNum),BMS_MaxTempSubsysNum(_BMS_MaxTempSubsysNum),BMS_ProbeCount(_BMS_ProbeCount),BMS_TEL_BattSocDisp(_BMS_TEL_BattSocDisp),BMS_ChgOvrErr(_BMS_ChgOvrErr),BMS_InsErr(_BMS_InsErr),BMS_CellDiffErr(_BMS_CellDiffErr),BMS_BattMatErr(_BMS_BattMatErr),BMS_SocJumpErr(_BMS_SocJumpErr),BMS_SocOvrErr(_BMS_SocOvrErr),BMS_CellVoltUndErr(_BMS_CellVoltUndErr),BMS_CellVoltOvrErr(_BMS_CellVoltOvrErr),BMS_SocUndErr(_BMS_SocUndErr),BMS_BattVoltUndErr(_BMS_BattVoltUndErr),BMS_BattVoltOvrErr(_BMS_BattVoltOvrErr),BMS_TempOvrErr(_BMS_TempOvrErr),BMS_TempDiffErr(_BMS_TempDiffErr),BMS_SysErr(_BMS_SysErr) {}
	BDCTestBMS10(const BDCTestBMS10 &_x){
		BMS_TEL_BattVolt = _x.BMS_TEL_BattVolt;
		BMS_DCUVoltDC = _x.BMS_DCUVoltDC;
		BMS_TEL_CellVoltMin = _x.BMS_TEL_CellVoltMin;
		BMS_TEL_CellVoltMax = _x.BMS_TEL_CellVoltMax;
		BMS_MinVoltCellNum = _x.BMS_MinVoltCellNum;
		BMS_MaxVoltCellNum = _x.BMS_MaxVoltCellNum;
		BMS_CellTempMin = _x.BMS_CellTempMin;
		BMS_MinTempCellNum = _x.BMS_MinTempCellNum;
		BMS_MinTempSubsysNum = _x.BMS_MinTempSubsysNum;
		BMS_CellTempMax = _x.BMS_CellTempMax;
		BMS_MaxTempCellNum = _x.BMS_MaxTempCellNum;
		BMS_MaxTempSubsysNum = _x.BMS_MaxTempSubsysNum;
		BMS_ProbeCount = _x.BMS_ProbeCount;
		BMS_TEL_BattSocDisp = _x.BMS_TEL_BattSocDisp;
		BMS_ChgOvrErr = _x.BMS_ChgOvrErr;
		BMS_InsErr = _x.BMS_InsErr;
		BMS_CellDiffErr = _x.BMS_CellDiffErr;
		BMS_BattMatErr = _x.BMS_BattMatErr;
		BMS_SocJumpErr = _x.BMS_SocJumpErr;
		BMS_SocOvrErr = _x.BMS_SocOvrErr;
		BMS_CellVoltUndErr = _x.BMS_CellVoltUndErr;
		BMS_CellVoltOvrErr = _x.BMS_CellVoltOvrErr;
		BMS_SocUndErr = _x.BMS_SocUndErr;
		BMS_BattVoltUndErr = _x.BMS_BattVoltUndErr;
		BMS_BattVoltOvrErr = _x.BMS_BattVoltOvrErr;
		BMS_TempOvrErr = _x.BMS_TempOvrErr;
		BMS_TempDiffErr = _x.BMS_TempDiffErr;
		BMS_SysErr = _x.BMS_SysErr;
	}
	BDCTestBMS10(BDCTestBMS10 &&_x){
		BMS_TEL_BattVolt = std::move(_x.BMS_TEL_BattVolt);
		BMS_DCUVoltDC = std::move(_x.BMS_DCUVoltDC);
		BMS_TEL_CellVoltMin = std::move(_x.BMS_TEL_CellVoltMin);
		BMS_TEL_CellVoltMax = std::move(_x.BMS_TEL_CellVoltMax);
		BMS_MinVoltCellNum = std::move(_x.BMS_MinVoltCellNum);
		BMS_MaxVoltCellNum = std::move(_x.BMS_MaxVoltCellNum);
		BMS_CellTempMin = std::move(_x.BMS_CellTempMin);
		BMS_MinTempCellNum = std::move(_x.BMS_MinTempCellNum);
		BMS_MinTempSubsysNum = std::move(_x.BMS_MinTempSubsysNum);
		BMS_CellTempMax = std::move(_x.BMS_CellTempMax);
		BMS_MaxTempCellNum = std::move(_x.BMS_MaxTempCellNum);
		BMS_MaxTempSubsysNum = std::move(_x.BMS_MaxTempSubsysNum);
		BMS_ProbeCount = std::move(_x.BMS_ProbeCount);
		BMS_TEL_BattSocDisp = std::move(_x.BMS_TEL_BattSocDisp);
		BMS_ChgOvrErr = std::move(_x.BMS_ChgOvrErr);
		BMS_InsErr = std::move(_x.BMS_InsErr);
		BMS_CellDiffErr = std::move(_x.BMS_CellDiffErr);
		BMS_BattMatErr = std::move(_x.BMS_BattMatErr);
		BMS_SocJumpErr = std::move(_x.BMS_SocJumpErr);
		BMS_SocOvrErr = std::move(_x.BMS_SocOvrErr);
		BMS_CellVoltUndErr = std::move(_x.BMS_CellVoltUndErr);
		BMS_CellVoltOvrErr = std::move(_x.BMS_CellVoltOvrErr);
		BMS_SocUndErr = std::move(_x.BMS_SocUndErr);
		BMS_BattVoltUndErr = std::move(_x.BMS_BattVoltUndErr);
		BMS_BattVoltOvrErr = std::move(_x.BMS_BattVoltOvrErr);
		BMS_TempOvrErr = std::move(_x.BMS_TempOvrErr);
		BMS_TempDiffErr = std::move(_x.BMS_TempDiffErr);
		BMS_SysErr = std::move(_x.BMS_SysErr);
	}
	BDCTestBMS10& operator=(const BDCTestBMS10 &_x){
		BMS_TEL_BattVolt = _x.BMS_TEL_BattVolt;
		BMS_DCUVoltDC = _x.BMS_DCUVoltDC;
		BMS_TEL_CellVoltMin = _x.BMS_TEL_CellVoltMin;
		BMS_TEL_CellVoltMax = _x.BMS_TEL_CellVoltMax;
		BMS_MinVoltCellNum = _x.BMS_MinVoltCellNum;
		BMS_MaxVoltCellNum = _x.BMS_MaxVoltCellNum;
		BMS_CellTempMin = _x.BMS_CellTempMin;
		BMS_MinTempCellNum = _x.BMS_MinTempCellNum;
		BMS_MinTempSubsysNum = _x.BMS_MinTempSubsysNum;
		BMS_CellTempMax = _x.BMS_CellTempMax;
		BMS_MaxTempCellNum = _x.BMS_MaxTempCellNum;
		BMS_MaxTempSubsysNum = _x.BMS_MaxTempSubsysNum;
		BMS_ProbeCount = _x.BMS_ProbeCount;
		BMS_TEL_BattSocDisp = _x.BMS_TEL_BattSocDisp;
		BMS_ChgOvrErr = _x.BMS_ChgOvrErr;
		BMS_InsErr = _x.BMS_InsErr;
		BMS_CellDiffErr = _x.BMS_CellDiffErr;
		BMS_BattMatErr = _x.BMS_BattMatErr;
		BMS_SocJumpErr = _x.BMS_SocJumpErr;
		BMS_SocOvrErr = _x.BMS_SocOvrErr;
		BMS_CellVoltUndErr = _x.BMS_CellVoltUndErr;
		BMS_CellVoltOvrErr = _x.BMS_CellVoltOvrErr;
		BMS_SocUndErr = _x.BMS_SocUndErr;
		BMS_BattVoltUndErr = _x.BMS_BattVoltUndErr;
		BMS_BattVoltOvrErr = _x.BMS_BattVoltOvrErr;
		BMS_TempOvrErr = _x.BMS_TempOvrErr;
		BMS_TempDiffErr = _x.BMS_TempDiffErr;
		BMS_SysErr = _x.BMS_SysErr;
		return *this;
	}
	BDCTestBMS10& operator=(BDCTestBMS10 &&_x){
		BMS_TEL_BattVolt = std::move(_x.BMS_TEL_BattVolt);
		BMS_DCUVoltDC = std::move(_x.BMS_DCUVoltDC);
		BMS_TEL_CellVoltMin = std::move(_x.BMS_TEL_CellVoltMin);
		BMS_TEL_CellVoltMax = std::move(_x.BMS_TEL_CellVoltMax);
		BMS_MinVoltCellNum = std::move(_x.BMS_MinVoltCellNum);
		BMS_MaxVoltCellNum = std::move(_x.BMS_MaxVoltCellNum);
		BMS_CellTempMin = std::move(_x.BMS_CellTempMin);
		BMS_MinTempCellNum = std::move(_x.BMS_MinTempCellNum);
		BMS_MinTempSubsysNum = std::move(_x.BMS_MinTempSubsysNum);
		BMS_CellTempMax = std::move(_x.BMS_CellTempMax);
		BMS_MaxTempCellNum = std::move(_x.BMS_MaxTempCellNum);
		BMS_MaxTempSubsysNum = std::move(_x.BMS_MaxTempSubsysNum);
		BMS_ProbeCount = std::move(_x.BMS_ProbeCount);
		BMS_TEL_BattSocDisp = std::move(_x.BMS_TEL_BattSocDisp);
		BMS_ChgOvrErr = std::move(_x.BMS_ChgOvrErr);
		BMS_InsErr = std::move(_x.BMS_InsErr);
		BMS_CellDiffErr = std::move(_x.BMS_CellDiffErr);
		BMS_BattMatErr = std::move(_x.BMS_BattMatErr);
		BMS_SocJumpErr = std::move(_x.BMS_SocJumpErr);
		BMS_SocOvrErr = std::move(_x.BMS_SocOvrErr);
		BMS_CellVoltUndErr = std::move(_x.BMS_CellVoltUndErr);
		BMS_CellVoltOvrErr = std::move(_x.BMS_CellVoltOvrErr);
		BMS_SocUndErr = std::move(_x.BMS_SocUndErr);
		BMS_BattVoltUndErr = std::move(_x.BMS_BattVoltUndErr);
		BMS_BattVoltOvrErr = std::move(_x.BMS_BattVoltOvrErr);
		BMS_TempOvrErr = std::move(_x.BMS_TempOvrErr);
		BMS_TempDiffErr = std::move(_x.BMS_TempDiffErr);
		BMS_SysErr = std::move(_x.BMS_SysErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_TEL_BattVolt);
		fun(BMS_DCUVoltDC);
		fun(BMS_TEL_CellVoltMin);
		fun(BMS_TEL_CellVoltMax);
		fun(BMS_MinVoltCellNum);
		fun(BMS_MaxVoltCellNum);
		fun(BMS_CellTempMin);
		fun(BMS_MinTempCellNum);
		fun(BMS_MinTempSubsysNum);
		fun(BMS_CellTempMax);
		fun(BMS_MaxTempCellNum);
		fun(BMS_MaxTempSubsysNum);
		fun(BMS_ProbeCount);
		fun(BMS_TEL_BattSocDisp);
		fun(BMS_ChgOvrErr);
		fun(BMS_InsErr);
		fun(BMS_CellDiffErr);
		fun(BMS_BattMatErr);
		fun(BMS_SocJumpErr);
		fun(BMS_SocOvrErr);
		fun(BMS_CellVoltUndErr);
		fun(BMS_CellVoltOvrErr);
		fun(BMS_SocUndErr);
		fun(BMS_BattVoltUndErr);
		fun(BMS_BattVoltOvrErr);
		fun(BMS_TempOvrErr);
		fun(BMS_TempDiffErr);
		fun(BMS_SysErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_TEL_BattVolt);
		fun(BMS_DCUVoltDC);
		fun(BMS_TEL_CellVoltMin);
		fun(BMS_TEL_CellVoltMax);
		fun(BMS_MinVoltCellNum);
		fun(BMS_MaxVoltCellNum);
		fun(BMS_CellTempMin);
		fun(BMS_MinTempCellNum);
		fun(BMS_MinTempSubsysNum);
		fun(BMS_CellTempMax);
		fun(BMS_MaxTempCellNum);
		fun(BMS_MaxTempSubsysNum);
		fun(BMS_ProbeCount);
		fun(BMS_TEL_BattSocDisp);
		fun(BMS_ChgOvrErr);
		fun(BMS_InsErr);
		fun(BMS_CellDiffErr);
		fun(BMS_BattMatErr);
		fun(BMS_SocJumpErr);
		fun(BMS_SocOvrErr);
		fun(BMS_CellVoltUndErr);
		fun(BMS_CellVoltOvrErr);
		fun(BMS_SocUndErr);
		fun(BMS_BattVoltUndErr);
		fun(BMS_BattVoltOvrErr);
		fun(BMS_TempOvrErr);
		fun(BMS_TempDiffErr);
		fun(BMS_SysErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_TEL_BattVolt);
		fun << (BMS_DCUVoltDC);
		fun << (BMS_TEL_CellVoltMin);
		fun << (BMS_TEL_CellVoltMax);
		fun << (BMS_MinVoltCellNum);
		fun << (BMS_MaxVoltCellNum);
		fun << (BMS_CellTempMin);
		fun << (BMS_MinTempCellNum);
		fun << (BMS_MinTempSubsysNum);
		fun << (BMS_CellTempMax);
		fun << (BMS_MaxTempCellNum);
		fun << (BMS_MaxTempSubsysNum);
		fun << (BMS_ProbeCount);
		fun << (BMS_TEL_BattSocDisp);
		fun << (BMS_ChgOvrErr);
		fun << (BMS_InsErr);
		fun << (BMS_CellDiffErr);
		fun << (BMS_BattMatErr);
		fun << (BMS_SocJumpErr);
		fun << (BMS_SocOvrErr);
		fun << (BMS_CellVoltUndErr);
		fun << (BMS_CellVoltOvrErr);
		fun << (BMS_SocUndErr);
		fun << (BMS_BattVoltUndErr);
		fun << (BMS_BattVoltOvrErr);
		fun << (BMS_TempOvrErr);
		fun << (BMS_TempDiffErr);
		fun << (BMS_SysErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_TEL_BattVolt);
		fun >> (BMS_DCUVoltDC);
		fun >> (BMS_TEL_CellVoltMin);
		fun >> (BMS_TEL_CellVoltMax);
		fun >> (BMS_MinVoltCellNum);
		fun >> (BMS_MaxVoltCellNum);
		fun >> (BMS_CellTempMin);
		fun >> (BMS_MinTempCellNum);
		fun >> (BMS_MinTempSubsysNum);
		fun >> (BMS_CellTempMax);
		fun >> (BMS_MaxTempCellNum);
		fun >> (BMS_MaxTempSubsysNum);
		fun >> (BMS_ProbeCount);
		fun >> (BMS_TEL_BattSocDisp);
		fun >> (BMS_ChgOvrErr);
		fun >> (BMS_InsErr);
		fun >> (BMS_CellDiffErr);
		fun >> (BMS_BattMatErr);
		fun >> (BMS_SocJumpErr);
		fun >> (BMS_SocOvrErr);
		fun >> (BMS_CellVoltUndErr);
		fun >> (BMS_CellVoltOvrErr);
		fun >> (BMS_SocUndErr);
		fun >> (BMS_BattVoltUndErr);
		fun >> (BMS_BattVoltOvrErr);
		fun >> (BMS_TempOvrErr);
		fun >> (BMS_TempDiffErr);
		fun >> (BMS_SysErr);
	}
};

#endif //____BDCTESTBMS10_H__
