//
// Created by user on 3/11/2024.
//

#include "EquiliteralTriangle.h"

EquiliteralTriangle::EquiliteralTriangle(double ab_len, double bc_len, double ca_len, double abc_angle,
                                         double bca_angle,
                                         double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle,
                                                                      cab_angle) {
    name = "EquiliteralTriangle";
    if (bca_angle != cab_angle || bca_angle != abc_angle || ab_len != bc_len || ab_len != ca_len) {
        isValid = false;
    }
}