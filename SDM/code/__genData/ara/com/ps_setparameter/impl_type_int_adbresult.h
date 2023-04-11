#ifndef __ARA_COM_PS_SETPARAMETER__INT_ADBRESULT_H__
#define __ARA_COM_PS_SETPARAMETER__INT_ADBRESULT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace ps_setparameter
{


enum class Int_ADBResult:std::uint8_t
{
	Failure=0U,
	Success=1U
};

}//ara
}//com
}//ps_setparameter
#endif //__ARA_COM_PS_SETPARAMETER__INT_ADBRESULT_H__
