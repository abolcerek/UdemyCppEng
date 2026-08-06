#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdTypes.h"
#include "AdFunctions.h"

namespace Ad {
    namespace Utils {
        float kph_to_mps(const float kph) {
            return kph / Ad::Constants::FORMULA;
        }
    }
    namespace Data {
        Ad::Types::VehicleType init_ego_vehicle() {
            return Ad::Types::VehicleType{
                .Id = Ad::Constants::EGO_VEHICLE_ID
                ,.Lane = Ad::Types::LaneAssociationType::Center_lane
                ,.Speed = Ad::Utils::kph_to_mps(135.0F)
                ,.Relative_Distance = 0.0F
            };
        }
    }
    namespace Visualize {
        void print_vehicle(const Ad::Types::VehicleType vehicle) {
            std::cout << "Id: " << vehicle.Id << '\n';
            std::cout << "Speed: " << vehicle.Speed << '\n';
            std::cout << "Distance: " << vehicle.Relative_Distance << '\n';
            std::cout << "Lane: " << static_cast<int32_t>(vehicle.Lane);
        }
    }

}
