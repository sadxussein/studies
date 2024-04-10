#ifndef LIB_SIMULATION_H
#define LIB_SIMULATION_H


#include <vector>
#include <algorithm>
#include <sstream>

#include "Vehicle.h"
#include "VehicleComparator.h"

enum class RaceType {
    land,
    air,
    all
};

class Simulation {
public:
    static Simulation & getInstance();
    void simulate(float distance, std::vector<Vehicle *> & vehicles);
    std::string printResult();
    void setRaceType(int raceType);
    std::string getRaceTypeName() const;
    RaceType getRaceType() const;
private:
    Simulation() = default;
    float distance;
    RaceType raceType;
    std::stringstream result;
};


#endif //LIB_SIMULATION_H
