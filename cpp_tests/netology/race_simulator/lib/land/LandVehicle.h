//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_LANDVEHICLE_H
#define LIB_LANDVEHICLE_H


#include "../Vehicle.h"

class LandVehicle : public Vehicle {
public:
    LandVehicle(std::string n, float s, int r) : Vehicle(std::move(n), s), restTime(r) {}
protected:
    int restTime;
};


#endif //LIB_LANDVEHICLE_H
