//
// Created by user on 3/11/2024.
//

#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                                     double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle,
                                                                  cab_angle) {
    name = "IsoscelesTriangle";
    if (bca_angle != cab_angle || ab_len != bc_len) {
        isValid = false;
        throw PolygonConstructorException("either sides ab and bc are not equal or angles bca and cab not equal (isosceles triangle).");
    }
}