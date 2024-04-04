#include "Simulation.h"
#include "VehicleComparator.h"

Simulation * Simulation::instance = nullptr;

Simulation * Simulation::getInstance() {
    if (!instance) {
        instance = new Simulation();
    }
    return instance;
}

void Simulation::simulate(float distance, std::vector<Vehicle *> & vehicles) {
    for (auto vehicle : vehicles) {
        vehicle->CalculateTravelTime(distance);
    }
    std::sort(vehicles.begin(), vehicles.end(), VehicleComparator());
    for (auto vehicle : vehicles) {
        result << vehicle->getName() << ": " << vehicle->getTravelTime() << std::endl;
    }
}

std::string Simulation::printResult() {
    return result.str();
}