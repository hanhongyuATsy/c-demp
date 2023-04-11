#ifndef __ARA_COM_VSOMEIP__VALARMREQST_H__
#define __ARA_COM_VSOMEIP__VALARMREQST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vAlarmReqSt:std::uint8_t
{
	On=0U,
	Off=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VALARMREQST_H__
