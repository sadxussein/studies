#ifndef VEHICLE_H
#define VEHICLE_H


#include <string>
#include <cmath>

class Vehicle {
public:
    virtual float CalculateTravelTime(float distance) = 0;
protected:
    std::string name;
    float speed;
};


#endif //VEHICLE_H