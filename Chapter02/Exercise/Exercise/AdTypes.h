#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad
{
namespace Types
{
    enum class LaneAssociationType
    {
        Unknown_Lane,
        Left_lane,
        Center_lane,
        Right_lane
    };

    struct VehicleType
    {
        std::int32_t Id;
        Ad::Types::LaneAssociationType Lane;
        float Speed;
        float Relative_Distance;
    };
}
}
