#ifndef ____STEERPOSSTS_H__
#define ____STEERPOSSTS_H__


#include "cstdint"






struct SteerPosSts {
public:
	std::uint8_t SteerAngle;
	std::uint8_t SteerExtent;
/*
	SteerPosSts() {}
	~SteerPosSts() {}
	SteerPosSts(const std::uint8_t _SteerAngle,const std::uint8_t _SteerExtent):SteerAngle(_SteerAngle),SteerExtent(_SteerExtent) {}
	SteerPosSts(const SteerPosSts &_x){
		SteerAngle = _x.SteerAngle;
		SteerExtent = _x.SteerExtent;
	}
	SteerPosSts(SteerPosSts &&_x){
		SteerAngle = std::move(_x.SteerAngle);
		SteerExtent = std::move(_x.SteerExtent);
	}
	SteerPosSts& operator=(const SteerPosSts &_x){
		SteerAngle = _x.SteerAngle;
		SteerExtent = _x.SteerExtent;
		return *this;
	}
	SteerPosSts& operator=(SteerPosSts &&_x){
		SteerAngle = std::move(_x.SteerAngle);
		SteerExtent = std::move(_x.SteerExtent);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SteerAngle);
		fun(SteerExtent);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SteerAngle);
		fun(SteerExtent);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SteerAngle);
		fun << (SteerExtent);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SteerAngle);
		fun >> (SteerExtent);
	}
};

#endif //____STEERPOSSTS_H__
