#ifndef __ARA_COM_VSOMEIP__VATWSLEDINDST_H__
#define __ARA_COM_VSOMEIP__VATWSLEDINDST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vATWSLEDIndSt:std::uint8_t
{
	Not_Used=0U,
	Off=1U,
	Constant_On=2U,
	BlinkMode1=3U,
	BlinkMode2=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VATWSLEDINDST_H__
