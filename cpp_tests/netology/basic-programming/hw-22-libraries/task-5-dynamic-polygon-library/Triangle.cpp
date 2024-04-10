//
// Created by user on 3/11/2024.
//

#include "Triangle.h"

Triangle::Triangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle, double cab_angle) :
        Polygon(3, "Triangle"), ab_len(ab_len), bc_len(bc_len), ca_len(ca_len), abc_angle(abc_angle),
        bca_angle(bca_angle), cab_angle(cab_angle) {
    if ((abc_angle + bca_angle + cab_angle) != 180) {
        isValid = false;
        throw PolygonConstructorException("angle sum is not equal 180 (triangle).");
    }
}

std::string Triangle::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\nSides: ab=" + std::to_string(ab_len) + " bc=" +
           std::to_string(bc_len) + " ca=" + std::to_string(ca_len) + "\nAngles: " + "abc=" +
           std::to_string(abc_angle) + " bca=" + std::to_string(bca_angle) + " cab=" +
           std::to_string(cab_angle) + "\n";
}