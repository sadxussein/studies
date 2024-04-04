//
// Created by xussein on 4/2/2024.
//

#ifndef RACE_SIMULATOR_BROOM_H
#define RACE_SIMULATOR_BROOM_H


#include "AirVehicle.h"

class Broom : public AirVehicle {
public:
    Broom();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_BROOM_H
