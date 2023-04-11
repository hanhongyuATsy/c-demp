#ifndef __ARA_COM_VSOMEIP__VECOST_H__
#define __ARA_COM_VSOMEIP__VECOST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vECOSt:std::uint8_t
{
	Normal=0U,
	Eco=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VECOST_H__
