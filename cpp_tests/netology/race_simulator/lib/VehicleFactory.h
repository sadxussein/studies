#ifndef LIB_VEHICLEFACTORY_H
#define LIB_VEHICLEFACTORY_H


#include <unordered_map>
#include <iostream>

#include "Vehicle.h"

class VehicleFactory {
public:
    virtual ~VehicleFactory() = default;
    virtual Vehicle * createVehicle() = 0;
};


#endif //LIB_VEHICLEFACTORY_H