//
// Created by xussein on 4/1/2024.
//

#ifndef RACE_SIMULATOR_VEHICLEMANAGER_H
#define RACE_SIMULATOR_VEHICLEMANAGER_H


#include <vector>

#include "Vehicle.h"

class VehicleManager {
public:
    static VehicleManager * instance;
    static VehicleManager * getInstance();
    void addVehicle(Vehicle * vehicle);
    std::vector<Vehicle *> & getVehicles();
    void cleanup();
private:
    std::vector<Vehicle *> vehicles;
    VehicleManager() = default;
};


#endif //RACE_SIMULATOR_VEHICLEMANAGER_H
