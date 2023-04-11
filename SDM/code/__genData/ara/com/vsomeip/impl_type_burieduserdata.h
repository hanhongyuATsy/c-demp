#ifndef __ARA_COM_VSOMEIP__BURIEDUSERDATA_H__
#define __ARA_COM_VSOMEIP__BURIEDUSERDATA_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_strappname_t.h"
#include "ara/com/vsomeip/impl_type_streventid_t.h"
#include "ara/com/vsomeip/impl_type_eventvalue_t.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BuriedUserData {
public:
	std::uint16_t uEventType;
	ara::com::vsomeip::strAppName_t strAppName;
	ara::com::vsomeip::strEventID_t strEventID;
	ara::com::vsomeip::eventValue_t eventValue;
/*
	BuriedUserData() {}
	~BuriedUserData() {}
	BuriedUserData(const std::uint16_t _uEventType,const ara::com::vsomeip::strAppName_t _strAppName,const ara::com::vsomeip::strEventID_t _strEventID,const ara::com::vsomeip::eventValue_t _eventValue):uEventType(_uEventType),strAppName(_strAppName),strEventID(_strEventID),eventValue(_eventValue) {}
	BuriedUserData(const BuriedUserData &_x){
		uEventType = _x.uEventType;
		strAppName = _x.strAppName;
		strEventID = _x.strEventID;
		eventValue = _x.eventValue;
	}
	BuriedUserData(BuriedUserData &&_x){
		uEventType = std::move(_x.uEventType);
		strAppName = std::move(_x.strAppName);
		strEventID = std::move(_x.strEventID);
		eventValue = std::move(_x.eventValue);
	}
	BuriedUserData& operator=(const BuriedUserData &_x){
		uEventType = _x.uEventType;
		strAppName = _x.strAppName;
		strEventID = _x.strEventID;
		eventValue = _x.eventValue;
		return *this;
	}
	BuriedUserData& operator=(BuriedUserData &&_x){
		uEventType = std::move(_x.uEventType);
		strAppName = std::move(_x.strAppName);
		strEventID = std::move(_x.strEventID);
		eventValue = std::move(_x.eventValue);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(uEventType);
		fun(strAppName);
		fun(strEventID);
		fun(eventValue);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(uEventType);
		fun(strAppName);
		fun(strEventID);
		fun(eventValue);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (uEventType);
		fun << (strAppName);
		fun << (strEventID);
		fun << (eventValue);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (uEventType);
		fun >> (strAppName);
		fun >> (strEventID);
		fun >> (eventValue);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BURIEDUSERDATA_H__
