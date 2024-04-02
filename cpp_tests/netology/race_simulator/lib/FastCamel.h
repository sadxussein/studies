//
// Created by xussein on 4/2/2024.
//

#ifndef RACE_SIMULATOR_FASTCAMEL_H
#define RACE_SIMULATOR_FASTCAMEL_H


#include "LandVehicle.h"

class FastCamel : public LandVehicle {
public:
    FastCamel();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_FASTCAMEL_H
