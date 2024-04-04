#ifndef RACE_SIMULATOR_CAMELFACTORY_H
#define RACE_SIMULATOR_CAMELFACTORY_H


#include "VehicleFactory.h"
#include "Camel.h"

class CamelFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif //RACE_SIMULATOR_CAMELFACTORY_H
