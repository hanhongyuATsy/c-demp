#ifndef ____BDCVCUDATA7_H__
#define ____BDCVCUDATA7_H__


#include "cstdint"






struct BDCVCUDATA7 {
public:
	std::uint8_t VCU_ads_bAccActive;
	std::uint64_t VCU_stEngReqRef;
/*
	BDCVCUDATA7() {}
	~BDCVCUDATA7() {}
	BDCVCUDATA7(const std::uint8_t _VCU_ads_bAccActive,const std::uint64_t _VCU_stEngReqRef):VCU_ads_bAccActive(_VCU_ads_bAccActive),VCU_stEngReqRef(_VCU_stEngReqRef) {}
	BDCVCUDATA7(const BDCVCUDATA7 &_x){
		VCU_ads_bAccActive = _x.VCU_ads_bAccActive;
		VCU_stEngReqRef = _x.VCU_stEngReqRef;
	}
	BDCVCUDATA7(BDCVCUDATA7 &&_x){
		VCU_ads_bAccActive = std::move(_x.VCU_ads_bAccActive);
		VCU_stEngReqRef = std::move(_x.VCU_stEngReqRef);
	}
	BDCVCUDATA7& operator=(const BDCVCUDATA7 &_x){
		VCU_ads_bAccActive = _x.VCU_ads_bAccActive;
		VCU_stEngReqRef = _x.VCU_stEngReqRef;
		return *this;
	}
	BDCVCUDATA7& operator=(BDCVCUDATA7 &&_x){
		VCU_ads_bAccActive = std::move(_x.VCU_ads_bAccActive);
		VCU_stEngReqRef = std::move(_x.VCU_stEngReqRef);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_ads_bAccActive);
		fun(VCU_stEngReqRef);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_ads_bAccActive);
		fun(VCU_stEngReqRef);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_ads_bAccActive);
		fun << (VCU_stEngReqRef);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_ads_bAccActive);
		fun >> (VCU_stEngReqRef);
	}
};

#endif //____BDCVCUDATA7_H__
