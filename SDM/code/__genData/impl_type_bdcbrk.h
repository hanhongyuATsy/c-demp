#ifndef ____BDCBRK_H__
#define ____BDCBRK_H__


#include "cstdint"






struct BDCBrk {
public:
	std::uint8_t VCU_EMS_BrkPedalSt;
	std::uint8_t VCU_EMS_BrkPedalStVD;
	std::uint8_t VCU_EMS_AccPedalActPstVD;
	std::uint8_t VCU_BrkPedPstVD;
	std::uint8_t VCU_BrkPedPst;
	std::uint8_t VCU_EMS_AccPedalActPst;
/*
	BDCBrk() {}
	~BDCBrk() {}
	BDCBrk(const std::uint8_t _VCU_EMS_BrkPedalSt,const std::uint8_t _VCU_EMS_BrkPedalStVD,const std::uint8_t _VCU_EMS_AccPedalActPstVD,const std::uint8_t _VCU_BrkPedPstVD,const std::uint8_t _VCU_BrkPedPst,const std::uint8_t _VCU_EMS_AccPedalActPst):VCU_EMS_BrkPedalSt(_VCU_EMS_BrkPedalSt),VCU_EMS_BrkPedalStVD(_VCU_EMS_BrkPedalStVD),VCU_EMS_AccPedalActPstVD(_VCU_EMS_AccPedalActPstVD),VCU_BrkPedPstVD(_VCU_BrkPedPstVD),VCU_BrkPedPst(_VCU_BrkPedPst),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst) {}
	BDCBrk(const BDCBrk &_x){
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_BrkPedPstVD = _x.VCU_BrkPedPstVD;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
	}
	BDCBrk(BDCBrk &&_x){
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_BrkPedPstVD = std::move(_x.VCU_BrkPedPstVD);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
	}
	BDCBrk& operator=(const BDCBrk &_x){
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_BrkPedPstVD = _x.VCU_BrkPedPstVD;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		return *this;
	}
	BDCBrk& operator=(BDCBrk &&_x){
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_BrkPedPstVD = std::move(_x.VCU_BrkPedPstVD);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_BrkPedPstVD);
		fun(VCU_BrkPedPst);
		fun(VCU_EMS_AccPedalActPst);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_BrkPedPstVD);
		fun(VCU_BrkPedPst);
		fun(VCU_EMS_AccPedalActPst);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_EMS_BrkPedalSt);
		fun << (VCU_EMS_BrkPedalStVD);
		fun << (VCU_EMS_AccPedalActPstVD);
		fun << (VCU_BrkPedPstVD);
		fun << (VCU_BrkPedPst);
		fun << (VCU_EMS_AccPedalActPst);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_EMS_BrkPedalSt);
		fun >> (VCU_EMS_BrkPedalStVD);
		fun >> (VCU_EMS_AccPedalActPstVD);
		fun >> (VCU_BrkPedPstVD);
		fun >> (VCU_BrkPedPst);
		fun >> (VCU_EMS_AccPedalActPst);
	}
};

#endif //____BDCBRK_H__
