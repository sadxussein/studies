#include "Simulation.h"

// TODO: create destructor for Simulation

Simulation * Simulation::instance = nullptr;

Simulation * Simulation::getInstance() {
    if (!instance) {
        instance = new Simulation();
    }
    return instance;
}

void Simulation::setRaceType(int raceType) {
    this->raceType = static_cast<RaceType>(raceType);
}

std::string Simulation::getRaceTypeName() const {
    switch (this->raceType) {
        case RaceType::land:
            return "land";
        case RaceType::air:
            return "air";
        case RaceType::all:
            return "all";
    }
}

RaceType Simulation::getRaceType() const {
    return raceType;
}

void Simulation::simulate(float distance, std::vector<Vehicle *> & vehicles) {
    for (auto vehicle : vehicles) {
        vehicle->calculateTravelTime(distance);
    }

    std::sort(vehicles.begin(), vehicles.end(), VehicleComparator());

    for (auto vehicle : vehicles) {
        result << vehicle->getName() << ": " << vehicle->getTravelTime() << std::endl;
    }
}

std::string Simulation::printResult() {
    return result.str();
}
