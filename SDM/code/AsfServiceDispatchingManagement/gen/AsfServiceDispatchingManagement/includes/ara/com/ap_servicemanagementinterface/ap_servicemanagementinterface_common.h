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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_common_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_common_h


#include <string.h>
#include "ara/core/array.h"

#include "ara/com/types.h"

#include "ara/com/exception.h"
#include "ara/core/error_code.h"
#include "ara/com/vsomeip/impl_type_apserviceinfovectortype.h"
#include "impl_type_apserviceinfotype.h"
#include "impl_type_apsingleserviceinfotype.h"
namespace ara {
namespace com {
namespace ap_servicemanagementinterface {

class AP_ServiceManagementInterface {
 public:
  static constexpr ::ara::com::internal::ServiceId service_id = 0x10fa;
  static constexpr ::ara::com::internal::ServiceVersion service_version = 0x01000000;

  struct GetAllServiceOutput {
    ::ara::com::vsomeip::ApServiceInfoVectorType ApServiceInfoVector;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(ApServiceInfoVector);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(ApServiceInfoVector);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (ApServiceInfoVector);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (ApServiceInfoVector);
	}
  };

  struct GetSingleServiceOutput {
    ::ApServiceInfoType ApServiceInfo;

    //using IsEnumerableTag = void;
    using IsMethodOutputTag = void;
    template<typename F>
    void enumerate(F& fun) {
      fun(ApServiceInfo);
    }

	template<typename F>
	void GetSize(F& fun) const{
      fun(ApServiceInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
      fun << (ApServiceInfo);
	}
	template<typename F>
	void deserialize(F& fun){
      fun >> (ApServiceInfo);
	}
  };
};

} // namespace ap_servicemanagementinterface
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_common_h

