#ifndef LIB_VEHICLE_H
#define LIB_VEHICLE_H


#include <string>
#include <utility>
#include <cmath>

class Vehicle {
public:
    virtual void calculateTravelTime(float distance) = 0;
    [[nodiscard]] virtual std::string getName() const;
    [[nodiscard]] float getTravelTime() const;
protected:
    std::string name;
    float speed;
    float travelTime;
};


#endif //LIB_VEHICLE_H
