#include "CamelFactory.h"

Vehicle *CamelFactory::FactoryMethod() {
    return new Camel();
}
