#ifndef LIB_VEHICLEFACTORY_H
#define LIB_VEHICLEFACTORY_H


#include <iostream>
#include <unordered_map>
#include <vector>

#include "Vehicle.h"

class VehicleFactory {
public:
    static VehicleFactory & getInstance();
    void registerVehicleClass(const std::string & name, Vehicle * (* creator)());
    std::vector<std::string> getVehicleClassesNames();
    int getVehicleClassesCount() const;
    void cleanup();
    Vehicle * createVehicle(const std::string & name);
    Vehicle * createVehicle(int id);
private:
    VehicleFactory();
    std::unordered_map<std::string, Vehicle * (*)()> vehicleClasses;
    std::unordered_map<std::string, int> vehicleIDs;
    int idCount;
};


#endif //LIB_VEHICLEFACTORY_H