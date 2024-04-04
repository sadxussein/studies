#ifndef FACTORY_METHOD_TEST_VEHICLEFACTORY_H
#define FACTORY_METHOD_TEST_VEHICLEFACTORY_H


#include <iostream>     // TODO: remove, debug

#include "Vehicle.h"

class VehicleFactory {
public:
    virtual Vehicle * FactoryMethod() = 0;
    void CreateVehicle();
};


#endif //FACTORY_METHOD_TEST_VEHICLEFACTORY_H
