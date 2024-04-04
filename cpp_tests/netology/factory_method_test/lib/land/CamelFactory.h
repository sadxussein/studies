#ifndef FACTORY_METHOD_TEST_CAMELFACTORY_H
#define FACTORY_METHOD_TEST_CAMELFACTORY_H


#include "../VehicleFactory.h"
#include "Camel.h"

class CamelFactory : public VehicleFactory {
public:
    Vehicle * FactoryMethod() override;
};


#endif //FACTORY_METHOD_TEST_CAMELFACTORY_H
