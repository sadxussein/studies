//
// Created by xussein on 3/6/2024.
//

#include "Counter.h"

Counter::Counter() : num(1) {}

Counter::Counter(int num) {
    this->num = num;
}

void Counter::increment() {
    this->num ++;
}

void Counter::decrement() {
    this->num --;
}

int Counter::show() const {
    return this->num;
}
