#ifndef ____BDCVCURNG_H__
#define ____BDCVCURNG_H__


#include "cstdint"






struct BDCVCURng {
public:
	std::uint16_t VCU_RngwghdVAL;
/*
	BDCVCURng() {}
	~BDCVCURng() {}
	BDCVCURng(const std::uint16_t _VCU_RngwghdVAL):VCU_RngwghdVAL(_VCU_RngwghdVAL) {}
	BDCVCURng(const BDCVCURng &_x){
		VCU_RngwghdVAL = _x.VCU_RngwghdVAL;
	}
	BDCVCURng(BDCVCURng &&_x){
		VCU_RngwghdVAL = std::move(_x.VCU_RngwghdVAL);
	}
	BDCVCURng& operator=(const BDCVCURng &_x){
		VCU_RngwghdVAL = _x.VCU_RngwghdVAL;
		return *this;
	}
	BDCVCURng& operator=(BDCVCURng &&_x){
		VCU_RngwghdVAL = std::move(_x.VCU_RngwghdVAL);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_RngwghdVAL);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_RngwghdVAL);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_RngwghdVAL);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_RngwghdVAL);
	}
};

#endif //____BDCVCURNG_H__
