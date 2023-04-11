#ifndef __ARA_COM_VSOMEIP__RTECTLOTAUPON_H__
#define __ARA_COM_VSOMEIP__RTECTLOTAUPON_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RteCtlOTAUPOn {
public:
	std::uint64_t RequestID;
	std::uint8_t OTAmode;
	std::uint64_t OTAtimeON;
/*
	RteCtlOTAUPOn() {}
	~RteCtlOTAUPOn() {}
	RteCtlOTAUPOn(const std::uint64_t _RequestID,const std::uint8_t _OTAmode,const std::uint64_t _OTAtimeON):RequestID(_RequestID),OTAmode(_OTAmode),OTAtimeON(_OTAtimeON) {}
	RteCtlOTAUPOn(const RteCtlOTAUPOn &_x){
		RequestID = _x.RequestID;
		OTAmode = _x.OTAmode;
		OTAtimeON = _x.OTAtimeON;
	}
	RteCtlOTAUPOn(RteCtlOTAUPOn &&_x){
		RequestID = std::move(_x.RequestID);
		OTAmode = std::move(_x.OTAmode);
		OTAtimeON = std::move(_x.OTAtimeON);
	}
	RteCtlOTAUPOn& operator=(const RteCtlOTAUPOn &_x){
		RequestID = _x.RequestID;
		OTAmode = _x.OTAmode;
		OTAtimeON = _x.OTAtimeON;
		return *this;
	}
	RteCtlOTAUPOn& operator=(RteCtlOTAUPOn &&_x){
		RequestID = std::move(_x.RequestID);
		OTAmode = std::move(_x.OTAmode);
		OTAtimeON = std::move(_x.OTAtimeON);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RequestID);
		fun(OTAmode);
		fun(OTAtimeON);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RequestID);
		fun(OTAmode);
		fun(OTAtimeON);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RequestID);
		fun << (OTAmode);
		fun << (OTAtimeON);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RequestID);
		fun >> (OTAmode);
		fun >> (OTAtimeON);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__RTECTLOTAUPON_H__
