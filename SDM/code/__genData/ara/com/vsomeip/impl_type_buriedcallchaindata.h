#ifndef __ARA_COM_VSOMEIP__BURIEDCALLCHAINDATA_H__
#define __ARA_COM_VSOMEIP__BURIEDCALLCHAINDATA_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BuriedCallChainData {
public:
	std::uint16_t uServiceID;
	std::uint16_t uMethodID;
	std::uint16_t uClientID;
	std::uint64_t lReqTime;
	std::uint64_t lRespTime;
	std::uint16_t uSendType;
	std::uint16_t uStateCode;
/*
	BuriedCallChainData() {}
	~BuriedCallChainData() {}
	BuriedCallChainData(const std::uint16_t _uServiceID,const std::uint16_t _uMethodID,const std::uint16_t _uClientID,const std::uint64_t _lReqTime,const std::uint64_t _lRespTime,const std::uint16_t _uSendType,const std::uint16_t _uStateCode):uServiceID(_uServiceID),uMethodID(_uMethodID),uClientID(_uClientID),lReqTime(_lReqTime),lRespTime(_lRespTime),uSendType(_uSendType),uStateCode(_uStateCode) {}
	BuriedCallChainData(const BuriedCallChainData &_x){
		uServiceID = _x.uServiceID;
		uMethodID = _x.uMethodID;
		uClientID = _x.uClientID;
		lReqTime = _x.lReqTime;
		lRespTime = _x.lRespTime;
		uSendType = _x.uSendType;
		uStateCode = _x.uStateCode;
	}
	BuriedCallChainData(BuriedCallChainData &&_x){
		uServiceID = std::move(_x.uServiceID);
		uMethodID = std::move(_x.uMethodID);
		uClientID = std::move(_x.uClientID);
		lReqTime = std::move(_x.lReqTime);
		lRespTime = std::move(_x.lRespTime);
		uSendType = std::move(_x.uSendType);
		uStateCode = std::move(_x.uStateCode);
	}
	BuriedCallChainData& operator=(const BuriedCallChainData &_x){
		uServiceID = _x.uServiceID;
		uMethodID = _x.uMethodID;
		uClientID = _x.uClientID;
		lReqTime = _x.lReqTime;
		lRespTime = _x.lRespTime;
		uSendType = _x.uSendType;
		uStateCode = _x.uStateCode;
		return *this;
	}
	BuriedCallChainData& operator=(BuriedCallChainData &&_x){
		uServiceID = std::move(_x.uServiceID);
		uMethodID = std::move(_x.uMethodID);
		uClientID = std::move(_x.uClientID);
		lReqTime = std::move(_x.lReqTime);
		lRespTime = std::move(_x.lRespTime);
		uSendType = std::move(_x.uSendType);
		uStateCode = std::move(_x.uStateCode);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(uServiceID);
		fun(uMethodID);
		fun(uClientID);
		fun(lReqTime);
		fun(lRespTime);
		fun(uSendType);
		fun(uStateCode);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(uServiceID);
		fun(uMethodID);
		fun(uClientID);
		fun(lReqTime);
		fun(lRespTime);
		fun(uSendType);
		fun(uStateCode);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (uServiceID);
		fun << (uMethodID);
		fun << (uClientID);
		fun << (lReqTime);
		fun << (lRespTime);
		fun << (uSendType);
		fun << (uStateCode);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (uServiceID);
		fun >> (uMethodID);
		fun >> (uClientID);
		fun >> (lReqTime);
		fun >> (lRespTime);
		fun >> (uSendType);
		fun >> (uStateCode);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BURIEDCALLCHAINDATA_H__
