#ifndef ____STRUCT_OMSOPENCAMERPREVIEW_H__
#define ____STRUCT_OMSOPENCAMERPREVIEW_H__


#include "cstdint"






struct Struct_OMSOpenCamerPreview {
public:
	std::uint8_t Uint8_CameraID;
	std::uint8_t Uint8_CameraStatus;
/*
	Struct_OMSOpenCamerPreview() {}
	~Struct_OMSOpenCamerPreview() {}
	Struct_OMSOpenCamerPreview(const std::uint8_t _Uint8_CameraID,const std::uint8_t _Uint8_CameraStatus):Uint8_CameraID(_Uint8_CameraID),Uint8_CameraStatus(_Uint8_CameraStatus) {}
	Struct_OMSOpenCamerPreview(const Struct_OMSOpenCamerPreview &_x){
		Uint8_CameraID = _x.Uint8_CameraID;
		Uint8_CameraStatus = _x.Uint8_CameraStatus;
	}
	Struct_OMSOpenCamerPreview(Struct_OMSOpenCamerPreview &&_x){
		Uint8_CameraID = std::move(_x.Uint8_CameraID);
		Uint8_CameraStatus = std::move(_x.Uint8_CameraStatus);
	}
	Struct_OMSOpenCamerPreview& operator=(const Struct_OMSOpenCamerPreview &_x){
		Uint8_CameraID = _x.Uint8_CameraID;
		Uint8_CameraStatus = _x.Uint8_CameraStatus;
		return *this;
	}
	Struct_OMSOpenCamerPreview& operator=(Struct_OMSOpenCamerPreview &&_x){
		Uint8_CameraID = std::move(_x.Uint8_CameraID);
		Uint8_CameraStatus = std::move(_x.Uint8_CameraStatus);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_CameraID);
		fun(Uint8_CameraStatus);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_CameraID);
		fun(Uint8_CameraStatus);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_CameraID);
		fun << (Uint8_CameraStatus);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_CameraID);
		fun >> (Uint8_CameraStatus);
	}
};

#endif //____STRUCT_OMSOPENCAMERPREVIEW_H__
