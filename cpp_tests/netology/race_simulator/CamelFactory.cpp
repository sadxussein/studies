#include "CamelFactory.h"

Vehicle * CamelFactory::createVehicle() {
    return new Camel();
}
