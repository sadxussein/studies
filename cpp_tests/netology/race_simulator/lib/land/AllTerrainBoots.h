//
// Created by xussein on 4/2/2024.
//

#ifndef RACE_SIMULATOR_ALLTERRAINBOOTS_H
#define RACE_SIMULATOR_ALLTERRAINBOOTS_H


#include "LandVehicle.h"

class AllTerrainBoots : public LandVehicle {
public:
    AllTerrainBoots();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_ALLTERRAINBOOTS_H
