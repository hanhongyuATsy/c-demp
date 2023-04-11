#ifndef __ARA_COM_VSOMEIP__WLMOTPOSANDOPEST_H__
#define __ARA_COM_VSOMEIP__WLMOTPOSANDOPEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct WLMotPosAndOpeSt {
public:
	std::uint8_t WLMotPos;
	std::uint8_t WLMotOpeSt;
/*
	WLMotPosAndOpeSt() {}
	~WLMotPosAndOpeSt() {}
	WLMotPosAndOpeSt(const std::uint8_t _WLMotPos,const std::uint8_t _WLMotOpeSt):WLMotPos(_WLMotPos),WLMotOpeSt(_WLMotOpeSt) {}
	WLMotPosAndOpeSt(const WLMotPosAndOpeSt &_x){
		WLMotPos = _x.WLMotPos;
		WLMotOpeSt = _x.WLMotOpeSt;
	}
	WLMotPosAndOpeSt(WLMotPosAndOpeSt &&_x){
		WLMotPos = std::move(_x.WLMotPos);
		WLMotOpeSt = std::move(_x.WLMotOpeSt);
	}
	WLMotPosAndOpeSt& operator=(const WLMotPosAndOpeSt &_x){
		WLMotPos = _x.WLMotPos;
		WLMotOpeSt = _x.WLMotOpeSt;
		return *this;
	}
	WLMotPosAndOpeSt& operator=(WLMotPosAndOpeSt &&_x){
		WLMotPos = std::move(_x.WLMotPos);
		WLMotOpeSt = std::move(_x.WLMotOpeSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(WLMotPos);
		fun(WLMotOpeSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(WLMotPos);
		fun(WLMotOpeSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (WLMotPos);
		fun << (WLMotOpeSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (WLMotPos);
		fun >> (WLMotOpeSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__WLMOTPOSANDOPEST_H__
