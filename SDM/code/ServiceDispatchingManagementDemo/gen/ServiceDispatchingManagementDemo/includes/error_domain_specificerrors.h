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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_error_domain_specificerrors_h
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_error_domain_specificerrors_h

#include "ara/core/error_code.h"
#include "ara/core/error_domain.h"
#include "ara/core/exception.h"

namespace ara {
namespace com {
namespace aperrors {

enum class SpecificErrorsErrc : ::ara::core::ErrorDomain::CodeType
{
  kInvalidConfigString = 3,
  kInvalidParameter = 4,
  kPreparationFailed = 7,
  kRequestedRejected = 5,
  kRollbackFailed = 8,
  kVerificationFailed = 6,
};

class SpecificErrorsException : public ::ara::core::Exception
{
public:
    explicit SpecificErrorsException(::ara::core::ErrorCode err) noexcept
        : ::ara::core::Exception(err)
    {}
};

class SpecificErrorsErrorDomain final : public ::ara::core::ErrorDomain
{
    constexpr static ::ara::core::ErrorDomain::IdType kId = 12;

public:
    using Errc = SpecificErrorsErrc;

    using Exception = SpecificErrorsException;

    /// @brief Default constructor
    ///
    /// @uptrace{SWS_CORE_00241}
    /// @uptrace{SWS_CORE_00012}
    constexpr SpecificErrorsErrorDomain() noexcept
        : ::ara::core::ErrorDomain(kId)
    {}

    /// @brief Return the "shortname" ApApplicationErrorDomain.SN of this error domain.
    char const* Name() const noexcept override
    {
        return "SpecificErrors";
    }

    char const* Message(::ara::core::ErrorDomain::CodeType errorCode) const noexcept override
    {
        Errc const code = static_cast<Errc>(errorCode);
        switch (code) {
        case Errc::kInvalidConfigString:
            return "kInvalidConfigString";
        case Errc::kInvalidParameter:
            return "kInvalidParameter";
        case Errc::kPreparationFailed:
            return "kPreparationFailed";
        case Errc::kRequestedRejected:
            return "kRequestedRejected";
        case Errc::kRollbackFailed:
            return "kRollbackFailed";
        case Errc::kVerificationFailed:
            return "kVerificationFailed";
        default:
            return "Unknown error";
        }
    }

    void ThrowAsException(::ara::core::ErrorCode const& errorCode) const noexcept(false) override
    {
        ::ara::core::ThrowOrTerminate<Exception>(errorCode);
    }
};

namespace internal
{
constexpr SpecificErrorsErrorDomain g_SpecificErrorsErrorDomain;
}

inline constexpr ::ara::core::ErrorDomain const& GetSpecificErrorsErrorDomain() noexcept
{
    return internal::g_SpecificErrorsErrorDomain;
}

inline constexpr ::ara::core::ErrorCode MakeErrorCode(SpecificErrorsErrc code,
    ::ara::core::ErrorDomain::SupportDataType data,
    char const* message) noexcept
{
    return ::ara::core::ErrorCode(static_cast<::ara::core::ErrorDomain::CodeType>(code), GetSpecificErrorsErrorDomain(), data, message);
}

} // namespace aperrors
} // namespace com
} // namespace ara


#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_error_domain_specificerrors_h

