#ifndef ____BDCBMSDATA2_H__
#define ____BDCBMSDATA2_H__


#include "cstdint"






struct BDCBMSDATA2 {
public:
	std::uint16_t BMS_BattSoH;
	std::uint64_t BMS_DCVolt;
	std::uint8_t BMS_SOHResCal;
	std::uint8_t BMS_DeltaSOHDynamic;
/*
	BDCBMSDATA2() {}
	~BDCBMSDATA2() {}
	BDCBMSDATA2(const std::uint16_t _BMS_BattSoH,const std::uint64_t _BMS_DCVolt,const std::uint8_t _BMS_SOHResCal,const std::uint8_t _BMS_DeltaSOHDynamic):BMS_BattSoH(_BMS_BattSoH),BMS_DCVolt(_BMS_DCVolt),BMS_SOHResCal(_BMS_SOHResCal),BMS_DeltaSOHDynamic(_BMS_DeltaSOHDynamic) {}
	BDCBMSDATA2(const BDCBMSDATA2 &_x){
		BMS_BattSoH = _x.BMS_BattSoH;
		BMS_DCVolt = _x.BMS_DCVolt;
		BMS_SOHResCal = _x.BMS_SOHResCal;
		BMS_DeltaSOHDynamic = _x.BMS_DeltaSOHDynamic;
	}
	BDCBMSDATA2(BDCBMSDATA2 &&_x){
		BMS_BattSoH = std::move(_x.BMS_BattSoH);
		BMS_DCVolt = std::move(_x.BMS_DCVolt);
		BMS_SOHResCal = std::move(_x.BMS_SOHResCal);
		BMS_DeltaSOHDynamic = std::move(_x.BMS_DeltaSOHDynamic);
	}
	BDCBMSDATA2& operator=(const BDCBMSDATA2 &_x){
		BMS_BattSoH = _x.BMS_BattSoH;
		BMS_DCVolt = _x.BMS_DCVolt;
		BMS_SOHResCal = _x.BMS_SOHResCal;
		BMS_DeltaSOHDynamic = _x.BMS_DeltaSOHDynamic;
		return *this;
	}
	BDCBMSDATA2& operator=(BDCBMSDATA2 &&_x){
		BMS_BattSoH = std::move(_x.BMS_BattSoH);
		BMS_DCVolt = std::move(_x.BMS_DCVolt);
		BMS_SOHResCal = std::move(_x.BMS_SOHResCal);
		BMS_DeltaSOHDynamic = std::move(_x.BMS_DeltaSOHDynamic);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_BattSoH);
		fun(BMS_DCVolt);
		fun(BMS_SOHResCal);
		fun(BMS_DeltaSOHDynamic);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_BattSoH);
		fun(BMS_DCVolt);
		fun(BMS_SOHResCal);
		fun(BMS_DeltaSOHDynamic);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_BattSoH);
		fun << (BMS_DCVolt);
		fun << (BMS_SOHResCal);
		fun << (BMS_DeltaSOHDynamic);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_BattSoH);
		fun >> (BMS_DCVolt);
		fun >> (BMS_SOHResCal);
		fun >> (BMS_DeltaSOHDynamic);
	}
};

#endif //____BDCBMSDATA2_H__
