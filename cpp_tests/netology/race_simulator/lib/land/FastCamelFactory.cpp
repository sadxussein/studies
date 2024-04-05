#include "FastCamelFactory.h"

Vehicle *FastCamelFactory::createVehicle() {
    return new FastCamel();
}
