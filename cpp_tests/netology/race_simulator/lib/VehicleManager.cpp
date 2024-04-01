//
// Created by xussein on 4/2/2024.
//

#include "VehicleManager.h"

VehicleManager * VehicleManager::instance = nullptr;

VehicleManager * VehicleManager::getInstance() {
    if (!instance) {
        instance = new VehicleManager();
    }
    return instance;
}

void VehicleManager::addVehicle(Vehicle * vehicle) {
    this->vehicles.push_back(vehicle);
}

void VehicleManager::cleanup() {
    for (auto v : vehicles) {
        delete v;
    }
    vehicles.clear();
}
