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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_service_desc_vcpcloudreportinterface_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_service_desc_vcpcloudreportinterface_h



#include "ara/vcpcloudreport/vcpcloudreportinterface_common.h"

#include <map>
#include <string>
#include "ara/com/internal/vsomeip/vsomeip_types.h"
#include "ara/com/internal/s2s/s2s_IPdu.hpp"

namespace ara {
namespace vcpcloudreport {
namespace vcpcloudreportinterface_binding {
namespace vsomeip {
namespace descriptors {


namespace internal {
    struct Service {
        static constexpr ::ara::com::internal::vsomeip::types::ServiceId service_id = 0x800a;
        static constexpr ::ara::com::internal::vsomeip::types::ServiceVersionMajor service_version = 0x1;
        static constexpr ::ara::com::internal::vsomeip::types::ServiceVersionMinor minor_service_version = 0x1;
    };
}

/*
 *struct for aperrors transprops, current default
 */
struct ApErrorsTransProps {
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 0, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
};

struct ReportHighData: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x1;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ReportHighDataWithString: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x4;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ReportLowData: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x3;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ReportLowDataWithString: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x6;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ReportMidData: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x2;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ReportMidDataWithString: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x5;
    static constexpr uint8_t is_reliable = 0x1;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

} // namespace descriptors
} // namespace vsomeip
} // namespace vcpcloudreportinterface_binding
} // namespace vcpcloudreport
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_service_desc_vcpcloudreportinterface_h

