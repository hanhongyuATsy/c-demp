#ifndef __ARA_UCM_PKGMGR__SWPACKAGEINFOTYPE_H__
#define __ARA_UCM_PKGMGR__SWPACKAGEINFOTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_swnametype.h"
#include "ara/ucm/pkgmgr/impl_type_strongrevisionlabelstring.h"
#include "ara/ucm/pkgmgr/impl_type_transferidtype.h"
#include "cstdint"
#include "ara/ucm/pkgmgr/impl_type_swpackagestatetype.h"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct SwPackageInfoType {
public:
	ara::ucm::pkgmgr::SwNameType Name;
	ara::ucm::pkgmgr::StrongRevisionLabelString Version;
	ara::ucm::pkgmgr::TransferIdType TransferID;
	std::uint64_t ConsecutiveBytesReceived;
	std::uint64_t ConsecutiveBlocksReceived;
	ara::ucm::pkgmgr::SwPackageStateType State;
/*
	SwPackageInfoType() {}
	~SwPackageInfoType() {}
	SwPackageInfoType(const ara::ucm::pkgmgr::SwNameType _Name,const ara::ucm::pkgmgr::StrongRevisionLabelString _Version,const ara::ucm::pkgmgr::TransferIdType _TransferID,const std::uint64_t _ConsecutiveBytesReceived,const std::uint64_t _ConsecutiveBlocksReceived,const ara::ucm::pkgmgr::SwPackageStateType _State):Name(_Name),Version(_Version),TransferID(_TransferID),ConsecutiveBytesReceived(_ConsecutiveBytesReceived),ConsecutiveBlocksReceived(_ConsecutiveBlocksReceived),State(_State) {}
	SwPackageInfoType(const SwPackageInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		TransferID = _x.TransferID;
		ConsecutiveBytesReceived = _x.ConsecutiveBytesReceived;
		ConsecutiveBlocksReceived = _x.ConsecutiveBlocksReceived;
		State = _x.State;
	}
	SwPackageInfoType(SwPackageInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		TransferID = std::move(_x.TransferID);
		ConsecutiveBytesReceived = std::move(_x.ConsecutiveBytesReceived);
		ConsecutiveBlocksReceived = std::move(_x.ConsecutiveBlocksReceived);
		State = std::move(_x.State);
	}
	SwPackageInfoType& operator=(const SwPackageInfoType &_x){
		Name = _x.Name;
		Version = _x.Version;
		TransferID = _x.TransferID;
		ConsecutiveBytesReceived = _x.ConsecutiveBytesReceived;
		ConsecutiveBlocksReceived = _x.ConsecutiveBlocksReceived;
		State = _x.State;
		return *this;
	}
	SwPackageInfoType& operator=(SwPackageInfoType &&_x){
		Name = std::move(_x.Name);
		Version = std::move(_x.Version);
		TransferID = std::move(_x.TransferID);
		ConsecutiveBytesReceived = std::move(_x.ConsecutiveBytesReceived);
		ConsecutiveBlocksReceived = std::move(_x.ConsecutiveBlocksReceived);
		State = std::move(_x.State);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Name);
		fun(Version);
		fun(TransferID);
		fun(ConsecutiveBytesReceived);
		fun(ConsecutiveBlocksReceived);
		fun(State);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Name);
		fun(Version);
		fun(TransferID);
		fun(ConsecutiveBytesReceived);
		fun(ConsecutiveBlocksReceived);
		fun(State);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Name);
		fun << (Version);
		fun << (TransferID);
		fun << (ConsecutiveBytesReceived);
		fun << (ConsecutiveBlocksReceived);
		fun << (State);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Name);
		fun >> (Version);
		fun >> (TransferID);
		fun >> (ConsecutiveBytesReceived);
		fun >> (ConsecutiveBlocksReceived);
		fun >> (State);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SWPACKAGEINFOTYPE_H__
