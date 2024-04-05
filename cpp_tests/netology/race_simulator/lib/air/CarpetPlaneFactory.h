#ifndef LIB_AIR_CARPETPLANEFACTORY_H
#define LIB_AIR_CARPETPLANEFACTORY_H


#include "../VehicleFactory.h"
#include "CarpetPlane.h"

class CarpetPlaneFactory : public VehicleFactory {
public:
    Vehicle * createVehicle() override;
};


#endif // LIB_AIR_CARPETPLANEFACTORY_H