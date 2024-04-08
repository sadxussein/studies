//
// Created by xussein on 4/2/2024.
//

#include "VehicleManager.h"

VehicleManager::VehicleManager() : vehicleCount(0) {}

VehicleManager & VehicleManager::getInstance() {
    static VehicleManager instance;
    return instance;
}

void VehicleManager::addVehicle(Vehicle * vehicle) {
    auto it = vehiclesNames.find(vehicle->getName());
    if (it != vehiclesNames.end()) {
        throw VehicleRegisteredException("[ERROR] Vehicle '" + vehicle->getName() + "' is already registered.\n");
    } else {
        vehiclesNames.insert(vehicle->getName());
    }
    vehicles.push_back(vehicle);
    vehicleCount ++;
}

std::vector<Vehicle *> & VehicleManager::getVehicles() {
    return vehicles;
}

int VehicleManager::getVehicleCount() const {
    return vehicleCount;
}

void VehicleManager::cleanup() {
    for (auto it : vehicles) {
        delete it;
    }
    vehiclesNames.clear();
    vehicles.clear();
    vehicleCount = 0;
}