//
// Created by xussein on 4/2/2024.
//

#include "VehicleFactory.h"

std::unordered_map<std::string, Vehicle * (*)()> VehicleFactory::creatorMap;

Vehicle *VehicleFactory::createVehicle(const std::string &type) {
    auto it = creatorMap.find(type);
    if (it != creatorMap.end()) {
        return it->second();
    }
    return nullptr;
}
