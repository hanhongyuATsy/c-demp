#ifndef __ARA_COM_VSOMEIP__UMMPOWERKEEPMODE_H__
#define __ARA_COM_VSOMEIP__UMMPOWERKEEPMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class UMMPowerKeepMode:std::uint8_t
{
	Off=0U,
	On=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__UMMPOWERKEEPMODE_H__
