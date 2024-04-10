//
// Created by user on 3/11/2024.
//

#include "Quadrangle.h"

Quadrangle::Quadrangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                       double cda_angle, double dab_angle) :
        Polygon(4, "Quadrangle"), ab_len(ab_len), bc_len(bc_len), cd_len(cd_len), da_len(da_len),
        abc_angle(abc_angle), bcd_angle(bcd_angle), cda_angle(cda_angle), dab_angle(dab_angle) {
    if (abc_angle + bcd_angle + cda_angle + dab_angle != 360) {
        isValid = false;
    }
}

std::string Quadrangle::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\nSides: ab=" + std::to_string(ab_len) + " bc=" +
           std::to_string(bc_len) + " cd=" + std::to_string(cd_len) + " da=" + std::to_string(da_len) +
           "\nAngles: " + "abc=" + std::to_string(abc_angle) + " bcd=" + std::to_string(bcd_angle) + " cda=" +
           std::to_string(cda_angle) + " dab=" + std::to_string(dab_angle) + "\n";
}