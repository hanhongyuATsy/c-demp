#ifndef ____BDCPLGUNIM_H__
#define ____BDCPLGUNIM_H__


#include "cstdint"






struct BDCPLGUNIM {
public:
	std::uint8_t UINM_PLGSWSt;
	std::uint8_t UINM_InterTrunkSwSt;
	std::uint8_t UINM_TrunkSWSt;
	std::uint8_t UINM_KicksensorSt;
	std::uint8_t KAE_RKETrunkReq;
	std::uint8_t KAE_SATOReq;
	std::uint8_t KAE_PassiveTrunkUnlockReq;
/*
	BDCPLGUNIM() {}
	~BDCPLGUNIM() {}
	BDCPLGUNIM(const std::uint8_t _UINM_PLGSWSt,const std::uint8_t _UINM_InterTrunkSwSt,const std::uint8_t _UINM_TrunkSWSt,const std::uint8_t _UINM_KicksensorSt,const std::uint8_t _KAE_RKETrunkReq,const std::uint8_t _KAE_SATOReq,const std::uint8_t _KAE_PassiveTrunkUnlockReq):UINM_PLGSWSt(_UINM_PLGSWSt),UINM_InterTrunkSwSt(_UINM_InterTrunkSwSt),UINM_TrunkSWSt(_UINM_TrunkSWSt),UINM_KicksensorSt(_UINM_KicksensorSt),KAE_RKETrunkReq(_KAE_RKETrunkReq),KAE_SATOReq(_KAE_SATOReq),KAE_PassiveTrunkUnlockReq(_KAE_PassiveTrunkUnlockReq) {}
	BDCPLGUNIM(const BDCPLGUNIM &_x){
		UINM_PLGSWSt = _x.UINM_PLGSWSt;
		UINM_InterTrunkSwSt = _x.UINM_InterTrunkSwSt;
		UINM_TrunkSWSt = _x.UINM_TrunkSWSt;
		UINM_KicksensorSt = _x.UINM_KicksensorSt;
		KAE_RKETrunkReq = _x.KAE_RKETrunkReq;
		KAE_SATOReq = _x.KAE_SATOReq;
		KAE_PassiveTrunkUnlockReq = _x.KAE_PassiveTrunkUnlockReq;
	}
	BDCPLGUNIM(BDCPLGUNIM &&_x){
		UINM_PLGSWSt = std::move(_x.UINM_PLGSWSt);
		UINM_InterTrunkSwSt = std::move(_x.UINM_InterTrunkSwSt);
		UINM_TrunkSWSt = std::move(_x.UINM_TrunkSWSt);
		UINM_KicksensorSt = std::move(_x.UINM_KicksensorSt);
		KAE_RKETrunkReq = std::move(_x.KAE_RKETrunkReq);
		KAE_SATOReq = std::move(_x.KAE_SATOReq);
		KAE_PassiveTrunkUnlockReq = std::move(_x.KAE_PassiveTrunkUnlockReq);
	}
	BDCPLGUNIM& operator=(const BDCPLGUNIM &_x){
		UINM_PLGSWSt = _x.UINM_PLGSWSt;
		UINM_InterTrunkSwSt = _x.UINM_InterTrunkSwSt;
		UINM_TrunkSWSt = _x.UINM_TrunkSWSt;
		UINM_KicksensorSt = _x.UINM_KicksensorSt;
		KAE_RKETrunkReq = _x.KAE_RKETrunkReq;
		KAE_SATOReq = _x.KAE_SATOReq;
		KAE_PassiveTrunkUnlockReq = _x.KAE_PassiveTrunkUnlockReq;
		return *this;
	}
	BDCPLGUNIM& operator=(BDCPLGUNIM &&_x){
		UINM_PLGSWSt = std::move(_x.UINM_PLGSWSt);
		UINM_InterTrunkSwSt = std::move(_x.UINM_InterTrunkSwSt);
		UINM_TrunkSWSt = std::move(_x.UINM_TrunkSWSt);
		UINM_KicksensorSt = std::move(_x.UINM_KicksensorSt);
		KAE_RKETrunkReq = std::move(_x.KAE_RKETrunkReq);
		KAE_SATOReq = std::move(_x.KAE_SATOReq);
		KAE_PassiveTrunkUnlockReq = std::move(_x.KAE_PassiveTrunkUnlockReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_PLGSWSt);
		fun(UINM_InterTrunkSwSt);
		fun(UINM_TrunkSWSt);
		fun(UINM_KicksensorSt);
		fun(KAE_RKETrunkReq);
		fun(KAE_SATOReq);
		fun(KAE_PassiveTrunkUnlockReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_PLGSWSt);
		fun(UINM_InterTrunkSwSt);
		fun(UINM_TrunkSWSt);
		fun(UINM_KicksensorSt);
		fun(KAE_RKETrunkReq);
		fun(KAE_SATOReq);
		fun(KAE_PassiveTrunkUnlockReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_PLGSWSt);
		fun << (UINM_InterTrunkSwSt);
		fun << (UINM_TrunkSWSt);
		fun << (UINM_KicksensorSt);
		fun << (KAE_RKETrunkReq);
		fun << (KAE_SATOReq);
		fun << (KAE_PassiveTrunkUnlockReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_PLGSWSt);
		fun >> (UINM_InterTrunkSwSt);
		fun >> (UINM_TrunkSWSt);
		fun >> (UINM_KicksensorSt);
		fun >> (KAE_RKETrunkReq);
		fun >> (KAE_SATOReq);
		fun >> (KAE_PassiveTrunkUnlockReq);
	}
};

#endif //____BDCPLGUNIM_H__
