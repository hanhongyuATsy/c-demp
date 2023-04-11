#ifndef __ARA_COM_VSOMEIP__VOLTSTATUS_H__
#define __ARA_COM_VSOMEIP__VOLTSTATUS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class VoltStatus:std::uint8_t
{
	inVaid=0U,
	Vaid=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VOLTSTATUS_H__
