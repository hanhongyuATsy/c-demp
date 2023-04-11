#ifndef __ARA_COM_VSOMEIP__VWIPERWORKST_H__
#define __ARA_COM_VSOMEIP__VWIPERWORKST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vWiperWorkSt:std::uint8_t
{
	Off=0U,
	Reserve=1U,
	Stallprotection=2U,
	Failure=3U,
	Lowspeed=4U,
	Highspeed=5U,
	Hardstopped=6U,
	Intervaldelaying=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VWIPERWORKST_H__
