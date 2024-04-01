#include "VehicleFactory.h"

template <typename T>
void VehicleFactory::registerType(const std::string & type) {
    creatorMap[type] = []() -> Vehicle * { return new T(); };
}

Vehicle * VehicleFactory::createVehicle(const std::string & type) {
    auto it = creatorMap.find(type);
    if (it != creatorMap.end()) {
        return it->second();    
    }
    return nullptr;
}

std::unordered_map<std::string, Vehicle *(*)()> VehicleFactory::creatorMap;