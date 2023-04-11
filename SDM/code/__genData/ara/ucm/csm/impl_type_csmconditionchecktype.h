#ifndef __ARA_UCM_CSM__CSMCONDITIONCHECKTYPE_H__
#define __ARA_UCM_CSM__CSMCONDITIONCHECKTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace csm
{


enum class CSMConditionCheckType:std::uint8_t
{
	kStart=1U,
	kStop=2U,
	kCancel=3U
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__CSMCONDITIONCHECKTYPE_H__
