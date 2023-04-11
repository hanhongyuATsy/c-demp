#ifndef __ARA_COM_VSOMEIP__VSEATWORKLEVEL_H__
#define __ARA_COM_VSOMEIP__VSEATWORKLEVEL_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vSeatWorkLevel:std::uint8_t
{
	No_Command=0U,
	Off=1U,
	Auto=2U,
	Level_1=3U,
	Level_2=4U,
	Level_3=5U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VSEATWORKLEVEL_H__
