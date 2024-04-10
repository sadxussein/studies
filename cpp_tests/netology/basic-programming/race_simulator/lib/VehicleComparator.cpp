#include "VehicleComparator.h"

bool VehicleComparator::operator()(const Vehicle * left, const Vehicle * right) const {
    return left->getTravelTime() < right->getTravelTime();
}