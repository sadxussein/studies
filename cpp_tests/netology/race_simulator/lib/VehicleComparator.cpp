//
// Created by xussein on 4/2/2024.
//
#include "VehicleComparator.h"

bool VehicleComparator::operator()(const Vehicle * left, const Vehicle * right) const {
    return left->getTravelTime() < right->getTravelTime();
}

