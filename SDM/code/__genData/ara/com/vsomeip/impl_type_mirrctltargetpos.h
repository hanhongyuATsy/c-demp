#ifndef __ARA_COM_VSOMEIP__MIRRCTLTARGETPOS_H__
#define __ARA_COM_VSOMEIP__MIRRCTLTARGETPOS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct MirrCtlTargetPos {
public:
	std::uint8_t MirrCtlTargetPosX;
	std::uint8_t MirrCtlTargetPosY;
/*
	MirrCtlTargetPos() {}
	~MirrCtlTargetPos() {}
	MirrCtlTargetPos(const std::uint8_t _MirrCtlTargetPosX,const std::uint8_t _MirrCtlTargetPosY):MirrCtlTargetPosX(_MirrCtlTargetPosX),MirrCtlTargetPosY(_MirrCtlTargetPosY) {}
	MirrCtlTargetPos(const MirrCtlTargetPos &_x){
		MirrCtlTargetPosX = _x.MirrCtlTargetPosX;
		MirrCtlTargetPosY = _x.MirrCtlTargetPosY;
	}
	MirrCtlTargetPos(MirrCtlTargetPos &&_x){
		MirrCtlTargetPosX = std::move(_x.MirrCtlTargetPosX);
		MirrCtlTargetPosY = std::move(_x.MirrCtlTargetPosY);
	}
	MirrCtlTargetPos& operator=(const MirrCtlTargetPos &_x){
		MirrCtlTargetPosX = _x.MirrCtlTargetPosX;
		MirrCtlTargetPosY = _x.MirrCtlTargetPosY;
		return *this;
	}
	MirrCtlTargetPos& operator=(MirrCtlTargetPos &&_x){
		MirrCtlTargetPosX = std::move(_x.MirrCtlTargetPosX);
		MirrCtlTargetPosY = std::move(_x.MirrCtlTargetPosY);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(MirrCtlTargetPosX);
		fun(MirrCtlTargetPosY);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(MirrCtlTargetPosX);
		fun(MirrCtlTargetPosY);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (MirrCtlTargetPosX);
		fun << (MirrCtlTargetPosY);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (MirrCtlTargetPosX);
		fun >> (MirrCtlTargetPosY);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__MIRRCTLTARGETPOS_H__
