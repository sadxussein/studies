#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H


#include "../Vehicle.h"

class LandVehicle : public Vehicle {
public:
    LandVehicle(std::string name, float speed, float restTime);
protected:
    float restTime;
};


#endif //LANDVEHICLE_H