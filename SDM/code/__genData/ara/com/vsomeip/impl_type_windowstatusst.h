#ifndef __ARA_COM_VSOMEIP__WINDOWSTATUSST_H__
#define __ARA_COM_VSOMEIP__WINDOWSTATUSST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct WindowStatusSt {
public:
	std::uint8_t FLWLMotPos;
	std::uint8_t FRWLMotPos;
	std::uint8_t RLWLMotPos;
	std::uint8_t RRWLMotPos;
/*
	WindowStatusSt() {}
	~WindowStatusSt() {}
	WindowStatusSt(const std::uint8_t _FLWLMotPos,const std::uint8_t _FRWLMotPos,const std::uint8_t _RLWLMotPos,const std::uint8_t _RRWLMotPos):FLWLMotPos(_FLWLMotPos),FRWLMotPos(_FRWLMotPos),RLWLMotPos(_RLWLMotPos),RRWLMotPos(_RRWLMotPos) {}
	WindowStatusSt(const WindowStatusSt &_x){
		FLWLMotPos = _x.FLWLMotPos;
		FRWLMotPos = _x.FRWLMotPos;
		RLWLMotPos = _x.RLWLMotPos;
		RRWLMotPos = _x.RRWLMotPos;
	}
	WindowStatusSt(WindowStatusSt &&_x){
		FLWLMotPos = std::move(_x.FLWLMotPos);
		FRWLMotPos = std::move(_x.FRWLMotPos);
		RLWLMotPos = std::move(_x.RLWLMotPos);
		RRWLMotPos = std::move(_x.RRWLMotPos);
	}
	WindowStatusSt& operator=(const WindowStatusSt &_x){
		FLWLMotPos = _x.FLWLMotPos;
		FRWLMotPos = _x.FRWLMotPos;
		RLWLMotPos = _x.RLWLMotPos;
		RRWLMotPos = _x.RRWLMotPos;
		return *this;
	}
	WindowStatusSt& operator=(WindowStatusSt &&_x){
		FLWLMotPos = std::move(_x.FLWLMotPos);
		FRWLMotPos = std::move(_x.FRWLMotPos);
		RLWLMotPos = std::move(_x.RLWLMotPos);
		RRWLMotPos = std::move(_x.RRWLMotPos);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLWLMotPos);
		fun(FRWLMotPos);
		fun(RLWLMotPos);
		fun(RRWLMotPos);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLWLMotPos);
		fun(FRWLMotPos);
		fun(RLWLMotPos);
		fun(RRWLMotPos);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLWLMotPos);
		fun << (FRWLMotPos);
		fun << (RLWLMotPos);
		fun << (RRWLMotPos);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLWLMotPos);
		fun >> (FRWLMotPos);
		fun >> (RLWLMotPos);
		fun >> (RRWLMotPos);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__WINDOWSTATUSST_H__
