#ifndef LIB_AIR_EAGLEFACTORY_H
#define LIB_AIR_EAGLEFACTORY_H


#include "../VehicleFactory.h"
#include "Eagle.h"

class EagleFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif // LIB_AIR_EAGLEFACTORY_H