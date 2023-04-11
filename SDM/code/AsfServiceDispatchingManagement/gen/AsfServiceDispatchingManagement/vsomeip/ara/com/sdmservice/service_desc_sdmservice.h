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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_service_desc_sdmservice_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_service_desc_sdmservice_h



#include "ara/com/sdmservice/sdmservice_common.h"

#include <map>
#include <string>
#include "ara/com/internal/vsomeip/vsomeip_types.h"
#include "ara/com/internal/s2s/s2s_IPdu.hpp"

namespace ara {
namespace com {
namespace sdmservice {
namespace sdmservice_binding {
namespace vsomeip {
namespace descriptors {


namespace internal {
    struct Service {
        static constexpr ::ara::com::internal::vsomeip::types::ServiceId service_id = 0x10f8;
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

struct GetServiceInfo: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x31;
    static constexpr uint8_t is_reliable = 0x0;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct GetServiceStatus: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x3;
    static constexpr uint8_t is_reliable = 0x0;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct OfferService: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x1;
    static constexpr uint8_t is_reliable = 0x0;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 0, 4, 0, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct ShowServices: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x1001;
    static constexpr uint8_t is_reliable = 0x0;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 4, 4, 4, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

struct StopOfferService: public internal::Service {
    static constexpr ::ara::com::internal::vsomeip::types::MethodId method_id = 0x2;
    static constexpr uint8_t is_reliable = 0x0;
    static constexpr uint8_t is_fireandforget = 0x0;
    static constexpr ::ara::com::internal::vsomeip::types::apSomeipTransProps someiptransprops = {8, 0, 0, 0, 4, 0, 4, 2, 0};
    using ArrayLengthFieldType = std::uint32_t;
    using StringLengthFieldType = std::uint32_t;
    using StructLengthFieldType = std::uint32_t;
};

} // namespace descriptors
} // namespace vsomeip
} // namespace sdmservice_binding
} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_service_desc_sdmservice_h

