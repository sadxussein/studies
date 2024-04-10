#include "Greeter.h"

Greeter::Greeter(std::string name) : name(name) {};

void Greeter::setName(std::string name) {
    this->name = name;
}

std::string Greeter::getName() {
    return this->name;
}
