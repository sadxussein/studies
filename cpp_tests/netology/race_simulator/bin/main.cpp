#include <iostream>

// TODO: perhaps move to single header file for inclusion
// TODO: maybe move headers to separate folder?
#include "../lib/Camel.h"
#include "../lib/Eagle.h"
#include "../lib/Simulation.h"
#include "../lib/VehicleFactory.h"
#include "../lib/VehicleManager.h"
#include "../lib/FastCamel.h"
#include "../lib/Centaur.h"
#include "../lib/AllTerrainBoots.h"
#include "../lib/Broom.h"
#include "../lib/CarpetPlane.h"

int main() {
    VehicleFactory::registerType<Camel>("Camel");
    VehicleFactory::registerType<FastCamel>("FastCamel");
    VehicleFactory::registerType<Centaur>("Centaur");
    VehicleFactory::registerType<AllTerrainBoots>("AllTerrainBoots");
    VehicleFactory::registerType<Eagle>("Eagle");
    VehicleFactory::registerType<Broom>("Broom");
    VehicleFactory::registerType<CarpetPlane>("CarpetPlane");

    std::cout << "Welcome to Race Simulator!" << std::endl
              << "1. Land vehicle only race" << std::endl
              << "2. Air vehicle only race" << std::endl
              << "3. Combined race" << std::endl
              << "Input race type (1-3): " << std::endl;
    int raceType;
    std::cin >> raceType;   // TODO: check input
    std::cout << "Input race distance (should be positive)" << std::endl;   // TODO: check for negative input
    float distance;
    std::cin >> distance;
    std::cout << "There should be at least two vehicles selected for the race simulation to start." << std::endl
              << "Proceed to vehicle registration? (y/n)" << std::endl;

    Vehicle * camel = VehicleFactory::createVehicle("Camel");
    Vehicle * fastCamel = VehicleFactory::createVehicle("FastCamel");
    Vehicle * centaur = VehicleFactory::createVehicle("Centaur");
    Vehicle * allTerrainBoots = VehicleFactory::createVehicle("AllTerrainBoots");
    Vehicle * eagle = VehicleFactory::createVehicle("Eagle");
    Vehicle * broom = VehicleFactory::createVehicle("Broom");
    Vehicle * carpetPlane = VehicleFactory::createVehicle("CarpetPlane");

    VehicleManager * vehicleManager = VehicleManager::getInstance();

    vehicleManager->addVehicle(camel);
    vehicleManager->addVehicle(fastCamel);
    vehicleManager->addVehicle(centaur);
    vehicleManager->addVehicle(allTerrainBoots);
    vehicleManager->addVehicle(eagle);
    vehicleManager->addVehicle(broom);
    vehicleManager->addVehicle(carpetPlane);
    
    Simulation * simulation = Simulation::getInstance();
    simulation->simulate(10000, vehicleManager->getVehicles());

    std::cout << simulation->printResult();

    vehicleManager->cleanup();

    system("pause");

    return 0;
}
