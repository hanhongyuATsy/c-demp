#ifndef __ARA_COM_VSOMEIP__TPMSWARNINGLAMP_H__
#define __ARA_COM_VSOMEIP__TPMSWARNINGLAMP_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TPMSWarningLamp {
public:
	std::uint8_t TireWarningLamp;
	std::uint8_t SystemWarningLamp;
/*
	TPMSWarningLamp() {}
	~TPMSWarningLamp() {}
	TPMSWarningLamp(const std::uint8_t _TireWarningLamp,const std::uint8_t _SystemWarningLamp):TireWarningLamp(_TireWarningLamp),SystemWarningLamp(_SystemWarningLamp) {}
	TPMSWarningLamp(const TPMSWarningLamp &_x){
		TireWarningLamp = _x.TireWarningLamp;
		SystemWarningLamp = _x.SystemWarningLamp;
	}
	TPMSWarningLamp(TPMSWarningLamp &&_x){
		TireWarningLamp = std::move(_x.TireWarningLamp);
		SystemWarningLamp = std::move(_x.SystemWarningLamp);
	}
	TPMSWarningLamp& operator=(const TPMSWarningLamp &_x){
		TireWarningLamp = _x.TireWarningLamp;
		SystemWarningLamp = _x.SystemWarningLamp;
		return *this;
	}
	TPMSWarningLamp& operator=(TPMSWarningLamp &&_x){
		TireWarningLamp = std::move(_x.TireWarningLamp);
		SystemWarningLamp = std::move(_x.SystemWarningLamp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TireWarningLamp);
		fun(SystemWarningLamp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TireWarningLamp);
		fun(SystemWarningLamp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TireWarningLamp);
		fun << (SystemWarningLamp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TireWarningLamp);
		fun >> (SystemWarningLamp);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TPMSWARNINGLAMP_H__
