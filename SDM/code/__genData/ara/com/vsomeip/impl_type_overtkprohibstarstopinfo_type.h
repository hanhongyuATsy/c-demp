#ifndef __ARA_COM_VSOMEIP__OVERTKPROHIBSTARSTOPINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__OVERTKPROHIBSTARSTOPINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct OverTkProHibStarStopInfo_Type {
public:
	std::uint16_t EHR_OverTkProHibDis;
	std::uint16_t EHR_OverTkProHibEndDis;
/*
	OverTkProHibStarStopInfo_Type() {}
	~OverTkProHibStarStopInfo_Type() {}
	OverTkProHibStarStopInfo_Type(const std::uint16_t _EHR_OverTkProHibDis,const std::uint16_t _EHR_OverTkProHibEndDis):EHR_OverTkProHibDis(_EHR_OverTkProHibDis),EHR_OverTkProHibEndDis(_EHR_OverTkProHibEndDis) {}
	OverTkProHibStarStopInfo_Type(const OverTkProHibStarStopInfo_Type &_x){
		EHR_OverTkProHibDis = _x.EHR_OverTkProHibDis;
		EHR_OverTkProHibEndDis = _x.EHR_OverTkProHibEndDis;
	}
	OverTkProHibStarStopInfo_Type(OverTkProHibStarStopInfo_Type &&_x){
		EHR_OverTkProHibDis = std::move(_x.EHR_OverTkProHibDis);
		EHR_OverTkProHibEndDis = std::move(_x.EHR_OverTkProHibEndDis);
	}
	OverTkProHibStarStopInfo_Type& operator=(const OverTkProHibStarStopInfo_Type &_x){
		EHR_OverTkProHibDis = _x.EHR_OverTkProHibDis;
		EHR_OverTkProHibEndDis = _x.EHR_OverTkProHibEndDis;
		return *this;
	}
	OverTkProHibStarStopInfo_Type& operator=(OverTkProHibStarStopInfo_Type &&_x){
		EHR_OverTkProHibDis = std::move(_x.EHR_OverTkProHibDis);
		EHR_OverTkProHibEndDis = std::move(_x.EHR_OverTkProHibEndDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_OverTkProHibDis);
		fun(EHR_OverTkProHibEndDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_OverTkProHibDis);
		fun(EHR_OverTkProHibEndDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_OverTkProHibDis);
		fun << (EHR_OverTkProHibEndDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_OverTkProHibDis);
		fun >> (EHR_OverTkProHibEndDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__OVERTKPROHIBSTARSTOPINFO_TYPE_H__
