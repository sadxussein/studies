#include <iostream>

#include "Constants.h"
#include "Counter.h"

int main() {
    char input;
    std::cout << "Do you wish to initialize counter by yourself? (y/n): ";
    bool isInputCorrect;    
    Counter counter;
    do {
        std::cin >> input;
        if (input == Constants::init_yes) {
            std::cout << "Input initial value of the counter: ";
            int value;
            std::cin >> value;
            counter = Counter(value);
            isInputCorrect = true;
        } else if (input == Constants::init_no) {
            counter = Counter();
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
                counter.increment();
                break;
            case Constants::decrement:
                counter.decrement();
                break;
            case Constants::show:
                std::cout << counter.show() << std::endl;
                break;
            case Constants::quit:
                break;
            default:
                std::cout << "Input unrecognized. Please, try again." << std::endl;
                break;
        }
    } while (input != Constants::quit);

    return 0;
}
