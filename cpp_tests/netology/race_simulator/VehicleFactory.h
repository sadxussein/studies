#ifndef LIB_VEHICLEFACTORY_H
#define LIB_VEHICLEFACTORY_H


#include <unordered_map>
#include <iostream>

#include "Vehicle.h"

class VehicleFactory {
public:
    virtual Vehicle * createVehicle() = 0;
    std::string getVehicleResult();
};




#endif //LIB_VEHICLEFACTORY_H