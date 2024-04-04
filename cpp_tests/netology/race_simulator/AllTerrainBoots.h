#ifndef RACE_SIMULATOR_ALLTERRAINBOOTS_H
#define RACE_SIMULATOR_ALLTERRAINBOOTS_H


#include "LandVehicle.h"

class AllTerrainBoots : public LandVehicle {
public:
    AllTerrainBoots();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_ALLTERRAINBOOTS_H
