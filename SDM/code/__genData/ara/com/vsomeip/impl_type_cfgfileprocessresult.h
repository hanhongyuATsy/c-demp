#ifndef __ARA_COM_VSOMEIP__CFGFILEPROCESSRESULT_H__
#define __ARA_COM_VSOMEIP__CFGFILEPROCESSRESULT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class CfgFileProcessResult:std::uint8_t
{
	succeed=0U,
	noJsonFile=1U,
	parseError=2U,
	writeDidError=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CFGFILEPROCESSRESULT_H__
