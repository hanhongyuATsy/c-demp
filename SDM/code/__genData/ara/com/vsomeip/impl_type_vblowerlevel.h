#ifndef __ARA_COM_VSOMEIP__VBLOWERLEVEL_H__
#define __ARA_COM_VSOMEIP__VBLOWERLEVEL_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vBlowerLevel:std::uint8_t
{
	OFF=0U,
	Level1=1U,
	Level2=2U,
	Level3=3U,
	Level4=4U,
	Level5=5U,
	Level6=6U,
	Level7=7U,
	Level8=8U,
	Level9=9U,
	Level10=10U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VBLOWERLEVEL_H__
