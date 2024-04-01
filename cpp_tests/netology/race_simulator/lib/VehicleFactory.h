#ifndef LIB_VEHICLEFACTORY_H
#define LIB_VEHICLEFACTORY_H


#include <unordered_map>

#include "Vehicle.h"

class VehicleFactory {
public:
    template <typename T>
    static void registerType(const std::string & type) {
        creatorMap[type] = []() -> Vehicle * { return new T(); };
    }
    static Vehicle * createVehicle(const std::string & type);
private:
    static std::unordered_map<std::string, Vehicle * (*)()> creatorMap;
};


#endif //LIB_VEHICLEFACTORY_H