#ifndef ____AUTHPSTTYPE_H__
#define ____AUTHPSTTYPE_H__


#include "cstdint"
#include "ara/com/spme/impl_type_authdatetype.h"






struct AUTHPstType {
public:
	std::uint8_t State;
	ara::com::spme::AUTHDateType StartTime;
	ara::com::spme::AUTHDateType EndTime;
	std::uint8_t Sender;
/*
	AUTHPstType() {}
	~AUTHPstType() {}
	AUTHPstType(const std::uint8_t _State,const ara::com::spme::AUTHDateType _StartTime,const ara::com::spme::AUTHDateType _EndTime,const std::uint8_t _Sender):State(_State),StartTime(_StartTime),EndTime(_EndTime),Sender(_Sender) {}
	AUTHPstType(const AUTHPstType &_x){
		State = _x.State;
		StartTime = _x.StartTime;
		EndTime = _x.EndTime;
		Sender = _x.Sender;
	}
	AUTHPstType(AUTHPstType &&_x){
		State = std::move(_x.State);
		StartTime = std::move(_x.StartTime);
		EndTime = std::move(_x.EndTime);
		Sender = std::move(_x.Sender);
	}
	AUTHPstType& operator=(const AUTHPstType &_x){
		State = _x.State;
		StartTime = _x.StartTime;
		EndTime = _x.EndTime;
		Sender = _x.Sender;
		return *this;
	}
	AUTHPstType& operator=(AUTHPstType &&_x){
		State = std::move(_x.State);
		StartTime = std::move(_x.StartTime);
		EndTime = std::move(_x.EndTime);
		Sender = std::move(_x.Sender);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(State);
		fun(StartTime);
		fun(EndTime);
		fun(Sender);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(State);
		fun(StartTime);
		fun(EndTime);
		fun(Sender);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (State);
		fun << (StartTime);
		fun << (EndTime);
		fun << (Sender);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (State);
		fun >> (StartTime);
		fun >> (EndTime);
		fun >> (Sender);
	}
};

#endif //____AUTHPSTTYPE_H__
