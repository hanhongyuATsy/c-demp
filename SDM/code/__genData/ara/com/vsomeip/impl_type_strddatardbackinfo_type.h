#ifndef __ARA_COM_VSOMEIP__STRDDATARDBACKINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__STRDDATARDBACKINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct StrdDataRdBackInfo_Type {
public:
	std::uint8_t ReadAccntID;
	std::uint32_t StoredDataRdBackID;
/*
	StrdDataRdBackInfo_Type() {}
	~StrdDataRdBackInfo_Type() {}
	StrdDataRdBackInfo_Type(const std::uint8_t _ReadAccntID,const std::uint32_t _StoredDataRdBackID):ReadAccntID(_ReadAccntID),StoredDataRdBackID(_StoredDataRdBackID) {}
	StrdDataRdBackInfo_Type(const StrdDataRdBackInfo_Type &_x){
		ReadAccntID = _x.ReadAccntID;
		StoredDataRdBackID = _x.StoredDataRdBackID;
	}
	StrdDataRdBackInfo_Type(StrdDataRdBackInfo_Type &&_x){
		ReadAccntID = std::move(_x.ReadAccntID);
		StoredDataRdBackID = std::move(_x.StoredDataRdBackID);
	}
	StrdDataRdBackInfo_Type& operator=(const StrdDataRdBackInfo_Type &_x){
		ReadAccntID = _x.ReadAccntID;
		StoredDataRdBackID = _x.StoredDataRdBackID;
		return *this;
	}
	StrdDataRdBackInfo_Type& operator=(StrdDataRdBackInfo_Type &&_x){
		ReadAccntID = std::move(_x.ReadAccntID);
		StoredDataRdBackID = std::move(_x.StoredDataRdBackID);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ReadAccntID);
		fun(StoredDataRdBackID);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ReadAccntID);
		fun(StoredDataRdBackID);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ReadAccntID);
		fun << (StoredDataRdBackID);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ReadAccntID);
		fun >> (StoredDataRdBackID);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__STRDDATARDBACKINFO_TYPE_H__
