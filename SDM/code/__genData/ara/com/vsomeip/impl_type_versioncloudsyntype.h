#ifndef __ARA_COM_VSOMEIP__VERSIONCLOUDSYNTYPE_H__
#define __ARA_COM_VSOMEIP__VERSIONCLOUDSYNTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VersionCloudSynType {
public:
	std::uint8_t UpLoadTransferSts;
/*
	VersionCloudSynType() {}
	~VersionCloudSynType() {}
	VersionCloudSynType(const std::uint8_t _UpLoadTransferSts):UpLoadTransferSts(_UpLoadTransferSts) {}
	VersionCloudSynType(const VersionCloudSynType &_x){
		UpLoadTransferSts = _x.UpLoadTransferSts;
	}
	VersionCloudSynType(VersionCloudSynType &&_x){
		UpLoadTransferSts = std::move(_x.UpLoadTransferSts);
	}
	VersionCloudSynType& operator=(const VersionCloudSynType &_x){
		UpLoadTransferSts = _x.UpLoadTransferSts;
		return *this;
	}
	VersionCloudSynType& operator=(VersionCloudSynType &&_x){
		UpLoadTransferSts = std::move(_x.UpLoadTransferSts);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UpLoadTransferSts);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UpLoadTransferSts);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UpLoadTransferSts);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UpLoadTransferSts);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VERSIONCLOUDSYNTYPE_H__
