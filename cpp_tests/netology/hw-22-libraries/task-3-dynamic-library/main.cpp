#include <iostream>

#include "Leaver.h"

int main() {
    std::string name;
    std::cout << "Input name: ";
    std::cin >> name;
    Leaver Leaver(name);
    std::cout << "Goodbye, "<< Leaver.getName() << "!" << std::endl;
    system("pause");
    return 0;
}
