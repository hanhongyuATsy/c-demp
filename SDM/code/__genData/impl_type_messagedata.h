#ifndef ____MESSAGEDATA_H__
#define ____MESSAGEDATA_H__


#include "cstdint"
#include "impl_type_string.h"






struct MessageData {
public:
	std::uint32_t msgID;
	std::uint64_t timestamp;
	std::uint16_t payload_Len;
	String payload_Data;
/*
	MessageData() {}
	~MessageData() {}
	MessageData(const std::uint32_t _msgID,const std::uint64_t _timestamp,const std::uint16_t _payload_Len,const String _payload_Data):msgID(_msgID),timestamp(_timestamp),payload_Len(_payload_Len),payload_Data(_payload_Data) {}
	MessageData(const MessageData &_x){
		msgID = _x.msgID;
		timestamp = _x.timestamp;
		payload_Len = _x.payload_Len;
		payload_Data = _x.payload_Data;
	}
	MessageData(MessageData &&_x){
		msgID = std::move(_x.msgID);
		timestamp = std::move(_x.timestamp);
		payload_Len = std::move(_x.payload_Len);
		payload_Data = std::move(_x.payload_Data);
	}
	MessageData& operator=(const MessageData &_x){
		msgID = _x.msgID;
		timestamp = _x.timestamp;
		payload_Len = _x.payload_Len;
		payload_Data = _x.payload_Data;
		return *this;
	}
	MessageData& operator=(MessageData &&_x){
		msgID = std::move(_x.msgID);
		timestamp = std::move(_x.timestamp);
		payload_Len = std::move(_x.payload_Len);
		payload_Data = std::move(_x.payload_Data);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(msgID);
		fun(timestamp);
		fun(payload_Len);
		fun(payload_Data);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(msgID);
		fun(timestamp);
		fun(payload_Len);
		fun(payload_Data);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (msgID);
		fun << (timestamp);
		fun << (payload_Len);
		fun << (payload_Data);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (msgID);
		fun >> (timestamp);
		fun >> (payload_Len);
		fun >> (payload_Data);
	}
};

#endif //____MESSAGEDATA_H__
