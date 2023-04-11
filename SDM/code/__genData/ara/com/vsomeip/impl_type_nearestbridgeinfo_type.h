#ifndef __ARA_COM_VSOMEIP__NEARESTBRIDGEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__NEARESTBRIDGEINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct NearestBridgeInfo_Type {
public:
	std::uint16_t EHR_NrstBridgeLength;
	std::uint16_t EHR_NrstBridgeDis;
	bool EHR_NrstBridgeSt;
/*
	NearestBridgeInfo_Type() {}
	~NearestBridgeInfo_Type() {}
	NearestBridgeInfo_Type(const std::uint16_t _EHR_NrstBridgeLength,const std::uint16_t _EHR_NrstBridgeDis,const bool _EHR_NrstBridgeSt):EHR_NrstBridgeLength(_EHR_NrstBridgeLength),EHR_NrstBridgeDis(_EHR_NrstBridgeDis),EHR_NrstBridgeSt(_EHR_NrstBridgeSt) {}
	NearestBridgeInfo_Type(const NearestBridgeInfo_Type &_x){
		EHR_NrstBridgeLength = _x.EHR_NrstBridgeLength;
		EHR_NrstBridgeDis = _x.EHR_NrstBridgeDis;
		EHR_NrstBridgeSt = _x.EHR_NrstBridgeSt;
	}
	NearestBridgeInfo_Type(NearestBridgeInfo_Type &&_x){
		EHR_NrstBridgeLength = std::move(_x.EHR_NrstBridgeLength);
		EHR_NrstBridgeDis = std::move(_x.EHR_NrstBridgeDis);
		EHR_NrstBridgeSt = std::move(_x.EHR_NrstBridgeSt);
	}
	NearestBridgeInfo_Type& operator=(const NearestBridgeInfo_Type &_x){
		EHR_NrstBridgeLength = _x.EHR_NrstBridgeLength;
		EHR_NrstBridgeDis = _x.EHR_NrstBridgeDis;
		EHR_NrstBridgeSt = _x.EHR_NrstBridgeSt;
		return *this;
	}
	NearestBridgeInfo_Type& operator=(NearestBridgeInfo_Type &&_x){
		EHR_NrstBridgeLength = std::move(_x.EHR_NrstBridgeLength);
		EHR_NrstBridgeDis = std::move(_x.EHR_NrstBridgeDis);
		EHR_NrstBridgeSt = std::move(_x.EHR_NrstBridgeSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_NrstBridgeLength);
		fun(EHR_NrstBridgeDis);
		fun(EHR_NrstBridgeSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_NrstBridgeLength);
		fun(EHR_NrstBridgeDis);
		fun(EHR_NrstBridgeSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_NrstBridgeLength);
		fun << (EHR_NrstBridgeDis);
		fun << (EHR_NrstBridgeSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_NrstBridgeLength);
		fun >> (EHR_NrstBridgeDis);
		fun >> (EHR_NrstBridgeSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__NEARESTBRIDGEINFO_TYPE_H__
