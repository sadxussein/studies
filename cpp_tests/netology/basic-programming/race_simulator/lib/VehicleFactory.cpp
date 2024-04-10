
#include "VehicleFactory.h"

VehicleFactory::VehicleFactory(): idCount(0) {}

VehicleFactory & VehicleFactory::getInstance() {
    static VehicleFactory instance;
    return instance;
}

void VehicleFactory::registerVehicleClass(const std::string & name, Vehicle *(* creator)()) {
    vehicleClasses[name] = creator;
    vehicleIDs[name] = idCount;
    idCount ++;
}

Vehicle * VehicleFactory::createVehicle(const std::string & name) {
    auto it = vehicleClasses.find(name);
    if (it != vehicleClasses.end()) {
        return it->second();
    }
    return nullptr;
}

Vehicle *VehicleFactory::createVehicle(int id) {
    for (const auto & it : vehicleIDs) {
        if (it.second == id) {
            return createVehicle(it.first);
        }
    }
    return nullptr;
}

void VehicleFactory::cleanup() {
    idCount = 0;
    vehicleIDs.clear();
    vehicleClasses.clear();
}

std::vector<std::string> VehicleFactory::getVehicleClassesNames() {
    std::vector<std::string> vehicleClassesNames;
    vehicleClassesNames.reserve(vehicleClasses.size());
    for (auto & it : vehicleClasses) {
        vehicleClassesNames.insert(vehicleClassesNames.begin(), it.first);
    }
    return vehicleClassesNames;
}

int VehicleFactory::getVehicleClassesCount() const {
    return static_cast<int>(vehicleClasses.size());
}


