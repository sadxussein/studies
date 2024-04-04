//
// Created by xussein on 4/2/2024.
//

#ifndef RACE_SIMULATOR_CENTAUR_H
#define RACE_SIMULATOR_CENTAUR_H


#include "LandVehicle.h"

class Centaur : public LandVehicle {
public:
    Centaur();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_CENTAUR_H
