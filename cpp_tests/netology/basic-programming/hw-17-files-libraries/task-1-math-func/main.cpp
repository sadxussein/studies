#include <iostream>

#include "external_functions.h"

int main() {
    float num1, num2;
    int code;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    do {
        std::cout << "Pick operation (1 - addition, 2 - subtraction, 3 - multiplication , 4 - division, 5 - exponentiation, 6 - quit: ";
        std::cin >> code;
        switch(code) {
            case 1:
                std::cout << "Addition result: " << add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Subtraction result: " << subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Multiplication result: " << multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Division result: " << divide(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "Exponentiation result: " << powr(num1, num2) << std::endl;
                break;
            case 6:
                break;
            default:
                std::cerr << "Unrecognized input." << std::endl;
                break;
        }
    } while(code != 6);

    return 0;
}
