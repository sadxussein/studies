//
// Created by user on 3/11/2024.
//

#include "RightTriangle.h"

RightTriangle::RightTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                             double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle, cab_angle) {
    name = "RightTriangle";
    if (bca_angle != 90) {
        isValid = false;
        throw PolygonConstructorException("bca angle is not equal 90 degrees (right triangle).");
    }
}