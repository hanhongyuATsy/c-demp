#ifndef __ARA_COM_VSOMEIP__ENPOWER_H__
#define __ARA_COM_VSOMEIP__ENPOWER_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct enpower {
public:
	std::uint16_t ecuID;
	bool active;
	std::uint16_t duration;
/*
	enpower() {}
	~enpower() {}
	enpower(const std::uint16_t _ecuID,const bool _active,const std::uint16_t _duration):ecuID(_ecuID),active(_active),duration(_duration) {}
	enpower(const enpower &_x){
		ecuID = _x.ecuID;
		active = _x.active;
		duration = _x.duration;
	}
	enpower(enpower &&_x){
		ecuID = std::move(_x.ecuID);
		active = std::move(_x.active);
		duration = std::move(_x.duration);
	}
	enpower& operator=(const enpower &_x){
		ecuID = _x.ecuID;
		active = _x.active;
		duration = _x.duration;
		return *this;
	}
	enpower& operator=(enpower &&_x){
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
#endif //__ARA_COM_VSOMEIP__ENPOWER_H__
