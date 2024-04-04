#include <iostream>

#include "lib/land/CamelFactory.h"

int main() {
    VehicleFactory * camelFactory = new CamelFactory();
    camelFactory->CreateVehicle();

    system("pause");
    
    return 0;
}