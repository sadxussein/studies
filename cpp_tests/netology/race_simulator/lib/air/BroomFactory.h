#ifndef LIB_AIR_BROOMFACTORY_H
#define LIB_AIR_BROOMFACTORY_H


#include "../VehicleFactory.h"
#include "Broom.h"

class BroomFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif // LIB_AIR_BROOMFACTORY_H