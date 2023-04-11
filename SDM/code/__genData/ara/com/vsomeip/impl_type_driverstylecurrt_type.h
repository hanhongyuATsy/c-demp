#ifndef __ARA_COM_VSOMEIP__DRIVERSTYLECURRT_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVERSTYLECURRT_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverStyleCurrt_Type {
public:
	std::uint8_t CurrtRoadsituation;
	std::uint8_t CurrtDriveStyle;
/*
	DriverStyleCurrt_Type() {}
	~DriverStyleCurrt_Type() {}
	DriverStyleCurrt_Type(const std::uint8_t _CurrtRoadsituation,const std::uint8_t _CurrtDriveStyle):CurrtRoadsituation(_CurrtRoadsituation),CurrtDriveStyle(_CurrtDriveStyle) {}
	DriverStyleCurrt_Type(const DriverStyleCurrt_Type &_x){
		CurrtRoadsituation = _x.CurrtRoadsituation;
		CurrtDriveStyle = _x.CurrtDriveStyle;
	}
	DriverStyleCurrt_Type(DriverStyleCurrt_Type &&_x){
		CurrtRoadsituation = std::move(_x.CurrtRoadsituation);
		CurrtDriveStyle = std::move(_x.CurrtDriveStyle);
	}
	DriverStyleCurrt_Type& operator=(const DriverStyleCurrt_Type &_x){
		CurrtRoadsituation = _x.CurrtRoadsituation;
		CurrtDriveStyle = _x.CurrtDriveStyle;
		return *this;
	}
	DriverStyleCurrt_Type& operator=(DriverStyleCurrt_Type &&_x){
		CurrtRoadsituation = std::move(_x.CurrtRoadsituation);
		CurrtDriveStyle = std::move(_x.CurrtDriveStyle);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CurrtRoadsituation);
		fun(CurrtDriveStyle);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CurrtRoadsituation);
		fun(CurrtDriveStyle);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CurrtRoadsituation);
		fun << (CurrtDriveStyle);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CurrtRoadsituation);
		fun >> (CurrtDriveStyle);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVERSTYLECURRT_TYPE_H__
