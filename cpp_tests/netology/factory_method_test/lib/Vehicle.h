#ifndef VEHICLE_H
#define VEHICLE_H


#include <string>
#include <cmath>

class Vehicle {
public:
    virtual float CalculateTravelTime(float distance) = 0;
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] float getTravelTime() const;
protected:
    std::string name;
    float speed;
    float travelTime;
};


#endif //VEHICLE_H