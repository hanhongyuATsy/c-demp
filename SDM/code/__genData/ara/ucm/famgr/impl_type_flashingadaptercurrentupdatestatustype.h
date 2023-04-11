#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATESTATUSTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATESTATUSTYPE_H__


#include "impl_type_string.h"
#include "ara/ucm/famgr/impl_type_flashingadaptercurrentupdateecudidsvectortype.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FlashingAdapterCurrentUpdateStatusType {
public:
	String ecuReqId;
	String ecuSwDid;
	ara::ucm::famgr::FlashingAdapterCurrentUpdateEcuDidsVectorType ecuDids;
	String ecuState;
	String ecuReason;
	std::uint64_t beginTime;
	std::uint64_t endTime;
/*
	FlashingAdapterCurrentUpdateStatusType() {}
	~FlashingAdapterCurrentUpdateStatusType() {}
	FlashingAdapterCurrentUpdateStatusType(const String _ecuReqId,const String _ecuSwDid,const ara::ucm::famgr::FlashingAdapterCurrentUpdateEcuDidsVectorType _ecuDids,const String _ecuState,const String _ecuReason,const std::uint64_t _beginTime,const std::uint64_t _endTime):ecuReqId(_ecuReqId),ecuSwDid(_ecuSwDid),ecuDids(_ecuDids),ecuState(_ecuState),ecuReason(_ecuReason),beginTime(_beginTime),endTime(_endTime) {}
	FlashingAdapterCurrentUpdateStatusType(const FlashingAdapterCurrentUpdateStatusType &_x){
		ecuReqId = _x.ecuReqId;
		ecuSwDid = _x.ecuSwDid;
		ecuDids = _x.ecuDids;
		ecuState = _x.ecuState;
		ecuReason = _x.ecuReason;
		beginTime = _x.beginTime;
		endTime = _x.endTime;
	}
	FlashingAdapterCurrentUpdateStatusType(FlashingAdapterCurrentUpdateStatusType &&_x){
		ecuReqId = std::move(_x.ecuReqId);
		ecuSwDid = std::move(_x.ecuSwDid);
		ecuDids = std::move(_x.ecuDids);
		ecuState = std::move(_x.ecuState);
		ecuReason = std::move(_x.ecuReason);
		beginTime = std::move(_x.beginTime);
		endTime = std::move(_x.endTime);
	}
	FlashingAdapterCurrentUpdateStatusType& operator=(const FlashingAdapterCurrentUpdateStatusType &_x){
		ecuReqId = _x.ecuReqId;
		ecuSwDid = _x.ecuSwDid;
		ecuDids = _x.ecuDids;
		ecuState = _x.ecuState;
		ecuReason = _x.ecuReason;
		beginTime = _x.beginTime;
		endTime = _x.endTime;
		return *this;
	}
	FlashingAdapterCurrentUpdateStatusType& operator=(FlashingAdapterCurrentUpdateStatusType &&_x){
		ecuReqId = std::move(_x.ecuReqId);
		ecuSwDid = std::move(_x.ecuSwDid);
		ecuDids = std::move(_x.ecuDids);
		ecuState = std::move(_x.ecuState);
		ecuReason = std::move(_x.ecuReason);
		beginTime = std::move(_x.beginTime);
		endTime = std::move(_x.endTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ecuReqId);
		fun(ecuSwDid);
		fun(ecuDids);
		fun(ecuState);
		fun(ecuReason);
		fun(beginTime);
		fun(endTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ecuReqId);
		fun(ecuSwDid);
		fun(ecuDids);
		fun(ecuState);
		fun(ecuReason);
		fun(beginTime);
		fun(endTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ecuReqId);
		fun << (ecuSwDid);
		fun << (ecuDids);
		fun << (ecuState);
		fun << (ecuReason);
		fun << (beginTime);
		fun << (endTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ecuReqId);
		fun >> (ecuSwDid);
		fun >> (ecuDids);
		fun >> (ecuState);
		fun >> (ecuReason);
		fun >> (beginTime);
		fun >> (endTime);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATESTATUSTYPE_H__
