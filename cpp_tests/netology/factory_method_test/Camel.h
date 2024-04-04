#ifndef CAMEL_H
#define CAMEL_H


#include "LandVehicle.h"

class Camel : public LandVehicle {
public:
    Camel();
    float CalculateTravelTime(float distance) override;
};


#endif // CAMEL_H