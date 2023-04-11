#ifndef __ARA_COM_VSOMEIP__KEYUSERDEFINEDBTNSETRESULT_H__
#define __ARA_COM_VSOMEIP__KEYUSERDEFINEDBTNSETRESULT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class KeyUserDefinedBtnSetResult:std::uint8_t
{
	Success=0U,
	WrongUsageMode=1U,
	WrongOther=2U,
	Reserved=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__KEYUSERDEFINEDBTNSETRESULT_H__
