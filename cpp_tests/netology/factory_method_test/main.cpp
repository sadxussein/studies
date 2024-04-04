#include <iostream>

#include "Camel.h"

int main() {
    Vehicle * camel = new Camel();
    std::cout << camel->CalculateTravelTime(1000) << std::endl;

    system("pause");
    
    return 0;
}