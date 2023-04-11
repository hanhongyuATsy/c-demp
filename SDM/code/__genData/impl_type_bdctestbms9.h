#ifndef ____BDCTESTBMS9_H__
#define ____BDCTESTBMS9_H__


#include "cstdint"






struct BDCTestBMS9 {
public:
	std::uint8_t BMS_MinVoltSubsysNum;
	std::uint8_t BMS_CellSerialNum;
	std::uint8_t BMS_FrmCellCount;
	std::uint8_t BMS_MaxVoltSubsysNum;
	std::uint8_t BMS_CellCount;
	std::uint16_t BMS_SubsysCurr;
	std::uint16_t BMS_SubsysVolt;
	std::uint8_t BMS_SubsysNum;
	std::uint8_t BMS_SubsysCount;
	std::uint64_t BMS_Code1;
	std::uint64_t BMS_Code2;
	std::uint64_t BMS_Code3;
	std::uint64_t BMS_Code4;
	std::uint64_t BMS_Code5;
	std::uint64_t BMS_Code6;
	std::uint8_t EMS_AtmosphericPressure;
/*
	BDCTestBMS9() {}
	~BDCTestBMS9() {}
	BDCTestBMS9(const std::uint8_t _BMS_MinVoltSubsysNum,const std::uint8_t _BMS_CellSerialNum,const std::uint8_t _BMS_FrmCellCount,const std::uint8_t _BMS_MaxVoltSubsysNum,const std::uint8_t _BMS_CellCount,const std::uint16_t _BMS_SubsysCurr,const std::uint16_t _BMS_SubsysVolt,const std::uint8_t _BMS_SubsysNum,const std::uint8_t _BMS_SubsysCount,const std::uint64_t _BMS_Code1,const std::uint64_t _BMS_Code2,const std::uint64_t _BMS_Code3,const std::uint64_t _BMS_Code4,const std::uint64_t _BMS_Code5,const std::uint64_t _BMS_Code6,const std::uint8_t _EMS_AtmosphericPressure):BMS_MinVoltSubsysNum(_BMS_MinVoltSubsysNum),BMS_CellSerialNum(_BMS_CellSerialNum),BMS_FrmCellCount(_BMS_FrmCellCount),BMS_MaxVoltSubsysNum(_BMS_MaxVoltSubsysNum),BMS_CellCount(_BMS_CellCount),BMS_SubsysCurr(_BMS_SubsysCurr),BMS_SubsysVolt(_BMS_SubsysVolt),BMS_SubsysNum(_BMS_SubsysNum),BMS_SubsysCount(_BMS_SubsysCount),BMS_Code1(_BMS_Code1),BMS_Code2(_BMS_Code2),BMS_Code3(_BMS_Code3),BMS_Code4(_BMS_Code4),BMS_Code5(_BMS_Code5),BMS_Code6(_BMS_Code6),EMS_AtmosphericPressure(_EMS_AtmosphericPressure) {}
	BDCTestBMS9(const BDCTestBMS9 &_x){
		BMS_MinVoltSubsysNum = _x.BMS_MinVoltSubsysNum;
		BMS_CellSerialNum = _x.BMS_CellSerialNum;
		BMS_FrmCellCount = _x.BMS_FrmCellCount;
		BMS_MaxVoltSubsysNum = _x.BMS_MaxVoltSubsysNum;
		BMS_CellCount = _x.BMS_CellCount;
		BMS_SubsysCurr = _x.BMS_SubsysCurr;
		BMS_SubsysVolt = _x.BMS_SubsysVolt;
		BMS_SubsysNum = _x.BMS_SubsysNum;
		BMS_SubsysCount = _x.BMS_SubsysCount;
		BMS_Code1 = _x.BMS_Code1;
		BMS_Code2 = _x.BMS_Code2;
		BMS_Code3 = _x.BMS_Code3;
		BMS_Code4 = _x.BMS_Code4;
		BMS_Code5 = _x.BMS_Code5;
		BMS_Code6 = _x.BMS_Code6;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
	}
	BDCTestBMS9(BDCTestBMS9 &&_x){
		BMS_MinVoltSubsysNum = std::move(_x.BMS_MinVoltSubsysNum);
		BMS_CellSerialNum = std::move(_x.BMS_CellSerialNum);
		BMS_FrmCellCount = std::move(_x.BMS_FrmCellCount);
		BMS_MaxVoltSubsysNum = std::move(_x.BMS_MaxVoltSubsysNum);
		BMS_CellCount = std::move(_x.BMS_CellCount);
		BMS_SubsysCurr = std::move(_x.BMS_SubsysCurr);
		BMS_SubsysVolt = std::move(_x.BMS_SubsysVolt);
		BMS_SubsysNum = std::move(_x.BMS_SubsysNum);
		BMS_SubsysCount = std::move(_x.BMS_SubsysCount);
		BMS_Code1 = std::move(_x.BMS_Code1);
		BMS_Code2 = std::move(_x.BMS_Code2);
		BMS_Code3 = std::move(_x.BMS_Code3);
		BMS_Code4 = std::move(_x.BMS_Code4);
		BMS_Code5 = std::move(_x.BMS_Code5);
		BMS_Code6 = std::move(_x.BMS_Code6);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
	}
	BDCTestBMS9& operator=(const BDCTestBMS9 &_x){
		BMS_MinVoltSubsysNum = _x.BMS_MinVoltSubsysNum;
		BMS_CellSerialNum = _x.BMS_CellSerialNum;
		BMS_FrmCellCount = _x.BMS_FrmCellCount;
		BMS_MaxVoltSubsysNum = _x.BMS_MaxVoltSubsysNum;
		BMS_CellCount = _x.BMS_CellCount;
		BMS_SubsysCurr = _x.BMS_SubsysCurr;
		BMS_SubsysVolt = _x.BMS_SubsysVolt;
		BMS_SubsysNum = _x.BMS_SubsysNum;
		BMS_SubsysCount = _x.BMS_SubsysCount;
		BMS_Code1 = _x.BMS_Code1;
		BMS_Code2 = _x.BMS_Code2;
		BMS_Code3 = _x.BMS_Code3;
		BMS_Code4 = _x.BMS_Code4;
		BMS_Code5 = _x.BMS_Code5;
		BMS_Code6 = _x.BMS_Code6;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
		return *this;
	}
	BDCTestBMS9& operator=(BDCTestBMS9 &&_x){
		BMS_MinVoltSubsysNum = std::move(_x.BMS_MinVoltSubsysNum);
		BMS_CellSerialNum = std::move(_x.BMS_CellSerialNum);
		BMS_FrmCellCount = std::move(_x.BMS_FrmCellCount);
		BMS_MaxVoltSubsysNum = std::move(_x.BMS_MaxVoltSubsysNum);
		BMS_CellCount = std::move(_x.BMS_CellCount);
		BMS_SubsysCurr = std::move(_x.BMS_SubsysCurr);
		BMS_SubsysVolt = std::move(_x.BMS_SubsysVolt);
		BMS_SubsysNum = std::move(_x.BMS_SubsysNum);
		BMS_SubsysCount = std::move(_x.BMS_SubsysCount);
		BMS_Code1 = std::move(_x.BMS_Code1);
		BMS_Code2 = std::move(_x.BMS_Code2);
		BMS_Code3 = std::move(_x.BMS_Code3);
		BMS_Code4 = std::move(_x.BMS_Code4);
		BMS_Code5 = std::move(_x.BMS_Code5);
		BMS_Code6 = std::move(_x.BMS_Code6);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_MinVoltSubsysNum);
		fun(BMS_CellSerialNum);
		fun(BMS_FrmCellCount);
		fun(BMS_MaxVoltSubsysNum);
		fun(BMS_CellCount);
		fun(BMS_SubsysCurr);
		fun(BMS_SubsysVolt);
		fun(BMS_SubsysNum);
		fun(BMS_SubsysCount);
		fun(BMS_Code1);
		fun(BMS_Code2);
		fun(BMS_Code3);
		fun(BMS_Code4);
		fun(BMS_Code5);
		fun(BMS_Code6);
		fun(EMS_AtmosphericPressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_MinVoltSubsysNum);
		fun(BMS_CellSerialNum);
		fun(BMS_FrmCellCount);
		fun(BMS_MaxVoltSubsysNum);
		fun(BMS_CellCount);
		fun(BMS_SubsysCurr);
		fun(BMS_SubsysVolt);
		fun(BMS_SubsysNum);
		fun(BMS_SubsysCount);
		fun(BMS_Code1);
		fun(BMS_Code2);
		fun(BMS_Code3);
		fun(BMS_Code4);
		fun(BMS_Code5);
		fun(BMS_Code6);
		fun(EMS_AtmosphericPressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_MinVoltSubsysNum);
		fun << (BMS_CellSerialNum);
		fun << (BMS_FrmCellCount);
		fun << (BMS_MaxVoltSubsysNum);
		fun << (BMS_CellCount);
		fun << (BMS_SubsysCurr);
		fun << (BMS_SubsysVolt);
		fun << (BMS_SubsysNum);
		fun << (BMS_SubsysCount);
		fun << (BMS_Code1);
		fun << (BMS_Code2);
		fun << (BMS_Code3);
		fun << (BMS_Code4);
		fun << (BMS_Code5);
		fun << (BMS_Code6);
		fun << (EMS_AtmosphericPressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_MinVoltSubsysNum);
		fun >> (BMS_CellSerialNum);
		fun >> (BMS_FrmCellCount);
		fun >> (BMS_MaxVoltSubsysNum);
		fun >> (BMS_CellCount);
		fun >> (BMS_SubsysCurr);
		fun >> (BMS_SubsysVolt);
		fun >> (BMS_SubsysNum);
		fun >> (BMS_SubsysCount);
		fun >> (BMS_Code1);
		fun >> (BMS_Code2);
		fun >> (BMS_Code3);
		fun >> (BMS_Code4);
		fun >> (BMS_Code5);
		fun >> (BMS_Code6);
		fun >> (EMS_AtmosphericPressure);
	}
};

#endif //____BDCTESTBMS9_H__
