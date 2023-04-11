#ifndef ____BDCSEATBELTST_H__
#define ____BDCSEATBELTST_H__


#include "cstdint"






struct BDCSeatBeltSt {
public:
	std::uint8_t SRS_PsngrSeatBeltSt;
	std::uint8_t SRS_DriverSeatBeltSt;
	std::uint8_t SRS_RearLeftSeatBeltSt;
	std::uint8_t SRS_RearRightSeatBeltSt;
	std::uint8_t SRS_RearMiddleSeatBeltSt;
/*
	BDCSeatBeltSt() {}
	~BDCSeatBeltSt() {}
	BDCSeatBeltSt(const std::uint8_t _SRS_PsngrSeatBeltSt,const std::uint8_t _SRS_DriverSeatBeltSt,const std::uint8_t _SRS_RearLeftSeatBeltSt,const std::uint8_t _SRS_RearRightSeatBeltSt,const std::uint8_t _SRS_RearMiddleSeatBeltSt):SRS_PsngrSeatBeltSt(_SRS_PsngrSeatBeltSt),SRS_DriverSeatBeltSt(_SRS_DriverSeatBeltSt),SRS_RearLeftSeatBeltSt(_SRS_RearLeftSeatBeltSt),SRS_RearRightSeatBeltSt(_SRS_RearRightSeatBeltSt),SRS_RearMiddleSeatBeltSt(_SRS_RearMiddleSeatBeltSt) {}
	BDCSeatBeltSt(const BDCSeatBeltSt &_x){
		SRS_PsngrSeatBeltSt = _x.SRS_PsngrSeatBeltSt;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
		SRS_RearLeftSeatBeltSt = _x.SRS_RearLeftSeatBeltSt;
		SRS_RearRightSeatBeltSt = _x.SRS_RearRightSeatBeltSt;
		SRS_RearMiddleSeatBeltSt = _x.SRS_RearMiddleSeatBeltSt;
	}
	BDCSeatBeltSt(BDCSeatBeltSt &&_x){
		SRS_PsngrSeatBeltSt = std::move(_x.SRS_PsngrSeatBeltSt);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
		SRS_RearLeftSeatBeltSt = std::move(_x.SRS_RearLeftSeatBeltSt);
		SRS_RearRightSeatBeltSt = std::move(_x.SRS_RearRightSeatBeltSt);
		SRS_RearMiddleSeatBeltSt = std::move(_x.SRS_RearMiddleSeatBeltSt);
	}
	BDCSeatBeltSt& operator=(const BDCSeatBeltSt &_x){
		SRS_PsngrSeatBeltSt = _x.SRS_PsngrSeatBeltSt;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
		SRS_RearLeftSeatBeltSt = _x.SRS_RearLeftSeatBeltSt;
		SRS_RearRightSeatBeltSt = _x.SRS_RearRightSeatBeltSt;
		SRS_RearMiddleSeatBeltSt = _x.SRS_RearMiddleSeatBeltSt;
		return *this;
	}
	BDCSeatBeltSt& operator=(BDCSeatBeltSt &&_x){
		SRS_PsngrSeatBeltSt = std::move(_x.SRS_PsngrSeatBeltSt);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
		SRS_RearLeftSeatBeltSt = std::move(_x.SRS_RearLeftSeatBeltSt);
		SRS_RearRightSeatBeltSt = std::move(_x.SRS_RearRightSeatBeltSt);
		SRS_RearMiddleSeatBeltSt = std::move(_x.SRS_RearMiddleSeatBeltSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SRS_PsngrSeatBeltSt);
		fun(SRS_DriverSeatBeltSt);
		fun(SRS_RearLeftSeatBeltSt);
		fun(SRS_RearRightSeatBeltSt);
		fun(SRS_RearMiddleSeatBeltSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SRS_PsngrSeatBeltSt);
		fun(SRS_DriverSeatBeltSt);
		fun(SRS_RearLeftSeatBeltSt);
		fun(SRS_RearRightSeatBeltSt);
		fun(SRS_RearMiddleSeatBeltSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SRS_PsngrSeatBeltSt);
		fun << (SRS_DriverSeatBeltSt);
		fun << (SRS_RearLeftSeatBeltSt);
		fun << (SRS_RearRightSeatBeltSt);
		fun << (SRS_RearMiddleSeatBeltSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SRS_PsngrSeatBeltSt);
		fun >> (SRS_DriverSeatBeltSt);
		fun >> (SRS_RearLeftSeatBeltSt);
		fun >> (SRS_RearRightSeatBeltSt);
		fun >> (SRS_RearMiddleSeatBeltSt);
	}
};

#endif //____BDCSEATBELTST_H__
