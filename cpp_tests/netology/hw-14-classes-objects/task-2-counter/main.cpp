#include <iostream>

#include "Constants.h"
#include "Counter.h"

int main() {
    char input;
    std::cout << "Do you wish to initialize counter by yourself? (y/n): ";
    std::cin >> input;
    bool isInputCorrect;
    int value;
    do {
        if (input == Constants::init_yes) {
            std::cout << "Input initial value of the counter: ";
            std::cin >> value;
            Counter counter(value);
            isInputCorrect = true;
        } else if (input == Constants::init_no) {
            Counter counter;
            isInputCorrect = true;
        } else {
            isInputCorrect = false;
            std::cout << "Input is incorrect. Please type 'y' (yes) of 'n' (no). ";
        }
    } while (!isInputCorrect);

    input = '\0';

    do {
        std::cout << "Input command ('+', '-', '=', or 'x'): ";
        std::cin >> input;
        switch (input) {
            case Constants::increment:
                counter.
            case Constants::decrement:

            case Constants::show:

            case Constants::quit:

            default:

        }
        if (input == Constants::increment) {

        } else if (input == Constants::decrement)
    } while (input != Constants::quit);

    return 0;
}
