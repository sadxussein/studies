#include "Leaver.h"

Leaver::Leaver(std::string name) : name(name) {};

void Leaver::setName(std::string name) {
    this->name = name;
}

std::string Leaver::getName() {
    return this->name;
}
