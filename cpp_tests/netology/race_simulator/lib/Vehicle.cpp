#include "Vehicle.h"

bool Vehicle::operator<(const Vehicle & other) const {
    return this->travelTime < other.travelTime;
}

std::string Vehicle::getName() {
    return name;
}

std::string Vehicle::getTravelTime() {
    return std::to_string(travelTime);
}
