//
// Created by xussein on 3/10/2024.
//

#include "Polygon.h"

#include <utility>

Polygon::Polygon(int sides, std::string name) : sides_number(sides), name(std::move(name)), isValid(true) {}

Polygon::Polygon() : sides_number(0), name("Polygon"), isValid(true) {}

std::string Polygon::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\n";
}

int Polygon::getSidesNumber() const {
    return sides_number;
}