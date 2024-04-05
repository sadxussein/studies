#ifndef LIB_SIMULATION_H
#define LIB_SIMULATION_H


#include <vector>
#include <algorithm>
#include <sstream>

#include "Vehicle.h"
#include "VehicleComparator.h"

enum class RaceType {
    air,
    land,
    all
};

class Simulation {
public:
    static Simulation * instance;
    static Simulation * getInstance();
    void simulate(float distance, std::vector<Vehicle *> & vehicles);
    std::string printResult();
private:
    Simulation() = default;
    float distance;
    RaceType raceType;
    std::stringstream result;
};


#endif //LIB_SIMULATION_H
