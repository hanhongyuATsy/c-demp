#ifndef __ARA_COM_VSOMEIP__TONEFOLLOWINFO_H__
#define __ARA_COM_VSOMEIP__TONEFOLLOWINFO_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ToneFollowinfo {
public:
	std::uint8_t MusicAmplltude0;
	std::uint8_t MusicAmplltude1;
	std::uint8_t MusicFrequency0;
	std::uint8_t MusicFrequency1;
	std::uint8_t MusicDB0;
	std::uint8_t MusicDB1;
/*
	ToneFollowinfo() {}
	~ToneFollowinfo() {}
	ToneFollowinfo(const std::uint8_t _MusicAmplltude0,const std::uint8_t _MusicAmplltude1,const std::uint8_t _MusicFrequency0,const std::uint8_t _MusicFrequency1,const std::uint8_t _MusicDB0,const std::uint8_t _MusicDB1):MusicAmplltude0(_MusicAmplltude0),MusicAmplltude1(_MusicAmplltude1),MusicFrequency0(_MusicFrequency0),MusicFrequency1(_MusicFrequency1),MusicDB0(_MusicDB0),MusicDB1(_MusicDB1) {}
	ToneFollowinfo(const ToneFollowinfo &_x){
		MusicAmplltude0 = _x.MusicAmplltude0;
		MusicAmplltude1 = _x.MusicAmplltude1;
		MusicFrequency0 = _x.MusicFrequency0;
		MusicFrequency1 = _x.MusicFrequency1;
		MusicDB0 = _x.MusicDB0;
		MusicDB1 = _x.MusicDB1;
	}
	ToneFollowinfo(ToneFollowinfo &&_x){
		MusicAmplltude0 = std::move(_x.MusicAmplltude0);
		MusicAmplltude1 = std::move(_x.MusicAmplltude1);
		MusicFrequency0 = std::move(_x.MusicFrequency0);
		MusicFrequency1 = std::move(_x.MusicFrequency1);
		MusicDB0 = std::move(_x.MusicDB0);
		MusicDB1 = std::move(_x.MusicDB1);
	}
	ToneFollowinfo& operator=(const ToneFollowinfo &_x){
		MusicAmplltude0 = _x.MusicAmplltude0;
		MusicAmplltude1 = _x.MusicAmplltude1;
		MusicFrequency0 = _x.MusicFrequency0;
		MusicFrequency1 = _x.MusicFrequency1;
		MusicDB0 = _x.MusicDB0;
		MusicDB1 = _x.MusicDB1;
		return *this;
	}
	ToneFollowinfo& operator=(ToneFollowinfo &&_x){
		MusicAmplltude0 = std::move(_x.MusicAmplltude0);
		MusicAmplltude1 = std::move(_x.MusicAmplltude1);
		MusicFrequency0 = std::move(_x.MusicFrequency0);
		MusicFrequency1 = std::move(_x.MusicFrequency1);
		MusicDB0 = std::move(_x.MusicDB0);
		MusicDB1 = std::move(_x.MusicDB1);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(MusicAmplltude0);
		fun(MusicAmplltude1);
		fun(MusicFrequency0);
		fun(MusicFrequency1);
		fun(MusicDB0);
		fun(MusicDB1);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(MusicAmplltude0);
		fun(MusicAmplltude1);
		fun(MusicFrequency0);
		fun(MusicFrequency1);
		fun(MusicDB0);
		fun(MusicDB1);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (MusicAmplltude0);
		fun << (MusicAmplltude1);
		fun << (MusicFrequency0);
		fun << (MusicFrequency1);
		fun << (MusicDB0);
		fun << (MusicDB1);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (MusicAmplltude0);
		fun >> (MusicAmplltude1);
		fun >> (MusicFrequency0);
		fun >> (MusicFrequency1);
		fun >> (MusicDB0);
		fun >> (MusicDB1);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TONEFOLLOWINFO_H__
