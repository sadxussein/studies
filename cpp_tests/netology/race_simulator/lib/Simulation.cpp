//
// Created by xussein on 3/30/2024.
//

#include "Simulation.h"


Simulation * Simulation::instance = nullptr;

Simulation * Simulation::getInstance() {
    if (!instance) {
        instance = new Simulation();
    }
    return instance;
}

void Simulation::simulate(float distance, const std::vector<Vehicle *> & vehicles) {
    for (auto vehicle : vehicles) {
        vehicle->calculateTravelTime(distance);
    }
    std::sort(vehicles.begin(), vehicles.end(), [](const Vehicle * a, const Vehicle * b) {
        return a->getTravelTime() < b->getTravelTime();     // TODO: finish comparator
    });
    for (auto vehicle : vehicles) {
        result << vehicle->getName() << ": " << vehicle->getTravelTime() << std::endl;
    }
}

std::string Simulation::printResult() {
    return result.str();
}

// TODO: create destructor for Simulation