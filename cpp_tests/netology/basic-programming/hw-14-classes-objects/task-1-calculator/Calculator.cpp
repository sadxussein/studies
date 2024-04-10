//
// Created by xussein on 3/6/2024.
//

#include "Calculator.h"

double Calculator::add() const {
    return this->num1 + this->num2;
}

double Calculator::multiply() const {
    return this->num1 * this->num2;
}

double Calculator::substract_1_2() const {
    return this->num1 - this->num2;
}

double Calculator::substract_2_1() const {
    return this->num2 - this->num1;
}

double Calculator::divide_1_2() const {
    return this->num1 / this->num2;
}

double Calculator::divide_2_1() const {
    return this->num2 / this->num1;
}

bool Calculator::set_num1(double num1) {
    if (num1 == 0) {
        return false;
    } else {
        this->num1 = num1;
        return true;
    }
}

bool Calculator::set_num2(double num2) {
    if (num2 == 0) {
        return false;
    } else {
        this->num2 = num2;
        return true;
    }
}

