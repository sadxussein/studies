#ifndef LIB_VEHICLECOMPARATOR_H
#define LIB_VEHICLECOMPARATOR_H


#include "Vehicle.h"

class VehicleComparator {
public:
    bool operator()(const Vehicle * left, const Vehicle * right) const;
};


#endif // LIB_VEHICLECOMPARATOR_H