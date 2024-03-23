#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE undefined
#endif

#if MODE == 1
int add(int a, int b) {
    return a + b;
}
#endif

int main() {
#if MODE == 0
    std::cout << "Working in training mode." << std::endl;
#elif MODE == 1
    std::cout << "Working in operating mode." << std::endl;
    std::cout << "Input a: ";
    int a;
    std::cin >> a;
    std::cout << "Input b: ";
    int b;
    std::cin >> b;
    std::cout << "Result: " << add(a, b) << std::endl;
#else
    std::cout << "Unknown mode. Shutting down." << std::endl;
#endif
    return 0;
}
