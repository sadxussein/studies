#ifndef RACE_SIMULATOR_ALLTERRAINBOOTSFACTORY_H
#define RACE_SIMULATOR_ALLTERRAINBOOTSFACTORY_H


#include "../VehicleFactory.h"
#include "AllTerrainBoots.h"

class AllTerrainBootsFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif //RACE_SIMULATOR_ALLTERRAINBOOTSFACTORY_H