#include <iostream>

#include "../lib/Camel.h"
#include "../lib/Simulation.h"
#include "../lib/VehicleFactory.h"
#include "../lib/VehicleManager.h"

int main() {
    Simulation * simulation = Simulation::getInstance();
    simulation->init(1000);
    VehicleManager * vehicleManager = VehicleManager::getInstance();

    VehicleFactory::registerType<Camel>("Camel");
    Vehicle * camel = VehicleFactory::createVehicle("Camel");
    vehicleManager->addVehicle(camel);
    camel->calculateTravelTime(1000);
    std::cout << camel->calculateTravelTime(1000) << std::endl;
    vehicleManager->cleanup();
    system("pause");

    return 0;
}
