#ifndef __ARA_UCM_OTA_CLIENT__STEVENTMANAGER_STRUCTTYPE_H__
#define __ARA_UCM_OTA_CLIENT__STEVENTMANAGER_STRUCTTYPE_H__


#include "impl_type_string.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace ota_client
{

struct stEventManager_structType {
public:
	String eventId;
	String Level;
	String eventDesc;
	String eventContext;
	std::uint64_t eventTime;
/*
	stEventManager_structType() {}
	~stEventManager_structType() {}
	stEventManager_structType(const String _eventId,const String _Level,const String _eventDesc,const String _eventContext,const std::uint64_t _eventTime):eventId(_eventId),Level(_Level),eventDesc(_eventDesc),eventContext(_eventContext),eventTime(_eventTime) {}
	stEventManager_structType(const stEventManager_structType &_x){
		eventId = _x.eventId;
		Level = _x.Level;
		eventDesc = _x.eventDesc;
		eventContext = _x.eventContext;
		eventTime = _x.eventTime;
	}
	stEventManager_structType(stEventManager_structType &&_x){
		eventId = std::move(_x.eventId);
		Level = std::move(_x.Level);
		eventDesc = std::move(_x.eventDesc);
		eventContext = std::move(_x.eventContext);
		eventTime = std::move(_x.eventTime);
	}
	stEventManager_structType& operator=(const stEventManager_structType &_x){
		eventId = _x.eventId;
		Level = _x.Level;
		eventDesc = _x.eventDesc;
		eventContext = _x.eventContext;
		eventTime = _x.eventTime;
		return *this;
	}
	stEventManager_structType& operator=(stEventManager_structType &&_x){
		eventId = std::move(_x.eventId);
		Level = std::move(_x.Level);
		eventDesc = std::move(_x.eventDesc);
		eventContext = std::move(_x.eventContext);
		eventTime = std::move(_x.eventTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(eventId);
		fun(Level);
		fun(eventDesc);
		fun(eventContext);
		fun(eventTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(eventId);
		fun(Level);
		fun(eventDesc);
		fun(eventContext);
		fun(eventTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (eventId);
		fun << (Level);
		fun << (eventDesc);
		fun << (eventContext);
		fun << (eventTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (eventId);
		fun >> (Level);
		fun >> (eventDesc);
		fun >> (eventContext);
		fun >> (eventTime);
	}
};

}//ara
}//ucm
}//ota_client
#endif //__ARA_UCM_OTA_CLIENT__STEVENTMANAGER_STRUCTTYPE_H__
