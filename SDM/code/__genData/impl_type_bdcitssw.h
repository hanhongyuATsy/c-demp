#ifndef ____BDCITSSW_H__
#define ____BDCITSSW_H__


#include "cstdint"






struct BDCITSSw {
public:
	std::uint8_t ITS_SoftwareVersion;
/*
	BDCITSSw() {}
	~BDCITSSw() {}
	BDCITSSw(const std::uint8_t _ITS_SoftwareVersion):ITS_SoftwareVersion(_ITS_SoftwareVersion) {}
	BDCITSSw(const BDCITSSw &_x){
		ITS_SoftwareVersion = _x.ITS_SoftwareVersion;
	}
	BDCITSSw(BDCITSSw &&_x){
		ITS_SoftwareVersion = std::move(_x.ITS_SoftwareVersion);
	}
	BDCITSSw& operator=(const BDCITSSw &_x){
		ITS_SoftwareVersion = _x.ITS_SoftwareVersion;
		return *this;
	}
	BDCITSSw& operator=(BDCITSSw &&_x){
		ITS_SoftwareVersion = std::move(_x.ITS_SoftwareVersion);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ITS_SoftwareVersion);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ITS_SoftwareVersion);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ITS_SoftwareVersion);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ITS_SoftwareVersion);
	}
};

#endif //____BDCITSSW_H__
