#include <iostream>

#include "Greeter.h"

int main() {
    std::string name;
    std::cout << "Input name: ";
    std::cin >> name;
    Greeter greeter(name);
    std::cout << "Hello, "<< greeter.getName() << "!" << std::endl;
    system("pause");
    return 0;
}
