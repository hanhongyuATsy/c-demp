#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATETYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATETYPE_H__


#include "impl_type_string.h"
#include "ara/ucm/famgr/impl_type_flashingadaptertransferstatedeftype.h"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FlashingAdapterTransferStateType {
public:
	String packageName;
	ara::ucm::famgr::FlashingAdapterTransferStateDefType transferState;
/*
	FlashingAdapterTransferStateType() {}
	~FlashingAdapterTransferStateType() {}
	FlashingAdapterTransferStateType(const String _packageName,const ara::ucm::famgr::FlashingAdapterTransferStateDefType _transferState):packageName(_packageName),transferState(_transferState) {}
	FlashingAdapterTransferStateType(const FlashingAdapterTransferStateType &_x){
		packageName = _x.packageName;
		transferState = _x.transferState;
	}
	FlashingAdapterTransferStateType(FlashingAdapterTransferStateType &&_x){
		packageName = std::move(_x.packageName);
		transferState = std::move(_x.transferState);
	}
	FlashingAdapterTransferStateType& operator=(const FlashingAdapterTransferStateType &_x){
		packageName = _x.packageName;
		transferState = _x.transferState;
		return *this;
	}
	FlashingAdapterTransferStateType& operator=(FlashingAdapterTransferStateType &&_x){
		packageName = std::move(_x.packageName);
		transferState = std::move(_x.transferState);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(packageName);
		fun(transferState);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(packageName);
		fun(transferState);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (packageName);
		fun << (transferState);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (packageName);
		fun >> (transferState);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERTRANSFERSTATETYPE_H__
