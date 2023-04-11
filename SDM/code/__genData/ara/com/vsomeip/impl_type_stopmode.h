#ifndef __ARA_COM_VSOMEIP__STOPMODE_H__
#define __ARA_COM_VSOMEIP__STOPMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class StopMode:std::uint8_t
{
	HardStop=0U,
	SoftStop=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__STOPMODE_H__
