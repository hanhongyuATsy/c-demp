#ifndef __ARA_COM_VSOMEIP__VOLTMODE_H__
#define __ARA_COM_VSOMEIP__VOLTMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class VoltMode:std::uint8_t
{
	StopMode=0U,
	LowMode=1U,
	NormalMode=2U,
	HightMode=3U,
	OverHighMode=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VOLTMODE_H__
