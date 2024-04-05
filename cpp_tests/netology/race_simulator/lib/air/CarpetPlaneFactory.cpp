#include "CarpetPlaneFactory.h"

Vehicle * CarpetPlaneFactory::createVehicle() {
    return new CarpetPlane();
}