//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_CAMEL_H
#define LIB_CAMEL_H


#include "LandVehicle.h"

class Camel : public LandVehicle {
public:
    Camel();
    float getTravelTime(float distance) override;
    Vehicle * createVehicle() override;
};


#endif //LIB_CAMEL_H