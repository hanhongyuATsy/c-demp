#ifndef ____STRUCT_SIGNALINFO_H__
#define ____STRUCT_SIGNALINFO_H__


#include "cstdint"






struct Struct_SignalInfo {
public:
	std::uint64_t uValue;
	float fResolution;
	float fOffset;
/*
	Struct_SignalInfo() {}
	~Struct_SignalInfo() {}
	Struct_SignalInfo(const std::uint64_t _uValue,const float _fResolution,const float _fOffset):uValue(_uValue),fResolution(_fResolution),fOffset(_fOffset) {}
	Struct_SignalInfo(const Struct_SignalInfo &_x){
		uValue = _x.uValue;
		fResolution = _x.fResolution;
		fOffset = _x.fOffset;
	}
	Struct_SignalInfo(Struct_SignalInfo &&_x){
		uValue = std::move(_x.uValue);
		fResolution = std::move(_x.fResolution);
		fOffset = std::move(_x.fOffset);
	}
	Struct_SignalInfo& operator=(const Struct_SignalInfo &_x){
		uValue = _x.uValue;
		fResolution = _x.fResolution;
		fOffset = _x.fOffset;
		return *this;
	}
	Struct_SignalInfo& operator=(Struct_SignalInfo &&_x){
		uValue = std::move(_x.uValue);
		fResolution = std::move(_x.fResolution);
		fOffset = std::move(_x.fOffset);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(uValue);
		fun(fResolution);
		fun(fOffset);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(uValue);
		fun(fResolution);
		fun(fOffset);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (uValue);
		fun << (fResolution);
		fun << (fOffset);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (uValue);
		fun >> (fResolution);
		fun >> (fOffset);
	}
};

#endif //____STRUCT_SIGNALINFO_H__
