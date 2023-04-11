#ifndef __ARA_COM_VSOMEIP__ENPOWER_T_H__
#define __ARA_COM_VSOMEIP__ENPOWER_T_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct enpower_t {
public:
	std::uint16_t ecuID;
	bool active;
	std::uint16_t duration;
/*
	enpower_t() {}
	~enpower_t() {}
	enpower_t(const std::uint16_t _ecuID,const bool _active,const std::uint16_t _duration):ecuID(_ecuID),active(_active),duration(_duration) {}
	enpower_t(const enpower_t &_x){
		ecuID = _x.ecuID;
		active = _x.active;
		duration = _x.duration;
	}
	enpower_t(enpower_t &&_x){
		ecuID = std::move(_x.ecuID);
		active = std::move(_x.active);
		duration = std::move(_x.duration);
	}
	enpower_t& operator=(const enpower_t &_x){
		ecuID = _x.ecuID;
		active = _x.active;
		duration = _x.duration;
		return *this;
	}
	enpower_t& operator=(enpower_t &&_x){
		ecuID = std::move(_x.ecuID);
		active = std::move(_x.active);
		duration = std::move(_x.duration);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ecuID);
		fun(active);
		fun(duration);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ecuID);
		fun(active);
		fun(duration);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ecuID);
		fun << (active);
		fun << (duration);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ecuID);
		fun >> (active);
		fun >> (duration);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ENPOWER_T_H__
