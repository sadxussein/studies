#ifndef LIB_LANDVEHICLE_H
#define LIB_LANDVEHICLE_H


#include "../Vehicle.h"

class LandVehicle : public Vehicle {
public:
    LandVehicle(std::string name, float speed, float restTime);
protected:
    float restTime;
};


#endif //LIB_LANDVEHICLE_H
