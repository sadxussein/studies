//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_VEHICLE_H
#define LIB_VEHICLE_H


#include <string>
#include <utility>

class Vehicle {
public:
    Vehicle(std::string n, int s) : name(std::move(n)), speed(s) {};    // TODO: consider initializing travelTime
    virtual void calculateTravelTime(float distance) = 0;
    bool operator<(const Vehicle & other) const;
    std::string getName();
    std::string getTravelTime();
protected:
    std::string name;
    int speed;
    float travelTime;
};


#endif //LIB_VEHICLE_H
