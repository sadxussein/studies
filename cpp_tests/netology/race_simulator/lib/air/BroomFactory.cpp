#include "BroomFactory.h"

Vehicle * BroomFactory::createVehicle() {
    return new Broom();
}
