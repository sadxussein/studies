#ifndef RACE_SIMULATOR_FASTCAMELFACTORY_H
#define RACE_SIMULATOR_FASTCAMELFACTORY_H


#include "../VehicleFactory.h"
#include "FastCamel.h"

class FastCamelFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif //RACE_SIMULATOR_FASTCAMELFACTORY_H