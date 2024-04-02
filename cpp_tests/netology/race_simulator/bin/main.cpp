#include <iostream>

#include "../lib/Camel.h"
#include "../lib/Eagle.h"
#include "../lib/Simulation.h"
#include "../lib/VehicleFactory.h"
#include "../lib/VehicleManager.h"

int main() {    
    VehicleManager * vehicleManager = VehicleManager::getInstance();

    VehicleFactory::registerType<Camel>("Camel");
    VehicleFactory::registerType<Eagle>("Eagle");

    Vehicle * camel = VehicleFactory::createVehicle("Camel");
    Vehicle * eagle = VehicleFactory::createVehicle("Eagle");

    vehicleManager->addVehicle(camel);
    vehicleManager->addVehicle(eagle);
    
    Simulation * simulation = Simulation::getInstance();
    simulation->simulate(1000, vehicleManager->getVehicles());

    std::cout << simulation->printResult();

    vehicleManager->cleanup();

    system("pause");

    return 0;
}
