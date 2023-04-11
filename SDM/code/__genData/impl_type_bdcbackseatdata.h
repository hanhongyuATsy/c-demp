#ifndef ____BDCBACKSEATDATA_H__
#define ____BDCBACKSEATDATA_H__


#include "cstdint"






struct BDCBackSeatData {
public:
	std::uint64_t SSW_RLSeatHeatingSt;
	std::uint64_t SSW_RRSeatHeatingSt;
/*
	BDCBackSeatData() {}
	~BDCBackSeatData() {}
	BDCBackSeatData(const std::uint64_t _SSW_RLSeatHeatingSt,const std::uint64_t _SSW_RRSeatHeatingSt):SSW_RLSeatHeatingSt(_SSW_RLSeatHeatingSt),SSW_RRSeatHeatingSt(_SSW_RRSeatHeatingSt) {}
	BDCBackSeatData(const BDCBackSeatData &_x){
		SSW_RLSeatHeatingSt = _x.SSW_RLSeatHeatingSt;
		SSW_RRSeatHeatingSt = _x.SSW_RRSeatHeatingSt;
	}
	BDCBackSeatData(BDCBackSeatData &&_x){
		SSW_RLSeatHeatingSt = std::move(_x.SSW_RLSeatHeatingSt);
		SSW_RRSeatHeatingSt = std::move(_x.SSW_RRSeatHeatingSt);
	}
	BDCBackSeatData& operator=(const BDCBackSeatData &_x){
		SSW_RLSeatHeatingSt = _x.SSW_RLSeatHeatingSt;
		SSW_RRSeatHeatingSt = _x.SSW_RRSeatHeatingSt;
		return *this;
	}
	BDCBackSeatData& operator=(BDCBackSeatData &&_x){
		SSW_RLSeatHeatingSt = std::move(_x.SSW_RLSeatHeatingSt);
		SSW_RRSeatHeatingSt = std::move(_x.SSW_RRSeatHeatingSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_RLSeatHeatingSt);
		fun(SSW_RRSeatHeatingSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_RLSeatHeatingSt);
		fun(SSW_RRSeatHeatingSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_RLSeatHeatingSt);
		fun << (SSW_RRSeatHeatingSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_RLSeatHeatingSt);
		fun >> (SSW_RRSeatHeatingSt);
	}
};

#endif //____BDCBACKSEATDATA_H__
