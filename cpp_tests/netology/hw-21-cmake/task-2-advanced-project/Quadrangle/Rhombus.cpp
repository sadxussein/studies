//
// Created by user on 3/11/2024.
//

#include "Rhombus.h"

Rhombus::Rhombus(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                 double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len, da_len, abc_angle, bcd_angle,
                                                                  cda_angle, dab_angle) {
    name = "Rhombus";
    if (ab_len != bc_len || ab_len != cd_len || ab_len != da_len) {
        isValid = false;
        throw PolygonConstructorException("either sides are not pairwise equal or angles are not pairwise equal (rhombus).");
    }
}