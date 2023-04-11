#ifndef __ARA_COM_VSOMEIP__DRVSTYLSCENEDATA_TYPE_H__
#define __ARA_COM_VSOMEIP__DRVSTYLSCENEDATA_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_drvstylercgntinput_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrvStylSceneData_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	std::uint8_t DrvStyleScene;
	ara::com::vsomeip::DrvStyleRcgntInput_Type DrvStyleRcgntInput;
	std::uint8_t DrvStyleRcgntRslt;
	std::uint8_t DrvStyleRcgntErr;
/*
	DrvStylSceneData_Type() {}
	~DrvStylSceneData_Type() {}
	DrvStylSceneData_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const std::uint8_t _DrvStyleScene,const ara::com::vsomeip::DrvStyleRcgntInput_Type _DrvStyleRcgntInput,const std::uint8_t _DrvStyleRcgntRslt,const std::uint8_t _DrvStyleRcgntErr):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),DrvStyleScene(_DrvStyleScene),DrvStyleRcgntInput(_DrvStyleRcgntInput),DrvStyleRcgntRslt(_DrvStyleRcgntRslt),DrvStyleRcgntErr(_DrvStyleRcgntErr) {}
	DrvStylSceneData_Type(const DrvStylSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		DrvStyleScene = _x.DrvStyleScene;
		DrvStyleRcgntInput = _x.DrvStyleRcgntInput;
		DrvStyleRcgntRslt = _x.DrvStyleRcgntRslt;
		DrvStyleRcgntErr = _x.DrvStyleRcgntErr;
	}
	DrvStylSceneData_Type(DrvStylSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		DrvStyleScene = std::move(_x.DrvStyleScene);
		DrvStyleRcgntInput = std::move(_x.DrvStyleRcgntInput);
		DrvStyleRcgntRslt = std::move(_x.DrvStyleRcgntRslt);
		DrvStyleRcgntErr = std::move(_x.DrvStyleRcgntErr);
	}
	DrvStylSceneData_Type& operator=(const DrvStylSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		DrvStyleScene = _x.DrvStyleScene;
		DrvStyleRcgntInput = _x.DrvStyleRcgntInput;
		DrvStyleRcgntRslt = _x.DrvStyleRcgntRslt;
		DrvStyleRcgntErr = _x.DrvStyleRcgntErr;
		return *this;
	}
	DrvStylSceneData_Type& operator=(DrvStylSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		DrvStyleScene = std::move(_x.DrvStyleScene);
		DrvStyleRcgntInput = std::move(_x.DrvStyleRcgntInput);
		DrvStyleRcgntRslt = std::move(_x.DrvStyleRcgntRslt);
		DrvStyleRcgntErr = std::move(_x.DrvStyleRcgntErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(DrvStyleScene);
		fun(DrvStyleRcgntInput);
		fun(DrvStyleRcgntRslt);
		fun(DrvStyleRcgntErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(DrvStyleScene);
		fun(DrvStyleRcgntInput);
		fun(DrvStyleRcgntRslt);
		fun(DrvStyleRcgntErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (DrvStyleScene);
		fun << (DrvStyleRcgntInput);
		fun << (DrvStyleRcgntRslt);
		fun << (DrvStyleRcgntErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (DrvStyleScene);
		fun >> (DrvStyleRcgntInput);
		fun >> (DrvStyleRcgntRslt);
		fun >> (DrvStyleRcgntErr);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRVSTYLSCENEDATA_TYPE_H__
