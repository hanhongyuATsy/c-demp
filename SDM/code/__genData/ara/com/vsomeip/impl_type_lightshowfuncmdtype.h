#ifndef __ARA_COM_VSOMEIP__LIGHTSHOWFUNCMDTYPE_H__
#define __ARA_COM_VSOMEIP__LIGHTSHOWFUNCMDTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class LightShowFunCmdType:std::uint8_t
{
	Nocommand_x000D_=0U,
	Preparestart_x000D_=1U,
	Start_x000D_=2U,
	End=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LIGHTSHOWFUNCMDTYPE_H__
