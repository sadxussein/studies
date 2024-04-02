//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_SIMULATION_H
#define LIB_SIMULATION_H


#include <vector>
#include <algorithm>
#include <sstream>

#include "Vehicle.h"

class Simulation {
public:
    static Simulation * instance;
    static Simulation * getInstance();
    void simulate(float distance, const std::vector<Vehicle *> & vehicles);
    std::string printResult();
private:
    Simulation() = default;
    float distance;
    std::stringstream result;
};


#endif //LIB_SIMULATION_H
