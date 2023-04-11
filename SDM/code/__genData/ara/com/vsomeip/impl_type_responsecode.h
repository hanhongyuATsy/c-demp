#ifndef __ARA_COM_VSOMEIP__RESPONSECODE_H__
#define __ARA_COM_VSOMEIP__RESPONSECODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class responseCode:std::uint8_t
{
	Success=0U,
	Fail=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__RESPONSECODE_H__
