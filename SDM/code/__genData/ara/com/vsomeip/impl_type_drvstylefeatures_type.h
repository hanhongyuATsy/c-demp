#ifndef __ARA_COM_VSOMEIP__DRVSTYLEFEATURES_TYPE_H__
#define __ARA_COM_VSOMEIP__DRVSTYLEFEATURES_TYPE_H__


#include "ara/com/vsomeip/impl_type_dsi_drivestylefeatures1_type.h"
#include "ara/com/vsomeip/impl_type_dsi_drivestylefeatures2_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrvStyleFeatures_Type {
public:
	ara::com::vsomeip::DSI_DriveStyleFeatures1_Type DSI_DriveStyleFeatures1;
	ara::com::vsomeip::DSI_DriveStyleFeatures2_Type DSI_DriveStyleFeatures2;
/*
	DrvStyleFeatures_Type() {}
	~DrvStyleFeatures_Type() {}
	DrvStyleFeatures_Type(const ara::com::vsomeip::DSI_DriveStyleFeatures1_Type _DSI_DriveStyleFeatures1,const ara::com::vsomeip::DSI_DriveStyleFeatures2_Type _DSI_DriveStyleFeatures2):DSI_DriveStyleFeatures1(_DSI_DriveStyleFeatures1),DSI_DriveStyleFeatures2(_DSI_DriveStyleFeatures2) {}
	DrvStyleFeatures_Type(const DrvStyleFeatures_Type &_x){
		DSI_DriveStyleFeatures1 = _x.DSI_DriveStyleFeatures1;
		DSI_DriveStyleFeatures2 = _x.DSI_DriveStyleFeatures2;
	}
	DrvStyleFeatures_Type(DrvStyleFeatures_Type &&_x){
		DSI_DriveStyleFeatures1 = std::move(_x.DSI_DriveStyleFeatures1);
		DSI_DriveStyleFeatures2 = std::move(_x.DSI_DriveStyleFeatures2);
	}
	DrvStyleFeatures_Type& operator=(const DrvStyleFeatures_Type &_x){
		DSI_DriveStyleFeatures1 = _x.DSI_DriveStyleFeatures1;
		DSI_DriveStyleFeatures2 = _x.DSI_DriveStyleFeatures2;
		return *this;
	}
	DrvStyleFeatures_Type& operator=(DrvStyleFeatures_Type &&_x){
		DSI_DriveStyleFeatures1 = std::move(_x.DSI_DriveStyleFeatures1);
		DSI_DriveStyleFeatures2 = std::move(_x.DSI_DriveStyleFeatures2);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DSI_DriveStyleFeatures1);
		fun(DSI_DriveStyleFeatures2);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DSI_DriveStyleFeatures1);
		fun(DSI_DriveStyleFeatures2);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DSI_DriveStyleFeatures1);
		fun << (DSI_DriveStyleFeatures2);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DSI_DriveStyleFeatures1);
		fun >> (DSI_DriveStyleFeatures2);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRVSTYLEFEATURES_TYPE_H__
