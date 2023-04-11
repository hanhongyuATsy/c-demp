#ifndef ____BDCDRIVEANAL_H__
#define ____BDCDRIVEANAL_H__


#include "cstdint"






struct BDCDriveAnal {
public:
	std::uint16_t SRS_VehLongAccel;
	std::uint8_t SRS_VehLongAccelVD;
	std::uint16_t SRS_VehLatrlAccel;
	std::uint8_t SRS_VehLatrlAccelVD;
	std::uint16_t SRS_YawRate;
	std::uint8_t SRS_YawRateVD;
/*
	BDCDriveAnal() {}
	~BDCDriveAnal() {}
	BDCDriveAnal(const std::uint16_t _SRS_VehLongAccel,const std::uint8_t _SRS_VehLongAccelVD,const std::uint16_t _SRS_VehLatrlAccel,const std::uint8_t _SRS_VehLatrlAccelVD,const std::uint16_t _SRS_YawRate,const std::uint8_t _SRS_YawRateVD):SRS_VehLongAccel(_SRS_VehLongAccel),SRS_VehLongAccelVD(_SRS_VehLongAccelVD),SRS_VehLatrlAccel(_SRS_VehLatrlAccel),SRS_VehLatrlAccelVD(_SRS_VehLatrlAccelVD),SRS_YawRate(_SRS_YawRate),SRS_YawRateVD(_SRS_YawRateVD) {}
	BDCDriveAnal(const BDCDriveAnal &_x){
		SRS_VehLongAccel = _x.SRS_VehLongAccel;
		SRS_VehLongAccelVD = _x.SRS_VehLongAccelVD;
		SRS_VehLatrlAccel = _x.SRS_VehLatrlAccel;
		SRS_VehLatrlAccelVD = _x.SRS_VehLatrlAccelVD;
		SRS_YawRate = _x.SRS_YawRate;
		SRS_YawRateVD = _x.SRS_YawRateVD;
	}
	BDCDriveAnal(BDCDriveAnal &&_x){
		SRS_VehLongAccel = std::move(_x.SRS_VehLongAccel);
		SRS_VehLongAccelVD = std::move(_x.SRS_VehLongAccelVD);
		SRS_VehLatrlAccel = std::move(_x.SRS_VehLatrlAccel);
		SRS_VehLatrlAccelVD = std::move(_x.SRS_VehLatrlAccelVD);
		SRS_YawRate = std::move(_x.SRS_YawRate);
		SRS_YawRateVD = std::move(_x.SRS_YawRateVD);
	}
	BDCDriveAnal& operator=(const BDCDriveAnal &_x){
		SRS_VehLongAccel = _x.SRS_VehLongAccel;
		SRS_VehLongAccelVD = _x.SRS_VehLongAccelVD;
		SRS_VehLatrlAccel = _x.SRS_VehLatrlAccel;
		SRS_VehLatrlAccelVD = _x.SRS_VehLatrlAccelVD;
		SRS_YawRate = _x.SRS_YawRate;
		SRS_YawRateVD = _x.SRS_YawRateVD;
		return *this;
	}
	BDCDriveAnal& operator=(BDCDriveAnal &&_x){
		SRS_VehLongAccel = std::move(_x.SRS_VehLongAccel);
		SRS_VehLongAccelVD = std::move(_x.SRS_VehLongAccelVD);
		SRS_VehLatrlAccel = std::move(_x.SRS_VehLatrlAccel);
		SRS_VehLatrlAccelVD = std::move(_x.SRS_VehLatrlAccelVD);
		SRS_YawRate = std::move(_x.SRS_YawRate);
		SRS_YawRateVD = std::move(_x.SRS_YawRateVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SRS_VehLongAccel);
		fun(SRS_VehLongAccelVD);
		fun(SRS_VehLatrlAccel);
		fun(SRS_VehLatrlAccelVD);
		fun(SRS_YawRate);
		fun(SRS_YawRateVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SRS_VehLongAccel);
		fun(SRS_VehLongAccelVD);
		fun(SRS_VehLatrlAccel);
		fun(SRS_VehLatrlAccelVD);
		fun(SRS_YawRate);
		fun(SRS_YawRateVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SRS_VehLongAccel);
		fun << (SRS_VehLongAccelVD);
		fun << (SRS_VehLatrlAccel);
		fun << (SRS_VehLatrlAccelVD);
		fun << (SRS_YawRate);
		fun << (SRS_YawRateVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SRS_VehLongAccel);
		fun >> (SRS_VehLongAccelVD);
		fun >> (SRS_VehLatrlAccel);
		fun >> (SRS_VehLatrlAccelVD);
		fun >> (SRS_YawRate);
		fun >> (SRS_YawRateVD);
	}
};

#endif //____BDCDRIVEANAL_H__
