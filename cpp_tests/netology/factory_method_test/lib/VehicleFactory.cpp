#include "VehicleFactory.h"

void VehicleFactory::CreateVehicle() {
    Vehicle * vehicle = FactoryMethod();
    std::cout << vehicle->CalculateTravelTime(1000);
}
