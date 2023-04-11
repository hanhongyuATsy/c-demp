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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_common_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_common_h


#include <string.h>
#include "ara/core/array.h"

#include "ara/com/types.h"

#include "ara/com/exception.h"
#include "ara/core/error_code.h"
#include "ara/com/vsomeip/impl_type_sdm_datatype_instanceid.h"
#include "ara/com/vsomeip/impl_type_sdm_datatype_printstyle.h"
#include "ara/com/vsomeip/impl_type_sdm_datatype_response.h"
#include "ara/com/vsomeip/impl_type_sdm_datatype_serviceid.h"
#include "ara/com/vsomeip/impl_type_sdm_datatype_servicestatus.h"
#include "impl_type_sdm_datatype_serviceinfo.h"
namespace ara {
namespace com {
namespace sdmservice {

class SDMService {
 public:
  static constexpr ::ara::com::internal::ServiceId service_id = 0x10f8;
  static constexpr ::ara::com::internal::ServiceVersion service_version = 0x01000000;

  struct GetServiceInfoOutput {
    ::SDM_DataType_ServiceInfo ServiceInfo;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(ServiceInfo);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(ServiceInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (ServiceInfo);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (ServiceInfo);
	}
  };

  struct GetServiceStatusOutput {
    ::ara::com::vsomeip::SDM_DataType_ServiceStatus ServiceStatus;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(ServiceStatus);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(ServiceStatus);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (ServiceStatus);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (ServiceStatus);
	}
  };

  struct OfferServiceOutput {
    ::ara::com::vsomeip::SDM_DataType_Response response;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(response);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(response);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (response);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (response);
	}
  };


  struct StopOfferServiceOutput {
    ::ara::com::vsomeip::SDM_DataType_Response response;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(response);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(response);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (response);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (response);
	}
  };
};

} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_common_h

