#ifndef ____BDCDCUVER_H__
#define ____BDCDCUVER_H__


#include "cstdint"






struct BDCDCUVer {
public:
	std::uint16_t DCU_Hwversion;
	std::uint16_t DCU_Swversion;
	std::uint32_t DCU_SwVerExt;
	std::uint16_t DCU_OffsetAngle;
	std::uint16_t DCU_BootSV;
	std::uint32_t DCU_BSWVersion;
/*
	BDCDCUVer() {}
	~BDCDCUVer() {}
	BDCDCUVer(const std::uint16_t _DCU_Hwversion,const std::uint16_t _DCU_Swversion,const std::uint32_t _DCU_SwVerExt,const std::uint16_t _DCU_OffsetAngle,const std::uint16_t _DCU_BootSV,const std::uint32_t _DCU_BSWVersion):DCU_Hwversion(_DCU_Hwversion),DCU_Swversion(_DCU_Swversion),DCU_SwVerExt(_DCU_SwVerExt),DCU_OffsetAngle(_DCU_OffsetAngle),DCU_BootSV(_DCU_BootSV),DCU_BSWVersion(_DCU_BSWVersion) {}
	BDCDCUVer(const BDCDCUVer &_x){
		DCU_Hwversion = _x.DCU_Hwversion;
		DCU_Swversion = _x.DCU_Swversion;
		DCU_SwVerExt = _x.DCU_SwVerExt;
		DCU_OffsetAngle = _x.DCU_OffsetAngle;
		DCU_BootSV = _x.DCU_BootSV;
		DCU_BSWVersion = _x.DCU_BSWVersion;
	}
	BDCDCUVer(BDCDCUVer &&_x){
		DCU_Hwversion = std::move(_x.DCU_Hwversion);
		DCU_Swversion = std::move(_x.DCU_Swversion);
		DCU_SwVerExt = std::move(_x.DCU_SwVerExt);
		DCU_OffsetAngle = std::move(_x.DCU_OffsetAngle);
		DCU_BootSV = std::move(_x.DCU_BootSV);
		DCU_BSWVersion = std::move(_x.DCU_BSWVersion);
	}
	BDCDCUVer& operator=(const BDCDCUVer &_x){
		DCU_Hwversion = _x.DCU_Hwversion;
		DCU_Swversion = _x.DCU_Swversion;
		DCU_SwVerExt = _x.DCU_SwVerExt;
		DCU_OffsetAngle = _x.DCU_OffsetAngle;
		DCU_BootSV = _x.DCU_BootSV;
		DCU_BSWVersion = _x.DCU_BSWVersion;
		return *this;
	}
	BDCDCUVer& operator=(BDCDCUVer &&_x){
		DCU_Hwversion = std::move(_x.DCU_Hwversion);
		DCU_Swversion = std::move(_x.DCU_Swversion);
		DCU_SwVerExt = std::move(_x.DCU_SwVerExt);
		DCU_OffsetAngle = std::move(_x.DCU_OffsetAngle);
		DCU_BootSV = std::move(_x.DCU_BootSV);
		DCU_BSWVersion = std::move(_x.DCU_BSWVersion);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCU_Hwversion);
		fun(DCU_Swversion);
		fun(DCU_SwVerExt);
		fun(DCU_OffsetAngle);
		fun(DCU_BootSV);
		fun(DCU_BSWVersion);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCU_Hwversion);
		fun(DCU_Swversion);
		fun(DCU_SwVerExt);
		fun(DCU_OffsetAngle);
		fun(DCU_BootSV);
		fun(DCU_BSWVersion);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCU_Hwversion);
		fun << (DCU_Swversion);
		fun << (DCU_SwVerExt);
		fun << (DCU_OffsetAngle);
		fun << (DCU_BootSV);
		fun << (DCU_BSWVersion);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCU_Hwversion);
		fun >> (DCU_Swversion);
		fun >> (DCU_SwVerExt);
		fun >> (DCU_OffsetAngle);
		fun >> (DCU_BootSV);
		fun >> (DCU_BSWVersion);
	}
};

#endif //____BDCDCUVER_H__
