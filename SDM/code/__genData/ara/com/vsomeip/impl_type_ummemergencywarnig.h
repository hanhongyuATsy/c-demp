#ifndef __ARA_COM_VSOMEIP__UMMEMERGENCYWARNIG_H__
#define __ARA_COM_VSOMEIP__UMMEMERGENCYWARNIG_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class UMMEmergencyWarnig:std::uint8_t
{
	No_warning=0U,
	Warning=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__UMMEMERGENCYWARNIG_H__
