#ifndef ____ENUM_HPAST_H__
#define ____ENUM_HPAST_H__


#include "cstdint"







enum class Enum_HPASt:std::uint8_t
{
	Off=0U,
	Standby=1U,
	checking=2U,
	HAVP_Active=3U,
	Completed=4U,
	Terminated=5U,
	Failure=6U,
	Learning_path=7U
};

#endif //____ENUM_HPAST_H__
