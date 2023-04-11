#ifndef ____BDCPHEVMODE_H__
#define ____BDCPHEVMODE_H__


#include "cstdint"






struct BDCPHEVmode {
public:
	std::uint8_t UMM_CrankReq;
/*
	BDCPHEVmode() {}
	~BDCPHEVmode() {}
	BDCPHEVmode(const std::uint8_t _UMM_CrankReq):UMM_CrankReq(_UMM_CrankReq) {}
	BDCPHEVmode(const BDCPHEVmode &_x){
		UMM_CrankReq = _x.UMM_CrankReq;
	}
	BDCPHEVmode(BDCPHEVmode &&_x){
		UMM_CrankReq = std::move(_x.UMM_CrankReq);
	}
	BDCPHEVmode& operator=(const BDCPHEVmode &_x){
		UMM_CrankReq = _x.UMM_CrankReq;
		return *this;
	}
	BDCPHEVmode& operator=(BDCPHEVmode &&_x){
		UMM_CrankReq = std::move(_x.UMM_CrankReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UMM_CrankReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UMM_CrankReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UMM_CrankReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UMM_CrankReq);
	}
};

#endif //____BDCPHEVMODE_H__
