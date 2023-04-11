#ifndef __ARA_COM_VSOMEIP__VWASHERMOTORST_H__
#define __ARA_COM_VSOMEIP__VWASHERMOTORST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vWasherMotorSt:std::uint8_t
{
	Off=0U,
	On=1U,
	Failure=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VWASHERMOTORST_H__
