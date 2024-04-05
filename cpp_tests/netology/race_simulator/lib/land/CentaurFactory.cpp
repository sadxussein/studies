#include "CentaurFactory.h"

Vehicle *CentaurFactory::createVehicle() {
    return new Centaur();
}
