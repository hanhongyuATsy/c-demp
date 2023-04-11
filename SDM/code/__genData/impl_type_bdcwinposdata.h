#ifndef ____BDCWINPOSDATA_H__
#define ____BDCWINPOSDATA_H__


#include "cstdint"






struct BDCWinPosData {
public:
	std::uint8_t PWL_WinCurrentPos_FLWinPst;
	std::uint8_t PWL_WinCurrentPos_FRWinPst;
	std::uint8_t PWL_WinCurrentPos_RLWinPst;
	std::uint8_t PWL_WinCurrentPos_RRWinPst;
/*
	BDCWinPosData() {}
	~BDCWinPosData() {}
	BDCWinPosData(const std::uint8_t _PWL_WinCurrentPos_FLWinPst,const std::uint8_t _PWL_WinCurrentPos_FRWinPst,const std::uint8_t _PWL_WinCurrentPos_RLWinPst,const std::uint8_t _PWL_WinCurrentPos_RRWinPst):PWL_WinCurrentPos_FLWinPst(_PWL_WinCurrentPos_FLWinPst),PWL_WinCurrentPos_FRWinPst(_PWL_WinCurrentPos_FRWinPst),PWL_WinCurrentPos_RLWinPst(_PWL_WinCurrentPos_RLWinPst),PWL_WinCurrentPos_RRWinPst(_PWL_WinCurrentPos_RRWinPst) {}
	BDCWinPosData(const BDCWinPosData &_x){
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
	}
	BDCWinPosData(BDCWinPosData &&_x){
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
	}
	BDCWinPosData& operator=(const BDCWinPosData &_x){
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
		return *this;
	}
	BDCWinPosData& operator=(BDCWinPosData &&_x){
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (PWL_WinCurrentPos_FLWinPst);
		fun << (PWL_WinCurrentPos_FRWinPst);
		fun << (PWL_WinCurrentPos_RLWinPst);
		fun << (PWL_WinCurrentPos_RRWinPst);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (PWL_WinCurrentPos_FLWinPst);
		fun >> (PWL_WinCurrentPos_FRWinPst);
		fun >> (PWL_WinCurrentPos_RLWinPst);
		fun >> (PWL_WinCurrentPos_RRWinPst);
	}
};

#endif //____BDCWINPOSDATA_H__
