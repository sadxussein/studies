#include <iostream>
#include <random>

int main() {
    std::cout << "Input separation point: " << std::endl;
    int separation;
    std::cin >> separation;
    std::cout << std::rand() << ' ' << RAND_MAX << std::endl;
    return 0;
}