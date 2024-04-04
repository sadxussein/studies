#include "VehicleFactory.h"

void VehicleFactory::CreateVehicle() {
    Vehicle * vehicle = FactoryMethod();
    std::cout << std::to_string(vehicle->CalculateTravelTime(1000));
}
