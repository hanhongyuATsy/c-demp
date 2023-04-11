#ifndef __ARA_COM_VSOMEIP__VSEATWORKTYPE_H__
#define __ARA_COM_VSOMEIP__VSEATWORKTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vSeatWorkType:std::uint8_t
{
	No_Command=0U,
	Off=1U,
	Heat=2U,
	Vent=3U,
	Auto=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VSEATWORKTYPE_H__
