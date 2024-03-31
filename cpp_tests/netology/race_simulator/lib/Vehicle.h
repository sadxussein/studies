//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_VEHICLE_H
#define LIB_VEHICLE_H


#include <string>
#include <utility>

class Vehicle {
public:
    Vehicle(std::string n, int s, float t) : name(std::move(n)), speed(s), travelTime(t) {};
    virtual float getTravelTime(float distance) = 0;
    virtual Vehicle * createVehicle() = 0;
protected:
    std::string name;
    int speed;
    float travelTime;
};


#endif //LIB_VEHICLE_H
