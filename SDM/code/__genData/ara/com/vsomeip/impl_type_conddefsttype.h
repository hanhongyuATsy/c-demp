#ifndef __ARA_COM_VSOMEIP__CONDDEFSTTYPE_H__
#define __ARA_COM_VSOMEIP__CONDDEFSTTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class CondDefStType:std::uint8_t
{
	finish=0U,
	ongoing=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CONDDEFSTTYPE_H__
