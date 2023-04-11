#ifndef __ARA_COM_VSOMEIP__QUERYPM25CODETYPE_H__
#define __ARA_COM_VSOMEIP__QUERYPM25CODETYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class QueryPM25CodeType:std::uint8_t
{
	SopReq=0U,
	Req=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__QUERYPM25CODETYPE_H__
