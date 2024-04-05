#include "EagleFactory.h"

Vehicle * EagleFactory::createVehicle() {
    return new Eagle();
}