#ifndef ____BDCEEMIL_H__
#define ____BDCEEMIL_H__


#include "cstdint"






struct BDCEEMIL {
public:
	std::uint8_t IL_IALWorkSt;
/*
	BDCEEMIL() {}
	~BDCEEMIL() {}
	BDCEEMIL(const std::uint8_t _IL_IALWorkSt):IL_IALWorkSt(_IL_IALWorkSt) {}
	BDCEEMIL(const BDCEEMIL &_x){
		IL_IALWorkSt = _x.IL_IALWorkSt;
	}
	BDCEEMIL(BDCEEMIL &&_x){
		IL_IALWorkSt = std::move(_x.IL_IALWorkSt);
	}
	BDCEEMIL& operator=(const BDCEEMIL &_x){
		IL_IALWorkSt = _x.IL_IALWorkSt;
		return *this;
	}
	BDCEEMIL& operator=(BDCEEMIL &&_x){
		IL_IALWorkSt = std::move(_x.IL_IALWorkSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IL_IALWorkSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IL_IALWorkSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IL_IALWorkSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IL_IALWorkSt);
	}
};

#endif //____BDCEEMIL_H__
