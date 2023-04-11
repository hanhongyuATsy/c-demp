#ifndef __ARA_COM_VSOMEIP__DRIVERACCOUNTINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVERACCOUNTINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverAccountInfo_Type {
public:
	bool ISD_FaceIDState;
	std::uint8_t ISD_FaceID;
	std::uint8_t ISD_DeleteInfoFaceID;
	std::uint8_t ISD_DeleteInfoFaceIDState;
/*
	DriverAccountInfo_Type() {}
	~DriverAccountInfo_Type() {}
	DriverAccountInfo_Type(const bool _ISD_FaceIDState,const std::uint8_t _ISD_FaceID,const std::uint8_t _ISD_DeleteInfoFaceID,const std::uint8_t _ISD_DeleteInfoFaceIDState):ISD_FaceIDState(_ISD_FaceIDState),ISD_FaceID(_ISD_FaceID),ISD_DeleteInfoFaceID(_ISD_DeleteInfoFaceID),ISD_DeleteInfoFaceIDState(_ISD_DeleteInfoFaceIDState) {}
	DriverAccountInfo_Type(const DriverAccountInfo_Type &_x){
		ISD_FaceIDState = _x.ISD_FaceIDState;
		ISD_FaceID = _x.ISD_FaceID;
		ISD_DeleteInfoFaceID = _x.ISD_DeleteInfoFaceID;
		ISD_DeleteInfoFaceIDState = _x.ISD_DeleteInfoFaceIDState;
	}
	DriverAccountInfo_Type(DriverAccountInfo_Type &&_x){
		ISD_FaceIDState = std::move(_x.ISD_FaceIDState);
		ISD_FaceID = std::move(_x.ISD_FaceID);
		ISD_DeleteInfoFaceID = std::move(_x.ISD_DeleteInfoFaceID);
		ISD_DeleteInfoFaceIDState = std::move(_x.ISD_DeleteInfoFaceIDState);
	}
	DriverAccountInfo_Type& operator=(const DriverAccountInfo_Type &_x){
		ISD_FaceIDState = _x.ISD_FaceIDState;
		ISD_FaceID = _x.ISD_FaceID;
		ISD_DeleteInfoFaceID = _x.ISD_DeleteInfoFaceID;
		ISD_DeleteInfoFaceIDState = _x.ISD_DeleteInfoFaceIDState;
		return *this;
	}
	DriverAccountInfo_Type& operator=(DriverAccountInfo_Type &&_x){
		ISD_FaceIDState = std::move(_x.ISD_FaceIDState);
		ISD_FaceID = std::move(_x.ISD_FaceID);
		ISD_DeleteInfoFaceID = std::move(_x.ISD_DeleteInfoFaceID);
		ISD_DeleteInfoFaceIDState = std::move(_x.ISD_DeleteInfoFaceIDState);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ISD_FaceIDState);
		fun(ISD_FaceID);
		fun(ISD_DeleteInfoFaceID);
		fun(ISD_DeleteInfoFaceIDState);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ISD_FaceIDState);
		fun(ISD_FaceID);
		fun(ISD_DeleteInfoFaceID);
		fun(ISD_DeleteInfoFaceIDState);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ISD_FaceIDState);
		fun << (ISD_FaceID);
		fun << (ISD_DeleteInfoFaceID);
		fun << (ISD_DeleteInfoFaceIDState);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ISD_FaceIDState);
		fun >> (ISD_FaceID);
		fun >> (ISD_DeleteInfoFaceID);
		fun >> (ISD_DeleteInfoFaceIDState);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVERACCOUNTINFO_TYPE_H__
