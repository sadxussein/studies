#include "Simulation.h"

Simulation & Simulation::getInstance() {
    static Simulation instance;
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

    result.str("");
    result << "Simulation completed. Race distance was " << distance << ". Finishing (top to bottom): " << std::endl;
    int count = 1;
    for (auto vehicle : vehicles) {
        result << count << ". " << vehicle->getName() << " completed race in " << vehicle->getTravelTime() << '.' << std::endl;
        count ++;
    }
}

std::string Simulation::printResult() {
    return result.str();
}
