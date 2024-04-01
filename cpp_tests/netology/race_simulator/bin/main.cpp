#include <iostream>

#include "../lib/Camel.h"
#include "../lib/Simulation.h"

int main() {
    Simulation * simulation = Simulation::getInstance();
    simulation->init(1000);

    VehicleFactory::registerType<Camel>("Camel");
    Vehicle * camel = VehicleFactory::createVehicle("Camel");
    // camel->calculateTravelTime(simulation->get)
    // std::cout << "Hello, World!" << std::endl;

    system("pause");

    return 0;
}
