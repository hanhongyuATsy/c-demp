#ifndef __ARA_COM_VSOMEIP__VAIRMODE_H__
#define __ARA_COM_VSOMEIP__VAIRMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vAirMode:std::uint8_t
{
	Nocommand=0U,
	face=1U,
	BilevelFace=2U,
	Face_Foot=3U,
	BilevelFoot=4U,
	foot=5U,
	F_D=6U,
	DEF=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VAIRMODE_H__
