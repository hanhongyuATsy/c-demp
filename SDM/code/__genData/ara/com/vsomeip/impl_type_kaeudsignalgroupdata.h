#ifndef __ARA_COM_VSOMEIP__KAEUDSIGNALGROUPDATA_H__
#define __ARA_COM_VSOMEIP__KAEUDSIGNALGROUPDATA_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct KAEUDSignalGroupData {
public:
	std::uint8_t KAE_PKEKeyType;
	std::uint8_t KAE_PKSKeyType;
	std::uint8_t KAE_PollingKeyType;
	std::uint8_t KAE_RKEKeyType;
/*
	KAEUDSignalGroupData() {}
	~KAEUDSignalGroupData() {}
	KAEUDSignalGroupData(const std::uint8_t _KAE_PKEKeyType,const std::uint8_t _KAE_PKSKeyType,const std::uint8_t _KAE_PollingKeyType,const std::uint8_t _KAE_RKEKeyType):KAE_PKEKeyType(_KAE_PKEKeyType),KAE_PKSKeyType(_KAE_PKSKeyType),KAE_PollingKeyType(_KAE_PollingKeyType),KAE_RKEKeyType(_KAE_RKEKeyType) {}
	KAEUDSignalGroupData(const KAEUDSignalGroupData &_x){
		KAE_PKEKeyType = _x.KAE_PKEKeyType;
		KAE_PKSKeyType = _x.KAE_PKSKeyType;
		KAE_PollingKeyType = _x.KAE_PollingKeyType;
		KAE_RKEKeyType = _x.KAE_RKEKeyType;
	}
	KAEUDSignalGroupData(KAEUDSignalGroupData &&_x){
		KAE_PKEKeyType = std::move(_x.KAE_PKEKeyType);
		KAE_PKSKeyType = std::move(_x.KAE_PKSKeyType);
		KAE_PollingKeyType = std::move(_x.KAE_PollingKeyType);
		KAE_RKEKeyType = std::move(_x.KAE_RKEKeyType);
	}
	KAEUDSignalGroupData& operator=(const KAEUDSignalGroupData &_x){
		KAE_PKEKeyType = _x.KAE_PKEKeyType;
		KAE_PKSKeyType = _x.KAE_PKSKeyType;
		KAE_PollingKeyType = _x.KAE_PollingKeyType;
		KAE_RKEKeyType = _x.KAE_RKEKeyType;
		return *this;
	}
	KAEUDSignalGroupData& operator=(KAEUDSignalGroupData &&_x){
		KAE_PKEKeyType = std::move(_x.KAE_PKEKeyType);
		KAE_PKSKeyType = std::move(_x.KAE_PKSKeyType);
		KAE_PollingKeyType = std::move(_x.KAE_PollingKeyType);
		KAE_RKEKeyType = std::move(_x.KAE_RKEKeyType);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(KAE_PKEKeyType);
		fun(KAE_PKSKeyType);
		fun(KAE_PollingKeyType);
		fun(KAE_RKEKeyType);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(KAE_PKEKeyType);
		fun(KAE_PKSKeyType);
		fun(KAE_PollingKeyType);
		fun(KAE_RKEKeyType);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (KAE_PKEKeyType);
		fun << (KAE_PKSKeyType);
		fun << (KAE_PollingKeyType);
		fun << (KAE_RKEKeyType);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (KAE_PKEKeyType);
		fun >> (KAE_PKSKeyType);
		fun >> (KAE_PollingKeyType);
		fun >> (KAE_RKEKeyType);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__KAEUDSIGNALGROUPDATA_H__
