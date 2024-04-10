#ifndef RACE_SIMULATOR_CARPETPLANE_H
#define RACE_SIMULATOR_CARPETPLANE_H


#include "AirVehicle.h"

class CarpetPlane : public AirVehicle {
public:
    CarpetPlane();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_CARPETPLANE_H
