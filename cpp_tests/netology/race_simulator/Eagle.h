#ifndef LIB_EAGLE_H
#define LIB_EAGLE_H


#include "AirVehicle.h"

class Eagle : public AirVehicle {
public:
    Eagle();
    void calculateTravelTime(float distance) override;
};


#endif