// --------------------------------------------------------------------------
// |                _     _              _____         _____                |
// |               |  \  | |            / ____|  /\   |  __ \               |
// |               | | \ | |  __       | (___   /  \  | |__) |              |
// |               | |\ \| | /__\|   |  \___ \ / /\ \ |  _  /               |
// |               | | \ \ ||    |   |   ___) / /__\ \| | \ \               |
// |               |_|  \_\| \__/ \_/|/|_____/________\_|  \_\              |
// |                                                                        |
// --------------------------------------------------------------------------
// COPYRIGHT
// --------------------------------------------------------------------------
//
// This software is copyright protected and proprietary to Neusoft Reach.
// Neusoft Reach grants to you only those rights as set out in the license 
// conditions.
// All other rights remain with Neusoft Reach.
// --------------------------------------------------------------------------
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_common_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_common_h


#include <string.h>
#include "ara/core/array.h"

#include "ara/com/types.h"

#include "ara/com/exception.h"
#include "ara/core/error_code.h"
#include "ara/com/someip/impl_type_reporthighdata.h"
#include "ara/com/someip/impl_type_reportlowresult.h"
#include "ara/com/vsomeip/impl_type_reporthighresult.h"
#include "ara/com/vsomeip/impl_type_reportmidresult.h"
#include "ara/com/vsomeip/impl_type_vcpstringresult.h"
#include "impl_type_reportlowdata.h"
#include "impl_type_reportmiddata.h"
#include "impl_type_vcpstringdata.h"
namespace ara {
namespace vcpcloudreport {

class VCPCloudReportInterface {
 public:
  static constexpr ::ara::com::internal::ServiceId service_id = 0x800a;
  static constexpr ::ara::com::internal::ServiceVersion service_version = 0x01000000;

  struct ReportHighDataOutput {
    ::ara::com::vsomeip::ReportHIGHRESULT HighResultData;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(HighResultData);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(HighResultData);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (HighResultData);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (HighResultData);
	}
  };

  struct ReportHighDataWithStringOutput {
    ::ara::com::vsomeip::VCPSTRINGRESULT HighDataResultString;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(HighDataResultString);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(HighDataResultString);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (HighDataResultString);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (HighDataResultString);
	}
  };

  struct ReportLowDataOutput {
    ::ara::com::someip::ReportLOWRESULT ReportLowResultData;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(ReportLowResultData);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(ReportLowResultData);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (ReportLowResultData);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (ReportLowResultData);
	}
  };

  struct ReportLowDataWithStringOutput {
    ::ara::com::vsomeip::VCPSTRINGRESULT LowDataResultString;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(LowDataResultString);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(LowDataResultString);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (LowDataResultString);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (LowDataResultString);
	}
  };

  struct ReportMidDataOutput {
    ::ara::com::vsomeip::ReportMIDRESULT MidResultData;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(MidResultData);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(MidResultData);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (MidResultData);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (MidResultData);
	}
  };

  struct ReportMidDataWithStringOutput {
    ::ara::com::vsomeip::VCPSTRINGRESULT MidDataResultString;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(MidDataResultString);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(MidDataResultString);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (MidDataResultString);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (MidDataResultString);
	}
  };
};

} // namespace vcpcloudreport
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_common_h

