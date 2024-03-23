//
// Created by user on 3/11/2024.
//

#include "Rectangle.h"

Rectangle::Rectangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                     double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len, da_len, abc_angle,
                                                                      bcd_angle, cda_angle, dab_angle) {
    name = "Rectangle";
    if (abc_angle != bcd_angle || abc_angle != cda_angle || abc_angle != dab_angle || ab_len != cd_len ||
        bc_len != da_len) {
        isValid = false;
    }
}