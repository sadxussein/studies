//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_AIRVEHICLE_H
#define LIB_AIRVEHICLE_H


#include "Vehicle.h"

class AirVehicle : public Vehicle {
public:
    AirVehicle(std::string n, int s) : Vehicle(std::move(n), s) {}

};


#endif //LIB_AIRVEHICLE_H
