#ifndef __ARA_COM_VSOMEIP__SPDPREDCSCENEDATA_TYPE_H__
#define __ARA_COM_VSOMEIP__SPDPREDCSCENEDATA_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_spdpredcscenedataarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SpdPredcSceneData_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	std::uint8_t SpdPredctScene;
	ara::com::vsomeip::SpdPredcSceneDataArray_Type SpdPredcSceneDataArray;
/*
	SpdPredcSceneData_Type() {}
	~SpdPredcSceneData_Type() {}
	SpdPredcSceneData_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const std::uint8_t _SpdPredctScene,const ara::com::vsomeip::SpdPredcSceneDataArray_Type _SpdPredcSceneDataArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),SpdPredctScene(_SpdPredctScene),SpdPredcSceneDataArray(_SpdPredcSceneDataArray) {}
	SpdPredcSceneData_Type(const SpdPredcSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SpdPredctScene = _x.SpdPredctScene;
		SpdPredcSceneDataArray = _x.SpdPredcSceneDataArray;
	}
	SpdPredcSceneData_Type(SpdPredcSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SpdPredctScene = std::move(_x.SpdPredctScene);
		SpdPredcSceneDataArray = std::move(_x.SpdPredcSceneDataArray);
	}
	SpdPredcSceneData_Type& operator=(const SpdPredcSceneData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SpdPredctScene = _x.SpdPredctScene;
		SpdPredcSceneDataArray = _x.SpdPredcSceneDataArray;
		return *this;
	}
	SpdPredcSceneData_Type& operator=(SpdPredcSceneData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SpdPredctScene = std::move(_x.SpdPredctScene);
		SpdPredcSceneDataArray = std::move(_x.SpdPredcSceneDataArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SpdPredctScene);
		fun(SpdPredcSceneDataArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SpdPredctScene);
		fun(SpdPredcSceneDataArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (SpdPredctScene);
		fun << (SpdPredcSceneDataArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (SpdPredctScene);
		fun >> (SpdPredcSceneDataArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SPDPREDCSCENEDATA_TYPE_H__
