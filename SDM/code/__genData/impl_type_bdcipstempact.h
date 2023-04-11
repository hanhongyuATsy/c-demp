#ifndef ____BDCIPSTEMPACT_H__
#define ____BDCIPSTEMPACT_H__


#include "cstdint"






struct BDCIPSTempAct {
public:
	std::uint8_t IPS_TempAct;
/*
	BDCIPSTempAct() {}
	~BDCIPSTempAct() {}
	BDCIPSTempAct(const std::uint8_t _IPS_TempAct):IPS_TempAct(_IPS_TempAct) {}
	BDCIPSTempAct(const BDCIPSTempAct &_x){
		IPS_TempAct = _x.IPS_TempAct;
	}
	BDCIPSTempAct(BDCIPSTempAct &&_x){
		IPS_TempAct = std::move(_x.IPS_TempAct);
	}
	BDCIPSTempAct& operator=(const BDCIPSTempAct &_x){
		IPS_TempAct = _x.IPS_TempAct;
		return *this;
	}
	BDCIPSTempAct& operator=(BDCIPSTempAct &&_x){
		IPS_TempAct = std::move(_x.IPS_TempAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_TempAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_TempAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_TempAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_TempAct);
	}
};

#endif //____BDCIPSTEMPACT_H__
