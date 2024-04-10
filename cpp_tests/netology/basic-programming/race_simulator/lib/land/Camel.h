#ifndef RACE_SIMULATOR_CAMEL_H
#define RACE_SIMULATOR_CAMEL_H


#include "LandVehicle.h"

class Camel : public LandVehicle {
public:
    Camel();
    void calculateTravelTime(float distance) override;
};


#endif //RACE_SIMULATOR_CAMEL_H
