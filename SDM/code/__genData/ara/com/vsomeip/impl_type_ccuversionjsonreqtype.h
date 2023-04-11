#ifndef __ARA_COM_VSOMEIP__CCUVERSIONJSONREQTYPE_H__
#define __ARA_COM_VSOMEIP__CCUVERSIONJSONREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class CCUVersionJsonReqType:std::uint8_t
{
	NotifytoUpdateLocalVersionFile=0U,
	ReadLocalVersionFile=1U,
	ReadLocalupdatedVersionFile=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CCUVERSIONJSONREQTYPE_H__
