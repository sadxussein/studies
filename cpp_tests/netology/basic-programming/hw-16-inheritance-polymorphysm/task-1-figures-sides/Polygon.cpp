//
// Created by xussein on 3/10/2024.
//

#include "Polygon.h"

Polygon::Polygon(int sides) : sides_number(sides) {};

Polygon::Polygon() : sides_number(0) {};

int Polygon::getSides() const {
    return this->sides_number;
}

Triangle::Triangle() : Polygon(3) {};

Quadrangle::Quadrangle() : Polygon(4) {};