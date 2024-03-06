#include <iostream>

#include "Calculator.h"

int main() {
    Calculator calculator{};
    double num1, num2;
    bool is_num1_valid, is_num2_valid;

    while (true) {
        do {
            std::cout << "Insert num1: ";
            std::cin >> num1;
            is_num1_valid = calculator.set_num1(num1);
            if (!is_num1_valid) {
                std::cout << "Incorrect input!" << std::endl;
            }
        } while (!is_num1_valid);

        do {
            std::cout << "Insert num2: ";
            std::cin >> num2;
            is_num2_valid = calculator.set_num2(num2);
            if (!is_num2_valid) {
                std::cout << "Incorrect input!" << std::endl;
            }
        } while (!is_num2_valid);

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.substract_1_2() << std::endl;
        std::cout << "num1 - num2 = " << calculator.substract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_2_1() << std::endl;
    }
}
