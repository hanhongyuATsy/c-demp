#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEPROCESSTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEPROCESSTYPE_H__


#include "impl_type_string.h"
#include "ara/ucm/famgr/impl_type_flashingadaptercurrentupdateecudidsvectortype.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FlashingAdapterCurrentUpdateProcessType {
public:
	String progressType;
	String ecuReqId;
	String ecuSwDid;
	ara::ucm::famgr::FlashingAdapterCurrentUpdateEcuDidsVectorType ecuDids;
	std::uint8_t progress;
/*
	FlashingAdapterCurrentUpdateProcessType() {}
	~FlashingAdapterCurrentUpdateProcessType() {}
	FlashingAdapterCurrentUpdateProcessType(const String _progressType,const String _ecuReqId,const String _ecuSwDid,const ara::ucm::famgr::FlashingAdapterCurrentUpdateEcuDidsVectorType _ecuDids,const std::uint8_t _progress):progressType(_progressType),ecuReqId(_ecuReqId),ecuSwDid(_ecuSwDid),ecuDids(_ecuDids),progress(_progress) {}
	FlashingAdapterCurrentUpdateProcessType(const FlashingAdapterCurrentUpdateProcessType &_x){
		progressType = _x.progressType;
		ecuReqId = _x.ecuReqId;
		ecuSwDid = _x.ecuSwDid;
		ecuDids = _x.ecuDids;
		progress = _x.progress;
	}
	FlashingAdapterCurrentUpdateProcessType(FlashingAdapterCurrentUpdateProcessType &&_x){
		progressType = std::move(_x.progressType);
		ecuReqId = std::move(_x.ecuReqId);
		ecuSwDid = std::move(_x.ecuSwDid);
		ecuDids = std::move(_x.ecuDids);
		progress = std::move(_x.progress);
	}
	FlashingAdapterCurrentUpdateProcessType& operator=(const FlashingAdapterCurrentUpdateProcessType &_x){
		progressType = _x.progressType;
		ecuReqId = _x.ecuReqId;
		ecuSwDid = _x.ecuSwDid;
		ecuDids = _x.ecuDids;
		progress = _x.progress;
		return *this;
	}
	FlashingAdapterCurrentUpdateProcessType& operator=(FlashingAdapterCurrentUpdateProcessType &&_x){
		progressType = std::move(_x.progressType);
		ecuReqId = std::move(_x.ecuReqId);
		ecuSwDid = std::move(_x.ecuSwDid);
		ecuDids = std::move(_x.ecuDids);
		progress = std::move(_x.progress);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(progressType);
		fun(ecuReqId);
		fun(ecuSwDid);
		fun(ecuDids);
		fun(progress);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(progressType);
		fun(ecuReqId);
		fun(ecuSwDid);
		fun(ecuDids);
		fun(progress);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (progressType);
		fun << (ecuReqId);
		fun << (ecuSwDid);
		fun << (ecuDids);
		fun << (progress);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (progressType);
		fun >> (ecuReqId);
		fun >> (ecuSwDid);
		fun >> (ecuDids);
		fun >> (progress);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEPROCESSTYPE_H__
