//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_VEHICLE_H
#define LIB_VEHICLE_H


#include <string>
#include <utility>
#include <cmath>

class Vehicle {
public:
    Vehicle(std::string n, float s) : name(std::move(n)), speed(s) {};
    virtual void calculateTravelTime(float distance) = 0;
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] float getTravelTime() const;
protected:
    std::string name;
    float speed;
    float travelTime;
};


#endif //LIB_VEHICLE_H
