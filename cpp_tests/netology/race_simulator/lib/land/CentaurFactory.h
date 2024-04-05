#ifndef RACE_SIMULATOR_CENTAURFACTORY_H
#define RACE_SIMULATOR_CENTAURFACTORY_H


#include "../VehicleFactory.h"
#include "Centaur.h"

class CentaurFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif //RACE_SIMULATOR_CENTAURFACTORY_H