#ifndef __ARA_COM_VSOMEIP__SHRTTIMECTRLSCENEDATA_TYPE_H__
#define __ARA_COM_VSOMEIP__SHRTTIMECTRLSCENEDATA_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_shrtctrlscenedataarray_type.h"
#include "ara/com/vsomeip/impl_type_vehlstateparaminemgshrt_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ShrtTimeCtrlSceneData_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	ara::com::vsomeip::ShrtCtrlSceneDataArray_Type ShrtCtrlSceneDataArray;
	ara::com::vsomeip::VehlStateParamInEmgShrt_Type VehlStateParamInEmgShrtTime;
/*
	ShrtTimeCtrlSceneData_Type() {}
	~ShrtTimeCtrlSceneData_Type() {}
	ShrtTimeCtrlSceneData_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const ara::com::vsomeip::ShrtCtrlSceneDataArray_Type _ShrtCtrlSceneDataArray,const ara::com::vsomeip::VehlStateParamInEmgShrt_Type _VehlStateParamInEmgShrtTime):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),ShrtCtrlSceneDataArray(_ShrtCtrlSceneDataArray),VehlStateParamInEmgShrtTime(_VehlStateParamInEmgShrtTime) {}
	ShrtTimeCtrlSceneData_Type(const ShrtTimeCtrlSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		ShrtCtrlSceneDataArray = _x.ShrtCtrlSceneDataArray;
		VehlStateParamInEmgShrtTime = _x.VehlStateParamInEmgShrtTime;
	}
	ShrtTimeCtrlSceneData_Type(ShrtTimeCtrlSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		ShrtCtrlSceneDataArray = std::move(_x.ShrtCtrlSceneDataArray);
		VehlStateParamInEmgShrtTime = std::move(_x.VehlStateParamInEmgShrtTime);
	}
	ShrtTimeCtrlSceneData_Type& operator=(const ShrtTimeCtrlSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		ShrtCtrlSceneDataArray = _x.ShrtCtrlSceneDataArray;
		VehlStateParamInEmgShrtTime = _x.VehlStateParamInEmgShrtTime;
		return *this;
	}
	ShrtTimeCtrlSceneData_Type& operator=(ShrtTimeCtrlSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		ShrtCtrlSceneDataArray = std::move(_x.ShrtCtrlSceneDataArray);
		VehlStateParamInEmgShrtTime = std::move(_x.VehlStateParamInEmgShrtTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(ShrtCtrlSceneDataArray);
		fun(VehlStateParamInEmgShrtTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(ShrtCtrlSceneDataArray);
		fun(VehlStateParamInEmgShrtTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (ShrtCtrlSceneDataArray);
		fun << (VehlStateParamInEmgShrtTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (ShrtCtrlSceneDataArray);
		fun >> (VehlStateParamInEmgShrtTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SHRTTIMECTRLSCENEDATA_TYPE_H__
