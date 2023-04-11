#ifndef __ARA_COM_VSOMEIP__LVELECEGYMAINSTTYPE_H__
#define __ARA_COM_VSOMEIP__LVELECEGYMAINSTTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class LvElecEgyMainStType:std::uint8_t
{
	Very_good_Main_ElecNet=0U,
	Better_Main_ElecNet=1U,
	General_Main_ElecNet=2U,
	Worse_Main_ElecNet=3U,
	Bad_Main_ElecNet=4U,
	Terrible_Main_ElecNet=5U,
	Abnormal_Main_ElecNet=6U,
	Volatge_low=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LVELECEGYMAINSTTYPE_H__
