#include "VehicleFactory.h"

std::string VehicleFactory::getVehicleResult() {
    Vehicle * vehicle = this->createVehicle();
    return std::to_string(vehicle->calculateTravelTime(1000));
}