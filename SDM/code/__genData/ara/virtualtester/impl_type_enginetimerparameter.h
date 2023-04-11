#ifndef __ARA_VIRTUALTESTER__ENGINETIMERPARAMETER_H__
#define __ARA_VIRTUALTESTER__ENGINETIMERPARAMETER_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct EngineTimerParameter {
public:
	std::uint8_t P2Server;
	std::uint16_t P2StarServer;
/*
	EngineTimerParameter() {}
	~EngineTimerParameter() {}
	EngineTimerParameter(const std::uint8_t _P2Server,const std::uint16_t _P2StarServer):P2Server(_P2Server),P2StarServer(_P2StarServer) {}
	EngineTimerParameter(const EngineTimerParameter &_x){
		P2Server = _x.P2Server;
		P2StarServer = _x.P2StarServer;
	}
	EngineTimerParameter(EngineTimerParameter &&_x){
		P2Server = std::move(_x.P2Server);
		P2StarServer = std::move(_x.P2StarServer);
	}
	EngineTimerParameter& operator=(const EngineTimerParameter &_x){
		P2Server = _x.P2Server;
		P2StarServer = _x.P2StarServer;
		return *this;
	}
	EngineTimerParameter& operator=(EngineTimerParameter &&_x){
		P2Server = std::move(_x.P2Server);
		P2StarServer = std::move(_x.P2StarServer);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(P2Server);
		fun(P2StarServer);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(P2Server);
		fun(P2StarServer);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (P2Server);
		fun << (P2StarServer);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (P2Server);
		fun >> (P2StarServer);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__ENGINETIMERPARAMETER_H__
