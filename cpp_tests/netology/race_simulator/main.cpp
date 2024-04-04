#include <iostream>

// TODO: perhaps move to single header file for inclusion
// TODO: maybe move headers to separate folder?
#include "lib/land/CamelFactory.h"
#include "lib/VehicleManager.h"
#include "lib/Simulation.h"

int main() {
//    std::cout << "Welcome to Race Simulator!" << std::endl
//              << "1. Land vehicle only race" << std::endl
//              << "2. Air vehicle only race" << std::endl
//              << "3. Combined race" << std::endl
//              << "Input race type (1-3): " << std::endl;
//    int raceType;
//    std::cin >> raceType;   // TODO: check input
//    std::cout << "Input race distance (should be positive)" << std::endl;   // TODO: check for negative input
//    float distance;
//    std::cin >> distance;
//    std::cout << "There should be at least two vehicles selected for the race simulation to start." << std::endl
//              << "Proceed to vehicle registration? (y/n)" << std::endl;

    VehicleFactory * camelFactory = new CamelFactory();

    VehicleManager * vehicleManager = VehicleManager::getInstance();
    vehicleManager->addVehicle(camelFactory->createVehicle());
    vehicleManager->addVehicle(camelFactory->createVehicle());

    Simulation * simulation = Simulation::getInstance();
    simulation->simulate(10000, vehicleManager->getVehicles());

    std::cout << simulation->printResult();
    vehicleManager->cleanup();

    system("pause");

    return 0;
}
