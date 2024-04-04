#ifndef FACTORY_METHOD_TEST_SIMULATION_H
#define FACTORY_METHOD_TEST_SIMULATION_H


#include <vector>
#include <algorithm>
#include <sstream>

#include "Vehicle.h"

class Simulation {
public:
    static Simulation * instance;
    static Simulation * getInstance();
    void simulate(float distance, std::vector<Vehicle *> & vehicles);
    std::string printResult();
private:
    Simulation() = default;
    float distance;
    std::stringstream result;
};


#endif //FACTORY_METHOD_TEST_SIMULATION_H
